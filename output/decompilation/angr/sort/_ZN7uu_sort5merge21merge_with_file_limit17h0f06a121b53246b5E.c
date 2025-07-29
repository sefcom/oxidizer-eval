long long uu_sort::merge::merge_with_file_limit(unsigned long long a0, unsigned long long a1, struct_2 *a2, uint128_t a3[2], unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x320]
    unsigned long long v1;  // [bp-0x318]
    int v2;  // [bp-0x310]
    void* v3;  // [bp-0x300]
    unsigned long long v4;  // [sp-0x2f8]
    void* v5;  // [sp-0x2f0]
    void* v6;  // [bp-0x2e8], Other Possible Types: int
    unsigned long long v7;  // [bp-0x2e8]
    int v8;  // [bp-0x2e8]
    unsigned long long v11;  // [bp-0x2e0]
    int v12;  // [bp-0x2d8], Other Possible Types: char
    struct_0 v13;  // [bp-0x2d0]
    unsigned long long v14;  // [bp-0x2c8]
    int v15;  // [bp-0x2c8]
    int v16;  // [bp-0x2c8]
    unsigned long long v19;  // [bp-0x2b8]
    int v20;  // [bp-0x2b8]
    int v22;  // [bp-0x2a8]
    int v23;  // [bp-0x2a0]
    unsigned long long v25;  // [sp-0x288]
    unsigned long long v26;  // [sp-0x270]
    unsigned long long v27;  // [sp-0x268]
    unsigned long long v28;  // [bp-0x260]
    int v29;  // [bp-0x258]
    int v31;  // [bp-0x248]
    unsigned long long v32;  // [bp-0x240]
    unsigned long long v33;  // [bp-0x238]
    int v34;  // [bp-0x228], Other Possible Types: void*
    unsigned long long v35;  // [bp-0x228]
    unsigned long long v36;  // [sp-0x220]
    int v37;  // [bp-0x218], Other Possible Types: unsigned long long
    int v38;  // [bp-0x210]
    int v40;  // [bp-0x200]
    int v42;  // [bp-0x1f0]
    int v44;  // [bp-0x1e0]
    int v46;  // [bp-0x1d0]
    void* v48;  // [bp-0x1b8]
    unsigned long long v49;  // [bp-0x1b0]
    void* v50;  // [bp-0x1a8]
    unsigned long v51;  // [bp-0x1a0]
    unsigned long long v52;  // [bp-0x198]
    unsigned long long v53;  // [bp-0x190]
    unsigned long long v54;  // [bp-0x188]
    char v58;  // [bp-0x168]
    unsigned long long v59;  // [bp-0x158]
    unsigned long long v60;  // [bp-0x150]
    int v61;  // [bp-0x148]
    char v65;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v66;  // [bp-0x110]
    unsigned long long v67;  // [bp-0x108]
    int v68;  // [bp-0x100]
    int v69;  // [bp-0xf0]
    int v70;  // [bp-0xe0]
    char v71;  // [bp-0xd0]
    char v72;  // [bp-0xc0]
    unsigned long long v73;  // [bp-0xb0]
    unsigned long long v74;  // [bp-0xa8]
    unsigned long long v75;  // [bp-0xa0]
    int v76;  // [bp-0x98]
    int v77;  // [bp-0x88]
    int v78;  // [bp-0x78]
    char v79;  // [bp-0x68]
    char v80;  // [bp-0x58]
    struct struct_1 v81[24];  // [bp-0x48]
    unsigned long long v83;  // rax
    unsigned long long v84;  // r15
    int v85;  // ymm0
    uint256_t v86;  // ymm0
    struct_0 *v87;  // r14
    char *v88;  // r13
    struct_2 *v89;  // 4096
    unsigned long long v90;  // r12
    unsigned long long v91;  // r13
    int v92;  // xmm0
    int v93;  // xmm0
    int v94;  // xmm1
    int v95;  // xmm2
    int v96;  // xmm0
    unsigned long long v97;  // r13
    int v98;  // xmm0
    uint256_t v99;  // ymm0
    int v100;  // xmm0
    int v101;  // xmm0
    int v102;  // xmm1
    int v103;  // xmm2
    int v104;  // xmm0
    int v105;  // xmm1
    unsigned long long v117;  // rax
    int v118;  // xmm0
    int v119;  // xmm0
    unsigned long long v120;  // rax
    int v121;  // xmm0
    unsigned long long v122;  // [bp-0x250]
    unsigned long long v124;  // [bp-0x1f8]

    v33 = a0;
    v83 = v33.len();
    if (v83 > a2->field_70)
    {
        v51 = &a2->field_70;
        v48 = 0;
        v49 = 8;
        v50 = 0;
        v3 = 0;
        v4 = 8;
        v5 = 0;
        v86 = v85 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v33);
        memcpy(&v58, &v33, 16);
        v87 = &v13;
        v88 = &v81;
        v89 = a2;
        while (true)
        {
            do
            {
                v88.next(&v58);
                if (*((int *)&v81[0]) == 2)
                {
                    (unsigned long long)v34.into_iter(&v48);
                    v117 = alloc::boxed::Box<T>::new();
                    v118 = *((int128_t *)&v35);
                    *((int128_t *)&v12) = *((int128_t *)&v37);
                    v6 = v118;
                    v14 = v117;
                    *((unsigned long long **)&v13.field_10) = &g_670e88;
                    v119 = a3[0];
                    *((uint128_t *)&v37) = a3[1];
                    v34 = v119;
                    v120 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v6, v89, &(unsigned long long)v34, a4);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v3);
                    return v120;
                }
                v3.push(v88);
            } while (0 < v84);
            v34 = 0;
            if (v34 != v84)
            {
                v6 = 0;
                core::panicking::assert_failed(0, &v34, v51, &v6, &g_670ec8); /* do not return */
            }
            v26.into_iter(&v3);
            uu_sort::merge::merge_without_limit(&(unsigned long long)v6, &v26, v89);
            v90 = v11;
            v91 = *((long long *)&v12);
            if (v7 == 2)
                break;
            v92 = v87->field_40;
            v46 = v92;
            v93 = v87->field_0;
            v94 = v87->field_10;
            v95 = v87->field_20;
            *((uint128_t *)&v44) = v87->field_30;
            v42 = v95;
            v40 = v94;
            v38 = v93;
            v35 = v7;
            v36 = v90;
            v37 = v91;
            v3 = 0;
            v4 = 8;
            v5 = 0;
            v0.next_file(a4);
            if (v1 != 0x8000000000000000)
            {
                v96 = v2;
                v59 = v0;
                v60 = v1;
                v61 = v96;
                (unsigned long long)v6.create(&v59);
                v90 = v11;
                v97 = *((long long *)&v12);
                if (v7 == 0x8000000000000000)
                    goto LABEL_51767d;
                v98 = v87->field_0;
                *((uint128_t *)&v31) = v87->field_10;
                v29 = v98;
                v26 = v7;
                v27 = v90;
                v28 = v97;
                v25 = (long long)(&v46)[8];
                v99 = ((((v86 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v92) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v44)[8];
                memcpy(&(char)v23, &(unsigned long long)v44, 16);
                v100 = (int128_t)(&v42)[8];
                v22 = v100;
                v101 = *((int128_t *)&v35);
                v102 = *((int128_t *)&v37);
                v103 = (int128_t)(&v38)[8];
                *((int128_t *)&v20) = *((int128_t *)&v124);
                v15 = v103;
                v12 = v102;
                v6 = v101;
                v90 = (unsigned long long)v6.write_all_to(a2, v26.as_write());
                if (!v90)
                {
                    v19 = v32;
                    v104 = *((int128_t *)&v26);
                    v86 = ((v99 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                    v105 = *((int128_t *)&v28);
                    *((int128_t *)&v16) = *((int128_t *)&v122);
                    v12 = v105;
                    v8 = v104;
                    v0.finished_writing(&(unsigned long long)v6);
                    v90 = v1;
                    if (v0 == 0x8000000000000000)
                        goto LABEL_51769c;
                    v52 = v0;
                    v53 = v90;
                    v54 = (long long)v2;
                    v48.push(&v52, &g_670ee0);
                    v89 = a2;
                }
                else
                {
                    ::0x515300::core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v26);
LABEL_51769c:
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainMergeInput<alloc::boxed::Box<dyn std::io::Read+core::marker::Send>>,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v3);
                    break;
                }
            }
            else
            {
                v90 = (long long)v2;
LABEL_51767d:
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v35);
                goto LABEL_51769c;
            }
        }
        ::0x515890::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v48);
    }
    else
    {
        uu_sort::merge::merge_without_limit(&v65, v33, a1, a2);
        v90 = v66;
        if (v65 != 2)
        {
            memcpy(&v80, &v72, 16);
            memcpy(&v79, &v71, 16);
            v78 = v70;
            v77 = v69;
            v76 = v68;
            v73 = v65;
            v74 = v90;
            v75 = v67;
            v121 = a3[0];
            *((uint128_t *)&v12) = a3[1];
            v6 = v121;
            return v73.write_all(a2, &(char)v6);
        }
    }
    ::0x514d00::core::ptr::drop_in_place<uu_sort::Output>(a3);
    return v90;
}
