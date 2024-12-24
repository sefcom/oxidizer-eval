long long uu_test::parser::parse::hebc23f44016fee50(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    unsigned int v6;  // edx
    int v7;  // xmm0

    uu_test::parser::Parser::new::hd48fd0ab1acfea11(&v2, a1);
    uu_test::parser::Parser::parse::h62d2f3734d3e0546(&v0, &v2, v6);
    if (*((int *)&v0) != 7)
    {
        v7 = *((int128_t *)&v0);
        a0->field_8 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v7;
        core::ptr::drop_in_place$LT$uu_test..parser..Parser$GT$::hc85e473957d212d7(&v2);
        return a0;
    }
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v3);
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = 7;
    ::0x4adf70::core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::hc63e4759573870fa(&v4);
    return a0;
}
