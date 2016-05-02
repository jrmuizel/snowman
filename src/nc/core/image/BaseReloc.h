/* The file is part of Snowman decompiler. */
/* See doc/licenses.asciidoc for the licensing information. */

#pragma once

#include <nc/config.h>

#include <cassert>

#include <nc/common/Types.h>

namespace nc {
namespace core {
namespace image {

/**
 * Information about a single base relocation.
 */
class BaseReloc {
    ByteAddr address_; ///< Virtual address to be patched.
    ByteSize size_; ///< Size of relocation

public:

    /**
     * Constructor.
     *
     * \param address Virtual address to be patched.
     * \param addend Size of relocation
     */
    BaseReloc(ByteAddr address, ByteSize size):
        address_(address), size_(size)
    {
    }

    /**
     * \return Virtual address to be patched.
     */
    ByteAddr address() const { return address_; }

    /**
     * \return Displacement to add to the symbol's address.
     */
    ByteSize size() const { return size_; }
};

} // namespace image
} // namespace core
} // namespace nc

/* vim:set et sts=4 sw=4: */
