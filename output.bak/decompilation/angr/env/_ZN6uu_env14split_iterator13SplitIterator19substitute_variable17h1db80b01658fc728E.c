long long uu_env::split_iterator::SplitIterator::substitute_variable::h1db80b01658fc728(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x6c]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    struct_1 *v5;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x40]
    int v7;  // [sp-0x38]
    unsigned long long v9;  // rax
    unsigned long long v10;  // r15
    unsigned int v12;  // ecx
    int v13;  // xmm0
    int v14;  // xmm1

    v5 = a1 + 24;
    uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(&v0, &v5);
    v9 = *((int *)&v0);
    if ((unsigned int)v9 != 8)
    {
        v12 = *((int *)&v1);
        v13 = *((int128_t *)&v2);
        v14 = *((int128_t *)&v3);
        a0->field_0 = v9;
        a0->field_4 = v12;
        *((void*)&(&a0->field_4)[1]) = v13;
        *((void*)((char *)&a0->field_8 + 8)) = v14;
        return v9;
    }
    v10 = *((long long *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v6 = 0x8000000000000000;
    std::env::var_os::h9e209a112117a791(&v0, &v6);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        uu_env::string_expander::StringExpander::put_string::h88bd9b4cfb26db83(a1, &v0);
    }
    else if (v10)
    {
        uu_env::string_expander::StringExpander::put_native_string::h4ed77b672753a87e(a1, v10, *((long long *)&v4));
    }
    a0->field_0 = 8;
    v9 = ::0x4d94b0::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h424bf7a51d52b228(&v0);
    return v9;
}
