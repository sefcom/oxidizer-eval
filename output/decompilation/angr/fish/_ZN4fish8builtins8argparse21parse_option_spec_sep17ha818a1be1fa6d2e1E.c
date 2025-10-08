long long fish::builtins::argparse::parse_option_spec_sep(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[2], unsigned long a5, unsigned long long a6)
{
    unsigned long long v0[3];  // [bp-0x110]
    unsigned long long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    void* v3;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v4;  // [bp-0xe8]
    void* v5;  // [bp-0xe0]
    void* v6;  // [bp-0xd8], Other Possible Types: char
    int v7;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v8;  // [bp-0xc8]
    char v9;  // [bp-0xa8]
    int v10;  // [bp-0xa8]
    int v11;  // [bp-0xa0]
    void* v12;  // [bp-0x98], Other Possible Types: char
    int v13;  // [bp-0x88], Other Possible Types: char
    unsigned long v14;  // [bp-0x80]
    int v15;  // [bp-0x78]
    char v16;  // [bp-0x68]
    unsigned long v17;  // [bp-0x60]
    unsigned long long v18[2];  // [bp-0x48]
    unsigned long v19;  // [bp-0x40]
    unsigned int *v20;  // [bp-0x38]
    unsigned long long v21;  // [bp-0x20]
    unsigned long long v22;  // [bp-0x18]
    unsigned long long v23;  // r14
    unsigned long long v24;  // r13
    unsigned long long v25;  // r14
    unsigned long v26;  // r13
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    struct_1 *v29;  // r12
    unsigned int v30;  // eax
    unsigned int v31;  // ecx
    unsigned long v32;  // rbx
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned int v37;  // eax
    int v38;  // xmm1
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned int v41;  // eax
    int v42;  // xmm1
    unsigned long long v43;  // rdx
    struct_1 *v45;  // r12
    unsigned long v46;  // rbx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned int v52;  // eax
    unsigned int v53;  // eax
    unsigned int v54;  // esi
    char v55;  // dl
    unsigned long long v56;  // rax

    v22 = v23;
    v21 = v24;
    v25 = a4[0];
    v26 = a4[1];
    *(v18) = v25;
    v19 = v26;
    v27 = v25.char_at(v26, 0);
    v28 = v25.char_at(v26, 1);
    if (v27 == 35)
    {
        v29 = a0;
        if (v28 != 45)
        {
            v30 = *(v20);
            v31 = (v30 ^ 0xd800) - 0x110000;
            if (v31 < -0x10f800)
                core::option::unwrap_failed(&g_14c6a28); /* do not return */
            a1->field_40 = v30;
            if ((char)_ccall(4, 23, (unsigned long long)(v30 + 1), 0, (unsigned long long)(char)(v31 < -0x10f800)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c6a40); /* do not return */
            *(v20) = v30 + 1;
        }
        v32 = *((int *)&v29->padding_18[200]);
        if (v32)
        {
            v6 = 0;
            v7 = 4;
            v8 = 0;
            v1 = "%";
            v2 = 45;
            *(v0) = 0x8000000000000000;
            v33 = v0.localize();
            v9 = 1;
            *((int128_t *)&v11) = *((int128_t *)&(&v29->padding_0)[1]);
            v13 = 4;
            v14 = v32;
            fish_printf::printf_impl::sprintf_locale(&v3, &v6, v33, v34, ".", &v9, 2, 0x8000000000000000);
            v3.unwrap(&g_14c6a58);
            goto LABEL_133896a;
        }
        else
        {
            *((unsigned int *)&v29->padding_18[200]) = a1->field_40;
            a1->field_44 = 0;
        }
    }
    else
    {
        switch (v28)
        {
        case 33: case 38: case 61: case 63:
            *(v18) = v25.slice_from(v26, 1);
            v19 = v35;
            if (!(char)fish::builtins::argparse::parse_flag_modifiers(a0, a1, a2, a3, &v18, a6))
                return 0;
            v25 = v18;
            v26 = v19;
            break;
        case 35:
            v45 = a0;
            v46 = *((int *)&a0->padding_18[200]);
            if (v46)
            {
                v6 = 0;
                v7 = 4;
                v8 = 0;
                v1 = "%";
                v2 = 45;
                *(v0) = 0x8000000000000000;
                v47 = v0.localize();
                v9 = 1;
                *((int128_t *)&v11) = *((int128_t *)&(&v45->padding_0)[1]);
                v13 = 4;
                v14 = v46;
                fish_printf::printf_impl::sprintf_locale(&v3, &v6, v47, v48, ".", &v9, 2, 0x8000000000000000);
                v3.unwrap(&g_14c6aa0);
LABEL_133896a:
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                *((int128_t *)&v10) = *((int128_t *)&v6);
                v9 = 1;
                v12 = 0;
                a6.append(&v9);
                return 0;
            }
            *((unsigned int *)&v45->padding_18[200]) = a1->field_40;
            a1->field_46 = 0x100;
            break;
        case 45:
            a1->field_44 = 0;
            if (v26 == 2)
            {
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v36 = g_14c69b0[0].localize();
                *((int128_t *)&v7) = *((int128_t *)&(&a0->padding_0)[1]);
                v6 = 1;
                v1 = a2;
                v2 = a3;
                v37 = v25.char_at(2, 1);
                memcpy(&v12, &v7, 16);
                *((int128_t *)&v10) = *((int128_t *)&v6);
                v38 = *((int128_t *)&v2);
                *((int128_t *)&v13) = *((int128_t *)&v0[0]);
                v15 = v38;
                v16 = 4;
                v17 = v37;
                fish_printf::printf_impl::sprintf_locale(&v0, &v3, v36, v39, ".", &(char)v10, 3, v0[0]);
                v0.unwrap(&g_14c6a70);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v9);
                *((int128_t *)&v10) = *((int128_t *)&v3);
                v12 = 0;
                a6.append(&v9);
                return 0;
            }
            break;
        case 47:
            if (v26 == 2)
            {
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v40 = g_14c69b0[0].localize();
                *((int128_t *)&v7) = *((int128_t *)&(&a0->padding_0)[1]);
                v6 = 1;
                v1 = a2;
                v2 = a3;
                v41 = v25.char_at(2, 1);
                memcpy(&v12, &v7, 16);
                *((int128_t *)&v10) = *((int128_t *)&v6);
                v42 = *((int128_t *)&v2);
                *((int128_t *)&v13) = *((int128_t *)&v0[0]);
                v15 = v42;
                v16 = 4;
                v17 = v41;
                fish_printf::printf_impl::sprintf_locale(&v0, &v3, v40, v43, ".", &(char)v10, 3, v0[0]);
                v0.unwrap(&g_14c6a88);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v9);
                *((int128_t *)&v10) = *((int128_t *)&v3);
                v12 = 0;
                a6.append(&v9);
                return 0;
            }
            break;
        default:
            a1->field_44 = 0;
            v52 = v25.char_at(v26, 0);
            v53 = *(v20);
            v54 = (v53 ^ 0xd800) - 0x110000;
            if (v54 < -0x10f800)
                core::option::unwrap_failed(&g_14c6ab8); /* do not return */
            a1->field_40 = v53;
            if ((char)_ccall(4, 23, (unsigned long long)(v53 + 1), 0, (unsigned long long)(char)(v54 < -0x10f800)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c6ad0); /* do not return */
            v55 = v52 == 47;
            *(v20) = v53 + 1;
            break;
        }
    }
    v56 = v25.slice_from(v26, v55);
    a4[0] = v56;
    a4[1] = v35;
    return v56 & 0xffffffffffffff00 | 1;
}
