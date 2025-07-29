long long uu_test::parser::Symbol::new(struct_0 *a0, struct_1 *a1)
{
    int v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char v5;  // [bp-0x28]
    unsigned long long v7;  // r15

    if ((char)(((0 ^ *((long long *)&a1->field_0)) & (0 ^ -(*((long long *)&a1->field_0)))) >> 63))
    {
        a0->field_0 = 6;
        return a0;
    }
    *((int128_t *)&v0) = *((int128_t *)&a1->field_0);
    v2 = a1->field_10;
    v3.try_from(v1, a1->field_10);
    if (*((int *)&v3) != 1)
    {
        v7 = *((long long *)&v5);
        if ((char)v4.equal(v7, "(!-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1))
        {
            a0->field_0 = 0;
            ::0x49abf0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v0);
            return a0;
        }
        else if ((char)v4.equal(v7, "!-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1))
        {
            a0->field_0 = 1;
            ::0x49abf0::core::ptr::drop_in_place<std::ffi::os_str::OsString>(&(char)v0);
            return a0;
        }
        else if ((char)v4.equal(v7, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2) || (char)v4.equal(v7, "-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2))
        {
            a0->field_10[1] = v2;
            *((int128_t *)&a0->field_8) = (int128_t)v0;
            a0->field_0 = 2;
            return a0;
        }
        else if ((char)v4.equal(v7, "===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1) || (char)v4.equal(v7, "==!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2) || (char)v4.equal(v7, "!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2) || (char)v4.equal(v7, "<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1) || (char)v4.equal(v7, ">-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 1))
        {
            a0->field_20 = v2;
            *((int128_t *)&a0->field_10[0]) = (int128_t)v0;
            *((unsigned long long *)&a0->field_8) = 0;
            a0->field_0 = 4;
            return a0;
        }
        else if ((char)v4.equal(v7, "-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3))
        {
            a0->field_20 = v2;
            *((int128_t *)&a0->field_10[0]) = (int128_t)v0;
            *((unsigned long long *)&a0->field_8) = 1;
            a0->field_0 = 4;
            return a0;
        }
        else if ((char)v4.equal(v7, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3) || (char)v4.equal(v7, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 3))
        {
            a0->field_20 = v2;
            *((int128_t *)&a0->field_10[0]) = (int128_t)v0;
            *((unsigned long long *)&a0->field_8) = 2;
            a0->field_0 = 4;
            return a0;
        }
        else if ((char)v4.equal(v7, "-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2) || (char)v4.equal(v7, "-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2))
        {
            a0->field_20 = v2;
            *((int128_t *)&a0->field_10[0]) = (int128_t)v0;
            *((unsigned long long *)&a0->field_8) = 0;
            a0->field_0 = 5;
            return a0;
        }
        else if (...)
        {
            a0->field_20 = v2;
            *((int128_t *)&a0->field_10[0]) = (int128_t)v0;
            *((unsigned long long *)&a0->field_8) = 1;
            a0->field_0 = 5;
            return a0;
        }
    }
    a0->field_10[1] = v2;
    *((int128_t *)&a0->field_8) = (int128_t)v0;
    a0->field_0 = 3;
    return a0;
}
