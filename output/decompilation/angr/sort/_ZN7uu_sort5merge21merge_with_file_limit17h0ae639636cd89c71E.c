long long uu_sort::merge::merge_with_file_limit(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    struct_0 *v0;  // [bp-0x338]
    void* v1;  // [bp-0x328], Other Possible Types: int
    unsigned long long v2;  // [bp-0x328]
    int v3;  // [bp-0x328]
    unsigned long long v6;  // [bp-0x320]
    int v7;  // [sp-0x318]
    unsigned long long v8;  // [bp-0x310]
    int v9;  // [bp-0x308], Other Possible Types: unsigned long long
    int v10;  // [bp-0x308]
    int v11;  // [bp-0x308]
    unsigned long long v13;  // [bp-0x300]
    unsigned long long v14;  // [bp-0x2f8]
    int v15;  // [bp-0x2f8]
    unsigned long long v16;  // [bp-0x2f0]
    int v17;  // [bp-0x2e8]
    int v18;  // [bp-0x2e0]
    unsigned long long v19;  // [bp-0x2d0]
    void* v20;  // [bp-0x2c8]
    unsigned long long v21;  // [sp-0x2c0]
    void* v22;  // [sp-0x2b8]
    unsigned long long v23;  // [sp-0x2a0]
    unsigned long long v24;  // [sp-0x298]
    unsigned long long v25;  // [bp-0x290]
    int v26;  // [bp-0x288]
    int v28;  // [bp-0x278]
    unsigned long long v29;  // [bp-0x270]
    int v30;  // [bp-0x268]
    int v32;  // [bp-0x258]
    int v33;  // [bp-0x248]
    void* v34;  // [bp-0x230]
    unsigned long long v35;  // [bp-0x228]
    void* v36;  // [bp-0x220]
    unsigned long long v37;  // [bp-0x218]
    unsigned long long v38;  // [sp-0x210]
    unsigned long long v39;  // [bp-0x208]
    int v40;  // [bp-0x200]
    int v42;  // [bp-0x1f0]
    int v44;  // [bp-0x1e0]
    int v46;  // [bp-0x1d0]
    unsigned long long v48;  // [sp-0x1c0]
    unsigned long long v49;  // [bp-0x1b8]
    unsigned long long v50;  // [bp-0x1b0]
    int v51;  // [bp-0x1a8]
    unsigned long v52;  // [bp-0x198]
    unsigned long long v53;  // [bp-0x190]
    void* v54;  // [bp-0x188]
    unsigned long long v55;  // [bp-0x180]
    unsigned long long v56;  // [bp-0x178]
    unsigned long long v57;  // [bp-0x170]
    unsigned long long v61;  // [bp-0x150]
    unsigned long long v62;  // [bp-0x148]
    int v63;  // [bp-0x140]
    char v67;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v68;  // [bp-0x108]
    unsigned long long v69;  // [bp-0x100]
    int v70;  // [bp-0xf8]
    int v71;  // [bp-0xe8]
    int v72;  // [bp-0xd8]
    char v73;  // [bp-0xc8]
    unsigned long long v74;  // [bp-0xb8]
    unsigned long long v75;  // [bp-0xb0]
    unsigned long long v76;  // [bp-0xa8]
    unsigned long long v77;  // [bp-0xa0]
    int v78;  // [bp-0x98]
    int v79;  // [bp-0x88]
    int v80;  // [bp-0x78]
    char v81;  // [bp-0x68]
    unsigned long long v82;  // [bp-0x58]
    char v83;  // [bp-0x50]
    struct_0 *v85;  // rbp
    unsigned long long v86;  // rax
    unsigned long v87;  // r12
    struct_1 *v88;  // rax
    int v89;  // ymm0
    uint256_t v90;  // ymm0
    unsigned long long v91;  // r13
    unsigned long long v92;  // rbp
    int v93;  // xmm0
    int v94;  // xmm1
    int v95;  // xmm2
    int v96;  // xmm0
    unsigned long long v97;  // rbp
    int v98;  // xmm0
    uint256_t v99;  // ymm0
    int v100;  // xmm0
    int v101;  // xmm0
    int v102;  // xmm1
    int v103;  // xmm2
    int v104;  // xmm0
    int v105;  // xmm1
    unsigned long long v117;  // rax
    unsigned long long v118;  // rax
    struct_1 *v119;  // rax
    int v120;  // xmm0
    int v121;  // xmm1
    unsigned long long v122;  // [bp-0x280]
    unsigned long long v124;  // [bp-0x1e8]

    v85 = a1;
    v86 = a0->field_0[1].len(a0->field_10[0]);
    v0 = a1;
    if (v86 > a1->field_70)
    {
        v52 = &a1->field_70;
        v34 = 0;
        v35 = 8;
        v36 = 0;
        v20 = 0;
        v21 = 8;
        v22 = 0;
        v88 = a0;
        v90 = v89 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v88->field_0;
        *((int128_t *)&v33) = *((int128_t *)&v88->field_10[1]);
        *((int128_t *)&v32) = *((int128_t *)&v88->field_8);
        *((unsigned long long [2])&v30) = v88->field_0;
        v53 = 9223372036854775809;
        while (true)
        {
            do
            {
                v83.next(&(char)v30);
                if (*((long long *)&v83) == 9223372036854775809)
                {
                    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&(char)v30);
                    v37.into_iter(&v34);
                    v117 = alloc::boxed::Box<T>::new();
                    memcpy(&(char)v7, &v39, 16);
                    *((int128_t *)&v1) = *((int128_t *)&v37);
                    v9 = v117;
                    v13 = &g_58c790;
                    v118 = uu_sort::merge::merge_with_file_limit(&(unsigned long long)v1, v85, a2, a3);
                    core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
                    return v118;
                }
                v20.push(&v83);
            } while (0 < v87);
            v54 = 0;
            if (v54 != v87)
            {
                v1 = 0;
                core::panicking::assert_failed(0, &v54, v52, &v1, &g_58c7d0); /* do not return */
            }
            v23.into_iter(&v20);
            uu_sort::merge::merge_without_limit(&(unsigned long long)v1, &v23, v85);
            v91 = v6;
            v92 = (long long)v7;
            if (v2 == 3)
                break;
            v48 = v19;
            v93 = *((int128_t *)&v8);
            v94 = *((int128_t *)&v13);
            v95 = *((int128_t *)&v16);
            v46 = v18;
            v44 = v95;
            v42 = v94;
            v40 = v93;
            v37 = v2;
            v38 = v91;
            v39 = v92;
            v20 = 0;
            v21 = 8;
            v22 = 0;
            v49.next_file(a3);
            if (v50 == 0x8000000000000000)
            {
                v91 = (long long)v51;
LABEL_4c5b79:
                core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v37);
                break;
            }
            v96 = v51;
            v61 = v49;
            v62 = v50;
            v63 = v96;
            (unsigned long long)v1.create(&v61);
            v91 = v6;
            v97 = (long long)v7;
            if (v2 == 0x8000000000000000)
                goto LABEL_4c5b79;
            v98 = *((int128_t *)&v8);
            *((int128_t *)&v28) = *((int128_t *)&v13);
            v26 = v98;
            v23 = v2;
            v24 = v91;
            v25 = v97;
            v99 = (((v90 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v98) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)(&v46)[8];
            memcpy(&(char)v18, &(unsigned long long)v46, 16);
            v100 = (int128_t)(&v44)[8];
            v17 = v100;
            v101 = *((int128_t *)&v37);
            v102 = *((int128_t *)&v39);
            v103 = (int128_t)(&v40)[8];
            *((int128_t *)&v15) = *((int128_t *)&v124);
            v10 = v103;
            v7 = v102;
            v1 = v101;
            v91 = (unsigned long long)v1.write_all_to(v0, v23.as_write());
            if (!v91)
            {
                v14 = v29;
                v104 = *((int128_t *)&v23);
                v90 = ((v99 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104;
                v105 = *((int128_t *)&v25);
                *((int128_t *)&v11) = *((int128_t *)&v122);
                v7 = v105;
                v3 = v104;
                v49.finished_writing(&(unsigned long long)v1);
                v91 = v50;
                if (v49 == 0x8000000000000000)
                    goto LABEL_4c5b9b;
                v55 = v49;
                v56 = v91;
                v57 = (long long)v51;
                v34.push(&v55, &g_58c7e8);
                v85 = v0;
            }
            else
            {
                core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&v23);
LABEL_4c5b9b:
                break;
            }
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>(&(char)v30);
        core::ptr::drop_in_place<alloc::vec::Vec<core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(&v20);
        core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v34);
    }
    else
    {
        v119 = a0;
        v120 = v119->field_0;
        v121 = *((int128_t *)&v119->field_8);
        *((int128_t *)&v9) = *((int128_t *)&v119->field_10[1]);
        v7 = v121;
        v1 = v120;
        uu_sort::merge::merge_without_limit(&v67, &(char)v1, a1);
        v91 = v68;
        if (v67 != 3)
        {
            v82 = v74;
            memcpy(&v81, &v73, 16);
            v80 = v72;
            v79 = v71;
            v78 = v70;
            v75 = v67;
            v76 = v91;
            v77 = v69;
            return v75.write_all(v0, a2);
        }
    }
    core::ptr::drop_in_place<uu_sort::Output>(a2);
    return v91;
}
