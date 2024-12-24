long long uu_ptx::create_word_set::h489d7533499e0631(struct_2 *a0, struct_1 *a1, struct_0 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
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
    int v19;  // [sp-0x1a0]
    unsigned long long v20;  // [bp-0x198]
    unsigned long long v21;  // [sp-0x190]
    char v22;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x180]
    char v24;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x170]
    char v26;  // [bp-0x168]
    char v27;  // [bp-0x158]
    int v28;  // [bp-0x148], Other Possible Types: char
    int v29;  // [sp-0x138]
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
    unsigned long long v49;  // rcx
    unsigned long long v50;  // r8
    unsigned long long v51;  // r9
    int v52;  // xmm0
    int v53;  // ymm0
    int v54;  // ymm0
    int v55;  // xmm1
    int v56;  // ymm1
    int v57;  // ymm1
    int v58;  // ymm2
    int v59;  // ymm3
    unsigned long long v60;  // rax
    unsigned long long v61[7];  // rdx
    unsigned long long v62[3];  // rax
    int v63;  // ymm1
    unsigned long long v64;  // r14
    unsigned long long v65;  // r12
    unsigned long long v66;  // r15
    int v67;  // xmm0
    int v68;  // xmm0
    int v69;  // xmm0
    int v70;  // xmm1
    int v71;  // xmm2
    int v72;  // xmm3
    unsigned long long v73;  // rbp
    unsigned long long v74;  // rbx
    unsigned long long v75;  // rax
    int v76;  // xmm0
    int v77;  // xmm0
    int v78;  // xmm0
    int v79;  // xmm0
    int v80;  // xmm0
    unsigned long long v81;  // rsi

    regex::regex::string::Regex::new::h45561b8e7c134f32(&v28, a2->field_8, a2->field_10, a3, a4, a5);
    core::result::Result$LT$T$C$E$GT$::unwrap::h083cce3196314b78(&v42, &v28, &g_6ee650);
    regex::regex::string::Regex::new::h45561b8e7c134f32(&v28, a1->field_38, a1->field_40, v49, v50, v51);
    core::result::Result$LT$T$C$E$GT$::unwrap::h083cce3196314b78(&v40, &v28, &g_6ee668);
    v13 = 0;
    v14 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h10a79a7c3fa64251(&v28, a3);
    v47 = *((long long *)&v31);
    v52 = v28;
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52;
    v55 = v29;
    v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55;
    v46 = v55;
    v45 = v52;
    v3 = a1->field_5a;
    v0 = a1->field_5c;
    v2 = a2->field_78;
    v1 = a2->field_79;
    v12 = &a2->padding_18;
    v10 = &a2->padding_18[48];
    while (true)
    {
        v60 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cc07d819c471db6(&v45);
        if (!v60)
        {
            a0->field_10 = v14;
            a0->field_0 = *((int128_t *)&v13);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hb99a2d3144b00412(&v40);
            core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hb99a2d3144b00412(&v42);
            return a0;
        }
        v9 = v60;
        v8 = v61[6];
        v15 = v61[1];
        v16 = v15 + v61[2] * 24;
        v62 = ::0x5b4ca0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha47d32503a861eed(&v15);
        if (v62)
        {
            v6 = 0;
            do
            {
                v64 = v62[1];
                v65 = v62[2];
                regex::regex::string::Regex::find_at::h97a6ac34dba92c9c(&v28, *((long long *)&v40), *((long long *)&v41), v64, v65);
                v66 = (long long)v28;
                v7 = v66;
                if (v7)
                {
                    v66 = (long long)v29;
                    v7 = (long long)(&v29)[8];
                }
                regex_automata::meta::regex::Regex::find_iter::hcdb264a4d3ce34a0(&v17, &v42, v64, v65);
                v35 = *((long long *)&v27);
                v67 = *((int128_t *)&v26);
                v34 = v67;
                v68 = *((int128_t *)&v24);
                v33 = v68;
                v69 = v17;
                v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69;
                v70 = *((int128_t *)&v18);
                v57 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70;
                v71 = *((int128_t *)&v20);
                v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v71;
                v72 = *((int128_t *)&v22);
                v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
                v32 = v72;
                v31 = v71;
                v29 = v70;
                v28 = v69;
                v36 = v64;
                v37 = v65;
                v11 = v8 + v6;
                while (true)
                {
                    regex_automata::util::iter::Searcher::advance::h51d2f397b093ef8c(&v17, &v31, v35, &v28);
                    if (!(long long)v17)
                        break;
                    v73 = (long long)(&v17)[8];
                    v74 = v18;
                    if (!(!v3) && !(v73 != v66) && !(!::0x5b1690::core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(v74, v7)))
                        continue;
                    v75 = ::0x5b3250::core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(v73, v74, v64, v65);
                    if (!v75)
                        core::str::slice_error_fail::h5dbb61534404fe7e(); /* do not return */
                    ::0x5b3f20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd078b50c69433b57(&v17, v75, v61);
                    v5 = v18;
                    v76 = v17;
                    v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
                    v4 = v76;
                    if (v2 && !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h31a50030cd4e1a53(v12, &v4) || v1 && hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h31a50030cd4e1a53(v10, &v4))
                    {
                        ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v4);
                    }
                    else
                    {
                        if (v0)
                        {
                            alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&v17, (long long)(&v4)[8], v5);
                            ::0x5b1db0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hf3561d1d9270e891(&v4);
                            v5 = v18;
                            v77 = v17;
                            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                            v4 = v77;
                        }
                        v39 = v5;
                        v78 = v4;
                        v38 = v78;
                        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v43, v9);
                        v18 = v39;
                        v79 = v38;
                        v17 = v79;
                        v22 = v11;
                        v23 = v6;
                        v24 = v73;
                        v25 = v74;
                        v21 = *((long long *)&v44);
                        v80 = *((int128_t *)&v43);
                        v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
                        v19 = v80;
                        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h74f6d47064b1d912(&v13, &v17);
                    }
                }
                core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::hd4a68c3c6ea49715(&v28, v81, v61);
                v6 += 1;
                v62 = ::0x5b4ca0::_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha47d32503a861eed(&v15);
            } while (v62);
        }
    }
}
