long long fish::builtins::math::math(unsigned long long a0, unsigned long long a1[3], unsigned long long a2[2], unsigned long a3)
{
    void* v0;  // [bp-0x180]
    unsigned long long v1;  // [bp-0x178]
    void* v2;  // [bp-0x170]
    unsigned long v3;  // [bp-0x168]
    unsigned long v4;  // [bp-0x160]
    void* v5;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x150]
    void* v7;  // [bp-0x148], Other Possible Types: unsigned long long
    int v8;  // [bp-0x138], Other Possible Types: char
    char v9;  // [bp-0x138]
    char v10;  // [bp-0x134]
    unsigned long v11;  // [bp-0x130]
    char v12;  // [bp-0x12f]
    int v13;  // [bp-0x128], Other Possible Types: void*, unsigned long
    char v14;  // [bp-0x127]
    unsigned int v15;  // [bp-0x126]
    unsigned short v16;  // [bp-0x122]
    unsigned long long v17;  // [bp-0x120]
    int v18;  // [bp-0x118], Other Possible Types: unsigned short
    unsigned long long v19;  // [bp-0x110]
    char v20;  // [bp-0x108]
    int v21;  // [bp-0xf8], Other Possible Types: unsigned short
    void* v22;  // [bp-0xf0]
    char v23;  // [bp-0xe8]
    unsigned long long v24;  // [bp-0xd8]
    unsigned int v25;  // [bp-0xc8]
    unsigned long long v26;  // [bp-0xc4]
    unsigned long long v27;  // [bp-0xbf]
    char v28;  // [bp-0xb7]
    unsigned int v29;  // [bp-0xb6]
    unsigned short v30;  // [bp-0xb2]
    unsigned long long v31;  // [bp-0xb0]
    char v32;  // [bp-0xa8]
    int v33;  // [bp-0x98], Other Possible Types: char
    int v34;  // [bp-0x88]
    int v35;  // [bp-0x78]
    char v36;  // [bp-0x68]
    int v37;  // [bp-0x58]
    char v38;  // [bp-0x48]
    char v39;  // [bp-0x38]
    unsigned long v41;  // r15
    unsigned long v42;  // rbx
    unsigned int v43;  // r14d
    unsigned long long v44;  // r14
    unsigned int v45;  // ebx
    unsigned long long v46;  // r15
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14cadf8); /* do not return */
    v41 = a2[0];
    v42 = a2[1];
    fish::builtins::math::parse_cmd_opts(&v8, a2, a3, a0, a1);
    v43 = *((int *)&v8);
    if (v14 == 2)
    {
        v44 = v25 * 0x100000000;
        v45 = 1;
    }
    else
    {
        v27 = *((long long *)&v12);
        v26 = *((long long *)&v10);
        v29 = v15;
        v30 = v16;
        v25 = v43;
        v28 = v14;
        v31 = v17;
        if ((v14 & 1))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v41, v42);
            v45 = 0;
            goto LABEL_135a947;
        }
        else
        {
            v3 = v41;
            v4 = v42;
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v33.new(a2, a3, &v31, a1, 0x400);
            v24 = *((long long *)&v39);
            memcpy(&v23, &v38, 16);
            v21 = v37;
            memcpy(&v20, &v36, 16);
            v18 = v35;
            v13 = v34;
            v8 = v33;
            while (true)
            {
                v5.next(&v8);
                if (v5 == 9223372036854775809)
                    break;
                if (v2)
                    v0.push(32);
                v0.spec_extend(v6, v6 + v7 * 4);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
            }
            core::ptr::drop_in_place<fish::builtins::shared::Arguments>(&v8);
            if (v2)
            {
                v45 = fish::builtins::math::evaluate_expression(v3, v4, a1[1], a1[2], &v25, 4, v2);
                v44 = 0x100000000;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            }
            else
            {
                v46 = a1[2];
                v5 = 0;
                v6 = 4;
                v7 = 0;
                v47 = g_14c7390[0].localize();
                v9 = 1;
                v11 = v3;
                v13 = v4;
                v18 = 8197;
                v19 = 1;
                v21 = 8197;
                v22 = 0;
                fish_printf::printf_impl::sprintf_locale(&v32, &v5, v47, v48, ".", &v9, 3);
                v32.unwrap(&g_14cae10);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v9);
                memcpy(&v9, &v5, 16);
                v13 = 0;
                v46.append(&v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v45 = 1;
LABEL_135a947:
                v44 = 0x100000000;
            }
        }
    }
    return v45 | v44;
}
