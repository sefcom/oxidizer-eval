long long fish::builtins::path::path_mtime(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x1d8]
    unsigned long v1;  // [bp-0x1d0]
    void* v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    unsigned int v4;  // [bp-0x1b8]
    unsigned int v5;  // [bp-0x1b0]
    void* v6;  // [bp-0x1a8]
    void* v7;  // [bp-0x198]
    int v8;  // [bp-0x188]
    char v9;  // [bp-0x187]
    int v10;  // [bp-0x186]
    char v11;  // [bp-0x183]
    int v12;  // [bp-0x182]
    char v13;  // [bp-0x178]
    unsigned long long v14;  // [bp-0x170]
    unsigned long long v15;  // [bp-0x168]
    int v16;  // [bp-0x160]
    int v17;  // [bp-0x150]
    int v18;  // [bp-0x138], Other Possible Types: char
    unsigned long long v19;  // [bp-0x130]
    int v20;  // [bp-0x128]
    int v21;  // [bp-0x118]
    char v22;  // [bp-0x108]
    int v23;  // [bp-0xf8]
    char v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xd8]
    unsigned long long v26;  // [bp-0xd0]
    unsigned int v27;  // [bp-0xc8]
    int v28;  // [bp-0xa8]
    int v29;  // [bp-0x98], Other Possible Types: char
    int v30;  // [bp-0x88]
    int v31;  // [bp-0x78]
    char v32;  // [bp-0x68]
    int v33;  // [bp-0x58]
    char v34;  // [bp-0x48]
    char v35;  // [bp-0x38]
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rcx
    unsigned int v39;  // edx
    unsigned int v40;  // ebx
    unsigned long long v41;  // rax
    unsigned int v42;  // ebx
    unsigned long long v43;  // 4098

    v37 = 0x200000000;
    v6 = 0;
    v4 = 0;
    v5 = 0;
    v7 = 0;
    *((uint128_t *)&v8) = 0;
    v13 = 0;
    v11 = 1;
    v2 = 0;
    v38 = 1;
    if (!((char)fish::builtins::path::parse_opts(&v4, &v2, 0, a2, a3, a0, a1) & 1))
    {
        v26 = std::time::SystemTime::now();
        v27 = v39;
        v40 = 0;
        v18.duration_since(&v26, 0, 0);
        v41 = v19;
        if (*((int *)&v18) == 1)
        {
            if (v41 != 0x8000000000000000)
                v41 = -(v41);
            else
                core::panicking::panic_const::panic_const_neg_overflow(&g_14cb140); /* do not return */
        }
        v0 = v41;
        v29.new(a2, a3, &v2, a1, 0x1000);
        v35 = (char)v8 + 1;
        v25 = *((long long *)&v35);
        memcpy(&v24, &v34, 16);
        v23 = v33;
        memcpy(&v22, &v32, 16);
        v21 = v31;
        v20 = v30;
        v18 = v29;
        v1 = a1->field_8;
        while (true)
        {
            v14.next(&v18);
            if (v14 != 9223372036854775809)
            {
                fish::wutil::fileid::file_id_for_path(&v26, v15, (long long)v16);
                v40 = v40;
                if (!v26.eq(&g_9f9ad0))
                {
                    if (!(char)v10)
                    {
                        v42 = v40 + 1;
                        if ((char)_ccall(0, 23, (unsigned long long)(v40 + 1), 0, (unsigned long long)(char)((char)v10 < 0)))
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14cb158); /* do not return */
                        }
                        else if ((char)v12)
                        {
                            v43 = (long long)v28;
                            if ((char)(((v0 ^ v43) & (v0 ^ v0 - v43)) >> 63))
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb170); /* do not return */
                            v3 = v0 - v43;
                            v17.to_wstring(&v3);
                            fish::builtins::path::path_out(v1, v9, (char)v10, &v17);
                            v40 = v42;
                        }
                        else
                        {
                            v17.to_wstring(&v28);
                            fish::builtins::path::path_out(v1, v9, (char)v10, &v17);
                            v40 = v42;
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
                        core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v18);
                        v38 = 0;
                        v37 = 0x200000000;
                        break;
                    }
                }
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v14);
            }
            else
            {
                core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v18);
                v38 = v40 <= 0;
                v37 = 0x100000000;
                break;
            }
        }
    }
    return v37 | v38;
}
