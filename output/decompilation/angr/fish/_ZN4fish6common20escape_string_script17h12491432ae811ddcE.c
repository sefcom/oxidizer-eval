long long fish::common::escape_string_script(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned int v0;  // [bp-0xac]
    char v1;  // [bp-0xa6]
    char v2;  // [bp-0xa5]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa4]
    unsigned int v5;  // [bp-0xa0]
    unsigned int v6;  // [bp-0xa0]
    unsigned int v7;  // [bp-0x9c]
    unsigned int v8;  // [bp-0x9c]
    unsigned long long v9;  // [bp-0x98]
    void* v10;  // [bp-0x90]
    unsigned long long v11;  // [bp-0x88]
    void* v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    unsigned long v15;  // [bp-0x60], Other Possible Types: unsigned long long
    uint128_t v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x40]
    unsigned long v19;  // rbp
    char v20;  // r13b
    char v21;  // bl
    unsigned long long v22;  // rax
    unsigned int v23;  // eax
    char v24;  // r13b
    unsigned int v25;  // edx
    unsigned int v26;  // r15d
    char v27;  // r13b
    unsigned int v28;  // r15d
    unsigned long v29;  // r14
    unsigned long long v30;  // rax
    unsigned int v31;  // r14d
    unsigned int v32;  // ecx
    unsigned long v35;  // cc_dep1
    unsigned int v36[4];  // cc_dep2
    unsigned long long v37;  // rsi
    unsigned int v38;  // eax
    unsigned int v39;  // edx
    unsigned long v40;  // r14
    unsigned long long v41;  // rax
    unsigned int v42;  // r14d
    unsigned int v43;  // ecx
    unsigned int v46;  // r14d
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long v49;  // r14
    unsigned long long v50;  // rax
    unsigned int v51;  // r14d
    unsigned int v52;  // ecx
    unsigned int v53;  // eax
    unsigned int v54;  // edx
    unsigned long v55;  // r14
    unsigned long long v56;  // rax
    unsigned int v57;  // r14d
    unsigned int v58;  // ecx
    unsigned long v59;  // rax
    unsigned int v60;  // ebx

    v19 = a3;
    v20 = fish::future_feature_flags::test(1);
    if (!((char)v19 & 8))
    {
        v0 = 0;
    }
    else
    {
        v21 = !((char)v19 & 1);
        v22 = (unsigned long long)fish::libc::MB_CUR_MAX();
        v0 = (unsigned int)v22 & 0xffffff00 | 2 <= v22;
        if ((2 <= v22 & v21))
        {
            v13 = &g_14c08a0;
            v14 = 1;
            v15 = 8;
            v16 = 0;
            core::panicking::panic_fmt(&v13, &g_14c08b0); /* do not return */
        }
    }
    if (((char)v19 & 4))
        v21 = (int)a1.char_at(a2, 0) == 126;
    if ((!((char)v19 & 2) & !a2))
        return a0.to_vec("'", 2);
    v10 = 0;
    v11 = 4;
    v12 = 0;
    v17 = a1;
    v13 = a1;
    v14 = a1 + a2 * 4;
    if ((int)v13.next() == 2)
    {
        v24 = 1;
        v6 = 0;
        v4 = 0;
        v7 = 0;
        if (((char)v19 & 2))
        {
            a0->field_10 = 0;
            a0->field_0 = *((int128_t *)&v10);
            return 0;
        }
    }
    else
    {
        v2 = (char)v19 | v20;
        v1 = v20 ^ 1;
        v9 = &g_14c08f8;
        v7 = 0;
        v4 = 0;
        v6 = 0;
        do
        {
            v28 = v26;
            if ((char)v0)
            {
                v23.unwrap(v28, &g_14bd1b0);
                if ((fish::wchar::decode_byte_from_char(v28) & 1))
                {
                    v29 = v25;
                    v10.extend("\\Xsrc/common.rs/.~-___\\n", "src/common.rs/.~-___\\n");
                    v30 = v29 & 4294967295;
                    v10.push(((v29 & 255) < 160 ? ((unsigned int)v30 & 0xffffff00 | (unsigned int)((v30 & 255) >> 4) & 255) + 48 : (char)((v30 & 255) >> 4) + 87));
                    v31 = (unsigned int)v29 & 0xffffff00 | (char)v29 & 15;
                    v32 = (((char)v29 & 15) < 10 ? v31 + 48 : v31 + 87);
                }
                else if (v28 <= 64991)
                {
                    switch (v28)
                    {
                    case 8:
                        v37 = 9224;
                        goto LABEL_12e4ba8;
                    case 9:
                        v37 = 9225;
                        goto LABEL_12e4ba8;
                    case 10:
LABEL_12e4a40:
                        v37 = 9252;
                        goto LABEL_12e4ba8;
                    case 13:
LABEL_12e4a1c:
                        v37 = 9229;
                        goto LABEL_12e4ba8;
                    case 27:
LABEL_12e4a83:
                        v37 = 9243;
                        goto LABEL_12e4ba8;
                    case 32: case 35: case 37: case 38: case 40: case 41: case 42: case 59: case 60: case 62: case 63: case 91: case 93: case 123: case 124: case 125: case 126:
LABEL_12e4888:
                        if (!((char)v19 & 4))
                            goto LABEL_12e48ab;
                        goto LABEL_12e489b;
                    case 34:
LABEL_12e4986:
                        v8 = v7 + 1;
                        if ((char)_ccall(0, 23, (unsigned long long)(v7 + 1), 0, (v35 + v36 <= v35 ? 1 : 0)))
                        {
                            v9 = &g_14c0910;
                            core::panicking::panic_const::panic_const_add_overflow(v9); /* do not return */
                        }
                        v28 = 34;
                        v7 = v8;
                        v27 = 1;
                        v46 = v28;
                        if (((char)v19 & 1))
                            goto LABEL_12e4480;
                        goto LABEL_12e49a6;
                    case 36:
LABEL_12e4af4:
                        v5 = v6 + 1;
                        if ((char)_ccall(0, 23, (unsigned long long)(v6 + 1), 0, (v35 + v36 <= v35 ? 1 : 0)))
                        {
                            v9 = &g_14c0928;
                            core::panicking::panic_const::panic_const_add_overflow(v9); /* do not return */
                        }
                        v27 = 1;
                        v46 = 36;
                        v6 = v5;
                        if (((char)v19 & 1))
                            goto LABEL_12e4480;
LABEL_12e49a6:
                        v27 = 1;
                        v10.push(92);
LABEL_12e4480:
                        v10.push(v46);
                    case 39:
LABEL_12e4967:
                        v3 = v4 + 1;
                        if ((char)_ccall(0, 23, (unsigned long long)(v4 + 1), 0, (v35 + v36 <= v35 ? 1 : 0)))
                        {
                            v9 = &g_14c08f8;
                            core::panicking::panic_const::panic_const_add_overflow(&g_14c08f8); /* do not return */
                        }
                        v28 = 39;
                        v4 = v3;
                        if (((1 | (char)v0) & (char)v19))
                            goto LABEL_12e4a02;
                        goto LABEL_12e49f5;
                    case 44:
LABEL_12e49c0:
                        if (((char)v19 & 16))
                        {
                            v27 = 1;
                            v10.push(92);
                        }
                        v10.push(44);
                        continue;
                    case 92:
LABEL_12e49ea:
                        if (((char)v0 & (char)v19))
                            goto LABEL_12e4a02;
LABEL_12e49f5:
                        v10.push(92);
LABEL_12e4a02:
                        v27 = 1;
                        v10.push(v28);
                        continue;
                    case 127:
LABEL_12e4aa4:
                        v37 = 9249;
                        goto LABEL_12e4ba8;
                    default:
LABEL_12e48f2:
                        if (v28 > 25)
                            goto LABEL_12e4b6c;
                        v32 = v28 | 0x2400;
                        break;
                    }
                }
                else
                {
                    if (v28 == 64992)
                        goto LABEL_12e4b35;
                    if (v28 == 64993)
                        goto LABEL_12e4b1e;
                    if (v28 == 64994)
                        goto LABEL_12e4b4c;
                    goto LABEL_12e48f2;
                }
                v10.push(v32);
                v21 = 1;
                if ((int)v13.next() == 2)
                    goto LABEL_12e4bba;
                v39 = v25;
                while (true)
                {
                    v28 = v39;
                    v38.unwrap(v28, &g_14bd1b0);
                    if ((fish::wchar::decode_byte_from_char(v28) & 1))
                    {
                        v40 = v25;
                        v10.extend("\\Xsrc/common.rs/.~-___\\n", "src/common.rs/.~-___\\n");
                        v41 = v40 & 4294967295;
                        v10.push(((v40 & 255) < 160 ? ((unsigned int)v41 & 0xffffff00 | (unsigned int)((v41 & 255) >> 4) & 255) + 48 : (char)((v41 & 255) >> 4) + 87));
                        v42 = (unsigned int)v40 & 0xffffff00 | (char)v40 & 15;
                        v43 = (((char)v40 & 15) < 10 ? v42 + 48 : v42 + 87);
                        goto LABEL_12e462a;
                    }
                    if (v28 <= 64991)
                    {
                        switch (v28)
                        {
                        case 8:
                            if ((char)v0)
                                break;
                            goto LABEL_12e4acf;
                        case 9:
LABEL_12e4a5d:
                            v37 = 9225;
                            v47 = "\\";
                            v48 = "disown.1acs_rteeacs_plusTCP mode-";
                            goto LABEL_12e4ba8;
                        case 10:
LABEL_12e4a39:
                            if ((char)v0)
                                goto LABEL_12e4a40;
                            goto LABEL_12e4a4a;
                        case 13:
LABEL_12e4a15:
                            if ((char)v0)
                                goto LABEL_12e4a1c;
                            goto LABEL_12e4a26;
                        case 27:
LABEL_12e4a7c:
                            if ((char)v0)
                                goto LABEL_12e4a83;
                            goto LABEL_12e4a8d;
                        case 32: case 35: case 37: case 38: case 40: case 41: case 42: case 59: case 60: case 62: case 63: case 91: case 93: case 123: case 124: case 125: case 126:
LABEL_12e4890:
                            v21 = 1;
                            v27 = 1;
                            if (!((char)v19 & 4))
                                goto LABEL_12e48ab;
LABEL_12e489b:
                            v46 = 126;
                            if (v28 == 126)
                                goto LABEL_12e4480;
LABEL_12e48ab:
                            if (v28 == 63)
                            {
                                v46 = 63;
                                if ((v2 & 1))
                                {
                                    v27 |= v1;
                                    goto LABEL_12e4480;
                                }
                            }
                            break;
                        case 34:
LABEL_12e4984:
                            v21 = 1;
                            goto LABEL_12e4986;
                        case 36:
LABEL_12e4af2:
                            v21 = 1;
                            goto LABEL_12e4af4;
                        case 39:
LABEL_12e4965:
                            v21 = 1;
                            goto LABEL_12e4967;
                        case 44:
LABEL_12e49bb:
                            v21 = 1;
                            v27 = 1;
                            goto LABEL_12e49c0;
                        case 92:
LABEL_12e49e8:
                            v21 = 1;
                            goto LABEL_12e49ea;
                        case 127:
LABEL_12e4a9d:
                            if ((char)v0)
                                goto LABEL_12e4aa4;
                            goto LABEL_12e4aae;
                        default:
                            if (v28 > 25)
                                goto LABEL_12e4b67;
                            v43 = v28 | 0x2400;
LABEL_12e462a:
                            v10.push(v43);
                            v38 = v13.next();
                            v39 = v25;
                            if (v38 == 2)
                                goto LABEL_12e4bba;
                            continue;
                        }
                    }
                    else
                    {
                        if (v28 == 64992)
                            goto LABEL_12e4b30;
                        if (v28 == 64993)
                            goto LABEL_12e4b19;
                        goto LABEL_12e47ac;
                    }
                }
            }
            else
            {
                v23.unwrap(v28, &g_14bd1b0);
                if ((fish::wchar::decode_byte_from_char(v28) & 1))
                {
                    v49 = v25;
                    v10.extend("\\Xsrc/common.rs/.~-___\\n", "src/common.rs/.~-___\\n");
                    v50 = v49 & 4294967295;
                    v10.push(((v49 & 255) < 160 ? ((unsigned int)v50 & 0xffffff00 | (unsigned int)((v50 & 255) >> 4) & 255) + 48 : (char)((v50 & 255) >> 4) + 87));
                    v51 = (unsigned int)v49 & 0xffffff00 | (char)v49 & 15;
                    v52 = (((char)v49 & 15) < 10 ? v51 + 48 : v51 + 87);
                }
                else if (v28 <= 64991)
                {
                    switch (v28)
                    {
                    case 10:
LABEL_12e4a4a:
                        v47 = "\\";
                        v48 = "%lu %lu\n_history";
                        break;
                    case 13:
LABEL_12e4a26:
                        v47 = "\\";
                        v48 = "VARIABLE<";
                        break;
                    case 27:
LABEL_12e4a8d:
                        v47 = "\\";
                        v48 = "-";
                        break;
                    case 127:
LABEL_12e4aae:
                        v47 = "\\";
                        v48 = "H";
                        break;
                    case 8:
LABEL_12e4acf:
                        v47 = "\\";
                        v48 = "-";
                    case 9:
                        v21 = 1;
                        v10.spec_extend(v47, v48);
                        v27 = 1;
                        continue;
                    case 32: case 35: case 37: case 38: case 40: case 41: case 42: case 59: case 60: case 62: case 63: case 91: case 93: case 123: case 124: case 125: case 126:
                        goto LABEL_12e4888;
                    case 34:
                        goto LABEL_12e4986;
                    case 36:
                        goto LABEL_12e4af4;
                    case 39:
                        goto LABEL_12e4967;
                    case 44:
                        goto LABEL_12e49c0;
                    case 92:
                        goto LABEL_12e49ea;
                    default:
LABEL_12e492f:
                        if (v28 > 25)
                            goto LABEL_12e4b6c;
                        if (v28)
                        {
                            v10.push(92);
                            v10.push(99);
                            v52 = v28 | 96;
                            goto LABEL_12e46cb;
                        }
                        else
                        {
LABEL_12e4b7c:
                            v10.push(92);
                            v10.push(120);
                            v10.push(48);
                            v37 = 48;
LABEL_12e4ba8:
                            v21 = 1;
                            v10.push(v37);
                            v27 = 1;
                            continue;
                        }
                    }
                }
                else
                {
                    if (v28 == 64992)
                        goto LABEL_12e4b35;
                    if (v28 == 64993)
                        goto LABEL_12e4b1e;
                    if (v28 == 64994)
                        goto LABEL_12e4b4c;
                    goto LABEL_12e492f;
                }
LABEL_12e46cb:
                v10.push(v52);
                v21 = 1;
                if ((int)v13.next() != 2)
                {
                    v54 = v25;
                }
                else
                {
LABEL_12e4bba:
                    if (((char)v19 & 2))
                    {
                        a0->field_10 = 0;
                        a0->field_0 = *((int128_t *)&v10);
                        return 0;
                    }
                    goto LABEL_12e4bd6;
                }
                while (true)
                {
                    v28 = v54;
                    v53.unwrap(v28, &g_14bd1b0);
                    if ((fish::wchar::decode_byte_from_char(v28) & 1))
                    {
                        v55 = v25;
                        v10.extend("\\Xsrc/common.rs/.~-___\\n", "src/common.rs/.~-___\\n");
                        v56 = v55 & 4294967295;
                        v10.push(((v55 & 255) < 160 ? ((unsigned int)v56 & 0xffffff00 | (unsigned int)((v56 & 255) >> 4) & 255) + 48 : (char)((v56 & 255) >> 4) + 87));
                        v57 = (unsigned int)v55 & 0xffffff00 | (char)v55 & 15;
                        v58 = (((char)v55 & 15) < 10 ? v57 + 48 : v57 + 87);
                        goto LABEL_12e47ea;
                    }
                    if (v28 > 64991)
                        break;
                    switch (v28)
                    {
                    case 8:
                        break;
                    case 9:
                        goto LABEL_12e4a5d;
                    case 10:
                        goto LABEL_12e4a39;
                    case 13:
                        goto LABEL_12e4a15;
                    case 27:
                        goto LABEL_12e4a7c;
                    case 32: case 35: case 37: case 38: case 40: case 41: case 42: case 59: case 60: case 62: case 63: case 91: case 93: case 123: case 124: case 125: case 126:
                        goto LABEL_12e4890;
                    case 34:
                        goto LABEL_12e4984;
                    case 36:
                        goto LABEL_12e4af2;
                    case 39:
                        goto LABEL_12e4965;
                    case 44:
                        goto LABEL_12e49bb;
                    case 92:
                        goto LABEL_12e49e8;
                    case 127:
                        goto LABEL_12e4a9d;
                    default:
                        if (v28 < 26)
                        {
                            if (!v28)
                                goto LABEL_12e4b7c;
                            v10.push(92);
                            v10.push(99);
                            v58 = v28 | 96;
LABEL_12e47ea:
                            v10.push(v58);
                            v53 = v13.next();
                            v54 = v25;
                            if (v53 == 2)
                                goto LABEL_12e4bba;
                            continue;
                        }
                        else
                        {
LABEL_12e4b67:
                            v21 = 1;
                            v27 = 1;
LABEL_12e4b6c:
                            v10.push(v28);
                            continue;
                        }
                    }
                }
                if (v28 != 64992)
                {
                    if (v28 == 64993)
                    {
LABEL_12e4b19:
                        v21 = 1;
                        v27 = 1;
LABEL_12e4b1e:
                        v10.push(42);
                        continue;
                    }
LABEL_12e47ac:
                    v21 = 1;
                    v27 = 1;
LABEL_12e4b4c:
                    v10.spec_extend("*", "-");
                    continue;
                }
                else
                {
LABEL_12e4b30:
                    v21 = 1;
                    v27 = 1;
LABEL_12e4b35:
                    v10.push(63);
                }
            }
            v23 = v13.next();
            v26 = v25;
        } while (v23 != 2);
        v24 = v27 ^ 1;
        if (((char)v19 & 2))
        {
            a0->field_10 = 0;
            a0->field_0 = *((int128_t *)&v10);
            return 0;
        }
    }
LABEL_12e4bd6:
    if ((v24 & 1))
    {
        a0->field_10 = 0;
        a0->field_0 = *((int128_t *)&v10);
        return 0;
    }
    if (!((char)v19 & 1) && !(v21 & 1))
    {
        v59 = v7;
        if (((unsigned int)~(v59 & 4294967295 ^ v6) & ((unsigned int)v59 ^ (unsigned int)v59 + v6)) < 0)
        {
            v9 = &g_14c08c8;
            core::panicking::panic_const::panic_const_add_overflow(v9); /* do not return */
        }
        v12 = 0;
        if ((char)__CFADD__(a2, 2))
        {
            v9 = &g_14c08e0;
            core::panicking::panic_const::panic_const_add_overflow(v9); /* do not return */
        }
        v10.reserve(a2 + 2);
        v60 = (v4 <= (unsigned int)v59 + v6) * 5 + 34;
        v10.push(v60);
        fish::parse_util::parse_util_escape_string_with_quote(&v13, v17, a2, v60);
        v10.spec_extend(v14, v14 + v15 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
        v10.push(v60);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v10);
    return 0;
}
