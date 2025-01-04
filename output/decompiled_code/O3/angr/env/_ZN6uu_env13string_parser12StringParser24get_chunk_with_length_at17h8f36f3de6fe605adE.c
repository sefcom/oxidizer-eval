long long uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(struct_0 *a0, unsigned long long a1[5], unsigned long long a2)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    int v3;  // [sp-0x60]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char *v9;  // r14
    char *v10;  // r15
    unsigned int v11;  // eax
    unsigned long long v12;  // rax
    char *v13;  // r12
    char *v14;  // r12
    char v15;  // dl
    unsigned long v17;  // rdx

    if (a1[1] < a2)
    {
        v0 = &g_548e80;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::ha4016ee41c394a20(&v4, a1[0], a1[1], a2);
    v9 = *((long long *)&v6);
    if (!v9)
    {
        a0->field_8 = a1[4];
        a0->field_10 = 0;
        v12 = 1;
    }
    else
    {
        v10 = *((long long *)&v5);
        v11 = uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*(v10));
        if (v11 != 0x110000)
        {
            a0->field_8 = 0;
            *((unsigned int *)&a0->field_10) = v11;
            a0->padding_11[3] = v15;
            a0->field_18 = 1;
        }
        else
        {
            v13 = 1;
            v14 = 1;
            if (v9 != 1)
            {
                while (true)
                {
                    v14 = v13;
                    if ((int)uu_env::native_int_str::get_char_from_native_int::hd9478fe3e880cfe1(*((char *)(v10 + v13))) != 0x110000)
                        break;
                    v13 += 1;
                    if (v9 == v13)
                    {
                        v14 = v9;
                        break;
                    }
                }
            }
            a0->field_8 = ::0x4d56e0::_$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hd44f9eb63a52136c(v14, v10, v9);
            *((unsigned long *)&a0->field_10) = v17;
            a0->field_18 = v17;
        }
        v12 = 0;
    }
    a0->field_0 = v12;
    return v12;
}
