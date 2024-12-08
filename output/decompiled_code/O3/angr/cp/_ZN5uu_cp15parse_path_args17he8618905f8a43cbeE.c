long long uu_cp::parse_path_args::he8618905f8a43cbe(struct_0 *a0, struct_1 *a1, struct_3 *a2)
{
    int v0;  // [bp-0xe8], Other Possible Types: char, unsigned long long
    unsigned long long v1;  // [sp-0xe0]
    struct struct_2 **v2;  // [bp-0xd8], Other Possible Types: char, unsigned long, unsigned long long
    int v3;  // [sp-0xd0], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0xc8], Other Possible Types: char, unsigned long
    unsigned long long v5;  // [sp-0xc0]
    char v6;  // [bp-0xb8]
    unsigned long long *v7;  // [sp-0xa0], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [sp-0x98]
    char v9;  // [bp-0x90]
    int v10;  // [sp-0x88], Other Possible Types: unsigned long long
    int v11;  // [bp-0x80]
    unsigned long long v12;  // [sp-0x78]
    unsigned long v13;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x68]
    char v15;  // [bp-0x60]
    char v16;  // [bp-0x50]
    char v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rsi
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm2
    unsigned long long *v26;  // rax
    unsigned long long *v27;  // rsi
    unsigned long long *v28;  // rdi
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm0
    int v32;  // ymm0
    int v33;  // ymm0
    int v34;  // xmm0
    int v35;  // ymm0
    unsigned long long v36;  // rdx
    unsigned long long v37[3];  // rax
    int v38;  // xmm0
    int v39;  // xmm0

    v20 = a1->field_10;
    if (!v20)
    {
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::hcb169799d716d029(&v0, "missing file operandsrc/uu/cp/src/cp.rsmissing destination file operand after extra operand : ", 20);
        v22 = *((int128_t *)&v0);
        v23 = *((int128_t *)&v2);
        v24 = *((int128_t *)&v4);
        *((int128_t *)&a0->field_20) = *((int128_t *)&v6);
        *((void*)&a0->field_10) = v24;
        *((void*)&a0->field_8) = v23;
        *((void*)&a0->field_0) = v22;
    }
    else
    {
        v21 = a2->field_18;
        if (v20 != 1 || v21 != 0x8000000000000000)
        {
            if (!(v20 >= 3) || !(a2->field_42) || !(v21 == 0x8000000000000000))
            {
                if (v21 != 0x8000000000000000)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfea6a62ff9bdef3c(&v0, &a2->field_18);
                    v12 = v2;
                    v34 = (int128_t)v0;
                    v33 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v34;
                    v10 = v34;
                    if (!(!a2->field_45))
                        goto LABEL_502677;
                }
                else
                {
                    v26 = v20 - 1;
                    a1->field_10 = v26;
                    v27 = a1->padding_8;
                    v28 = v26 * 3;
                    v29 = *((long long *)((char *)v27 + 0x8 * v28));
                    v30 = *((int128_t *)(8 + (char *)v27 + 0x8 * v28));
                    v0 = v30;
                    if (v10 == 0x8000000000000000)
                        core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                    v10 = v29;
                    v31 = (int128_t)v0;
                    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
                    v11 = v31;
                    if (a2->field_45)
                    {
LABEL_502677:
                        v13 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h35f5d32d99d3114c(a1);
                        v14 = v36;
                        v37 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5569915f91357067(&v13);
                        if (v37)
                        {
                            do
                            {
                                std::path::Path::components::h4f3217acf0fc8653(&v0, v37[1], v37[2]);
                                std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v7, std::path::Components::as_path::h22183dd583c1f97a(&v0), v36);
                                ::0x4fbad0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h9cfa7825114f203e(v37);
                                v37[2] = *((long long *)&v9);
                                v38 = *((int128_t *)&v7);
                                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
                                *((void*)&v37[0]) = v38;
                                v37 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5569915f91357067(&v13);
                            } while (v37);
                        }
                    }
                }
                v2 = a1->field_10;
                v39 = *((int128_t *)&a1->field_0);
                v0 = v39;
                v5 = v12;
                *((int128_t *)&v3) = (int128_t)v10;
                *((void*)&(&a0->field_0)[1]) = v39;
                *((unsigned long long *)((char *)&a0->field_8 + 8)) = v2;
                *((unsigned long *)&a0->field_10) = v3;
                *((unsigned long *)((char *)&a0->field_10 + 8)) = v4;
                a0->field_20 = v5;
                a0->field_0 = 13;
                return a0;
            }
            *((char [8])&v7) = a1->padding_8 + 48;
            v8 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
            v0 = &g_5b55e8;
            v1 = 1;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v17, &v0);
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v18);
        }
        else
        {
            *((char [8])&v7) = a1->padding_8;
            v8 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
            v0 = &g_5b55c0;
            v1 = 1;
            v4 = 0;
            v2 = &v7;
            v3 = 1;
            ::0x4fd6d0::core::option::Option$LT$T$GT$::map_or_else::h9667797c75f2b1f6(&v15, &v0);
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v16);
        }
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v15);
        a0->field_0 = 4;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h630bf45d061bf4d4(a1);
    return a0;
}
