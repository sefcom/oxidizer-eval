long long uu_cp::parse_path_args::h55a50a93a970390a(struct_0 *a0, struct_1 *a1, struct_3 *a2)
{
    int v0;  // [bp-0xf8], Other Possible Types: unsigned long
    int v1;  // [bp-0xf8]
    unsigned long long v2;  // [sp-0xf0]
    struct struct_2 **v3;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    int v4;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    void* v5;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned long long v6;  // [sp-0xd0]
    char v7;  // [bp-0xc8]
    unsigned long long *v8;  // [sp-0xb0]
    unsigned long long v9;  // [sp-0xa8]
    char v10;  // [bp-0xa0]
    int v11;  // [sp-0x98], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x88]
    struct_0 *v13;  // [sp-0x78]
    unsigned long v14;  // [sp-0x70]
    unsigned long long v15;  // [sp-0x68]
    char v16;  // [bp-0x60]
    char v17;  // [bp-0x50]
    char v18;  // [bp-0x48]
    char v19;  // [bp-0x38]
    struct_0 *v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    int v24;  // xmm0
    int v25;  // xmm1
    int v26;  // xmm2
    int v27;  // xmm0
    unsigned long long v28;  // rax
    unsigned long long *v29;  // rsi
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rax
    int v32;  // xmm0
    int v33;  // xmm0
    int v34;  // ymm0
    int v35;  // ymm0
    int v36;  // xmm0
    int v37;  // ymm0
    unsigned long v38;  // rdx
    struct_4 *v39;  // rax
    unsigned long long v40[3];  // r15
    int v41;  // xmm0
    int v42;  // xmm0

    v21 = a0;
    v22 = a1->field_10;
    if (v22 == 1)
    {
        if (!(a2->field_18 == 0x8000000000000000))
            goto LABEL_502f7a;
        *((char [8])&v8) = a1->padding_8;
        v9 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
        v0 = &g_5b5c90;
        v2 = 1;
        v5 = 0;
        v3 = &v8;
        v4 = 1;
        ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v16, &v0);
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v17);
        v27 = *((int128_t *)&v16);
    }
    else
    {
        if (!v22)
        {
            _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(&v0, "missing file operandmissing destination file operand after extra operand src/uu/cp/src/cp.rs: : warning: source   specified more than once\nwill not overwrite just-created ''", 20);
            v24 = *((int128_t *)&v0);
            v25 = *((int128_t *)&v3);
            v26 = *((int128_t *)&v5);
            *((int128_t *)&a0->field_20) = *((int128_t *)&v7);
            *((void*)&a0->field_10) = v26;
            *((void*)&a0->field_8) = v25;
            *((void*)&a0->field_0) = v24;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hb2e11a2d80af38bc(a1);
            return v21;
        }
        v23 = a2->field_18;
        if (v22 >= 3 && a2->field_42 && v23 == 0x8000000000000000)
        {
            *((char [8])&v8) = a1->padding_8 + 48;
            v9 = _$LT$std..sys..os_str..bytes..Buf$u20$as$u20$core..fmt..Debug$GT$::fmt::h6ef14382c2b9310d;
            v0 = &g_5b5ca0;
            v2 = 1;
            v5 = 0;
            v3 = &v8;
            v4 = 1;
            ::0x4fe000::core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&v18, &v0);
            *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v19);
        }
        else
        {
            if (v23 != 0x8000000000000000)
            {
LABEL_502f7a:
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&v0, &a2->field_18);
                v12 = v3;
                v36 = (int128_t)v1;
                v35 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36;
                *((void*)&v11) = v36;
                if (!(!a2->field_45))
                    goto LABEL_502faf;
            }
            else
            {
                v28 = v22 - 1;
                a1->field_10 = v28;
                v29 = a1->padding_8;
                v30 = v28 * 3;
                v31 = v29[v30];
                v32 = *((int128_t *)&v29[1 + v30]);
                v1 = v32;
                if (v11 == 0x8000000000000000)
                    core::option::unwrap_failed::h0e11329e76906eaa(&g_5b5cb0); /* do not return */
                v11 = v31;
                v33 = (int128_t)v1;
                v35 = (v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v33;
                v11 = v33;
                if (a2->field_45)
                {
LABEL_502faf:
                    v13 = a0;
                    v14 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h629b9e0cc446ffb0(a1);
                    v15 = v38;
                    v39 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f1c76058c483b11(&v14);
                    if (v39)
                    {
                        v40 = v39;
                        do
                        {
                            std::path::Path::components::h4f3217acf0fc8653(&v0, v40[1], v40[2]);
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v8, std::path::Components::as_path::h22183dd583c1f97a(&v0), a2);
                            ::0x4fc400::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(v40);
                            v40[2] = *((long long *)&v10);
                            v41 = *((int128_t *)&v8);
                            v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
                            *((void*)&v40[0]) = v41;
                            v40 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3f1c76058c483b11(&v14);
                        } while (v40);
                    }
                    v21 = v13;
                }
            }
            v3 = a1->field_10;
            v42 = *((int128_t *)&a1->field_0);
            v0 = v42;
            v6 = v12;
            *((int128_t *)&v4) = *((int128_t *)&v11);
            *((void*)&(&v21->field_0)[1]) = v42;
            *((unsigned long long *)((char *)&v21->field_8 + 8)) = v3;
            *((unsigned long *)&v21->field_10) = v4;
            *((unsigned long *)((char *)&v21->field_10 + 8)) = v5;
            v21->field_20 = v6;
            v21->field_0 = 13;
            return v21;
        }
    }
    *((void*)&(&a0->field_0)[1]) = v27;
    a0->field_0 = 4;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hb2e11a2d80af38bc(a1);
    return v21;
}
