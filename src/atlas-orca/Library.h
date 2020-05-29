/*
 * (C) Copyright 1996- ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 *
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.
 */


#ifndef atlas_orca_Library_h
#define atlas_orca_Library_h

#include "eckit/system/Library.h"


namespace atlas {
namespace orca {


class Library : public eckit::system::Library {
public:
    Library();
    static const Library& instance();

private:
    const void* addr() const;
    virtual std::string version() const;
    virtual std::string gitsha1( unsigned int count ) const;
};


}  // namespace orca
}  // namespace atlas


#endif