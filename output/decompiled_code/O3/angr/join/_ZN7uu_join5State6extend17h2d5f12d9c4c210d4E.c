long long uu_join::State::extend::h2d5f12d9c4c210d4(struct_1 *a0, struct_2 *a1, char *a2)
{
    char v0;  // [sp-0xe9]
    int v1;  // [bp-0xe8], Other Possible Types: char, unsigned long, unsigned long long
    char v2;  // [bp-0xe0], Other Possible Types: unsigned long long
    int v3;  // [bp-0xd8], Other Possible Types: unsigned long
    char v4;  // [bp-0xd0]
    int v5;  // [sp-0xc8]
    unsigned long long v6;  // [sp-0xb0]
    int v7;  // [sp-0xa8]
    unsigned long long v8;  // [sp-0x98]
    unsigned long v9;  // [sp-0x88], Other Possible Types: unsigned long long
    int v10;  // [sp-0x80]
    unsigned long long v11;  // [sp-0x70]
    int v12;  // [sp-0x68]
    unsigned long v13;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x50]
    int v15;  // [sp-0x48]
    struct_1 *v17;  // r14
    unsigned long long v18;  // r13
    unsigned long long v19;  // rax
    int v22;  // ymm0
    int v23;  // ymm1
    int v24;  // ymm2
    int v25;  // xmm0
    int v26;  // xmm0
    int v27;  // xmm0
    int v28;  // xmm0
    void* v29;  // rbp
    void* v30;  // rax
    unsigned long long v31;  // rax
    char *v32;  // rbx
    unsigned long v33;  // rdx
    unsigned long long v35;  // r14
    unsigned long long v36;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    char *v40;  // rbx
    int v41;  // xmm0
    int v42;  // xmm1
    int v43;  // xmm2
    uint128_t *v44;  // r12
    uint128_t *v45;  // rax
    uint128_t *v46;  // rcx
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    struct_0 *v50;  // rax
    int v51;  // xmm0
    int v52;  // xmm1

    v17 = a0;
    v18 = 9223372036854775809;
    uu_join::State::next_line::h31b9c36de926f54c(&v1, a1, a2);
    v19 = v1;
    if (v19 != 9223372036854775809)
    {
        v0 = *(a2);
        v6 = 0x8000000000000000;
        do
        {
            v8 = *((long long *)&v4);
            v25 = *((int128_t *)&v2);
            v7 = v25;
            v26 = v5;
            v15 = v26;
            if (v9 == v6)
            {
                v31 = v6;
                v17->field_0 = v31;
                return v31;
            }
            v9 = v19;
            v11 = v8;
            v27 = v7;
            v10 = v27;
            v28 = v15;
            v12 = v28;
            v29 = uu_join::State::get_current_key::h41ed13e3cd927031(a1);
            v30 = uu_join::Line::get_field::ha4bb61e8b997f700(&v9, a1->field_40);
            if (!v29 || !v30)
            {
                v31 = -(0 < v30);
                if (v29)
                {
                    vvar_407{reg 224} = *((int128_t *)&v9);
                    vvar_408{reg 256} = (int128_t)(&v10)[8];
                    *((void*)&v17->field_20) = v12;
                    *((void*)&v17->field_10) = v52;
                    *((void*)&v17->field_0) = v51;
                    return v31;
                }
            }
            else if (v0)
            {
                v13 = v29;
                v14 = v33;
                v1 = v30;
                v2 = v33;
                v31 = _$LT$uu_join..CaseInsensitiveSlice$u20$as$u20$core..cmp..Ord$GT$::cmp::hd30d09f7a24158f3(&v13, &v1);
            }
            else
            {
                v35 = v33 - v33;
                v38 = memcmp(v29, v30, v36);
                v17 = v17;
                v31 = v38 | -0x100 | v39;
                if (v39 < 0)
                {
                    vvar_414{reg 224} = *((int128_t *)&v9);
                    vvar_415{reg 256} = (int128_t)(&v10)[8];
                    *((void*)&v17->field_20) = v12;
                    *((void*)&v17->field_10) = v52;
                    *((void*)&v17->field_0) = v51;
                    return v31;
                }
            }
            v40 = v32;
            if ((char)v31)
            {
                v51 = *((int128_t *)&v9);
                v52 = (int128_t)(&v10)[8];
                *((void*)&v17->field_20) = v12;
                *((void*)&v17->field_10) = v52;
                *((void*)&v17->field_0) = v51;
                return v31;
            }
            v41 = *((int128_t *)&v9);
            v42 = (int128_t)(&v10)[8];
            v43 = v12;
            v5 = v43;
            v3 = v42;
            v1 = v41;
            v44 = a1->field_10;
            if (v44 == a1->field_0)
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h4f57ccb5df3128b9(a1);
            v45 = a1->field_8;
            v46 = v44 * 48;
            v47 = (int128_t)v1;
            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47;
            v48 = (int128_t)v3;
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
            v49 = v5;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
            *((void*)(v45 + v46 + 32)) = v49;
            *((void*)(v45 + v46 + 16)) = v48;
            *((void*)(v45 + v46)) = v47;
            a1->field_10 = (char *)v44 + 1;
            uu_join::State::next_line::h31b9c36de926f54c(&v1, a1, v40);
            v19 = v1;
        } while (v19 != v18);
    }
    v8 = (long long)(&v3)[8];
    *((int128_t *)&v7) = (int128_t)(&v1)[8];
    v3 = v8;
    v1 = v7;
    v50 = __rust_alloc(24, 8);
    if (v50)
    {
        v50->field_10 = v3;
        v50->field_0 = (int128_t)v1;
        *((struct_0 **)&v17->padding_8[0]) = v50;
        v17->field_10 = &g_4fb048;
        v17->field_0 = v18;
        return &g_4fb048;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
