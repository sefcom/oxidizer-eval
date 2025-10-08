long long uu_od::parse_formats::parse_format_flags(struct_0 *a0, unsigned long long a1[3], unsigned long a2)
{
    unsigned long long v0;  // [bp-0x2c8]
    struct_2 *v1;  // [bp-0x1a0]
    int v2;  // [bp-0x198]
    void* v3;  // [bp-0x188]
    void* v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x170]
    void* v6;  // [bp-0x168]
    unsigned long long v7;  // [bp-0x160]
    unsigned long long v9;  // [bp-0x158]
    unsigned long long v11;  // [bp-0x150]
    unsigned int v12;  // [bp-0x148], Other Possible Types: unsigned long, unsigned long long
    int v13;  // [bp-0x148], Other Possible Types: unsigned int
    unsigned long long v14;  // [bp-0x148], Other Possible Types: unsigned int
    unsigned int v15;  // [bp-0x148]
    int v16;  // [bp-0x148]
    unsigned long long v17;  // [bp-0x148]
    char v18;  // [bp-0x140], Other Possible Types: unsigned long long
    int v19;  // [bp-0x138], Other Possible Types: void*
    int v20;  // [bp-0x138]
    char v21;  // [bp-0x130]
    char v22;  // [bp-0x128]
    unsigned long long v23[3];  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    unsigned long long v26;  // [bp-0x108]
    void* v27;  // [bp-0x100]
    unsigned long long v28;  // [bp-0xf8]
    void* v29;  // [bp-0xf0]
    int v30;  // [bp-0xe8]
    void* v31;  // [bp-0xd8]
    int v32;  // [bp-0xc8]
    void* v33;  // [bp-0xb8]
    int v34;  // [bp-0xa8]
    void* v35;  // [bp-0x98]
    char v36;  // [bp-0x90]
    int v37;  // [bp-0x70]
    char v38;  // [bp-0x50]
    struct_1 *v40;  // r15
    unsigned long long v41;  // rsi
    void* v42;  // r14
    char *v43;  // rbx
    unsigned long long v44[3];  // rbp
    unsigned long long v47;  // rax
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rax
    unsigned int v50;  // edx
    unsigned int v51;  // eax
    unsigned long v52;  // rcx
    struct_0 *v54;  // rcx
    int v55;  // xmm0

    v4 = 0;
    v5 = 8;
    v6 = 0;
    v23[0] = a1;
    v24 = &a1[a2];
    v26 = 1;
    v40 = &v18;
    v41 = 1;
    v42 = 0;
    v43 = &v36;
    while (true)
    {
        if (!v41)
        {
            v44 = v23;
            if (v44 == v24)
                break;
            v23[0] = v44 + 1;
        }
        else
        {
            v26 = 0;
            v44 = v23.nth(v41);
            if (!v44)
                break;
        }
        v26 = v25;
        if (((char)v42 & 1))
        {
            uu_od::parse_formats::parse_type_string(&v17, v44[1], v44[2]);
            *((char [16])&v2) = v40->field_0;
            v3 = v40->field_10;
            if (v12 == 1)
            {
                *((void* *)((char *)&v1->field_8 + 8)) = v3;
                v55 = v2;
                v54 = a0;
                *((void*)&(&v54->field_0)[1]) = v2;
                v54->field_0 = 1;
                return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v4, 8);
            }
            v31 = v3;
            v30 = v2;
            v43.into_iter(&v30);
            v4.spec_extend(v43);
            v42 = 0;
            v41 = v26;
        }
        else if ((char)core::slice::<impl [T]>::starts_with(v44[1], v44[2], "----format=missing format specification after '--format' / '-t'src/uu/od/src/parse_formats.rsunexpected char '' in format specification invalid number  in format specification invalid size '", 2))
        {
            if (v44[2] == 2)
                break;
            v13 = v12;
            if ((char)core::slice::<impl [T]>::starts_with(v44[1], v44[2], "--format=missing format specification after '--format' / '-t'src/uu/od/src/parse_formats.rsunexpected char '' in format specification invalid number  in format specification invalid size '", 9))
            {
                v18 = v44[1];
                v19 = v44[2] + v44[1];
                v21 = 0;
                v17 = 1;
                v7.collect(&v17);
                uu_od::parse_formats::parse_type_string(&v17, v9, v48);
                *((char [16])&v2) = v40->field_0;
                v3 = v40->field_10;
                if (v14 == 1)
                {
                    *((void* *)((char *)&v1->field_8 + 8)) = v3;
                    *((void*)&(&v1->field_0)[1]) = v2;
                    v1->field_0 = 1;
                    core::ptr::drop_in_place<alloc::string::String>(&v7);
                    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v4, 8);
                }
                v33 = v3;
                v32 = v2;
                v37.into_iter(&v32);
                v4.spec_extend(&v37);
                core::ptr::drop_in_place<alloc::string::String>(&v7);
                v13 = v14;
            }
            v42 = ((char)v44[1].equal(v44[2], "--formatEL2NSYNCENOTCONN'; only ", 8) ? 1 : v42 & 4294967295);
            v41 = v26;
        }
        else
        {
            v15 = 0;
            v47 = ::0x465460::core::char::methods::encode_utf8_raw(45, &v15);
            v43 = &v36;
            v12 = v14;
            if ((char)core::slice::<impl [T]>::starts_with(v44[1], v44[2], v47, 1))
            {
                v27 = 0;
                v28 = 1;
                v29 = 0;
                v7 = v44[1];
                v9 = v44[2] + v44[1];
                v48 = 1;
                v48 = 1;
                v12 = v14;
                while (true)
                {
                    if (v48)
                    {
                        v48 = 0;
                        if (v7.advance_by(v48))
                            break;
                    }
                    v48 = v11;
                    v49 = core::str::validations::next_code_point(&v7);
                    if (!((char)v49 & 1) || v50 == 0x110000)
                        break;
                    if (((char)v42 & 1))
                    {
                        v51 = (int)v27.push(v50) & 0xffffff00 | (unsigned int)v42 & 255;
                    }
                    else
                    {
                        v52 = v50 - 65;
                        if ((unsigned int)v52 <= 54)
                        {
                            v51 = (unsigned int)v49 & 0xffffff00 | 1;
                            if (v52 != 51)
                            {
                                v0 = 18016597533007873;
                                if ((*((char *)&v0 + ((v52 & 63) >> 3)) >> ((char)v52 & 63 & 7) & 1))
                                    break;
                                else
                                    goto LABEL_469c04;
                            }
                        }
                        else
                        {
LABEL_469c04:
                            uu_od::parse_formats::od_argument_traditional_format(&v2, v50);
                            if ((int)v2 != 3)
                            {
                                *((int128_t *)&v20) = *((int128_t *)&v3);
                                v13 = v2;
                                v22 = 0;
                                v4.push(&v12, &g_5025d8);
                            }
                            v51 = (unsigned int)v42;
                        }
                    }
                    v42 = v51;
                }
                if (v29)
                {
                    uu_od::parse_formats::parse_type_string(&v12, 1, v29);
                    *((char [16])&v2) = v40->field_0;
                    v3 = v40->field_10;
                    if (v14 == 1)
                    {
                        *((void* *)((char *)&v1->field_8 + 8)) = v3;
                        *((void*)&(&v1->field_0)[1]) = v2;
                        v1->field_0 = 1;
                        core::ptr::drop_in_place<alloc::string::String>(&v27);
                        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v4, 8);
                    }
                    v35 = v3;
                    v34 = v2;
                    v38.into_iter(&v34);
                    v4.spec_extend(&v38);
                    v42 = 0;
                }
                core::ptr::drop_in_place<alloc::string::String>(&v27);
            }
            v41 = v26;
        }
    }
    if (((char)v42 & 1))
    {
        v17.to_vec("missing format specification after '--format' / '-t'src/uu/od/src/parse_formats.rsunexpected char '' in format specification invalid number  in format specification invalid size '", 52);
        v54 = a0;
        *((void* *)((char *)&v1->field_8 + 8)) = v19;
        v55 = (int128_t)v13;
        *((void*)&(&v54->field_0)[1]) = v55;
        v54->field_0 = 1;
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>(v4, 8);
    }
    if (!v6)
    {
        *((uint128_t *)&v19) = g_503b88;
        *((uint128_t *)&v16) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617h4b4b8bb8a5e43dd2E;
        v22 = 0;
        v4.push(&v17, &g_5025f0);
    }
    *((void* *)((char *)&v1->field_8 + 8)) = v6;
    *((int128_t *)&(&v1->field_0)[1]) = *((int128_t *)&v4);
    v1->field_0 = 0;
    return v6;
}
