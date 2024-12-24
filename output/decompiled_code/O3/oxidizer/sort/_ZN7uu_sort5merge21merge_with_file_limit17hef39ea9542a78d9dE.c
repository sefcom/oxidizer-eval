fn uu_sort::merge::merge_with_file_limit(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x350]
    let v1: i64;  // [sp-0x348]
    let v2: i768;  // [bp-0x338], Other Possible Types: Option<struct96>, struct32
    let v3: i128;  // [sp-0x328]
    let v4: i128;  // [bp-0x318]
    let v5: i128;  // [sp-0x308]
    let v6: i128;  // [sp-0x2f8]
    let v7: i128;  // [sp-0x2e8]
    let v8: i128;  // [sp-0x2d8]
    let v9: i8;  // [bp-0x2d0]
    let v10: i64;  // [sp-0x2c0]
    let v11: i64;  // [sp-0x2b8]
    let v12: i64;  // [sp-0x2b0]
    let v13: i64;  // [sp-0x2a8]
    let v14: i64;  // [sp-0x2a0]
    let v15: i64;  // [bp-0x298], Other Possible Types: struct32
    let v16: i64;  // [sp-0x290]
    let v17: i128;  // [bp-0x288]
    let v18: i128;  // [bp-0x280]
    let v19: i128;  // [bp-0x278]
    let v20: i128;  // [bp-0x270]
    let v21: i128;  // [bp-0x268]
    let v22: i128;  // [bp-0x260]
    let v23: i128;  // [bp-0x258]
    let v24: i128;  // [bp-0x250]
    let v25: i128;  // [bp-0x248]
    let v26: i128;  // [sp-0x240]
    let v27: i64;  // [sp-0x230]
    let v28: i288;  // [sp-0x228], Other Possible Types: struct36, Result<struct80, struct24>
    let v29: i8;  // [bp-0x1d0]
    let v30: i64;  // [sp-0x1c8]
    let v31: i64;  // [sp-0x1c0]
    let v32: i64;  // [sp-0x1b8]
    let v33: i128;  // [sp-0x1b0]
    let v34: i128;  // [sp-0x1a0]
    let v35: i128;  // [sp-0x190]
    let v36: i128;  // [sp-0x180]
    let v37: i64;  // [sp-0x170]
    let v38: i256;  // [bp-0x168]
    let v39: i64;  // [sp-0x160]
    let v40: i64;  // [sp-0x148]
    let v41: i64;  // [sp-0x140]
    let v42: i64;  // [sp-0x138]
    let v43: i128;  // [sp-0x130]
    let v44: i64;  // [sp-0x120]
    let v45: i1160;  // [bp-0x118], Other Possible Types: struct145, struct32
    let v47: i64;  // r13
    let v48: i64;  // rcx
    let v49: i64;  // r12
    let v50: i256;  // ymm0
    let v51: i256;  // ymm0
    let v52: i256;  // ymm1
    let v53: i256;  // ymm1
    let v55: i64;  // r12
    let v57: i256;  // ymm2
    let v58: i256;  // ymm3
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v65: i64;  // rcx
    let v66: i64;  // rdx
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v69: i128;  // xmm0
    let v70: i128;  // xmm1
    let v71: i128;  // xmm2
    let v72: i128;  // xmm3
    let v73: i128;  // xmm0
    let v74: i64;  // rdx
    let v75: i64;  // rax
    let v76: i64;  // rcx
    let v77: i128;  // xmm0
    let v78: i128;  // xmm0
    let v79: i128;  // xmm1
    let v80: i128;  // xmm2
    let v81: i128;  // xmm3
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm1
    let v86: i128;  // xmm2
    let v87: i128;  // xmm3
    let v88: i64;  // rax
    let v89: i128;  // xmm0
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i128;  // xmm1
    let v94: i128;  // xmm2
    let v95: i128;  // xmm3
    let v96: i64;  // rdx
    let v97: i128;  // xmm0
    let v98: i64;  // rax
    let v99: i64;  // r14
    let v100: i64;  // rdx

    v47 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v47 {
        *(&v45.field_0 as &struct32) = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v45, a2, v48);
        return a0;
    }
    v49 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v51 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v53 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    *(&v2.field_0 as &struct32) = struct32 {
        field_0: v50 as u128
        field_16: v52 as u128
    };
    v45 = itertools::Itertools::chunks(&v2, v47);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    if v49 {
        v1 = v47;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v13 = *((a2 + 64) as &i64);
        v14 = 9223372036854775810;
        v1 = v1;
        do {
            v49 = v55 - v1;
            if v55 < v1 {
                v49 = 0;
            }
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v45);
            if v2 == v14 {
                core::option::unwrap_failed(); /* do not return */
            }
            v59 = v7;
            v25 = v59;
            v60 = v6;
            v23 = v60;
            v61 = v2;
            v62 = v3;
            v63 = *((&v2 as &char + 32) as &i128);
            v64 = v5;
            v21 = v64;
            v19 = v63;
            v17 = v62;
            v15 = v61;
            v28 = uu_sort::merge::merge_without_limit(&v15, a2, v65);
            v66 = v28;
            v67 = *((&v28 as &char + 8) as &i64);
            v68 = *((&v28 as &char + 16) as &i64);
            match v28 {
                Err(_) => {
                    v99 = a0;
                    *((v99 + 8) as &i64) = v67;
                    *((v99 + 16) as &i64) = v68;
                    *(v99 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v37 = v29;
                    v69 = *((&v28 as &char + 24) as &i128);
                    v70 = *((&v28 as &char + 40) as &i128);
                    v71 = *((&v28 as &char + 56) as &i128);
                    v72 = v28;
                    v36 = v72;
                    v35 = v71;
                    v34 = v70;
                    v33 = v69;
                    v30 = v66;
                    v31 = v67;
                    v32 = v68;
                    v28 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v30);
                },
            }
            if v39 == 0x8000000000000000 {
                v99 = a0;
                *((v99 + 8) as &i128) = *((&v28 as &char + 16) as &i128);
                *(v99 as &i64) = 3;
                return a0;
            }
            v73 = *((&v28 as &char + 16) as &i128);
            v38 = v28;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v38, v0, v13);
            v74 = v2;
            v75 = *((&v2 as &char + 8) as &i64);
            v76 = *((&v2 as &char + 16) as &i64);
            if v15 == 0x8000000000000000 {
                v99 = a0;
                *((v99 + 8) as &i64) = v16;
                *((v99 + 16) as &i64) = v17;
                *(v99 as &i64) = 3;
                return a0;
            }
            v27 = v9;
            v77 = *((&v2 as &char + 88) as &i128);
            v26 = v77;
            v78 = *((&v2 as &char + 24) as &i128);
            v79 = *((&v2 as &char + 40) as &i128);
            v80 = *((&v2 as &char + 56) as &i128);
            v81 = *((&v2 as &char + 72) as &i128);
            v24 = v81;
            v22 = v80;
            v20 = v79;
            v18 = v78;
            v15 = v74;
            v16 = v75;
            v17 = v76;
            v82 = *((&v36 as &char + 8) as &i128);
            v7 = v82;
            v83 = *((&v35 as &char + 8) as &i128);
            v6 = v83;
            v84 = v30;
            v85 = v32;
            v86 = *((&v33 as &char + 8) as &i128);
            v87 = *((&v34 as &char + 8) as &i128);
            v5 = v87;
            v4 = v86;
            v3 = v85;
            v2 = v84;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v15);
            v88 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
            if v88 {
                v99 = a0;
                *((v99 + 8) as &i64) = v88;
                *((v99 + 16) as &i64) = v100;
                *(v99 as &i64) = 3;
                return a0;
            }
            v89 = *((&v26 as &char + 8) as &i128);
            v8 = v89;
            v90 = *((&v24 as &char + 8) as &i128);
            v7 = v90;
            v91 = *((&v22 as &char + 8) as &i128);
            v6 = v91;
            v92 = v15;
            v93 = v17;
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93;
            v94 = *((&v18 as &char + 8) as &i128);
            v57 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94;
            v95 = *((&v20 as &char + 8) as &i128);
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
            v5 = v95;
            v4 = v94;
            v3 = v93;
            v2 = v92;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v28, &v2);
            v96 = v28;
            v67 = *((&v28 as &char + 8) as &i64);
            v68 = *((&v28 as &char + 16) as &i64);
            if v40 == 0x8000000000000000 {
                vvar_745{reg 128} = a0;
                *((v99 + 8) as &i64) = v67;
                *((v99 + 16) as &i64) = v68;
                *(v99 as &i64) = 3;
                return a0;
            }
            v44 = *((&v28 as &char + 40) as &i64);
            v97 = *((&v28 as &char + 24) as &i128);
            v51 = ...;
            v43 = v97;
            v40 = v96;
            v41 = v67;
            v42 = v68;
            alloc::vec::Vec<T,A>::push(&v10, &v40, v40);
            v98 = v1;
        } while (v49 > v98);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v45);
    if v2 == 9223372036854775810 {
        v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
        v2 = v15;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return a0;
    }
    core::panicking::panic(); /* do not return */
}
