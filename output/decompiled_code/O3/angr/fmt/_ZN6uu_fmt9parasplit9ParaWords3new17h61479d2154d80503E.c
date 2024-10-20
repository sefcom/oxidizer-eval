double uu_fmt::parasplit::ParaWords::new::h61479d2154d80503(long long a0, long long a1, long long a2)
{
    void* v0;  // [sp-0x118]
    uint128_t *v1;  // [sp-0x110]
    void* v2;  // [sp-0x108], Other Possible Types: unsigned long, unsigned long long
    char *v3;  // [sp-0xf0], Other Possible Types: char [74]
    unsigned long long v4;  // [sp-0xe8]
    unsigned long long v5;  // [sp-0xe0]
    unsigned long long v6;  // [sp-0xd8]
    void* v7;  // [sp-0xd0]
    char v8;  // [sp-0xc8]
    struct_0 *v9;  // [sp-0xc0]
    unsigned long long v10;  // [sp-0xb8]
    char v11;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v12[74];  // [sp-0xa8]
    struct struct_1 **v13;  // [bp-0xa0], Other Possible Types: char
    char v14;  // [bp-0x90]
    char v15;  // [sp-0x77]
    char v16;  // [sp-0x70]
    char v17;  // [sp-0x40]
    char v18;  // [sp-0x37]
    unsigned long long v20;  // rax
    struct_0 *v21;  // rax
    char *v22;  // rdx
    char *v23;  // rdi
    unsigned long long v24;  // r14
    char v25[74];  // 4096
    struct_0 *v26;  // rax
    unsigned long v33;  // rdx
    unsigned long long v34;  // r14
    uint128_t *v35;  // r15
    int v36;  // ymm0
    int v37;  // ymm1
    int v38;  // ymm2
    int v39;  // ymm3
    uint128_t *v40;  // rax
    int v41;  // xmm0
    int v42;  // xmm1
    int v43;  // xmm2
    int v44;  // xmm3
    unsigned long long v45;  // rcx
    int v46;  // xmm0

    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (a2->field_68)
    {
        v9 = a2->field_8;
        v10 = &v9[a2->field_10];
        v15 = 2;
        v18 = 2;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h8b552e5e741d806c(&v0, &v9);
        a0->field_20 = a2;
        vvar_337{reg 224} = *((int128_t *)&v0);
        a0->field_10 = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v46;
        return (unsigned long long)(v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | vvar_337{reg 224});
    }
    v20 = a2->field_10;
    if (!(!a1[72]) || !(!a1[73]))
    {
        if (!v20)
            goto LABEL_48a96d;
        v26 = a2->field_8;
        v22 = a2->field_50;
        v23 = v26->field_8;
        v24 = v26->field_10;
        if (!v22)
            goto LABEL_48a80a;
        if (v24 <= v22)
        {
            if (!(v24 == v22))
                goto LABEL_48a987;
            goto LABEL_48a80a;
        }
        else
        {
            if (!(*((char *)(v23 + v22)) <= 191))
                goto LABEL_48a80a;
LABEL_48a987:
        }
    }
    else
    {
        if (!v20)
        {
LABEL_48a96d:
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        v21 = a2->field_8;
        v22 = a2->field_60;
        v23 = v21->field_8;
        v24 = v21->field_10;
        if (!v22)
            goto LABEL_48a80a;
        if (v24 > v22)
        {
            if (!(*((char *)(v23 + v22)) <= 191))
                goto LABEL_48a80a;
LABEL_48a7f8:
        }
        else
        {
            if (!(v24 == v22))
                goto LABEL_48a7f8;
LABEL_48a80a:
            *((char *[74])&v3[0]) = v25;
            v4 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h8fb4f0878766f48c(v23 + v22, v6);
            v5 = v33;
            v6 = v24 - v22;
            v7 = 0;
            v8 = 0;
            _$LT$uu_fmt..parasplit..WordSplit$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8449926e1b0e1af(&v9, v3);
            if ((int)v9 != 2)
            {
                v34 = v2;
                v35 = v34 * 64;
                do
                {
                    if (v34 == v0)
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::h0561a566b8c03ef1(&v0, v34, 1);
                } while ((v40 = v1, v41 = *((int128_t *)&v9), v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41, v42 = *((int128_t *)&v11), v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42, v43 = *((int128_t *)&v13), v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v43, v44 = *((int128_t *)&v14), v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v44, *((void*)(v40 + v35 + 48)) = v44, *((void*)(v40 + v35 + 32)) = v43, *((void*)(v40 + v35 + 16)) = v42, *((void*)(v40 + v35)) = v41, v34 += 1, v2 = v34, _$LT$uu_fmt..parasplit..WordSplit$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8449926e1b0e1af(&v9, v3), v35 += 64, (int)v9 != 2));
            }
            v45 = a2->field_10;
            if (v45 <= 1)
            {
                a0->field_20 = a2;
                v46 = *((int128_t *)&v0);
                a0->field_10 = *((int128_t *)&v2);
                *((void*)&a0->field_0) = v46;
                return (unsigned long long)(v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v46);
            }
            v3 = &a2->field_60->field_0;
            v9 = a2->field_8;
            v10 = &v9[v45];
            v11 = 1;
            *((char *[74])&v12[0]) = a1;
            v13 = &v3[0];
            v16 = 2;
            v17 = 2;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4db2c0128355bad6(&v0, &v9);
        }
    }
    core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
}
