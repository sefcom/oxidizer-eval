long long uu_test::parser::Parser::parse::h62d2f3734d3e0546(struct_0 *a0, struct_1 *a1, unsigned int a2)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x80]
    char v2;  // [bp-0x78], Other Possible Types: unsigned long long
    char v3;  // [sp-0x70]
    int v4;  // [sp-0x68]
    unsigned long long v5;  // [sp-0x58]
    char v6;  // [bp-0x48], Other Possible Types: unsigned long
    int v7;  // [sp-0x40]
    char v8;  // [bp-0x30]
    char v9;  // [bp-0x20]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    int v13;  // xmm0

    v11 = uu_test::parser::Parser::expr::h84cd6a4d92f052b4(&v0, a1, a2);
    if (*((int *)&v0) != 7)
    {
        v13 = *((int128_t *)&v0);
        a0->field_8 = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v13;
        return v11;
    }
    v12 = a1->field_18;
    a1->field_18 = 9223372036854775809;
    if (v11 != 9223372036854775809)
    {
        *((uint128_t *)&v7) = a1->field_20;
        v11 = v12;
    }
    else
    {
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h377d015ce161c580(&v6, a1 + 1);
    }
    if (v11 == 0x8000000000000000)
    {
        a0->field_0 = 7;
        return v11;
    }
    v5 = (long long)(&v7)[8];
    *((int128_t *)&v4) = *((int128_t *)&v6);
    v0 = 1;
    v1 = (long long)(&v4)[8];
    v2 = v5;
    v3 = 1;
    ::0x4ade40::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h829e72ccc316968e(&v8, &v0);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v9);
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v8);
    a0->field_0 = 2;
    v11 = ::0x4ae090::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5f29ab9455888442(&v4);
    return v11;
}
