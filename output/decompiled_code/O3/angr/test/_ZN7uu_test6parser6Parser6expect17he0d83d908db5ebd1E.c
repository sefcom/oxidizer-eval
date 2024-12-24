long long uu_test::parser::Parser::expect::he0d83d908db5ebd1(struct_0 *a0, void* a1)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    int v4;  // [bp-0x48], Other Possible Types: void*
    unsigned long long v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    char v7;  // [sp-0x30]
    char v8;  // [bp-0x28]
    char v9;  // [bp-0x18]
    unsigned long long v11;  // rax

    uu_test::parser::Parser::next_token::h6f84863b823a4061(&v0, a1);
    if (*((int *)&v0) != 3 || !(char)::0x4ae5e0::_$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::ha08c54788d123b03(*((long long *)&v2), *((long long *)&v3)))
    {
        v4 = 0;
        v5 = ")";
        v6 = 1;
        v7 = 1;
        ::0x4ade40::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h829e72ccc316968e(&v8, &v4);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v9);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v8);
        a0->field_0 = 1;
        if (*((int *)&v0) == 3)
        {
            v11 = ::0x4ae090::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5f29ab9455888442(&v1);
            return v11;
        }
    }
    else
    {
        v6 = *((long long *)&v3);
        *((int128_t *)&v4) = *((int128_t *)&v1);
        a0->field_0 = 7;
        v11 = ::0x4ae090::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5f29ab9455888442(&v4);
        if (*((int *)&v0) == 3)
            return v11;
    }
    v11 = ::0x4ae000::core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h83d505a150af3249(&v0);
    return v11;
}
