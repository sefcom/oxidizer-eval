long long uu_sort::merge::merge_with_file_limit(uint128_t a0[2], struct_0 *a1, uint128_t a2[2], unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x358]
    unsigned long long v1;  // [bp-0x350]
    int v2;  // [bp-0x348]
    void* v3;  // [bp-0x338], Other Possible Types: int
    unsigned long long v4;  // [bp-0x338]
    int v5;  // [bp-0x338]
    unsigned long long v8;  // [bp-0x330]
    int v9;  // [bp-0x328]
    unsigned long long v10;  // [bp-0x320]
    unsigned long long v11;  // [bp-0x318]
    int v12;  // [bp-0x318]
    int v13;  // [bp-0x318]
    unsigned long long v15;  // [bp-0x310]
    unsigned long long v16;  // [sp-0x308]
    int v17;  // [bp-0x308]
    unsigned long long v18;  // [bp-0x300]
    int v19;  // [bp-0x2f8]
    int v20;  // [bp-0x2f0]
    unsigned long long v21;  // [sp-0x2e0]
    unsigned long long v22;  // [sp-0x2d8]
    void* v23;  // [bp-0x2c8]
    unsigned long long v24;  // [sp-0x2c0]
    void* v25;  // [sp-0x2b8]
    unsigned long long v26;  // [sp-0x2a0]
    unsigned long long v27;  // [sp-0x298]
    unsigned long long v28;  // [bp-0x290]
    int v29;  // [bp-0x288]
    int v31;  // [bp-0x278]
    unsigned long long v32;  // [bp-0x270]
    int v33;  // [bp-0x268], Other Possible Types: void*
    unsigned long long v34;  // [bp-0x268]
    unsigned long long v35;  // [sp-0x260]
    int v36;  // [bp-0x258], Other Possible Types: unsigned long long
    int v37;  // [bp-0x250]
    int v39;  // [bp-0x240]
    int v41;  // [bp-0x230]
    int v43;  // [bp-0x220]
    int v45;  // [bp-0x210]
    unsigned long long v46;  // [bp-0x208]
    void* v47;  // [bp-0x200]
    unsigned long long v48;  // [bp-0x1f8]
    void* v49;  // [bp-0x1f0]
    unsigned long v50;  // [bp-0x1e8]
    unsigned long long v51;  // [bp-0x1e0]
    int v52;  // [bp-0x1d8]
    int v53;  // [bp-0x1c8]
    unsigned long long v54;  // [bp-0x1b8]
    unsigned long long v55;  // [bp-0x1b0]
    unsigned long long v56;  // [bp-0x1a8]
    struct struct_1 v60[16];  // [bp-0x188]
    struct struct_1 v61[16];  // [bp-0x188]
    int v62;  // [bp-0x178]
    unsigned long long v63;  // [bp-0x168]
    unsigned long long v64;  // [bp-0x160]
    int v65;  // [bp-0x158]
    int v69;  // [bp-0x128]
    int v70;  // [bp-0x118]
    char v71;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v72;  // [bp-0xf8]
    unsigned long long v73;  // [bp-0xf0]
    int v74;  // [bp-0xe8]
    int v75;  // [bp-0xd8]
    int v76;  // [bp-0xc8]
    char v77;  // [bp-0xb8]
    char v78;  // [bp-0xa8]
    unsigned long long v79;  // [bp-0x98]
    unsigned long long v80;  // [bp-0x90]
    unsigned long long v81;  // [bp-0x88]
    int v82;  // [bp-0x80]
    int v83;  // [bp-0x70]
    int v84;  // [bp-0x60]
    char v85;  // [bp-0x50]
    char v86;  // [bp-0x40]
    unsigned long long v88;  // rax
    unsigned long long v89;  // rbx
    int v90;  // ymm0
    uint256_t v91;  // ymm0
    char *v92;  // rbp
    char *v93;  // r14
    struct_0 *v94;  // 4096
    int v95;  // xmm0
    unsigned long long v96;  // r13
    unsigned long long v97;  // rbp
    int v98;  // xmm0
    int v99;  // xmm0
    int v100;  // xmm1
    int v101;  // xmm2
    int v102;  // xmm0
    unsigned long long v103;  // rbp
    int v104;  // xmm0
    uint256_t v105;  // ymm0
    int v106;  // xmm0
    int v107;  // xmm0
    int v108;  // xmm1
    int v109;  // xmm2
    int v110;  // xmm0
    int v111;  // xmm1
    unsigned long long v123;  // rax
    int v124;  // xmm0
    int v125;  // xmm0
    unsigned long long v126;  // rax
    int v127;  // xmm0
    int v128;  // xmm0
    unsigned long long v129;  // [bp-0x280]
    unsigned long long v131;  // [bp-0x238]
    unsigned long long v133;  // [bp-0x218]

    v88 = a0.len();
    if (v88 > a1->field_70)
    {
        v50 = &a1->field_70;
        v47 = 0;
        v48 = 8;
        v49 = 0;
        v23 = 0;
        v24 = 8;
        v25 = 0;
        v91 = v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a0[0];
        *((uint128_t *)&v53) = a0[1];
        *((uint128_t *)&v52) = a0[0];
        v92 = &v60;
        v93 = &v52;
        v51 = 9223372036854775809;
        v94 = a1;
        while (true)
        {
            do
            {
                v92.next(v93);
                if (*((long long *)&v61[0]) == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>(&v52);
                    (unsigned long long)v33.into_iter(&v47);
                    v123 = alloc::boxed::Box<T>::new();
                    v124 = *((int128_t *)&v34);
                    *((int128_t *)&v9) = *((int128_t *)&v36);
                    v3 = v124;
                    v11 = v123;
                    v15 = &g_670f20;
                    v125 = a2[0];
                    *((uint128_t *)&v36) = a2[1];
                    v33 = v125;
                    v126 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v3, v94, &(unsigned long long)v33, a3);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v23);
                    return v126;
                }
                v95 = v61;
                v91 = v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v95;
                v70 = v62;
                v69 = v95;
                v23.push(&v69);
            } while (0 < v89);
            v33 = 0;
            if (v33 != v89)
            {
                v3 = 0;
                core::panicking::assert_failed(0, &v33, v50, &v3, &g_670ec8); /* do not return */
            }
            v26.into_iter(&v23);
            uu_sort::merge::merge_without_limit(&(unsigned long long)v3, &v26, v94);
            v96 = v8;
            v97 = (long long)v9;
            if (v4 == 2)
                break;
            v98 = *((int128_t *)&v21);
            v45 = v98;
            v99 = *((int128_t *)&v10);
            v100 = *((int128_t *)&v15);
            v101 = *((int128_t *)&v18);
            v43 = v20;
            v41 = v101;
            v39 = v100;
            v37 = v99;
            v34 = v4;
            v35 = v96;
            v36 = v97;
            v23 = 0;
            v24 = 8;
            v25 = 0;
            v0.next_file(a3);
            if (v1 == 0x8000000000000000)
            {
                v96 = (long long)v2;
LABEL_518c6d:
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v34);
                break;
            }
            v102 = v2;
            v63 = v0;
            v64 = v1;
            v65 = v102;
            (unsigned long long)v3.create(&v63);
            v96 = v8;
            v103 = (long long)v9;
            if (v4 == 0x8000000000000000)
                goto LABEL_518c6d;
            v104 = *((int128_t *)&v10);
            *((int128_t *)&v31) = *((int128_t *)&v15);
            v29 = v104;
            v26 = v4;
            v27 = v96;
            v28 = v103;
            v22 = v46;
            v105 = ((((v91 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v99) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v43)[8];
            memcpy(&(char)v20, &v133, 16);
            v106 = (int128_t)(&v41)[8];
            v19 = v106;
            v107 = *((int128_t *)&v34);
            v108 = *((int128_t *)&v36);
            v109 = (int128_t)(&v37)[8];
            *((int128_t *)&v17) = *((int128_t *)&v131);
            v12 = v109;
            v9 = v108;
            v3 = v107;
            v96 = (unsigned long long)v3.write_all_to(a1, v26.as_write());
            if (!v96)
            {
                v16 = v32;
                v110 = *((int128_t *)&v26);
                v91 = ((v105 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v106) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v107) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v110;
                v111 = *((int128_t *)&v28);
                *((int128_t *)&v13) = *((int128_t *)&v129);
                v9 = v111;
                v5 = v110;
                v0.finished_writing(&(unsigned long long)v3);
                v96 = v1;
                if (v0 == 0x8000000000000000)
                    goto LABEL_518c8f;
                v54 = v0;
                v55 = v96;
                v56 = (long long)v2;
                v47.push(&v54, &g_670ee0);
                v94 = a1;
            }
            else
            {
                ::0x515300::core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v26);
LABEL_518c8f:
                break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::{{closure}}>>(&v52);
        core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v23);
        ::0x515890::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v47);
    }
    else
    {
        v127 = a0[0];
        *((uint128_t *)&v9) = a0[1];
        v3 = v127;
        uu_sort::merge::merge_without_limit(&v71, &(char)v3, a1);
        v96 = v72;
        if (v71 != 2)
        {
            memcpy(&v86, &v78, 16);
            memcpy(&v85, &v77, 16);
            v84 = v76;
            v83 = v75;
            v82 = v74;
            v79 = v71;
            v80 = v96;
            v81 = v73;
            v128 = a2[0];
            *((uint128_t *)&v9) = a2[1];
            v3 = v128;
            return v79.write_all(a1, &(char)v3);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a2);
    return v96;
}
