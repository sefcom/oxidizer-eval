long long fish::builtins::argparse::parse_flag_modifiers(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[2], unsigned long long a5)
{
    unsigned long long v0[3];  // [bp-0x130]
    unsigned long long v1[3];  // [bp-0x130]
    unsigned long long v2;  // [bp-0x128]
    void* v3;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x118], Other Possible Types: char
    unsigned long v5;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x108]
    void* v7;  // [bp-0xf8], Other Possible Types: char
    int v8;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0xe8]
    struct_2 *v10;  // [bp-0xd8]
    void* v11;  // [bp-0xd0]
    unsigned long long v12;  // [bp-0xc8]
    unsigned int v13;  // [bp-0xbc]
    int v14;  // [bp-0xb8]
    char v15;  // [bp-0xb8]
    int v16;  // [bp-0xb0]
    void* v17;  // [bp-0xa8], Other Possible Types: char
    int v18;  // [bp-0x98], Other Possible Types: char
    unsigned long v19;  // [bp-0x90]
    int v20;  // [bp-0x88], Other Possible Types: char
    char v21;  // [bp-0x78]
    unsigned long v22;  // [bp-0x70]
    unsigned long v23;  // [bp-0x50]
    void* v24;  // [bp-0x48]
    unsigned long long v25;  // [bp-0x40]
    void* v26;  // [bp-0x38]
    unsigned long long v28;  // r15
    unsigned long long v29;  // r13
    unsigned long long v30;  // rax
    unsigned int v31;  // eax
    unsigned long long v32;  // rdx
    char v34;  // r14b
    char v35;  // bl
    void* v36;  // rdx
    unsigned int v37;  // eax
    int v38;  // xmm1
    unsigned long long v41;  // rax
    void* v42;  // r13
    unsigned long v43;  // rbx
    unsigned long long v44;  // rax
    unsigned int v45;  // eax
    unsigned long long v50;  // rax
    unsigned long v51;  // rdx

    v28 = a4[0];
    v29 = a4[1];
    v23 = a1->field_40;
    v13 = *((int *)&a0->padding_18[200]);
    if (!((unsigned int)v23 == *((int *)&a0->padding_18[200]) & v29) || (int)v28.char_at(v29, 0) == 33 || (int)v28.char_at(v29, 0) == 38)
    {
        if ((int)v28.char_at(v29, 0) == 61)
        {
            a3 = a3;
            a5 = a5;
            v28 = v28.slice_from(v29, 1);
            v34 = 2;
            switch ((int)v28.char_at(v29, 0))
            {
            case 43:
                v34 = 1;
                break;
            case 42:
LABEL_1338183:
                v35 = 1;
            case 63:
                v28 = v28.slice_from(v29, 1);
                break;
            default:
                v34 = 1;
                goto LABEL_1338183;
            }
            a1->field_47 = v34;
            a1->field_46 = v35;
        }
        if ((int)v28.char_at(v29, 0) == 38)
        {
            a1->field_45 = 1;
            v28 = v28.slice_from(v29, 1);
            v29 = v36;
        }
        if ((int)v28.char_at(v29, 0) == 33)
        {
            if (!a1->field_47)
            {
                *(v0) = 0;
                v2 = 4;
                v3 = 0;
                v12 = g_14c69b0[0].localize();
                v11 = v36;
                *((int128_t *)&v8) = *((int128_t *)&(&a0->padding_0)[1]);
                v7 = 1;
                v5 = a2;
                v6 = a3;
                v4 = 1;
                v37 = v28.char_at(v29, 0);
                memcpy(&v17, &v8, 16);
                *((int128_t *)&v14) = *((int128_t *)&v7);
                v38 = *((int128_t *)&v6);
                *((int128_t *)&v18) = *((int128_t *)&v4);
                v20 = v38;
                v21 = 4;
                v22 = v37;
                fish_printf::printf_impl::sprintf_locale(&v4, &v0, v12, v11, ".", &(char)v14, 3);
                v4.unwrap(&g_14c69c8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(char)v14);
                *((int128_t *)&v14) = *((int128_t *)&v0[0]);
                v17 = 0;
                a5.append(&(char)v14);
            }
            v41 = v28.slice_from(v29, 1);
            a1->field_28 = v41;
            a1->field_30 = v36;
            v28 = v41.slice_from(v36, a2);
            v42 = v36;
            v43 = &a1->field_40;
            if ((int)v23 == v13)
                goto LABEL_1338491;
            goto LABEL_13384ab;
        }
        else if (v29)
        {
            *(v1) = 0;
            v2 = 4;
            v3 = 0;
            v44 = g_14c69b0[0].localize();
            *((int128_t *)&v8) = *((int128_t *)&(&a0->padding_0)[1]);
            v7 = 1;
            v5 = a2;
            v6 = a3;
            v4 = 1;
            v45 = v28.char_at(v29, 0);
            memcpy(&v17, &v8, 16);
            *((int128_t *)&v14) = *((int128_t *)&v7);
            memcpy(&(char)v18, &v4, 16);
            memcpy(&v20, &v6, 16);
            v21 = 4;
            v22 = v45;
            fish_printf::printf_impl::sprintf_locale(&v4, &v1, v44, v36, ".", &(char)v14, 3);
            v4.unwrap(&g_14c69f8);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(char)v14);
            *((int128_t *)&v14) = *((int128_t *)&v1[0]);
        }
        else
        {
            v42 = 0;
            v43 = &a1->field_40;
            if ((int)v23 == v13)
            {
LABEL_1338491:
                if (!a1->field_30)
                {
                    a1->field_28 = "_";
                    a1->field_30 = 13;
                }
            }
LABEL_13384ab:
            if (!(char *)&v10[3].field_8 + 8.get_inner(v43))
            {
                a4[0] = v28;
                a4[1] = v42;
                return 1;
            }
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v5 = "%";
            v6 = 38;
            v4 = 0x8000000000000000;
            v50 = v4.localize();
            v51 = *((int *)v43);
            v15 = 1;
            *((int128_t *)&v16) = *((int128_t *)&(&v10->padding_0)[1]);
            v18 = 4;
            v19 = v51;
            fish_printf::printf_impl::sprintf_locale(&v0, &v7, v50, v36, ".", &v15, 2);
            v0.unwrap(&g_14c69e0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v15);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v4);
            *((int128_t *)&v14) = *((int128_t *)&v7);
        }
    }
    else
    {
        v24 = 0;
        v25 = 4;
        v26 = 0;
        v2 = "%";
        v3 = 71;
        *(v1) = 0x8000000000000000;
        v30 = v1.localize();
        *((int128_t *)&v8) = *((int128_t *)&(&a0->padding_0)[1]);
        v7 = 1;
        v5 = v23;
        v4 = 4;
        v31 = v28.char_at(v29, 0);
        memcpy(&v17, &v8, 16);
        *((int128_t *)&v14) = *((int128_t *)&v7);
        memcpy(&v18, &v4, 16);
        memcpy(&v20, &v6, 16);
        v21 = 4;
        v22 = v31;
        fish_printf::printf_impl::sprintf_locale(&v4, &v24, v30, v32, ".", &(char)v14, 3);
        v4.unwrap(&g_14c6a10);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(char)v14);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
        *((int128_t *)&v14) = *((int128_t *)&v24);
    }
    v17 = 0;
    a5.append(&v15);
    return 0;
}
