fn uu_sort::merge::merge_with_file_limit(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x350]
    let v1: i64;  // [sp-0x348]
    let v2: i128;  // [bp-0x338], Other Possible Types: Option<struct96>, Result<struct112, struct24>, struct32
    let v3: i128;  // [sp-0x328]
    let v4: i128;  // [bp-0x318]
    let v5: i128;  // [sp-0x308]
    let v6: i128;  // [sp-0x2f8]
    let v7: i128;  // [sp-0x2e8]
    let v8: i128;  // [sp-0x2d8]
    let v9: i128;  // [sp-0x2c0], Other Possible Types: struct16
    let v10: i64;  // [sp-0x2b8]
    let v11: i64;  // [sp-0x2b0]
    let v12: i64;  // [sp-0x2a8]
    let v13: i64;  // [sp-0x2a0]
    let v14: i64;  // [bp-0x298], Other Possible Types: struct32
    let v15: i64;  // [sp-0x290]
    let v16: i128;  // [bp-0x288]
    let v17: i128;  // [bp-0x280]
    let v18: i128;  // [bp-0x278]
    let v19: i128;  // [bp-0x270]
    let v20: i128;  // [bp-0x268]
    let v21: i128;  // [bp-0x260]
    let v22: i128;  // [bp-0x258]
    let v23: i128;  // [bp-0x250]
    let v24: i128;  // [bp-0x248]
    let v25: i128;  // [sp-0x240]
    let v26: i64;  // [sp-0x230]
    let v27: i384;  // [sp-0x228], Other Possible Types: Result<struct80, struct24>, struct36
    let v28: i8;  // [bp-0x1d0]
    let v29: i64;  // [sp-0x1c8]
    let v30: i64;  // [sp-0x1c0]
    let v31: i64;  // [sp-0x1b8]
    let v32: i128;  // [sp-0x1b0]
    let v33: i128;  // [sp-0x1a0]
    let v34: i128;  // [sp-0x190]
    let v35: i128;  // [sp-0x180]
    let v36: i64;  // [sp-0x170]
    let v37: i256;  // [bp-0x168]
    let v38: i64;  // [sp-0x160]
    let v39: i64;  // [sp-0x148]
    let v40: i64;  // [sp-0x140]
    let v41: i64;  // [sp-0x138]
    let v42: i128;  // [sp-0x130]
    let v43: i64;  // [sp-0x120]
    let v44: i1160;  // [bp-0x118], Other Possible Types: struct32, struct145
    let v46: i64;  // r13
    let v47: i64;  // rcx
    let v48: i64;  // r12
    let v49: i256;  // ymm0
    let v50: i256;  // ymm0
    let v51: i256;  // ymm1
    let v52: i256;  // ymm1
    let v54: i64;  // r12
    let v56: i256;  // ymm2
    let v57: i256;  // ymm3
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm2
    let v63: i128;  // xmm3
    let v64: i64;  // rcx
    let v65: i64;  // rdx
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm2
    let v71: i128;  // xmm3
    let v72: i128;  // xmm0
    let v73: i64;  // rdx
    let v74: i64;  // rax
    let v75: i64;  // rcx
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i128;  // xmm1
    let v79: i128;  // xmm2
    let v80: i128;  // xmm3
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm1
    let v85: i128;  // xmm2
    let v86: i128;  // xmm3
    let v87: i64;  // rax
    let v88: i128;  // xmm0
    let v89: i128;  // xmm0
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i128;  // xmm1
    let v93: i128;  // xmm2
    let v94: i128;  // xmm3
    let v95: i64;  // rdx
    let v96: i128;  // xmm0
    let v97: i64;  // rax
    let v98: i64;  // r14
    let v99: i64;  // rdx

    v46 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v46 {
        *(&v44.field_0 as &struct32) = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v44, a2, v47);
        return a0;
    }
    v48 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v50 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    *(&v2.field_0 as &struct32) = struct32 {
        field_0: v49 as u128
        field_16: v51 as u128
    };
    v44 = itertools::Itertools::chunks(&v2, v46);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    if v48 {
        v1 = v46;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v12 = *((a2 + 64) as &i64);
        v13 = 9223372036854775810;
        v1 = v1;
        do {
            v48 = v54 - v1;
            if v54 < v1 {
                v48 = 0;
            }
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
            if v2 == v13 {
                core::option::unwrap_failed(); /* do not return */
            }
            v58 = v7;
            v24 = v58;
            v59 = v6;
            v22 = v59;
            v60 = v2;
            v61 = v3;
            v62 = *((&v2 as &char + 32) as &i128);
            v63 = v5;
            v20 = v63;
            v18 = v62;
            v16 = v61;
            v14 = v60;
            v27 = uu_sort::merge::merge_without_limit(&v14, a2, v64);
            v65 = v27;
            v66 = *((&v27 as &char + 8) as &i64);
            v67 = *((&v27 as &char + 16) as &i64);
            match v27 {
                Err(_) => {
                    v98 = a0;
                    *((v98 + 8) as &i64) = v66;
                    *((v98 + 16) as &i64) = v67;
                    *(v98 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v36 = v28;
                    v68 = *((&v27 as &char + 24) as &i128);
                    v69 = *((&v27 as &char + 40) as &i128);
                    v70 = *((&v27 as &char + 56) as &i128);
                    v71 = *((&v27 as &char + 72) as &i128);
                    v35 = v71;
                    v34 = v70;
                    v33 = v69;
                    v32 = v68;
                    v29 = v65;
                    v30 = v66;
                    v31 = v67;
                    v27 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v29);
                },
            }
            if v38 == 0x8000000000000000 {
                v98 = a0;
                *((v98 + 8) as &i128) = *((&v27 as &char + 16) as &i128);
                *(v98 as &i64) = 3;
                return a0;
            }
            v72 = *((&v27 as &char + 16) as &i128);
            v37 = v27;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v37, v0, v12);
            v73 = v2;
            v74 = *((&v2 as &char + 8) as &i64);
            v75 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v98 = a0;
                    *((v98 + 8) as &i64) = v15;
                    *((v98 + 16) as &i64) = v16;
                    *(v98 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v26 = *((&v2 as &char + 104) as &i64);
                    v76 = *((&v2 as &char + 88) as &i128);
                    v25 = v76;
                    v77 = *((&v2 as &char + 24) as &i128);
                    v78 = *((&v2 as &char + 40) as &i128);
                    v79 = *((&v2 as &char + 56) as &i128);
                    v80 = *((&v2 as &char + 72) as &i128);
                    v23 = v80;
                    v21 = v79;
                    v19 = v78;
                    v17 = v77;
                    v14 = v73;
                    v15 = v74;
                    v16 = v75;
                    v81 = *((&v35 as &char + 8) as &i128);
                    v7 = v81;
                    v82 = *((&v34 as &char + 8) as &i128);
                    v6 = v82;
                    v83 = v29;
                    v84 = v31;
                    v85 = *((&v32 as &char + 8) as &i128);
                    v86 = *((&v33 as &char + 8) as &i128);
                    v5 = v86;
                    v4 = v85;
                    v3 = v84;
                    v2 = v83;
                    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14);
                    v87 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
                },
            }
            if v87 {
                v98 = a0;
                *((v98 + 8) as &i64) = v87;
                *((v98 + 16) as &i64) = v99;
                *(v98 as &i64) = 3;
                return a0;
            }
            v88 = *((&v25 as &char + 8) as &i128);
            v8 = v88;
            v89 = *((&v23 as &char + 8) as &i128);
            v7 = v89;
            v90 = *((&v21 as &char + 8) as &i128);
            v6 = v90;
            v91 = v14;
            v92 = v16;
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v92;
            v93 = *((&v17 as &char + 8) as &i128);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
            v94 = *((&v19 as &char + 8) as &i128);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
            v5 = v94;
            v4 = v93;
            v3 = v92;
            v2 = v91;
            v27 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
            v95 = v27;
            v66 = *((&v27 as &char + 8) as &i64);
            v67 = *((&v27 as &char + 16) as &i64);
            match v27 {
                Err(_) => {
                    vvar_748{reg 128} = a0;
                    *((v98 + 8) as &i64) = v66;
                    *((v98 + 16) as &i64) = v67;
                    *(v98 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v43 = *((&v27 as &char + 40) as &i64);
                    v96 = *((&v27 as &char + 24) as &i128);
                    v50 = ...;
                    v42 = v96;
                    v39 = v95;
                    v40 = v66;
                    v41 = v67;
                    v9 = alloc::vec::Vec<T,A>::push(&v39, v39);
                    v97 = v1;
                },
            }
        } while (v48 > v97);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
    if v2 == 9223372036854775810 {
        v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v2 = v14;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return a0;
    }
    core::panicking::panic(); /* do not return */
}
