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
    unsigned long v15;  // [sp-0x1c8]
    unsigned long long v16;  // [sp-0x1c0]
    int v17;  // [sp-0x1b8]
    int v18;  // [sp-0x1a8], Other Possible Types: char, unsigned long
    unsigned long long v19;  // [sp-0x190]
    char v20;  // [bp-0x188], Other Possible Types: unsigned long long
    char v21;  // [bp-0x178], Other Possible Types: unsigned long long
    char v22;  // [bp-0x168]
    char v23;  // [bp-0x158]
    int v24;  // [bp-0x148], Other Possible Types: char
    int v25;  // [sp-0x138]
    int v27;  // [sp-0x128], Other Possible Types: char
    int v28;  // [sp-0x118]
    int v29;  // [sp-0x108]
    int v30;  // [sp-0xf8]
    unsigned long long v31;  // [sp-0xe8]
    unsigned long long v32;  // [sp-0xe0]
    unsigned long long v33;  // [sp-0xd8]
    int v34;  // [sp-0xc8]
    unsigned long long v35;  // [sp-0xb8]
    char v36;  // [bp-0xb0]
    char v37;  // [bp-0xa8]
    char v38;  // [bp-0x90]
    char v39;  // [bp-0x70]
    char v40;  // [bp-0x60]
    int v41;  // [sp-0x58]
    int v42;  // [sp-0x48]
    unsigned long long v43;  // [sp-0x38]
    int v45;  // xmm0
    int v46;  // ymm0
    int v47;  // ymm0
    int v48;  // xmm1
    int v49;  // ymm1
    int v50;  // ymm2
    int v51;  // ymm3
    unsigned long long v52;  // rax
    unsigned long long v53[7];  // rdx
    unsigned long long v54[3];  // rax
    int v55;  // ymm1
    unsigned long long v56;  // r14
    unsigned long long v57;  // r12
    unsigned long long v58;  // r15
    int v59;  // xmm0
    int v60;  // xmm0
    int v61;  // xmm0
    int v62;  // xmm1
    int v63;  // xmm2
    int v64;  // xmm3
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rbx
    unsigned long long v67;  // rax
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm0
    int v71;  // xmm0
    int v72;  // xmm0

    regex::regex::string::Regex::new::h2b022f3b326b0361(&v24, a2->field_8, a2->field_10);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v38, &v24, &g_6edd88);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&v24, a1->field_38, a1->field_40);
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&v36, &v24, &g_6edda0);
    v13 = 0;
    v14 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h033c4715d4164856(&v24, a3);
    v43 = *((long long *)&v27);
    v45 = v24;
    v47 = v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v45;
    v48 = v25;
    v55 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48;
    v42 = v48;
    v41 = v45;
    v3 = a1->field_5a;
    v0 = a1->field_5c;
    v2 = a2->field_78;
    v1 = a2->field_79;
    v12 = &a2->padding_18;
    v10 = &a2->padding_18[48];
    while (true)
    {
        v52 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf25f5bee2ea9502(&v41);
        if (!v52)
        {
            a0->field_10 = v14;
            a0->field_0 = *((int128_t *)&v13);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v36);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&v38);
            return a0;
        }
        v9 = v52;
        v8 = v53[6];
        v15 = v53[1];
        v16 = v15 + v53[2] * 24;
        v54 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&v15);
        if (v54)
        {
            v6 = 0;
            do
            {
                v56 = v54[1];
                v57 = v54[2];
                regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&v24, *((long long *)&v36), *((long long *)&v37), v56, v57);
                v58 = (long long)v24;
                v7 = v58;
                if (v7)
                {
                    v58 = (long long)v25;
                    v7 = (long long)(&v25)[8];
                }
                regex_automata::meta::regex::Regex::find_iter::h9e67946da93e5169(&v17, &v38, v56, v57);
                v31 = *((long long *)&v23);
                v59 = *((int128_t *)&v22);
                v30 = v59;
                v60 = *((int128_t *)&v21);
                v29 = v60;
                v61 = v17;
                v47 = ((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                v62 = (int128_t)v18;
                v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                v63 = *((int128_t *)&v18);
                v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v63;
                v64 = *((int128_t *)&v20);
                v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v64;
                v28 = v64;
                v27 = v63;
                v25 = v62;
                v24 = v61;
                v32 = v56;
                v33 = v57;
                v11 = v8 + v6;
                while (true)
                {
                    regex_automata::util::iter::Searcher::advance::hf2daab265d806bac(&v17, &v27, v31, &v24);
                    if (!(long long)v17)
                        break;
                    v65 = (long long)(&v17)[8];
                    v66 = v18;
                    if (!(!v3 || v65 != v58 || !::0x5b1c10::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v66, v7)))
                        continue;
                    v67 = ::0x5b37d0::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v65, v66, v56, v57);
                    if (!v67)
                        core::str::slice_error_fail::h5dbb61534404fe7e(v56, v57, v65, v66, &g_6eddb8); /* do not return */
                    ::0x5b44a0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&v17, v67, a2);
                    v5 = v18;
                    v68 = v17;
                    v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68;
                    v4 = v68;
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
                            v69 = v17;
                            v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                            v4 = v69;
                        }
                        v35 = v5;
                        v70 = v4;
                        v34 = v70;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v39, v9);
                        v18 = v35;
                        v71 = v34;
                        v17 = v71;
                        v20 = v11;
                        v20 = v6;
                        v21 = v65;
                        v21 = v66;
                        v19 = *((long long *)&v40);
                        v72 = *((int128_t *)&v39);
                        v47 = ((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                        v18 = v72;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h814780906c3007c3(&v13, &v17);
                    }
                }
                core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h0da4c5b7d9432e00(&v24);
                v6 += 1;
                v54 = ::0x5b5220::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&v15);
            } while (v54);
        }
    }
}
