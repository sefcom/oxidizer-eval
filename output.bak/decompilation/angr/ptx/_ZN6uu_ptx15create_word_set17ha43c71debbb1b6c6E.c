long long uu_ptx::create_word_set::ha43c71debbb1b6c6(struct_0 *a0, struct_2 *a1, struct_1 *a2, unsigned long long a3)
{
    char v0;  // [sp-0x23c]
    char v1;  // [sp-0x23b]
    char v2;  // [sp-0x23a]
    char v3;  // [sp-0x239]
    int v4;  // [sp-0x238]
    unsigned long long v5;  // [sp-0x228]
    void* v6;  // [sp-0x220]
    unsigned long long v7;  // [sp-0x218]
    unsigned long long v8;  // [sp-0x208]
    unsigned long long v9;  // [sp-0x200]
    unsigned long long v10;  // [sp-0x1f8]
    unsigned long long v11;  // [sp-0x1f0]
    unsigned long long v12;  // [sp-0x1e8]
    void* v13;  // [sp-0x1e0]
    void* v14;  // [sp-0x1d0]
    unsigned long v15;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x1c0]
    int v17;  // [sp-0x1b8]
    unsigned long v18;  // [sp-0x1a8], Other Possible Types: unsigned long long
    int v19;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v21;  // [sp-0x190]
    char v22;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x180]
    unsigned long v24;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x170]
    char v26;  // [bp-0x168]
    char v27;  // [bp-0x158]
    int v28;  // [bp-0x148], Other Possible Types: char
    int v29;  // [sp-0x138]
    char v30;  // [bp-0x130]
    int v31;  // [bp-0x128], Other Possible Types: char
    int v32;  // [sp-0x118]
    int v33;  // [sp-0x108]
    int v34;  // [sp-0xf8]
    unsigned long long v35;  // [sp-0xe8]
    unsigned long long v36;  // [sp-0xe0]
    unsigned long long v37;  // [sp-0xd8]
    int v38;  // [sp-0xc8]
    unsigned long long v39;  // [sp-0xb8]
    char v40;  // [bp-0xb0]
    char v41;  // [bp-0xa8]
    char v42;  // [bp-0x90]
    char v43;  // [bp-0x70]
    char v44;  // [bp-0x60]
    int v45;  // [sp-0x58]
    int v46;  // [sp-0x48]
    unsigned long long v47;  // [sp-0x38]
    int v49;  // xmm0
    int v50;  // ymm0
    int v51;  // ymm0
    int v52;  // xmm1
    int v53;  // ymm1
    int v54;  // ymm1
    int v55;  // ymm2
    int v56;  // ymm3
    unsigned long long v57;  // rax
    unsigned long long v58[7];  // rdx
    unsigned long long v59[3];  // rax
    unsigned long long v60;  // r14
    unsigned long long v61;  // r12
    unsigned long long v62;  // r15
    int v63;  // xmm0
    int v64;  // xmm0
    int v65;  // xmm0
    int v66;  // xmm1
    int v67;  // xmm2
    int v68;  // xmm3
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rbx
    unsigned long long v71;  // rax
    int v72;  // xmm0
    int v73;  // xmm0
    int v74;  // xmm0
    int v75;  // xmm0
    int v76;  // xmm0

    regex::regex::string::Regex::new::h2b022f3b326b0361(&v28, a2->field_8, a2->field_10);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v42, &v28, &g_6edd88);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v28, a1->field_38, a1->field_40);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v40, &v28, &g_6edda0);
    v13 = 0;
    v14 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h033c4715d4164856(&v28, a3);
    v47 = *((long long *)&v31);
    v49 = v28;
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49;
    v52 = v29;
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v46 = v52;
    v45 = v49;
    v3 = a1->field_5a;
    v0 = a1->field_5c;
    v2 = a2->field_78;
    v1 = a2->field_79;
    v12 = &a2->padding_18;
    v10 = &a2->padding_18[48];
    while (true)
    {
        v57 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf25f5bee2ea9502(&v45);
        if (!v57)
        {
            a0->field_10 = v14;
            a0->field_0 = *((int128_t *)&v13);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v40);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v42);
            return a0;
        }
        v9 = v57;
        v8 = v58[6];
        v15 = v58[1];
        v16 = v15 + v58[2] * 24;
        v59 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&v15);
        if (v59)
        {
            v6 = 0;
            do
            {
                v60 = v59[1];
                v61 = v59[2];
                regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&v28, *((long long *)&v40), *((long long *)&v41), v60, v61);
                v62 = (long long)v28;
                v7 = v62;
                if (v7)
                {
                    v62 = (long long)v29;
                    v7 = *((long long *)&v30);
                }
                regex_automata::meta::regex::Regex::find_iter::h9e67946da93e5169(&v17, &v42, v60, v61);
                v35 = *((long long *)&v27);
                v63 = *((int128_t *)&v26);
                v34 = v63;
                v64 = *((int128_t *)&v24);
                v33 = v64;
                v65 = v17;
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v65;
                v66 = *((int128_t *)&v18);
                v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v66;
                v67 = *((int128_t *)&(&v19)[1]);
                v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67;
                v68 = *((int128_t *)&v22);
                v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                v32 = v68;
                v31 = v67;
                v29 = v66;
                v28 = v65;
                v36 = v60;
                v37 = v61;
                v11 = v8 + v6;
                while (true)
                {
                    regex_automata::util::iter::Searcher::advance::hf2daab265d806bac(&v17, &v31, v35, &v28);
                    if (!(long long)v17)
                        break;
                    v69 = (long long)(&v17)[8];
                    v70 = v18;
                    if (!(!v3) && !(v69 != v62) && !(!::0x5b1c10::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v70, v7)))
                        continue;
                    v71 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v69, v70, v60, v61);
                    if (!v71)
                        core::str::slice_error_fail::h5dbb61534404fe7e(v60, v61, v69, v70, &g_6eddb8); /* do not return */
                    ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v17, v71, v58);
                    v5 = v18;
                    v72 = v17;
                    v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                    v4 = v72;
                    if (v2 && !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(v12, &v4) || v1 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(v10, &v4))
                    {
                        ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v4);
                    }
                    else
                    {
                        if (v0)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v17, (long long)(&v4)[8], v5);
                            ::0x5b2330::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&v4);
                            v5 = v18;
                            v73 = v17;
                            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73;
                            v4 = v73;
                        }
                        v39 = v5;
                        v74 = v4;
                        v38 = v74;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v9);
                        v18 = v39;
                        v75 = v38;
                        v17 = v75;
                        v22 = v11;
                        v23 = v6;
                        v24 = v69;
                        v25 = v70;
                        v21 = *((long long *)&v44);
                        v76 = *((int128_t *)&v43);
                        v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                        v19 = v76;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h814780906c3007c3(&v13, &v17);
                    }
                }
                core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h0da4c5b7d9432e00();
                v6 += 1;
                v59 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&v15);
            } while (v59);
        }
    }
}
