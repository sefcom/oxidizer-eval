long long uu_test::parser::Parser::boolop(struct_1 *a0, unsigned long long a1, struct_0 *a2)
{
    int v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x58]
    char v2;  // [bp-0x50]
    int v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x20]
    int v9;  // xmm0
    unsigned long long v10;  // rax

    v6.to_owned("-a-o===!=<>-eq-ge-gt-le-lt-ne-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-p-r-s-S-t-u-w-xsrc/uu/test/src/parser.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 2);
    v4 = *((long long *)&v7);
    memcpy(&v2, &v6, 16);
    v1 = 2;
    if ((char)a2.eq(&v1))
    {
        ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v1);
        v1.term(a1);
    }
    else
    {
        ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v1);
        v1.expr(a1);
    }
    if ((int)v1 != 7)
    {
        a0->field_10 = (int128_t)v3;
        *((void*)&a0->field_0) = v0;
        return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(a2);
    }
    v5 = a2->field_20;
    v9 = a2->field_0;
    *((uint128_t *)&v3) = a2->field_10;
    v0 = v9;
    v10 = a1.push(&v0, &g_56ed20);
    *((unsigned long long *)&a0->field_0) = 7;
    return v10;
}
