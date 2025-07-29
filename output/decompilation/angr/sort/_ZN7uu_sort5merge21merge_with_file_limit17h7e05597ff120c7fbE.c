long long uu_sort::merge::merge_with_file_limit(uint128_t a0[2], unsigned long long a1[15], uint128_t a2[2], unsigned long long a3)
{
    void* v0;  // [bp-0x458], Other Possible Types: int
    unsigned long long v2;  // [bp-0x458]
    int v3;  // [bp-0x458]
    int v4;  // [bp-0x458]
    unsigned long long v5;  // [bp-0x450]
    int v6;  // [bp-0x448], Other Possible Types: char
    unsigned long long v7;  // [bp-0x440]
    unsigned long long v8;  // [bp-0x438]
    int v9;  // [bp-0x438]
    int v10;  // [bp-0x438]
    unsigned long long v11;  // [bp-0x430]
    int v12;  // [bp-0x428]
    unsigned long long v13;  // [bp-0x420]
    int v14;  // [bp-0x418]
    int v15;  // [bp-0x410]
    unsigned long long v16;  // [bp-0x400]
    unsigned long long v17;  // [bp-0x3f8]
    int v18;  // [bp-0x3f8]
    int v19;  // [bp-0x3f0]
    void* v20;  // [bp-0x3d8]
    unsigned long long v21;  // [sp-0x3d0]
    void* v22;  // [sp-0x3c8]
    void* v23;  // [bp-0x3b8]
    int v24;  // [bp-0x3a8], Other Possible Types: void*
    unsigned long long v25;  // [bp-0x3a8]
    unsigned long long v26;  // [bp-0x3a0]
    int v27;  // [bp-0x398], Other Possible Types: unsigned long long
    int v29;  // [bp-0x390]
    int v31;  // [bp-0x380]
    int v33;  // [bp-0x370]
    int v35;  // [bp-0x360]
    int v36;  // [bp-0x358]
    unsigned long long v37;  // [bp-0x348]
    unsigned long long v38;  // [bp-0x340]
    unsigned long v39;  // [bp-0x330]
    void* v40;  // [bp-0x328]
    unsigned long long v41;  // [bp-0x320]
    void* v42;  // [bp-0x318]
    unsigned long long v43;  // [bp-0x310]
    unsigned long long v44;  // [bp-0x308]
    unsigned long long v45;  // [bp-0x300]
    int v47;  // [bp-0x2f8]
    int v49;  // [bp-0x2e8]
    int v51;  // [bp-0x2d8]
    int v53;  // [bp-0x2c8]
    int v54;  // [bp-0x2b8]
    unsigned long long v55;  // [bp-0x2b0]
    unsigned long v56;  // [bp-0x2a8]
    unsigned long long v57;  // [bp-0x2a0]
    unsigned long long v58;  // [bp-0x298]
    unsigned long long v60;  // [bp-0x288]
    char v62;  // [bp-0x278]
    int v64;  // [bp-0x268]
    int v65;  // [bp-0x258]
    unsigned long long v66;  // [bp-0x248]
    unsigned long long v67;  // [bp-0x240]
    unsigned long long v68;  // [bp-0x238]
    int v69;  // [bp-0x230]
    unsigned long long v70;  // [bp-0x220]
    int v71;  // [bp-0x218]
    int v72;  // [bp-0x208]
    unsigned long long v73;  // [bp-0x1f8]
    unsigned long long v74;  // [bp-0x1f0]
    int v75;  // [bp-0x1e8]
    unsigned long long v84;  // [bp-0x188]
    unsigned long long v85;  // [bp-0x180]
    unsigned long long v86;  // [bp-0x178]
    int v87;  // [bp-0x170]
    unsigned long long v88;  // [bp-0x160]
    char v89;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long long v90;  // [bp-0x150]
    unsigned long long v91;  // [bp-0x148]
    int v92;  // [bp-0x140]
    int v93;  // [bp-0x130]
    int v94;  // [bp-0x120]
    char v95;  // [bp-0x110]
    char v96;  // [bp-0x100]
    unsigned long long v97;  // [bp-0xf0]
    unsigned long long v98;  // [bp-0xe8]
    unsigned long long v99;  // [bp-0xe0]
    int v100;  // [bp-0xd8]
    int v101;  // [bp-0xc8]
    int v102;  // [bp-0xb8]
    char v103;  // [bp-0xa8]
    char v104;  // [bp-0x98]
    char v105;  // [bp-0x88]
    char v106;  // [bp-0x78]
    char v107;  // [bp-0x68]
    int v108;  // [bp-0x58]
    int v109;  // [bp-0x48]
    unsigned long long v111;  // rax
    unsigned long long v112;  // rbx
    int v113;  // ymm0
    uint256_t v114;  // ymm0
    unsigned long long v115[15];  // 4096
    int v116;  // xmm0
    unsigned long long v117;  // r13
    unsigned long long v118;  // rbp
    int v119;  // xmm0
    int v120;  // xmm0
    int v121;  // xmm1
    int v122;  // xmm2
    int v123;  // xmm0
    unsigned long long v124;  // rbp
    int v125;  // xmm0
    int v126;  // xmm0
    int v127;  // xmm1
    int v128;  // xmm2
    uint256_t v129;  // ymm0
    int v130;  // xmm0
    int v131;  // xmm0
    int v132;  // xmm1
    int v133;  // xmm2
    int v134;  // xmm0
    int v135;  // xmm0
    int v136;  // xmm0
    int v137;  // xmm1
    int v138;  // xmm2
    int v139;  // xmm0
    unsigned long long v154;  // rax
    int v155;  // xmm0
    int v156;  // xmm0
    unsigned long long v157;  // rax
    char v158;  // r14b
    int v159;  // xmm0
    int v160;  // xmm0
    unsigned long long v163;  // [bp-0x378]
    unsigned long long v166;  // [bp-0x2e0]
    unsigned long long v168;  // [bp-0x2c0]

    v111 = a0.len();
    if (v111 > a1[14])
    {
        v40 = 0;
        v41 = 8;
        v42 = 0;
        v20 = 0;
        v21 = 8;
        v22 = 0;
        v114 = v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a0[0];
        *((uint128_t *)&v72) = a0[1];
        *((uint128_t *)&v71) = a0[0];
        v23 = 0;
        if (!((char)(((0 ^ a1[6]) & (0 ^ -(a1[6]))) >> 63)))
            v23 = a1[7];
        v56 = &a1[14];
        v39 = a1[8];
        v57 = 9223372036854775809;
        v115 = a1;
        while (true)
        {
            do
            {
                v58.next(&v71);
                if (v58 == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>(&v71);
                    (unsigned long long)v24.into_iter(&v40);
                    v154 = alloc::boxed::Box<T>::new();
                    v155 = *((int128_t *)&v25);
                    *((int128_t *)&v6) = *((int128_t *)&v27);
                    v0 = v155;
                    v8 = v154;
                    v11 = &g_670f70;
                    v156 = a2[0];
                    *((uint128_t *)&v27) = a2[1];
                    v24 = v156;
                    v157 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v0, v115, &(unsigned long long)v24, a3);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
                    return v157;
                }
                v116 = v65;
                v109 = v116;
                v114 = (v114 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v58);
                v108 = v64;
                memcpy(&v107, &v62, 16);
                memcpy(&v106, &v60, 16);
                memcpy(&v105, &v58, 16);
                v20.push(&v105);
            } while (0 < v112);
            v24 = 0;
            if (v24 != v112)
            {
                v0 = 0;
                core::panicking::assert_failed(0, &v24, v56, &v0, &g_670ec8); /* do not return */
            }
            v24.into_iter(&v20);
            uu_sort::merge::merge_without_limit(&v2, &v24, v115);
            v117 = v5;
            v118 = *((long long *)&v6);
            if (v2 == 2)
                break;
            v119 = *((int128_t *)&v16);
            v54 = v119;
            v120 = *((int128_t *)&v7);
            v121 = *((int128_t *)&v11);
            v122 = *((int128_t *)&v13);
            v53 = v15;
            v51 = v122;
            v49 = v121;
            v47 = v120;
            v43 = v2;
            v44 = v117;
            v45 = v118;
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v66.next_file(a3);
            if (v67 == 0x8000000000000000)
            {
                v117 = v68;
LABEL_51a2a3:
                v158 = 1;
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v43);
                break;
            }
            v123 = *((int128_t *)&v68);
            v73 = v66;
            v74 = v67;
            v75 = v123;
            v2.create(&v73, v23, v39);
            v117 = v5;
            v124 = *((long long *)&v6);
            if (v2 == 0x8000000000000000)
                goto LABEL_51a2a3;
            v38 = (long long)v19;
            v125 = *((int128_t *)&v16);
            memcpy(&(char)v36, &v16, 16);
            v126 = *((int128_t *)&v7);
            v127 = *((int128_t *)&v11);
            v128 = *((int128_t *)&v13);
            v35 = v15;
            v33 = v128;
            v31 = v127;
            v29 = v126;
            v25 = v2;
            v26 = v117;
            v27 = v124;
            v17 = v55;
            v129 = (((((v114 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v53)[8];
            memcpy(&(char)v15, &v168, 16);
            v130 = (int128_t)(&v51)[8];
            v14 = v130;
            v131 = *((int128_t *)&v43);
            v132 = *((int128_t *)&v45);
            v133 = (int128_t)(&v47)[8];
            *((int128_t *)&v12) = *((int128_t *)&v166);
            v9 = v133;
            v6 = v132;
            v3 = v131;
            v117 = v2.write_all_to(a1, v25.as_write());
            if (!v117)
            {
                v134 = *((int128_t *)&v37);
                v18 = v134;
                memcpy(&(char)v15, &v36, 16);
                v135 = (int128_t)(&v33)[8];
                v14 = v135;
                v136 = *((int128_t *)&v25);
                v137 = *((int128_t *)&v27);
                v138 = (int128_t)(&v29)[8];
                *((int128_t *)&v12) = *((int128_t *)&v163);
                v10 = v138;
                v6 = v137;
                v4 = v136;
                v66.finished_writing(&v2);
                v117 = v67;
                if (v66 == 0x8000000000000000)
                    goto LABEL_51a2c5;
                v88 = v70;
                v139 = v69;
                v114 = ((((((v129 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v130) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v131) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v134) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v36) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v135) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v136) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v139;
                v87 = v139;
                v84 = v66;
                v85 = v117;
                v86 = v68;
                v40.push(&v84, &g_670ee0);
                v115 = a1;
            }
            else
            {
                ::0x515430::core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v25);
LABEL_51a2c5:
                v158 = 1;
                break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::{{closure}}>>(&v71);
        if (v158)
            core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::CompressedTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
        ::0x5159c0::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v40);
    }
    else
    {
        v159 = a0[0];
        *((uint128_t *)&v6) = a0[1];
        v0 = v159;
        uu_sort::merge::merge_without_limit(&v89, &(char)v0, a1);
        v117 = v90;
        if (v89 != 2)
        {
            memcpy(&v104, &v96, 16);
            memcpy(&v103, &v95, 16);
            v102 = v94;
            v101 = v93;
            v100 = v92;
            v97 = v89;
            v98 = v117;
            v99 = v91;
            v160 = a2[0];
            *((uint128_t *)&v6) = a2[1];
            v0 = v160;
            return v97.write_all(a1, &(char)v0);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a2);
    return v117;
}
