long long uu_od::parse_formats::parse_format_flags::h44feb7232227cd4f(unsigned long long a0[4], struct_1 *a1, unsigned long a2)
{
    void* v2;  // [sp-0x98]
    struct_1 *v3;  // [sp-0x90]
    struct_1 *v4;  // [sp-0x88]
    void* v5;  // [sp-0x80], Other Possible Types: unsigned long
    struct_1 *v6;  // [sp-0x78]
    struct_1 *v7;  // [sp-0x70]
    unsigned int v8;  // [bp-0x68], Other Possible Types: char, unsigned long long
    char v9;  // [sp-0x67]
    char v10;  // [sp-0x66]
    char v11;  // [sp-0x65]
    struct_0 *v12;  // [sp-0x60]
    unsigned long long v13;  // [sp-0x58]
    char v14;  // [bp-0x50]
    struct_1 *v15;  // [bp-0x40]
    unsigned long long v16;  // [sp-0x38]
    unsigned long long v18;  // rcx
    struct_1 *v19;  // rax
    void* v21;  // r15
    struct_0 *v22;  // rbp
    unsigned long long v23;  // r13
    struct_0 *v24;  // r12
    void* v25;  // rbp
    unsigned long long v26;  // rbx
    struct_1 *v27;  // r13
    struct_1 *v28;  // r13
    unsigned long long v29;  // r13
    struct_1 *v30;  // rbx
    struct_1 *v31;  // r12
    unsigned int v32;  // eax
    unsigned int v33;  // ecx
    unsigned int v34;  // edx
    struct_0 *v35;  // rcx
    unsigned int v36;  // esi
    unsigned int *v37;  // r12
    struct_1 *v38;  // rbx
    unsigned int v39;  // eax
    struct_1 *v40;  // rbx
    struct_1 *v46;  // rsi
    struct_1 *v47;  // rsi
    struct_1 *v51;  // rax
    struct_0 *v56;  // r12
    void* v57;  // rbx
    unsigned long long v58;  // r13
    struct_1 *v61;  // rbp
    struct_1 *v62;  // rbp
    struct_1 *v64;  // rax
    unsigned long long v65[4];  // r14
    struct_2 *v66;  // rax
    struct_1 *v67;  // rax

    v2 = 0;
    v3 = &g_8;
    v4 = 0;
    v16 = &(&a1->field_0)[a2 * &g_18];
    v18 = 1;
    v19 = 0;
LABEL_498f5a:
    v21 = 0;
    while (true)
    {
        if (((char)v19 & 1))
        {
            if (!(a1 == v16))
                goto LABEL_49876d;
            goto LABEL_498f62;
        }
        if ((v16 - (char *)a1) / &g_18 <= v18)
            goto LABEL_498f62;
        a1 = &(&a1->field_0)[v18 * &g_18];
LABEL_49876d:
        a1 += &g_18;
        if (((char)v21 & 1))
        {
            uu_od::parse_formats::parse_type_string::h0f11533e5de9ed70(&v8, *((long long *)(a1 + &g_8)), *((long long *)(a1 + &g_8)));
            v24 = v12;
            v25 = v13;
            v26 = *((long long *)&v14);
            if (v8)
            {
                v65 = a0;
                *((struct_0 **)(v65 + &g_8)) = v24;
                *((void* *)(v65 + &g_8)) = v25;
                *((unsigned long long *)(v65 + &g_18)) = v26;
                goto LABEL_499043;
            }
            else
            {
                v27 = v4;
                if (v2 - v27 < v26)
                {
                    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h4f374165a1852e7f(&v2, v27, v26);
                    v28 = v4;
                }
                v4 = &(&v28->field_0)[v26];
                v19 = memcpy(&(&v3->field_0)[5 * v28 * &g_8], v25, v26 * &g_28) | -0x100 | 1;
                v18 = 0;
                v21 = 0;
                a1 = a1;
                if (!v24)
                    continue;
                v19 = __rust_dealloc(v25) | -0x100 | 1;
                v18 = 0;
                goto LABEL_498f5a;
            }
        }
        v22 = *((long long *)(a1 + &g_8));
        v23 = *((long long *)(a1 + &g_8));
        if (v23 < 2)
            break;
        v19 = (short)v22->field_0;
        if (!((unsigned int)v19 == 11565))
            goto LABEL_49885f;
        if (v23 == 2)
        {
LABEL_498f62:
            if (!((char)v21 & 1))
            {
                v65 = a0;
                if (!v4)
                {
                    if (!v2)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h9279dc4224782a43(&v2);
                    v67 = v3;
                    *((uint128_t *)(v67 + &g_8)) = g_503688;
                    *((uint128_t *)&v67->field_0) = _ZN5uu_od7prn_int17FORMAT_ITEM_OCT1617hd77813577f7e9f92E;
                    *((char *)(v67 + &g_18)) = 0;
                    v4 = 1;
                }
                *((struct_1 **)(v65 + &g_18)) = v4;
                *((int128_t *)(v65 + &g_8)) = *((int128_t *)&v2);
                v65[0] = 0;
                return v65;
            }
            v66 = __rust_alloc(52, 1);
            v65 = a0;
            if (!v66)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
            *((int128_t *)(v66 + &g_18)) = 42779985980492143533906748970725569125;
            *((int128_t *)(v66 + &g_8)) = 154722031753831588185087419289004369264;
            v66->field_0 = 153029733493256437026005842866600110445;
            v66->field_30 = 661925159;
            *((long long *)(v65 + &g_8)) = 52;
            *((struct_2 **)(v65 + &g_8)) = v66;
            *((long long *)(v65 + &g_18)) = 52;
LABEL_499043:
            v65[0] = 1;
        }
        if (v23 < 9)
        {
            v19 = v19 | -0x100 | 1;
            v18 = 0;
            if (v23 == 8)
            {
                v21 = (!v22->field_0 != 8386104319403240749 ? v21 & 4294967295 & 4294967295 : 1);
                v19 = -255;
                v18 = 0;
            }
            continue;
        }
        v51 = v22->field_0 ^ 8386104319403240749;
        v19 = v51 | -0x100 | 1;
        v18 = 0;
        if (!(!(*((char *)(v22 + &g_8)) ^ 61)) || !(!v51))
            continue;
        v12 = v22;
        v13 = v23 + (char *)v22;
        v14 = 0;
        v8 = 1;
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0c3a8665df440c31(&v5, &v8);
        v15 = v6;
        uu_od::parse_formats::parse_type_string::h0f11533e5de9ed70(&v8, v6, v7);
        v56 = v12;
        v57 = v13;
        v58 = *((long long *)&v14);
        if (!v8)
        {
            v61 = v4;
            if (v2 - v61 < v58)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h4f374165a1852e7f(&v2, v61, v58);
                v62 = v4;
            }
            v64 = memcpy(&(&v3->field_0)[5 * v62 * &g_8], v57, v58 * &g_28);
            v4 = &(&v62->field_0)[v58];
            if (v56)
                v64 = __rust_dealloc(v57);
            if (v5)
                v64 = __rust_dealloc(v15);
            v18 = 0;
            v19 = v64 | -0x100 | 1;
        }
        else
        {
            v65 = a0;
            *((struct_0 **)(v65 + &g_8)) = v56;
            *((void* *)(v65 + &g_8)) = v57;
            *((unsigned long long *)(v65 + &g_18)) = v58;
            v65[0] = 1;
            if (v5)
                __rust_dealloc(v15);
        }
    }
    v19 = a1 | -0x100 | 1;
    v18 = 0;
    if (!v23)
        continue;
LABEL_49885f:
    v19 = v19 | -0x100 | 1;
    v18 = 0;
    if (!((char)v22->field_0 == 45))
        continue;
    a1 = a1;
    v29 = v23 + (char *)v22;
    v5 = 0;
    v6 = 1;
    v7 = 0;
    v30 = 0;
LABEL_4988cd:
    if (((char)v30 & 1))
    {
        v31 = (char)v22->field_0;
        if ((char)v31 >= 0)
        {
            v22 = (char *)&v22->field_0 + 1;
            if (!((char)v21 & 1))
                goto LABEL_498b4d;
            goto LABEL_4988f6;
        }
        v32 = (unsigned int)v31 & &g_18;
        v33 = *((char *)&v22->field_0 + 1) & 63;
        if ((v31 & 255) <= 223)
        {
            v22 = (char *)&v22->field_0 + 2;
            v19 = v32 * 64 | v33;
            v31 = v19 & 4294967295;
            if (!((char)v21 & 1))
                goto LABEL_498b4d;
            goto LABEL_4988f6;
        }
        v34 = *((char *)&v22->field_0 + 2) & 63 | v33 * 64;
        if ((v31 & 255) > 239)
        {
            goto LABEL_498a07;
        }
        else
        {
            v22 = (char *)&v22->field_0 + 3;
            v19 = v32 * 0x1000;
            v31 = v34 | (unsigned int)v19;
            if (!((char)v21 & 1))
                goto LABEL_498b4d;
            goto LABEL_4988f6;
        }
    }
    v31 = (char)v22->field_0;
    if ((char)v31 >= 0)
    {
        v35 = (char *)&v22->field_0 + 1;
        goto LABEL_498b40;
    }
    v32 = (unsigned int)v31 & &g_18;
    v36 = *((char *)&v22->field_0 + 1) & 63;
    if ((v31 & 255) <= 223)
    {
        v35 = (char *)&v22->field_0 + 2;
        v19 = v32 * 64 | v36;
        v31 = v19 & 4294967295;
        goto LABEL_498b40;
    }
    v34 = *((char *)&v22->field_0 + 2) & 63 | v36 * 64;
    if ((v31 & 255) > 239)
    {
LABEL_498a07:
        v19 = (v32 & 7) * 0x40000;
        v31 = *((char *)&v22->field_0 + 3) & 63 | v34 * 64 | (unsigned int)v19;
        v35 = (char *)&v22->field_0 + 4;
        goto LABEL_498b40;
    }
    v35 = (char *)&v22->field_0 + 3;
    v19 = v32 * 0x1000;
    v31 = v34 | (unsigned int)v19;
LABEL_498b40:
    v22 = v35;
    if (!((char)v21 & 1))
    {
LABEL_498b4d:
        v30 = v30 | -0x100 | 1;
        v37 = (unsigned int)v31 - 65;
        if (!((unsigned int)v37 <= 55))
            continue;
    }
    else
    {
LABEL_4988f6:
        if ((unsigned int)v31 >= 128)
        {
            v8 = 0;
            v39 = (unsigned int)v31;
            if ((unsigned int)v31 < 0x800)
            {
                v8 = (char)(v39 >> 6) | 192;
                v9 = (char)v31 & 63 | 128;
                v40 = 2;
            }
            else if ((unsigned int)v31 < 0x10000)
            {
                v8 = (char)(v39 >> &g_8) | 224;
                v9 = (char)((v31 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                v10 = (char)v31 & 63 | 128;
                v40 = 3;
            }
            else
            {
                v8 = (char)(v39 >> &g_8) | 240;
                v9 = (char)((v31 & 4294967295 & 4294967295) >> &g_8 & 4294967295) & 63 | 128;
                v10 = (char)((v31 & 4294967295 & 4294967295) >> 6 & 4294967295) & 63 | 128;
                v11 = (char)v31 & 63 | 128;
                v40 = 4;
            }
            v46 = v7;
            if (v5 - v46 < v40)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h94e7c1edf1535031(&v5, v46, v40);
                v47 = v7;
            }
            v19 = memcpy(v47 + v6, &v8, v40);
            v7 += v40;
            v30 = v40 | -0x100 | 1;
            goto LABEL_4988cd;
        }
        else
        {
            v38 = v7;
            if (v38 == v5)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h275c396a68023b70(&v5);
            v19 = v6;
            *((char *)(v19 + v38)) = (char)v31;
            v7 = &v38->padding_1;
            v30 = v7 | -0x100 | 1;
        }
        continue;
    }
}
