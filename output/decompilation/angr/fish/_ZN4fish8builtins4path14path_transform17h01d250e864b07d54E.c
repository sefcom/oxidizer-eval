long long fish::builtins::path::path_transform(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [bp-0x1b0]
    void* v1;  // [bp-0x1a8]
    unsigned long long v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x198]
    unsigned long long v4;  // [bp-0x190]
    unsigned long long v5;  // [bp-0x188]
    unsigned long long v6;  // [bp-0x188]
    unsigned long long v7;  // [bp-0x180]
    unsigned long v8;  // [bp-0x178]
    unsigned long long v9;  // [bp-0x170]
    unsigned long long v10;  // [bp-0x168]
    int v11;  // [bp-0x160]
    unsigned int v12;  // [bp-0x150]
    unsigned int v13;  // [bp-0x148]
    void* v14;  // [bp-0x140]
    void* v15;  // [bp-0x130]
    int v16;  // [bp-0x120]
    char v17;  // [bp-0x11f]
    int v18;  // [bp-0x11e]
    unsigned short v19;  // [bp-0x112]
    char v20;  // [bp-0x110]
    int v21;  // [bp-0x108]
    int v22;  // [bp-0xf8]
    int v23;  // [bp-0xe8]
    char v24;  // [bp-0xd8]
    int v25;  // [bp-0xc8]
    char v26;  // [bp-0xb8]
    unsigned long long v27;  // [bp-0xa8]
    int v28;  // [bp-0x98], Other Possible Types: char
    int v29;  // [bp-0x88]
    int v30;  // [bp-0x78]
    char v31;  // [bp-0x68]
    int v32;  // [bp-0x58]
    char v33;  // [bp-0x48]
    char v34;  // [bp-0x38]
    unsigned long long v36;  // rbx
    void* v37;  // r13
    char v38;  // al
    unsigned long long v39;  // rcx
    unsigned long v40;  // cc_ndep
    unsigned long long v41;  // rbp
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rsi
    unsigned long long v45;  // rdx
    char v46;  // al
    unsigned long v47;  // cc_dep1
    unsigned long v48;  // rax
    unsigned long long v49;  // cc_ndep
    unsigned int v50;  // r13d
    unsigned long long v51;  // cc_ndep

    v36 = 0x200000000;
    v14 = 0;
    v12 = 0;
    v13 = 0;
    v15 = 0;
    *((uint128_t *)&v16) = 0;
    v20 = 0;
    v1 = 0;
    v37 = 0;
    v38 = fish::builtins::path::parse_opts(&v12, &v1, 0, a2, a3, a0, a1);
    v39 = 1;
    if (!(v38 & 1))
    {
        v28.new(a2, a3, &v1, a1, 0x1000);
        v49 = _ccall(17, (unsigned long long)(v38 & 1), 0, v40);
        v34 = (char)v16 + 1;
        v27 = *((long long *)&v34);
        memcpy(&v26, &v33, 16);
        v25 = v32;
        memcpy(&v24, &v31, 16);
        v23 = v30;
        v22 = v29;
        v21 = v28;
        v8 = a1->field_8;
        while (true)
        {
            v9.next(&v21);
            if (v9 != 9223372036854775809)
            {
                v41 = (long long)v11;
                if (v41)
                {
                    v0 = v37;
                    v7 = v10;
                    v2.call(v10, v41);
                    v42 = v4;
                    v6 = v5;
                    v43 = v42;
                    if ((char)v19)
                    {
                        v5 = v3;
                        v6 = v5;
                        v43 = v42;
                        if ((v45 <= v43 & (char)fish::builtins::path::find_extension(v6, v42)) == 1)
                        {
                            v4 = v45;
                            v43 = v45;
                            v6 = v5;
                        }
                    }
                    v46 = v6.eq(v43, v7, v41);
                    v47 = v46;
                    if (v46)
                    {
                        v48 = (char)v18;
                        v37 = v0;
                    }
                    else
                    {
                        v50 = (unsigned int)v0;
                        v51 = _ccall(17, v47, 0, v49);
                        v37 = v50 + 1;
                        if ((char)_ccall(0, 23, (unsigned long long)(v50 + 1), 0, _ccall(17, v47, 0, v49)))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14cb128); /* do not return */
                        v48 = (char)v18;
                        v49 = v51;
                        if ((char)v48)
                        {
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                            core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v21);
                            v39 = 0;
                            v36 = 0x200000000;
                            break;
                        }
                    }
                    fish::builtins::path::path_out(v8, v17, v48 & 4294967295, &v2);
                }
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
            }
            else
            {
                core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v21);
                v39 = (unsigned int)v37 <= 0;
                v36 = 0x100000000;
                break;
            }
        }
    }
    return v36 | v39;
}
