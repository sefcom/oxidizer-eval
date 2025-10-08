long long fish::builtins::path::path_extension(unsigned long long a0, struct_0 *a1, unsigned long a2, unsigned long a3)
{
    void* v0;  // [bp-0x180]
    void* v1;  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    unsigned long long v3;  // [bp-0x168]
    int v4;  // [bp-0x160]
    unsigned int v5;  // [bp-0x150]
    unsigned int v6;  // [bp-0x148]
    void* v7;  // [bp-0x140]
    void* v8;  // [bp-0x130]
    int v9;  // [bp-0x120]
    char v10;  // [bp-0x11f]
    int v11;  // [bp-0x11e]
    char v12;  // [bp-0x110]
    int v13;  // [bp-0x108]
    int v14;  // [bp-0xf8]
    int v15;  // [bp-0xe8]
    char v16;  // [bp-0xd8]
    int v17;  // [bp-0xc8]
    char v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xa8]
    int v20;  // [bp-0x98], Other Possible Types: char
    int v21;  // [bp-0x88]
    int v22;  // [bp-0x78]
    char v23;  // [bp-0x68]
    int v24;  // [bp-0x58]
    char v25;  // [bp-0x48]
    char v26;  // [bp-0x38]
    unsigned long long v28;  // rbx
    char v29;  // al
    unsigned long long v30;  // rcx
    unsigned long v31;  // cc_ndep
    unsigned long long v32;  // cc_ndep
    unsigned long long v33;  // rax
    char v34;  // cl
    unsigned long long v35;  // cc_op
    unsigned long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // rdx
    unsigned int v39;  // eax

    v28 = 0x200000000;
    v7 = 0;
    v5 = 0;
    v6 = 0;
    v8 = 0;
    *((uint128_t *)&v9) = 0;
    v12 = 0;
    v1 = 0;
    v0 = 0;
    v29 = fish::builtins::path::parse_opts(&v5, &v1, 0, a2, a3, a0, a1);
    v30 = 1;
    if (!(v29 & 1))
    {
        v20.new(a2, a3, &v1, a1, 0x1000);
        v32 = _ccall(17, (unsigned long long)(v29 & 1), 0, v31);
        v26 = (char)v9 + 1;
        v19 = *((long long *)&v26);
        memcpy(&v18, &v25, 16);
        v17 = v24;
        memcpy(&v16, &v23, 16);
        v15 = v22;
        v14 = v21;
        v13 = v20;
        while (true)
        {
            v2.next(&v13);
            if (v2 != 9223372036854775809)
            {
                if (!((char)fish::builtins::path::find_extension(v3, (long long)v4) & 1))
                {
                    fish::builtins::path::path_out(a1->field_8, v10, (char)v11, 4, 0);
                }
                else
                {
                    v33 = v3.slice_from((long long)v4, a2);
                    v34 = (char)v11;
                    v35 = 5;
                    v36 = v34;
                    v37 = 1;
                    if (v34 == 1)
                    {
                        v35 = 20;
                        v36 = v38;
                        v37 = 0;
                        if (v38)
                        {
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
                            core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v13);
                            v30 = 0;
                            v28 = 0x200000000;
                            break;
                        }
                    }
                    fish::builtins::path::path_out(a1->field_8, v10, v34, v33, v38);
                    v39 = (unsigned int)v0;
                    v0 = v39 + 1;
                    v32 = _ccall(v35, v36, v37, v32);
                    if ((char)_ccall(0, 23, (unsigned long long)(v39 + 1), 0, _ccall(v35, v36, v37, v32)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14cb1a0); /* do not return */
                }
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v2);
            }
            else
            {
                core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v13);
                v30 = (int)v0 <= 0;
                v28 = 0x100000000;
                break;
            }
        }
    }
    return v28 | v30;
}
