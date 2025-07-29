long long uu_sort::merge::merge_with_file_limit(uint128_t a0[3], unsigned long long a1[15], uint128_t a2[2], unsigned long long a3)
{
    void* v0;  // [bp-0x468], Other Possible Types: int
    unsigned long long v2;  // [bp-0x468]
    int v3;  // [bp-0x468]
    int v4;  // [bp-0x468]
    unsigned long long v5;  // [bp-0x460]
    int v6;  // [bp-0x458], Other Possible Types: char
    unsigned long long v7;  // [bp-0x450]
    int v8;  // [bp-0x448], Other Possible Types: unsigned long long
    int v9;  // [bp-0x448]
    int v10;  // [bp-0x448]
    unsigned long long v11;  // [bp-0x440]
    int v12;  // [bp-0x438]
    unsigned long long v13;  // [bp-0x430]
    int v14;  // [bp-0x428]
    int v15;  // [bp-0x420]
    unsigned long long v16;  // [bp-0x410]
    unsigned long long v17;  // [bp-0x408]
    int v18;  // [bp-0x408]
    int v19;  // [bp-0x400]
    void* v20;  // [bp-0x3e8]
    unsigned long long v21;  // [sp-0x3e0]
    void* v22;  // [sp-0x3d8]
    void* v23;  // [bp-0x3c8]
    int v24;  // [bp-0x3b8], Other Possible Types: void*
    unsigned long long v25;  // [bp-0x3b8]
    unsigned long long v26;  // [bp-0x3b0]
    int v27;  // [bp-0x3a8], Other Possible Types: unsigned long long
    int v29;  // [bp-0x3a0]
    int v31;  // [bp-0x390]
    int v33;  // [bp-0x380]
    int v35;  // [bp-0x370]
    int v36;  // [bp-0x368]
    unsigned long long v37;  // [bp-0x358]
    unsigned long long v38;  // [bp-0x350]
    unsigned long v39;  // [bp-0x340]
    void* v40;  // [bp-0x338]
    unsigned long long v41;  // [bp-0x330]
    void* v42;  // [bp-0x328]
    unsigned long long v43;  // [bp-0x320]
    unsigned long long v44;  // [bp-0x318]
    unsigned long long v45;  // [bp-0x310]
    int v47;  // [bp-0x308]
    int v49;  // [bp-0x2f8]
    int v51;  // [bp-0x2e8]
    int v53;  // [bp-0x2d8]
    int v54;  // [bp-0x2c8]
    unsigned long long v55;  // [bp-0x2c0]
    unsigned long v56;  // [bp-0x2b8]
    unsigned long long v57;  // [bp-0x2b0]
    unsigned long long v58;  // [bp-0x2a8]
    unsigned long long v60;  // [bp-0x298]
    char v62;  // [bp-0x288]
    int v64;  // [bp-0x278]
    int v65;  // [bp-0x268]
    unsigned long long v66;  // [bp-0x258]
    unsigned long long v67;  // [bp-0x250]
    unsigned long long v68;  // [bp-0x248]
    int v69;  // [bp-0x240]
    unsigned long long v70;  // [bp-0x230]
    int v71;  // [bp-0x228]
    int v72;  // [bp-0x218]
    int v73;  // [bp-0x208]
    unsigned long long v74;  // [bp-0x1f8]
    unsigned long long v75;  // [bp-0x1f0]
    int v76;  // [bp-0x1e8]
    unsigned long long v85;  // [bp-0x188]
    unsigned long long v86;  // [bp-0x180]
    unsigned long long v87;  // [bp-0x178]
    int v88;  // [bp-0x170]
    unsigned long long v89;  // [bp-0x160]
    char v90;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v91;  // [bp-0x150]
    unsigned long long v92;  // [bp-0x148]
    int v93;  // [bp-0x140]
    int v94;  // [bp-0x130]
    int v95;  // [bp-0x120]
    char v96;  // [bp-0x110]
    char v97;  // [bp-0x100]
    unsigned long long v98;  // [bp-0xf0]
    unsigned long long v99;  // [bp-0xe8]
    unsigned long long v100;  // [bp-0xe0]
    int v101;  // [bp-0xd8]
    int v102;  // [bp-0xc8]
    int v103;  // [bp-0xb8]
    char v104;  // [bp-0xa8]
    char v105;  // [bp-0x98]
    char v106;  // [bp-0x88]
    char v107;  // [bp-0x78]
    char v108;  // [bp-0x68]
    int v109;  // [bp-0x58]
    int v110;  // [bp-0x48]
    unsigned long long v112;  // rax
    unsigned long long v113;  // rbx
    uint128_t v114[3];  // rax
    int v115;  // ymm0
    uint256_t v116;  // ymm0
    unsigned long long v117[15];  // 4096
    int v118;  // xmm0
    unsigned long long v119;  // r13
    unsigned long long v120;  // rbp
    int v121;  // xmm0
    int v122;  // xmm0
    int v123;  // xmm1
    int v124;  // xmm2
    int v125;  // xmm0
    unsigned long long v126;  // rbp
    int v127;  // xmm0
    int v128;  // xmm0
    int v129;  // xmm1
    int v130;  // xmm2
    uint256_t v131;  // ymm0
    int v132;  // xmm0
    int v133;  // xmm0
    int v134;  // xmm1
    int v135;  // xmm2
    int v136;  // xmm0
    int v137;  // xmm0
    int v138;  // xmm0
    int v139;  // xmm1
    int v140;  // xmm2
    int v141;  // xmm0
    unsigned long long v156;  // rax
    int v157;  // xmm0
    int v158;  // xmm0
    unsigned long long v159;  // rax
    char v160;  // r14b
    uint128_t v161[3];  // rax
    int v162;  // xmm0
    int v163;  // xmm1
    int v164;  // xmm0
    unsigned long long v167;  // [bp-0x388]
    unsigned long long v170;  // [bp-0x2f0]
    unsigned long long v172;  // [bp-0x2d0]

    v112 = a0.len();
    if (v112 > a1[14])
    {
        v40 = 0;
        v41 = 8;
        v42 = 0;
        v20 = 0;
        v21 = 8;
        v22 = 0;
        v114 = a0;
        v116 = v115 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v114[0];
        *((uint128_t *)&v73) = v114[2];
        *((uint128_t *)&v72) = v114[1];
        *((uint128_t *)&v71) = v114[0];
        v23 = 0;
        if (!((char)(((0 ^ a1[6]) & (0 ^ -(a1[6]))) >> 63)))
            v23 = a1[7];
        v56 = &a1[14];
        v39 = a1[8];
        v57 = 9223372036854775809;
        v117 = a1;
        while (true)
        {
            do
            {
                v58.next(&v71);
                if (v58 == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v71);
                    (unsigned long long)v24.into_iter(&v40);
                    v156 = alloc::boxed::Box<T>::new();
                    v157 = *((int128_t *)&v25);
                    *((int128_t *)&v6) = *((int128_t *)&v27);
                    v0 = v157;
                    v8 = v156;
                    v11 = &g_670ef8;
                    v158 = a2[0];
                    *((uint128_t *)&v27) = a2[1];
                    v24 = v158;
                    v159 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v0, v117, &(unsigned long long)v24, a3);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
                    return v159;
                }
                v118 = v65;
                v110 = v118;
                v116 = (v116 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v118) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v58);
                v109 = v64;
                memcpy(&v108, &v62, 16);
                memcpy(&v107, &v60, 16);
                memcpy(&v106, &v58, 16);
                v20.push(&v106);
            } while (0 < v113);
            v24 = 0;
            if (v24 != v113)
            {
                v0 = 0;
                core::panicking::assert_failed(0, &v24, v56, &v0, &g_670ec8); /* do not return */
            }
            v24.into_iter(&v20);
            uu_sort::merge::merge_without_limit(&v2, &v24, v117);
            v119 = v5;
            v120 = *((long long *)&v6);
            if (v2 == 2)
                break;
            v121 = *((int128_t *)&v16);
            v54 = v121;
            v122 = *((int128_t *)&v7);
            v123 = *((int128_t *)&v11);
            v124 = *((int128_t *)&v13);
            v53 = v15;
            v51 = v124;
            v49 = v123;
            v47 = v122;
            v43 = v2;
            v44 = v119;
            v45 = v120;
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v66.next_file(a3);
            if (v67 == 0x8000000000000000)
            {
                v119 = v68;
LABEL_51818c:
                v160 = 1;
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v43);
                break;
            }
            v125 = *((int128_t *)&v68);
            v74 = v66;
            v75 = v67;
            v76 = v125;
            v2.create(&v74, v23, v39);
            v119 = v5;
            v126 = *((long long *)&v6);
            if (v2 == 0x8000000000000000)
                goto LABEL_51818c;
            v38 = (long long)v19;
            v127 = *((int128_t *)&v16);
            memcpy(&(char)v36, &v16, 16);
            v128 = *((int128_t *)&v7);
            v129 = *((int128_t *)&v11);
            v130 = *((int128_t *)&v13);
            v35 = v15;
            v33 = v130;
            v31 = v129;
            v29 = v128;
            v25 = v2;
            v26 = v119;
            v27 = v126;
            v17 = v55;
            v131 = (((((v116 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v121) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v122) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v127) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v128) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v53)[8];
            memcpy(&(char)v15, &v172, 16);
            v132 = (int128_t)(&v51)[8];
            v14 = v132;
            v133 = *((int128_t *)&v43);
            v134 = *((int128_t *)&v45);
            v135 = (int128_t)(&v47)[8];
            *((int128_t *)&v12) = *((int128_t *)&v170);
            v9 = v135;
            v6 = v134;
            v3 = v133;
            v119 = v2.write_all_to(a1, v25.as_write());
            if (!v119)
            {
                v136 = *((int128_t *)&v37);
                v18 = v136;
                memcpy(&(char)v15, &v36, 16);
                v137 = (int128_t)(&v33)[8];
                v14 = v137;
                v138 = *((int128_t *)&v25);
                v139 = *((int128_t *)&v27);
                v140 = (int128_t)(&v29)[8];
                *((int128_t *)&v12) = *((int128_t *)&v167);
                v10 = v140;
                v6 = v139;
                v4 = v138;
                v66.finished_writing(&v2);
                v119 = v67;
                if (v66 == 0x8000000000000000)
                    goto LABEL_5181ae;
                v89 = v70;
                v141 = v69;
                v116 = ((((((v131 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v132) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v133) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v136) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v137) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v138) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v141;
                v88 = v141;
                v85 = v66;
                v86 = v119;
                v87 = v68;
                v40.push(&v85, &g_670ee0);
                v117 = a1;
            }
            else
            {
                ::0x515430::core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v25);
LABEL_5181ae:
                v160 = 1;
                break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedCompressedTmpFile,)>+Output = core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&v71);
        if (v160)
            core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
        ::0x5159c0::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v40);
    }
    else
    {
        v161 = a0;
        v162 = v161[0];
        v163 = v161[1];
        *((uint128_t *)&v8) = v161[2];
        v6 = v163;
        v0 = v162;
        uu_sort::merge::merge_without_limit(&v90, &(char)v0, a1);
        v119 = v91;
        if (v90 != 2)
        {
            memcpy(&v105, &v97, 16);
            memcpy(&v104, &v96, 16);
            v103 = v95;
            v102 = v94;
            v101 = v93;
            v98 = v90;
            v99 = v119;
            v100 = v92;
            v164 = a2[0];
            *((uint128_t *)&v6) = a2[1];
            v0 = v164;
            return v98.write_all(a1, &(char)v0);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a2);
    return v119;
}
