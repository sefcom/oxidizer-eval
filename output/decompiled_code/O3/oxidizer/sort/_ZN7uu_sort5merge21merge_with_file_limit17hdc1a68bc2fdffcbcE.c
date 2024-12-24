fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: &u64, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i768;  // [bp-0x348], Other Possible Types: Option<struct96>, struct48
    let v3: i128;  // [sp-0x338]
    let v4: i128;  // [bp-0x328]
    let v5: i128;  // [sp-0x318]
    let v6: i128;  // [sp-0x308]
    let v7: i128;  // [sp-0x2f8]
    let v8: i128;  // [sp-0x2e8]
    let v9: i8;  // [bp-0x2e0]
    let v10: i64;  // [sp-0x2d0]
    let v11: i64;  // [sp-0x2c8]
    let v12: i64;  // [sp-0x2c0]
    let v13: i64;  // [sp-0x2b8]
    let v14: i64;  // [sp-0x2b0]
    let v15: i64;  // [bp-0x2a8], Other Possible Types: struct32
    let v16: i64;  // [sp-0x2a0]
    let v17: i64;  // [bp-0x298]
    let v18: i128;  // [bp-0x290]
    let v19: i128;  // [bp-0x288]
    let v20: i128;  // [bp-0x280]
    let v21: i128;  // [bp-0x278]
    let v22: i128;  // [bp-0x270]
    let v23: i128;  // [bp-0x268]
    let v24: i128;  // [bp-0x260]
    let v25: i128;  // [bp-0x258]
    let v26: i128;  // [sp-0x250]
    let v27: i64;  // [sp-0x240]
    let v28: i288;  // [sp-0x238], Other Possible Types: struct36, Result<struct80, struct24>
    let v29: i8;  // [bp-0x1e0]
    let v30: i64;  // [sp-0x1d8]
    let v31: i64;  // [sp-0x1d0]
    let v32: i64;  // [sp-0x1c8]
    let v33: i128;  // [sp-0x1c0]
    let v34: i128;  // [sp-0x1b0]
    let v35: i128;  // [sp-0x1a0]
    let v36: i128;  // [sp-0x190]
    let v37: i64;  // [sp-0x180]
    let v38: i256;  // [bp-0x178]
    let v39: i64;  // [sp-0x170]
    let v40: i64;  // [sp-0x158]
    let v41: i64;  // [sp-0x150]
    let v42: i64;  // [sp-0x148]
    let v43: i128;  // [sp-0x140]
    let v44: i64;  // [sp-0x130]
    let v45: struct48;  // [bp-0x128], Other Possible Types: struct161, i1288
    let v47: i64;  // r13
    let v48: i64;  // rcx
    let v49: i64;  // rax
    let v50: i64;  // r12
    let v51: i256;  // ymm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm1
    let v54: i256;  // ymm1
    let v55: i256;  // ymm2
    let v56: i256;  // ymm2
    let v58: i64;  // r12
    let v60: i256;  // ymm3
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm1
    let v65: i128;  // xmm2
    let v66: i128;  // xmm3
    let v67: i64;  // rcx
    let v68: i64;  // rdx
    let v69: i64;  // rax
    let v70: i64;  // rcx
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1
    let v73: i128;  // xmm2
    let v74: i128;  // xmm3
    let v75: i128;  // xmm0
    let v76: i64;  // rdx
    let v77: i64;  // rax
    let v78: i64;  // rcx
    let v79: i128;  // xmm0
    let v80: i128;  // xmm0
    let v81: i128;  // xmm1
    let v82: i128;  // xmm2
    let v83: i128;  // xmm3
    let v84: i128;  // xmm0
    let v85: i128;  // xmm0
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i128;  // xmm2
    let v89: i128;  // xmm3
    let v90: i64;  // rax
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i128;  // xmm0
    let v94: i128;  // xmm0
    let v95: i128;  // xmm1
    let v96: i128;  // xmm2
    let v97: i128;  // xmm3
    let v98: i64;  // rdx
    let v99: i128;  // xmm0
    let v100: i64;  // rax
    let v101: i64;  // rdx
    let v102: i64;  // rax
    let v103: i64;  // rdx
    let v104: i64;  // rcx
    let v105: i64;  // rdx

    v47 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v47 {
        v45 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v49 = uu_sort::merge::merge_without_limit(a0, &v45, a2, v48);
        return v49;
    }
    v50 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v56 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v2 = struct48 {
        field_0: v51 as u128
        field_16: v53 as u128
        field_32: v55 as u128
    };
    v45 = itertools::Itertools::chunks(&v2, v47);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if v50 {
        v1 = v47;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v13 = *((a2 + 64) as &i64);
        v14 = 9223372036854775810;
        v1 = v1;
        do {
            v50 = v58 - v1;
            if v58 < v1 {
                v50 = 0;
            }
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v45);
            if v2 == v14 {
                core::option::unwrap_failed(); /* do not return */
            }
            v61 = v7;
            v25 = v61;
            v62 = v6;
            v23 = v62;
            v63 = v2;
            v64 = v3;
            v65 = *((&v2 as &char + 32) as &i128);
            v66 = v5;
            v21 = v66;
            v19 = v65;
            v17 = v64;
            v15 = v63;
            v28 = uu_sort::merge::merge_without_limit(&v15, a2, v67);
            v68 = v28;
            v69 = *((&v28 as &char + 8) as &i64);
            v70 = *((&v28 as &char + 16) as &i64);
            match v28 {
                Err(_) => {
                    v101 = a0;
                    *((v101 + 8) as &i64) = v69;
                    *((v101 + 16) as &i64) = v70;
                    *(v101 as &i64) = 3;
                    return v49;
                },
                Ok(_) => {
                    v37 = v29;
                    v71 = *((&v28 as &char + 24) as &i128);
                    v72 = *((&v28 as &char + 40) as &i128);
                    v73 = *((&v28 as &char + 56) as &i128);
                    v74 = *((&v28 as &char + 72) as &i128);
                    v36 = v74;
                    v35 = v73;
                    v34 = v72;
                    v33 = v71;
                    v30 = v68;
                    v31 = v69;
                    v32 = v70;
                    v28 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v30);
                },
            }
            if v39 == 0x8000000000000000 {
                v102 = a0;
                *((v102 + 8) as &i128) = *((&v28 as &char + 16) as &i128);
                *(v102 as &i64) = 3;
                return v49;
            }
            v75 = *((&v28 as &char + 16) as &i128);
            v38 = v28;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v38, v0, v13);
            v76 = v2;
            v77 = *((&v2 as &char + 8) as &i64);
            v78 = *((&v2 as &char + 16) as &i64);
            if v15 == 0x8000000000000000 {
                v103 = a0;
                *((v103 + 8) as &i64) = v16;
                *((v103 + 16) as &i64) = v17;
                *(v103 as &i64) = 3;
                return v49;
            }
            v27 = v9;
            v79 = v7;
            v26 = v79;
            v80 = *((&v2 as &char + 24) as &i128);
            v81 = *((&v2 as &char + 40) as &i128);
            v82 = *((&v2 as &char + 56) as &i128);
            v83 = *((&v2 as &char + 72) as &i128);
            v24 = v83;
            v22 = v82;
            v20 = v81;
            v18 = v80;
            v15 = v76;
            v16 = v77;
            v17 = v78;
            v84 = *((&v36 as &char + 8) as &i128);
            v7 = v84;
            v85 = *((&v35 as &char + 8) as &i128);
            v6 = v85;
            v86 = v30;
            v87 = v32;
            v88 = *((&v33 as &char + 8) as &i128);
            v89 = *((&v34 as &char + 8) as &i128);
            v5 = v89;
            v4 = v88;
            v3 = v87;
            v2 = v86;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v15);
            v90 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
            if v90 {
                v104 = a0;
                *((v104 + 8) as &i64) = v90;
                *((v104 + 16) as &i64) = v105;
                *(v104 as &i64) = 3;
                return v49;
            }
            v91 = *((&v26 as &char + 8) as &i128);
            v8 = v91;
            v92 = *((&v24 as &char + 8) as &i128);
            v7 = v92;
            v93 = *((&v22 as &char + 8) as &i128);
            v6 = v93;
            v94 = v15;
            v95 = v17;
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
            v96 = *((&v18 as &char + 8) as &i128);
            v56 = v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
            v97 = *((&v20 as &char + 8) as &i128);
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
            v5 = v97;
            v4 = v96;
            v3 = v95;
            v2 = v94;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v28, &v2);
            v98 = v28;
            v69 = *((&v28 as &char + 8) as &i64);
            v70 = *((&v28 as &char + 16) as &i64);
            if v40 == 0x8000000000000000 {
                vvar_740{reg 32} = a0;
                *((v101 + 8) as &i64) = v69;
                *((v101 + 16) as &i64) = v70;
                *(v101 as &i64) = 3;
                return v49;
            }
            v44 = *((&v28 as &char + 40) as &i64);
            v99 = *((&v28 as &char + 24) as &i128);
            v52 = ...;
            v43 = v99;
            v40 = v98;
            v41 = v69;
            v42 = v70;
            alloc::vec::Vec<T,A>::push(&v10, &v40, v40);
            v100 = v1;
        } while (v50 > v100);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v45);
    if v2 == 9223372036854775810 {
        v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
        v2 = v15;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return v49;
    }
    core::panicking::panic(); /* do not return */
}
