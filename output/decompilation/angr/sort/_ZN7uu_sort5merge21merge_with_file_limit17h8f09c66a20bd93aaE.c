long long uu_sort::merge::merge_with_file_limit(uint128_t a0[3], struct_0 *a1, uint128_t a2[2], unsigned long long a3)
{
    struct_0 *v0;  // [bp-0x380]
    void* v1;  // [bp-0x378], Other Possible Types: int
    unsigned long long v2;  // [bp-0x378]
    int v3;  // [bp-0x378]
    int v4;  // [bp-0x378]
    int v5;  // [bp-0x378]
    unsigned long long v6;  // [bp-0x370]
    int v7;  // [bp-0x368]
    unsigned long long v8;  // [bp-0x360]
    int v9;  // [bp-0x358], Other Possible Types: unsigned long long
    int v10;  // [bp-0x358]
    int v11;  // [bp-0x358]
    unsigned long long v13;  // [bp-0x350]
    unsigned long long v14;  // [bp-0x348]
    int v15;  // [bp-0x348]
    unsigned long long v16;  // [bp-0x340]
    int v17;  // [bp-0x338]
    int v18;  // [bp-0x330]
    unsigned long long v19;  // [sp-0x320]
    unsigned long long v20;  // [sp-0x318]
    void* v21;  // [bp-0x308]
    unsigned long long v22;  // [sp-0x300]
    void* v23;  // [sp-0x2f8]
    unsigned long long v24;  // [sp-0x2e0]
    unsigned long long v25;  // [sp-0x2d8]
    unsigned long long v26;  // [bp-0x2d0]
    int v27;  // [bp-0x2c8]
    int v29;  // [bp-0x2b8]
    unsigned long long v30;  // [bp-0x2b0]
    int v31;  // [bp-0x2a8], Other Possible Types: void*
    unsigned long long v32;  // [bp-0x2a8]
    unsigned long long v33;  // [sp-0x2a0]
    int v34;  // [bp-0x298], Other Possible Types: unsigned long long
    int v35;  // [bp-0x290]
    int v37;  // [bp-0x280]
    int v39;  // [bp-0x270]
    int v41;  // [bp-0x260]
    int v42;  // [bp-0x260]
    int v43;  // [bp-0x250]
    int v45;  // [bp-0x238]
    int v47;  // [bp-0x228]
    int v48;  // [bp-0x218]
    void* v49;  // [bp-0x200]
    unsigned long long v50;  // [bp-0x1f8]
    void* v51;  // [bp-0x1f0]
    unsigned long long v52;  // [bp-0x1e8]
    unsigned long long v53;  // [bp-0x1e0]
    int v54;  // [bp-0x1d8]
    unsigned long v55;  // [bp-0x1c8]
    unsigned long long v56;  // [bp-0x1c0]
    unsigned long long v57;  // [bp-0x1b8]
    unsigned long long v58;  // [bp-0x1b0]
    unsigned long long v59;  // [bp-0x1a8]
    struct struct_1 v63[16];  // [bp-0x188]
    struct struct_1 v64[16];  // [bp-0x188]
    int v65;  // [bp-0x178]
    unsigned long long v66;  // [bp-0x168]
    unsigned long long v67;  // [bp-0x160]
    int v68;  // [bp-0x158]
    int v72;  // [bp-0x128]
    int v73;  // [bp-0x118]
    char v74;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v75;  // [bp-0xf8]
    unsigned long long v76;  // [bp-0xf0]
    int v77;  // [bp-0xe8]
    int v78;  // [bp-0xd8]
    int v79;  // [bp-0xc8]
    char v80;  // [bp-0xb8]
    char v81;  // [bp-0xa8]
    unsigned long long v82;  // [bp-0x98]
    unsigned long long v83;  // [bp-0x90]
    unsigned long long v84;  // [bp-0x88]
    int v85;  // [bp-0x80]
    int v86;  // [bp-0x70]
    int v87;  // [bp-0x60]
    char v88;  // [bp-0x50]
    char v89;  // [bp-0x40]
    struct_0 *v91;  // r13
    unsigned long long v92;  // rax
    unsigned long long v93;  // rbx
    uint128_t v94[3];  // rax
    int v95;  // ymm0
    uint256_t v96;  // ymm0
    char *v97;  // rbp
    char *v98;  // r14
    int v99;  // xmm0
    unsigned long long v100;  // r13
    unsigned long long v101;  // rbp
    int v102;  // xmm0
    int v103;  // xmm0
    int v104;  // xmm1
    int v105;  // xmm2
    int v106;  // xmm0
    unsigned long long v107;  // rbp
    int v108;  // xmm0
    uint256_t v109;  // ymm0
    int v110;  // xmm0
    int v111;  // xmm0
    int v112;  // xmm1
    int v113;  // xmm2
    int v114;  // xmm0
    int v115;  // xmm1
    unsigned long long v127;  // rax
    int v128;  // xmm0
    int v129;  // xmm0
    unsigned long long v130;  // rax
    uint128_t v131[3];  // rax
    int v132;  // xmm0
    int v133;  // xmm1
    int v134;  // xmm0
    unsigned long long v135;  // [bp-0x2c0]
    unsigned long long v137;  // [bp-0x278]

    v91 = a1;
    v92 = a0.len();
    v0 = a1;
    if (v92 > a1->field_70)
    {
        v55 = &a1->field_70;
        v49 = 0;
        v50 = 8;
        v51 = 0;
        v21 = 0;
        v22 = 8;
        v23 = 0;
        v94 = a0;
        v96 = v95 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94[0];
        *((uint128_t *)&v48) = v94[2];
        *((uint128_t *)&v47) = v94[1];
        *((uint128_t *)&v45) = v94[0];
        v97 = &v63;
        v98 = &(char)v45;
        v56 = 9223372036854775809;
        while (true)
        {
            do
            {
                v97.next(v98);
                if (*((long long *)&v64[0]) == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&(char)v45);
                    (unsigned long long)v31.into_iter(&v49);
                    v127 = alloc::boxed::Box<T>::new();
                    v128 = *((int128_t *)&v32);
                    *((int128_t *)&v7) = *((int128_t *)&v34);
                    v1 = v128;
                    v9 = v127;
                    v13 = &g_670f98;
                    v129 = a2[0];
                    *((uint128_t *)&v34) = a2[1];
                    v31 = v129;
                    v130 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v1, v91, &(unsigned long long)v31, a3);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v21);
                    return v130;
                }
                v99 = v64;
                v96 = v96 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99;
                v73 = v65;
                v72 = v99;
                v21.push(&v72);
            } while (0 < v93);
            v31 = 0;
            if (v31 != v93)
            {
                v1 = 0;
                core::panicking::assert_failed(0, &v31, v55, &v1, &g_670ec8); /* do not return */
            }
            v24.into_iter(&v21);
            uu_sort::merge::merge_without_limit(&(unsigned long long)v5, &v24, v91);
            v100 = v6;
            v101 = (long long)v7;
            if (v2 == 2)
                break;
            v102 = *((int128_t *)&v19);
            v43 = v102;
            v103 = *((int128_t *)&v8);
            v104 = *((int128_t *)&v13);
            v105 = *((int128_t *)&v16);
            v41 = v18;
            v39 = v105;
            v37 = v104;
            v35 = v103;
            v32 = v2;
            v33 = v100;
            v34 = v101;
            v21 = 0;
            v22 = 8;
            v23 = 0;
            v52.next_file(a3);
            if (v53 == 0x8000000000000000)
            {
                v100 = (long long)v54;
LABEL_51adba:
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v32);
                break;
            }
            v106 = v54;
            v66 = v52;
            v67 = v53;
            v68 = v106;
            (unsigned long long)v5.create(&v66);
            v100 = v6;
            v107 = (long long)v7;
            if (v2 == 0x8000000000000000)
                goto LABEL_51adba;
            v108 = *((int128_t *)&v8);
            *((int128_t *)&v29) = *((int128_t *)&v13);
            v27 = v108;
            v24 = v2;
            v25 = v100;
            v26 = v107;
            v20 = (long long)(&v43)[8];
            v109 = ((((v96 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v103) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v41)[8];
            memcpy(&(char)v18, &(unsigned long long)v42, 16);
            v110 = (int128_t)(&v39)[8];
            v17 = v110;
            v111 = *((int128_t *)&v32);
            v112 = *((int128_t *)&v34);
            v113 = (int128_t)(&v35)[8];
            *((int128_t *)&v15) = *((int128_t *)&v137);
            v10 = v113;
            v7 = v112;
            v3 = v111;
            v100 = (unsigned long long)v5.write_all_to(v0, v24.as_write());
            if (!v100)
            {
                v14 = v30;
                v114 = *((int128_t *)&v24);
                v96 = ((v109 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114;
                v115 = *((int128_t *)&v26);
                *((int128_t *)&v11) = *((int128_t *)&v135);
                v7 = v115;
                v4 = v114;
                v52.finished_writing(&(unsigned long long)v5);
                v100 = v53;
                if (v52 == 0x8000000000000000)
                    goto LABEL_51addc;
                v57 = v52;
                v58 = v100;
                v59 = (long long)v54;
                v49.push(&v57, &g_670ee0);
                v91 = v0;
            }
            else
            {
                ::0x515300::core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v24);
LABEL_51addc:
                break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&(char)v45);
        core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v21);
        ::0x515890::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v49);
    }
    else
    {
        v131 = a0;
        v132 = v131[0];
        v133 = v131[1];
        *((uint128_t *)&v9) = v131[2];
        v7 = v133;
        v1 = v132;
        uu_sort::merge::merge_without_limit(&v74, &(char)v1, a1);
        v100 = v75;
        if (v74 != 2)
        {
            memcpy(&v89, &v81, 16);
            memcpy(&v88, &v80, 16);
            v87 = v79;
            v86 = v78;
            v85 = v77;
            v82 = v74;
            v83 = v100;
            v84 = v76;
            v134 = a2[0];
            *((uint128_t *)&v7) = a2[1];
            v1 = v134;
            return v82.write_all(v0, &(char)v1);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a2);
    return v100;
}
