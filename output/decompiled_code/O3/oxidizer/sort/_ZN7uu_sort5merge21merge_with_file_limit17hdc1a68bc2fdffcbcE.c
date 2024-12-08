fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: &u64, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i128;  // [bp-0x348], Other Possible Types: struct48
    let v3: i128;  // [sp-0x338]
    let v4: i64;  // [bp-0x328]
    let v5: i64;  // [sp-0x320]
    let v6: i128;  // [sp-0x318]
    let v7: i128;  // [sp-0x308]
    let v8: i128;  // [sp-0x2f8]
    let v9: i128;  // [sp-0x2e8]
    let v10: i8;  // [bp-0x2e0]
    let v11: i64;  // [sp-0x2d0]
    let v12: i64;  // [sp-0x2c8]
    let v13: i64;  // [sp-0x2c0]
    let v14: i64;  // [sp-0x2b8]
    let v15: i64;  // [sp-0x2b0]
    let v16: i256;  // [bp-0x2a8], Other Possible Types: struct32
    let v17: i64;  // [sp-0x2a0]
    let v18: i128;  // [bp-0x298]
    let v19: i128;  // [bp-0x290]
    let v20: i128;  // [bp-0x288]
    let v21: i128;  // [bp-0x280]
    let v22: i128;  // [bp-0x278]
    let v23: i128;  // [bp-0x270]
    let v24: i128;  // [bp-0x268]
    let v25: i128;  // [bp-0x260]
    let v26: i128;  // [bp-0x258]
    let v27: i128;  // [sp-0x250]
    let v28: i64;  // [sp-0x240]
    let v29: i640;  // [sp-0x238], Other Possible Types: struct36, Result<struct80, struct24>
    let v30: i8;  // [bp-0x1e0]
    let v31: i64;  // [sp-0x1d8]
    let v32: i64;  // [sp-0x1d0]
    let v33: i64;  // [sp-0x1c8]
    let v34: i128;  // [sp-0x1c0]
    let v35: i128;  // [sp-0x1b0]
    let v36: i128;  // [sp-0x1a0]
    let v37: i128;  // [sp-0x190]
    let v38: i64;  // [sp-0x180]
    let v39: struct32;  // [bp-0x178]
    let v40: i64;  // [sp-0x170]
    let v41: i64;  // [sp-0x158]
    let v42: i64;  // [sp-0x150]
    let v43: i64;  // [sp-0x148]
    let v44: i128;  // [sp-0x140]
    let v45: i64;  // [sp-0x130]
    let v46: struct161;  // [bp-0x128], Other Possible Types: struct48, i1288
    let v48: i64;  // r13
    let v49: i64;  // rcx
    let v50: i64;  // rax
    let v51: i64;  // r12
    let v52: i256;  // ymm0
    let v53: i256;  // ymm0
    let v54: i256;  // ymm1
    let v55: i256;  // ymm1
    let v56: i256;  // ymm2
    let v57: i256;  // ymm2
    let v59: i64;  // r12
    let v61: i256;  // ymm3
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i64;  // rcx
    let v69: i64;  // rdx
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i128;  // xmm0
    let v73: i128;  // xmm1
    let v74: i128;  // xmm2
    let v75: i128;  // xmm3
    let v76: i128;  // xmm0
    let v78: i64;  // rdx
    let v79: i64;  // rax
    let v80: i64;  // rcx
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i128;  // xmm1
    let v84: i128;  // xmm2
    let v85: i128;  // xmm3
    let v86: i128;  // xmm0
    let v87: i128;  // xmm0
    let v88: i128;  // xmm0
    let v89: i128;  // xmm1
    let v90: i128;  // xmm2
    let v91: i128;  // xmm3
    let v92: i64;  // rax
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm0
    let v96: i128;  // xmm0
    let v97: i128;  // xmm1
    let v98: i128;  // xmm2
    let v99: i128;  // xmm3
    let v100: i64;  // rdx
    let v101: i128;  // xmm0
    let v102: i64;  // rax
    let v103: i64;  // rdx
    let v104: i64;  // rax
    let v105: i64;  // rdx
    let v106: i64;  // rcx
    let v107: i64;  // rdx

    v48 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v48 {
        v46 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v50 = uu_sort::merge::merge_without_limit(a0, &v46, a2, v49);
        return v50;
    }
    v51 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v55 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v57 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v2 = struct48 {
        field_0: v52 as u128
        field_16: v54 as u128
        field_32: v56 as u128
    };
    v46 = itertools::Itertools::chunks(&v2, v48);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if v51 {
        v1 = v48;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v14 = *((a2 + 64) as &i64);
        v15 = 9223372036854775810;
        v1 = v1;
        do {
            v51 = v59 - v1;
            if v59 < v1 {
                v51 = 0;
            }
            <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v46);
            if v2 == v15 {
                core::option::unwrap_failed(); /* do not return */
            }
            v62 = v8;
            v26 = v62;
            v63 = v7;
            v24 = v63;
            v64 = v2;
            v65 = v3;
            v66 = v2.field_32;
            v67 = v6;
            v22 = v67;
            v20 = v66;
            v18 = v65;
            v16 = v64;
            v29 = uu_sort::merge::merge_without_limit(&v16, a2, v68);
            v69 = v29;
            v70 = *((&v29 as &char + 8) as &i64);
            v71 = *((&v29 as &char + 16) as &i64);
            match v29 {
                Err(_) => {
                    v103 = a0;
                    *((v103 + 8) as &i64) = v70;
                    *((v103 + 16) as &i64) = v71;
                    *(v103 as &i64) = 3;
                    return v50;
                },
                Ok(_) => {
                    v38 = v30;
                    v72 = *((&v29 as &char + 24) as &i128);
                    v73 = *((&v29 as &char + 40) as &i128);
                    v74 = *((&v29 as &char + 56) as &i128);
                    v75 = *((&v29 as &char + 72) as &i128);
                    v37 = v75;
                    v36 = v74;
                    v35 = v73;
                    v34 = v72;
                    v31 = v69;
                    v32 = v70;
                    v33 = v71;
                    v29 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v31);
                },
            }
            if v40 == 0x8000000000000000 {
                v104 = a0;
                *((v104 + 8) as &i128) = *((&v29 as &char + 16) as &i128);
                *(v104 as &i64) = 3;
                return v50;
            }
            v76 = *((&v29 as &char + 16) as &i128);
            *(&v39.field_0 as &struct32) = struct32 {
                field_0: v29
                field_8: v77
                field_16: v76
            };
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v39, v0, v14);
            v78 = v2;
            v79 = *((&v2 as &char + 8) as &i64);
            v80 = v3;
            if v16 == 0x8000000000000000 {
                v105 = a0;
                *((v105 + 8) as &i64) = v17;
                *((v105 + 16) as &i64) = v18;
                *(v105 as &i64) = 3;
                return v50;
            }
            v28 = v10;
            v81 = v8;
            v27 = v81;
            v82 = *((&v2.field_16 as &char + 8) as &i128);
            v83 = *((&v2.field_32 as &char + 8) as &i128);
            v84 = *((&v6 as &char + 8) as &i128);
            v85 = *((&v7 as &char + 8) as &i128);
            v25 = v85;
            v23 = v84;
            v21 = v83;
            v19 = v82;
            v16 = v78;
            v17 = v79;
            v18 = v80;
            v86 = *((&v37 as &char + 8) as &i128);
            v8 = v86;
            v87 = *((&v36 as &char + 8) as &i128);
            v7 = v87;
            v88 = v31;
            v89 = v33;
            v90 = *((&v34 as &char + 8) as &i128);
            v91 = *((&v35 as &char + 8) as &i128);
            v6 = v91;
            v4 = v90;
            v3 = v89;
            v2 = v88;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v16);
            v92 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
            if v92 {
                v106 = a0;
                *((v106 + 8) as &i64) = v92;
                *((v106 + 16) as &i64) = v107;
                *(v106 as &i64) = 3;
                return v50;
            }
            v93 = *((&v27 as &char + 8) as &i128);
            v9 = v93;
            v94 = *((&v25 as &char + 8) as &i128);
            v8 = v94;
            v95 = *((&v23 as &char + 8) as &i128);
            v7 = v95;
            v96 = v16;
            v97 = v18;
            v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
            v98 = *((&v19 as &char + 8) as &i128);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v90 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v98;
            v99 = *((&v21 as &char + 8) as &i128);
            v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v91 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v99;
            v6 = v99;
            v4 = v98;
            v3 = v97;
            v2 = v96;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v29, &v2);
            v100 = v29;
            v70 = *((&v29 as &char + 8) as &i64);
            v71 = *((&v29 as &char + 16) as &i64);
            if v41 == 0x8000000000000000 {
                vvar_738{reg 32} = a0;
                *((v103 + 8) as &i64) = v70;
                *((v103 + 16) as &i64) = v71;
                *(v103 as &i64) = 3;
                return v50;
            }
            v45 = *((&v29 as &char + 40) as &i64);
            v101 = *((&v29 as &char + 24) as &i128);
            v53 = ...;
            v44 = v101;
            v41 = v100;
            v42 = v70;
            v43 = v71;
            alloc::vec::Vec<T,A>::push(&v11, &v41, v41);
            v102 = v1;
        } while (v51 > v102);
    }
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v46);
    if v2 == 9223372036854775810 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
        v3 = *((&v16 as &char + 16) as &i128);
        v2 = v16;
        v4 = alloc::boxed::Box<T>::new();
        v5 = &g_5ff848;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return v50;
    }
    core::panicking::panic(); /* do not return */
}
