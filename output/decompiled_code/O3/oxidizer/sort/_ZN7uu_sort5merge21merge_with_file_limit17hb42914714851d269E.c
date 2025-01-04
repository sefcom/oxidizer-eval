fn uu_sort::merge::merge_with_file_limit(a0: &Result<struct80, struct24>, a1: &struct48, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i896;  // [bp-0x348], Other Possible Types: Option<struct96>, Result<struct112, struct24>, struct48
    let v3: i128;  // [sp-0x338]
    let v4: i128;  // [bp-0x328]
    let v5: i128;  // [sp-0x318]
    let v6: i128;  // [sp-0x308]
    let v7: i128;  // [sp-0x2f8]
    let v8: i128;  // [sp-0x2e8]
    let v9: i64;  // [sp-0x2d0], Other Possible Types: struct16
    let v10: i64;  // [sp-0x2c8]
    let v11: i64;  // [sp-0x2c0]
    let v12: i64;  // [sp-0x2b8]
    let v13: i64;  // [sp-0x2b0]
    let v14: i256;  // [bp-0x2a8], Other Possible Types: struct32
    let v15: i64;  // [sp-0x2a0]
    let v16: i64;  // [bp-0x298]
    let v17: i128;  // [bp-0x290]
    let v18: i128;  // [bp-0x288]
    let v19: i128;  // [bp-0x280]
    let v20: i128;  // [bp-0x278]
    let v21: i128;  // [bp-0x270]
    let v22: i128;  // [bp-0x268]
    let v23: i128;  // [bp-0x260]
    let v24: i128;  // [bp-0x258]
    let v25: i128;  // [sp-0x250]
    let v26: i64;  // [sp-0x240]
    let v27: i384;  // [sp-0x238], Other Possible Types: Result<struct80, struct24>, struct36
    let v28: i8;  // [bp-0x1e0]
    let v29: i64;  // [sp-0x1d8]
    let v30: i64;  // [sp-0x1d0]
    let v31: i64;  // [sp-0x1c8]
    let v32: i128;  // [sp-0x1c0]
    let v33: i128;  // [sp-0x1b0]
    let v34: i128;  // [sp-0x1a0]
    let v35: i128;  // [sp-0x190]
    let v36: i64;  // [sp-0x180]
    let v37: i256;  // [bp-0x178]
    let v38: i64;  // [sp-0x170]
    let v39: i64;  // [sp-0x158]
    let v40: i64;  // [sp-0x150]
    let v41: i64;  // [sp-0x148]
    let v42: i128;  // [sp-0x140]
    let v43: i64;  // [sp-0x130]
    let v44: i1288;  // [bp-0x128], Other Possible Types: struct161, struct48
    let v46: i64;  // r13
    let v47: i64;  // rcx
    let v48: i64;  // rax
    let v49: i64;  // r12
    let v50: i256;  // ymm0
    let v51: i256;  // ymm0
    let v52: i256;  // ymm1
    let v53: i256;  // ymm1
    let v54: i256;  // ymm2
    let v55: i256;  // ymm2
    let v57: i64;  // r12
    let v59: i256;  // ymm3
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v66: i64;  // rcx
    let v67: i64;  // rdx
    let v68: i64;  // rax
    let v69: i64;  // rcx
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1
    let v72: i128;  // xmm2
    let v73: i128;  // xmm3
    let v74: i128;  // xmm0
    let v75: i64;  // rdx
    let v76: i64;  // rax
    let v77: i64;  // rcx
    let v78: i128;  // xmm0
    let v79: i128;  // xmm0
    let v80: i128;  // xmm1
    let v81: i128;  // xmm2
    let v82: i128;  // xmm3
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i128;  // xmm2
    let v88: i128;  // xmm3
    let v89: i64;  // rax
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm1
    let v95: i128;  // xmm2
    let v96: i128;  // xmm3
    let v97: i64;  // rdx
    let v98: i128;  // xmm0
    let v99: i64;  // rax
    let v100: i64;  // rdx
    let v101: i64;  // rax
    let v102: i64;  // rdx
    let v103: i64;  // rcx
    let v104: i64;  // rdx

    v46 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v46 {
        v44 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v48 = uu_sort::merge::merge_without_limit(a0, &v44, a2, v47);
        return v48;
    }
    v49 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v55 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v2 = struct48 {
        field_0: v50 as u128
        field_16: v52 as u128
        field_32: v54 as u128
    };
    v44 = itertools::Itertools::chunks(&v2, v46);
    v9 = 0;
    v10 = 8;
    v11 = 0;
    if v49 {
        v1 = v46;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v12 = *((a2 + 64) as &i64);
        v13 = 9223372036854775810;
        v1 = v1;
        do {
            v49 = v57 - v1;
            if v57 < v1 {
                v49 = 0;
            }
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
            if v2 == v13 {
                core::option::unwrap_failed(); /* do not return */
            }
            v60 = v7;
            v24 = v60;
            v61 = v6;
            v22 = v61;
            v62 = v2;
            v63 = v3;
            v64 = *((&v2 as &char + 32) as &i128);
            v65 = v5;
            v20 = v65;
            v18 = v64;
            v16 = v63;
            v14 = v62;
            v27 = uu_sort::merge::merge_without_limit(&v14, a2, v66);
            v67 = v27;
            v68 = *((&v27 as &char + 8) as &i64);
            v69 = *((&v27 as &char + 16) as &i64);
            match v27 {
                Err(_) => {
                    v100 = a0;
                    *((v100 + 8) as &i64) = v68;
                    *((v100 + 16) as &i64) = v69;
                    *(v100 as &i64) = 3;
                    return v48;
                },
                Ok(_) => {
                    v36 = v28;
                    v70 = *((&v27 as &char + 24) as &i128);
                    v71 = *((&v27 as &char + 40) as &i128);
                    v72 = *((&v27 as &char + 56) as &i128);
                    v73 = v27;
                    v35 = v73;
                    v34 = v72;
                    v33 = v71;
                    v32 = v70;
                    v29 = v67;
                    v30 = v68;
                    v31 = v69;
                    v27 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v29);
                },
            }
            if v38 == 0x8000000000000000 {
                v101 = a0;
                *((v101 + 8) as &i128) = *((&v27 as &char + 16) as &i128);
                *(v101 as &i64) = 3;
                return v48;
            }
            v74 = *((&v27 as &char + 16) as &i128);
            v37 = v27;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v37, v0, v12);
            v75 = v2;
            v76 = *((&v2 as &char + 8) as &i64);
            v77 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v102 = a0;
                    *((v102 + 8) as &i64) = v15;
                    *((v102 + 16) as &i64) = v16;
                    *(v102 as &i64) = 3;
                    return v48;
                },
                Ok(_) => {
                    v26 = *((&v2 as &char + 104) as &i64);
                    v78 = *((&v2 as &char + 88) as &i128);
                    v25 = v78;
                    v79 = *((&v2 as &char + 24) as &i128);
                    v80 = *((&v2 as &char + 40) as &i128);
                    v81 = *((&v2 as &char + 56) as &i128);
                    v82 = *((&v2 as &char + 72) as &i128);
                    v23 = v82;
                    v21 = v81;
                    v19 = v80;
                    v17 = v79;
                    v14 = v75;
                    v15 = v76;
                    v16 = v77;
                    v83 = *((&v35 as &char + 8) as &i128);
                    v7 = v83;
                    v84 = *((&v34 as &char + 8) as &i128);
                    v6 = v84;
                    v85 = v29;
                    v86 = v31;
                    v87 = *((&v32 as &char + 8) as &i128);
                    v88 = *((&v33 as &char + 8) as &i128);
                    v5 = v88;
                    v4 = v87;
                    v3 = v86;
                    v2 = v85;
                    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14);
                    v89 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
                },
            }
            if v89 {
                v103 = a0;
                *((v103 + 8) as &i64) = v89;
                *((v103 + 16) as &i64) = v104;
                *(v103 as &i64) = 3;
                return v48;
            }
            v90 = *((&v25 as &char + 8) as &i128);
            v8 = v90;
            v91 = *((&v23 as &char + 8) as &i128);
            v7 = v91;
            v92 = *((&v21 as &char + 8) as &i128);
            v6 = v92;
            v93 = v14;
            v94 = v16;
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
            v95 = *((&v17 as &char + 8) as &i128);
            v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
            v96 = *((&v19 as &char + 8) as &i128);
            v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
            v5 = v96;
            v4 = v95;
            v3 = v94;
            v2 = v93;
            v27 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
            v97 = v27;
            v68 = *((&v27 as &char + 8) as &i64);
            v69 = *((&v27 as &char + 16) as &i64);
            match v27 {
                Err(_) => {
                    vvar_743{reg 32} = a0;
                    *((v100 + 8) as &i64) = v68;
                    *((v100 + 16) as &i64) = v69;
                    *(v100 as &i64) = 3;
                    return v48;
                },
                Ok(_) => {
                    v43 = *((&v27 as &char + 40) as &i64);
                    v98 = *((&v27 as &char + 24) as &i128);
                    v51 = ...;
                    v42 = v98;
                    v39 = v97;
                    v40 = v68;
                    v41 = v69;
                    v9 = alloc::vec::Vec<T,A>::push(&v39, v39);
                    v99 = v1;
                },
            }
        } while (v49 > v99);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
    if v2 == 9223372036854775810 {
        v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v2 = v14;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return v48;
    }
    core::panicking::panic(); /* do not return */
}
