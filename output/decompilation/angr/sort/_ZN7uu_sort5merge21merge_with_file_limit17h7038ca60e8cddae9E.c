long long uu_sort::merge::merge_with_file_limit(unsigned long long a0, unsigned long long a1, unsigned long long a2[15], uint128_t a3[2], unsigned long long a4)
{
    void* v0;  // [bp-0x3a8], Other Possible Types: int
    unsigned long long v2;  // [bp-0x3a8]
    int v3;  // [bp-0x3a8]
    int v4;  // [bp-0x3a8]
    unsigned long long v5;  // [bp-0x3a0]
    int v6;  // [bp-0x398]
    char v7;  // [bp-0x390]
    unsigned long long v8;  // [bp-0x388]
    int v9;  // [bp-0x388]
    int v10;  // [bp-0x388]
    unsigned long long v11;  // [bp-0x380]
    int v12;  // [bp-0x378]
    int v14;  // [bp-0x368]
    int v15;  // [bp-0x360]
    unsigned long long v17;  // [bp-0x348]
    int v18;  // [bp-0x348]
    void* v20;  // [bp-0x330]
    unsigned long long v21;  // [sp-0x328]
    void* v22;  // [sp-0x320]
    void* v23;  // [bp-0x318]
    unsigned long long v25;  // [bp-0x308]
    unsigned long long v26;  // [bp-0x300]
    unsigned long long v27;  // [bp-0x2f8]
    int v28;  // [bp-0x2f0]
    unsigned long long v29;  // [bp-0x2e0]
    int v30;  // [bp-0x2d8], Other Possible Types: void*
    unsigned long long v31;  // [bp-0x2d8]
    unsigned long long v32;  // [bp-0x2d0]
    int v33;  // [bp-0x2c8], Other Possible Types: unsigned long long
    int v35;  // [bp-0x2c0]
    int v37;  // [bp-0x2b0]
    int v39;  // [bp-0x2a0]
    int v41;  // [bp-0x290]
    int v42;  // [bp-0x280]
    unsigned long v44;  // [bp-0x270]
    unsigned long long v45;  // [bp-0x268]
    unsigned long v46;  // [bp-0x258]
    void* v47;  // [bp-0x250]
    unsigned long long v48;  // [bp-0x248]
    void* v49;  // [bp-0x240]
    unsigned long long v50;  // [bp-0x238]
    unsigned long long v51;  // [sp-0x230]
    unsigned long long v52;  // [bp-0x228]
    int v53;  // [bp-0x220]
    int v55;  // [bp-0x210]
    int v57;  // [bp-0x200]
    int v59;  // [bp-0x1f0]
    int v60;  // [bp-0x1f0]
    int v61;  // [bp-0x1e0]
    unsigned long long v62;  // [bp-0x1d8]
    unsigned long v63;  // [bp-0x1d0]
    char v64;  // [bp-0x1c8]
    int v65;  // [bp-0x1b8]
    unsigned long long v66;  // [bp-0x1a0]
    unsigned long long v67;  // [bp-0x198]
    int v68;  // [bp-0x190]
    unsigned long long v77;  // [bp-0x130]
    unsigned long long v78;  // [bp-0x128]
    unsigned long long v79;  // [bp-0x120]
    int v80;  // [bp-0x118]
    unsigned long long v81;  // [bp-0x108]
    char v82;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v83;  // [bp-0xf8]
    unsigned long long v84;  // [bp-0xf0]
    int v85;  // [bp-0xe8]
    int v86;  // [bp-0xd8]
    int v87;  // [bp-0xc8]
    char v88;  // [bp-0xb8]
    char v89;  // [bp-0xa8]
    unsigned long long v90;  // [bp-0x98]
    unsigned long long v91;  // [bp-0x90]
    unsigned long long v92;  // [bp-0x88]
    int v93;  // [bp-0x80]
    int v94;  // [bp-0x70]
    int v95;  // [bp-0x60]
    char v96;  // [bp-0x50]
    char v97;  // [bp-0x40]
    unsigned long long v99;  // rax
    unsigned long long v100;  // rbp
    int v101;  // ymm0
    uint256_t v102;  // ymm0
    struct_0 *v103;  // rbx
    char *v104;  // r15
    unsigned long long v105[15];  // 4096
    unsigned long long v106;  // r12
    unsigned long long v107;  // rbp
    int v108;  // xmm0
    int v109;  // xmm0
    int v110;  // xmm1
    int v111;  // xmm2
    int v112;  // xmm0
    unsigned long long v113;  // rbp
    int v114;  // xmm0
    int v115;  // xmm0
    int v116;  // xmm1
    int v117;  // xmm2
    uint256_t v118;  // ymm0
    int v119;  // xmm0
    int v120;  // xmm0
    int v121;  // xmm1
    int v122;  // xmm2
    int v123;  // xmm0
    uint256_t v124;  // ymm0
    int v125;  // xmm0
    int v126;  // xmm0
    int v127;  // xmm1
    int v128;  // xmm2
    int v129;  // xmm0
    unsigned long long v144;  // rax
    int v145;  // xmm0
    int v146;  // xmm0
    unsigned long long v147;  // rax
    int v148;  // xmm0
    unsigned long long v151;  // [bp-0x2a8]
    unsigned long long v153;  // [bp-0x288]
    unsigned long long v155;  // [bp-0x208]

    v45 = a0;
    v99 = v45.len();
    if (v99 > a2[14])
    {
        v47 = 0;
        v48 = 8;
        v49 = 0;
        v20 = 0;
        v21 = 8;
        v22 = 0;
        v102 = v101 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v45);
        memcpy(&v64, &v45, 16);
        v23 = 0;
        if (!((char)(((0 ^ a2[6]) & (0 ^ -(a2[6]))) >> 63)))
            v23 = a2[7];
        v63 = &a2[14];
        v103 = &v7;
        v46 = a2[8];
        v104 = &(char)v25;
        v105 = a2;
        while (true)
        {
            do
            {
                v65.next(&v64);
                if ((int)v65 == 2)
                {
                    (unsigned long long)v30.into_iter(&v47);
                    v144 = alloc::boxed::Box<T>::new();
                    v145 = *((int128_t *)&v31);
                    *((int128_t *)&v6) = *((int128_t *)&v33);
                    v0 = v145;
                    v8 = v144;
                    v11 = &g_670f48;
                    v146 = a3[0];
                    *((uint128_t *)&v33) = a3[1];
                    v30 = v146;
                    v147 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v0, v105, &(unsigned long long)v30, a4);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
                    return v147;
                }
                v20.push(&v65);
            } while (0 < v100);
            v30 = 0;
            if (v30 != v100)
            {
                v0 = 0;
                core::panicking::assert_failed(0, &v30, v63, &v0, &g_670ec8); /* do not return */
            }
            v30.into_iter(&v20);
            uu_sort::merge::merge_without_limit(&v2, &v30, v105);
            v106 = v5;
            v107 = (long long)v6;
            if (v2 == 2)
                break;
            v108 = v103->field_40;
            v61 = v108;
            v109 = v103->field_0;
            v110 = v103->field_10;
            v111 = v103->field_20;
            *((uint128_t *)&v59) = v103->field_30;
            v57 = v111;
            v55 = v110;
            v53 = v109;
            v50 = v2;
            v51 = v106;
            v52 = v107;
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v104.next_file(a4);
            if (v26 != 0x8000000000000000)
            {
                v112 = *((int128_t *)&v27);
                v66 = v25;
                v67 = v26;
                v68 = v112;
                v2.create(&v66, v23, v46);
                v106 = v5;
                v113 = (long long)v6;
                if (v2 == 0x8000000000000000)
                    goto LABEL_51970b;
                v44 = v103->field_50;
                v114 = v103->field_40;
                *((uint128_t *)&v42) = v103->field_40;
                v115 = v103->field_0;
                v116 = v103->field_10;
                v117 = v103->field_20;
                *((uint128_t *)&v41) = v103->field_30;
                v39 = v117;
                v37 = v116;
                v35 = v115;
                v31 = v2;
                v32 = v106;
                v33 = v113;
                v17 = v62;
                v118 = (((((v102 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v108) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v109) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v112) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v114) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v59)[8];
                memcpy(&(char)v15, &(unsigned long long)v60, 16);
                v119 = (int128_t)(&v57)[8];
                v14 = v119;
                v120 = *((int128_t *)&v50);
                v121 = *((int128_t *)&v52);
                v122 = (int128_t)(&v53)[8];
                *((int128_t *)&v12) = *((int128_t *)&v155);
                v9 = v122;
                v6 = v121;
                v3 = v120;
                v106 = v2.write_all_to(a2, v31.as_write());
                if (!v106)
                {
                    v123 = (int128_t)(&v42)[8];
                    v18 = v123;
                    v124 = (((v118 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v119) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v120) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v123) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v41)[8];
                    memcpy(&(char)v15, &v153, 16);
                    v125 = (int128_t)(&v39)[8];
                    v14 = v125;
                    v126 = *((int128_t *)&v31);
                    v127 = *((int128_t *)&v33);
                    v128 = (int128_t)(&v35)[8];
                    *((int128_t *)&v12) = *((int128_t *)&v151);
                    v10 = v128;
                    v6 = v127;
                    v4 = v126;
                    v104.finished_writing(&v2);
                    v106 = v26;
                    if (v25 == 0x8000000000000000)
                        goto LABEL_51972a;
                    v81 = v29;
                    v129 = v28;
                    v102 = ((v124 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v125) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v126) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v129;
                    v80 = v129;
                    v77 = v25;
                    v78 = v106;
                    v79 = v27;
                    v47.push(&v77, &g_670ee0);
                    v105 = a2;
                }
                else
                {
                    ::0x515430::core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&v31);
LABEL_51972a:
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
                    break;
                }
            }
            else
            {
                v106 = v27;
LABEL_51970b:
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v50);
                goto LABEL_51972a;
            }
        }
        ::0x5159c0::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>(&v47);
    }
    else
    {
        uu_sort::merge::merge_without_limit(&v82, v45, a1, a2);
        v106 = v83;
        if (v82 != 2)
        {
            memcpy(&v97, &v89, 16);
            memcpy(&v96, &v88, 16);
            v95 = v87;
            v94 = v86;
            v93 = v85;
            v90 = v82;
            v91 = v106;
            v92 = v84;
            v148 = a3[0];
            *((uint128_t *)&v6) = a3[1];
            v0 = v148;
            return v90.write_all(a2, &(char)v0);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a3);
    return v106;
}
