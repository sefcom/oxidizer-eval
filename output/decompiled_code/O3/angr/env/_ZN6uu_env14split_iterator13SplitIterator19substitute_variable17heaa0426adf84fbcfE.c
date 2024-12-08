long long uu_env::split_iterator::SplitIterator::substitute_variable::heaa0426adf84fbcf(struct_0 *a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x6c]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    struct_0 *v5;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x40]
    int v7;  // [sp-0x38]
    unsigned long long v9;  // rax
    unsigned long long v10;  // r15
    unsigned long v12;  // rdx
    unsigned int v13;  // ecx
    int v14;  // xmm0
    int v15;  // xmm1

    v5 = a1 + 24;
    uu_env::variable_parser::VariableParser::parse_variable::he6234105f7b27747(&v0, &v5, a2);
    v9 = *((int *)&v0);
    if ((unsigned int)v9 != 8)
    {
        v13 = *((int *)&v1);
        v14 = *((int128_t *)&v2);
        v15 = *((int128_t *)&v3);
        *((unsigned int *)&a0->padding_0[0]) = v9;
        *((unsigned int *)&a0->padding_0[4]) = v13;
        *((void*)&a0->padding_0[8]) = v14;
        *((void*)&a0->padding_0[24]) = v15;
        return v9;
    }
    v10 = *((long long *)&v3);
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v6 = 0x8000000000000000;
    std::env::var_os::h3556f8a6d60e4b09(&v0, &v6, v12);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        uu_env::string_expander::StringExpander::put_string::h60e83af58a82ccbe(a1, &v0, v12);
    }
    else if (v10)
    {
        uu_env::string_expander::StringExpander::put_native_string::hc4d32c8d1be19950(a1, v10, *((long long *)&v4));
    }
    *((int *)&a0->padding_0[0]) = 8;
    v9 = ::0x4d9580::core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h2c5a20f63df741cf(&v0);
    return v9;
}
