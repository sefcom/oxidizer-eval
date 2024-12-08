fn uu_sort::merge::merge_with_file_limit(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i64;  // [sp-0x350]
    let v1: i64;  // [sp-0x348]
    let v2: i128;  // [bp-0x338], Other Possible Types: struct32
    let v3: i128;  // [sp-0x328]
    let v4: i64;  // [bp-0x318]
    let v5: i64;  // [sp-0x310]
    let v6: i128;  // [sp-0x308]
    let v7: i128;  // [sp-0x2f8]
    let v8: i128;  // [sp-0x2e8]
    let v9: i128;  // [sp-0x2d8]
    let v10: i8;  // [bp-0x2d0]
    let v11: i64;  // [sp-0x2c0]
    let v12: i64;  // [sp-0x2b8]
    let v13: i64;  // [sp-0x2b0]
    let v14: i64;  // [sp-0x2a8]
    let v15: i64;  // [sp-0x2a0]
    let v16: i64;  // [bp-0x298], Other Possible Types: struct32
    let v17: i64;  // [sp-0x290]
    let v18: i128;  // [bp-0x288]
    let v19: i128;  // [bp-0x280]
    let v20: i128;  // [bp-0x278]
    let v21: i128;  // [bp-0x270]
    let v22: i128;  // [bp-0x268]
    let v23: i128;  // [bp-0x260]
    let v24: i128;  // [bp-0x258]
    let v25: i128;  // [bp-0x250]
    let v26: i128;  // [bp-0x248]
    let v27: i128;  // [sp-0x240]
    let v28: i64;  // [sp-0x230]
    let v29: i640;  // [sp-0x228], Other Possible Types: struct36, Result<struct80, struct24>
    let v30: i8;  // [bp-0x1d0]
    let v31: i64;  // [sp-0x1c8]
    let v32: i64;  // [sp-0x1c0]
    let v33: i64;  // [sp-0x1b8]
    let v34: i128;  // [sp-0x1b0]
    let v35: i128;  // [sp-0x1a0]
    let v36: i128;  // [sp-0x190]
    let v37: i128;  // [sp-0x180]
    let v38: i64;  // [sp-0x170]
    let v39: struct32;  // [bp-0x168]
    let v40: i64;  // [sp-0x160]
    let v41: i64;  // [sp-0x148]
    let v42: i64;  // [sp-0x140]
    let v43: i64;  // [sp-0x138]
    let v44: i128;  // [sp-0x130]
    let v45: i64;  // [sp-0x120]
    let v46: struct32;  // [bp-0x118], Other Possible Types: i1160, struct145
    let v48: i64;  // r13
    let v49: i64;  // rcx
    let v50: i64;  // r12
    let v51: i256;  // ymm0
    let v52: i256;  // ymm0
    let v53: i256;  // ymm1
    let v54: i256;  // ymm1
    let v56: i64;  // r12
    let v58: i256;  // ymm2
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
    let v101: i64;  // r14
    let v102: i64;  // rdx

    v48 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v48 {
        *(&v46.field_0 as &struct32) = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v46, a2, v49);
        return a0;
    }
    v50 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v52 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v54 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    *(&v2.field_0 as &struct32) = struct32 {
        field_0: v51 as u128
        field_16: v53 as u128
    };
    v46 = itertools::Itertools::chunks(&v2, v48);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if v50 {
        v1 = v48;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v14 = *((a2 + 64) as &i64);
        v15 = 9223372036854775810;
        v1 = v1;
        do {
            v50 = v56 - v1;
            if v56 < v1 {
                v50 = 0;
            }
            <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v46);
            if v2 == v15 {
                core::option::unwrap_failed(); /* do not return */
            }
            v60 = v8;
            v26 = v60;
            v61 = v7;
            v24 = v61;
            v62 = v2;
            v63 = v3;
            v64 = v4;
            v65 = v6;
            v22 = v65;
            v20 = v64;
            v18 = v63;
            v16 = v62;
            v29 = uu_sort::merge::merge_without_limit(&v16, a2, v66);
            v67 = v29;
            v68 = *((&v29 as &char + 8) as &i64);
            v69 = *((&v29 as &char + 16) as &i64);
            match v29 {
                Err(_) => {
                    v101 = a0;
                    *((v101 + 8) as &i64) = v68;
                    *((v101 + 16) as &i64) = v69;
                    *(v101 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v38 = v30;
                    v70 = *((&v29 as &char + 24) as &i128);
                    v71 = *((&v29 as &char + 40) as &i128);
                    v72 = *((&v29 as &char + 56) as &i128);
                    v73 = *((&v29 as &char + 72) as &i128);
                    v37 = v73;
                    v36 = v72;
                    v35 = v71;
                    v34 = v70;
                    v31 = v67;
                    v32 = v68;
                    v33 = v69;
                    v29 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v31);
                },
            }
            if v40 == 0x8000000000000000 {
                v101 = a0;
                *((v101 + 8) as &i128) = *((&v29 as &char + 16) as &i128);
                *(v101 as &i64) = 3;
                return a0;
            }
            v74 = *((&v29 as &char + 16) as &i128);
            *(&v39.field_0 as &struct32) = struct32 {
                field_0: v29
                field_8: v75
                field_16: v74
            };
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v39, v0, v14);
            v76 = v2;
            v77 = *((&v2 as &char + 8) as &i64);
            v78 = v3;
            if v16 == 0x8000000000000000 {
                v101 = a0;
                *((v101 + 8) as &i64) = v17;
                *((v101 + 16) as &i64) = v18;
                *(v101 as &i64) = 3;
                return a0;
            }
            v28 = v10;
            v79 = *((&v8 as &char + 8) as &i128);
            v27 = v79;
            v80 = *((&v3 as &char + 8) as &i128);
            v81 = (&v4)[8];
            v82 = *((&v6 as &char + 8) as &i128);
            v83 = *((&v7 as &char + 8) as &i128);
            v25 = v83;
            v23 = v82;
            v21 = v81;
            v19 = v80;
            v16 = v76;
            v17 = v77;
            v18 = v78;
            v84 = *((&v37 as &char + 8) as &i128);
            v8 = v84;
            v85 = *((&v36 as &char + 8) as &i128);
            v7 = v85;
            v86 = v31;
            v87 = v33;
            v88 = *((&v34 as &char + 8) as &i128);
            v89 = *((&v35 as &char + 8) as &i128);
            v6 = v89;
            v4 = v88;
            v3 = v87;
            v2 = v86;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v16);
            v90 = uu_sort::merge::FileMerger::write_all_to(&v2, a2);
            if v90 {
                v101 = a0;
                *((v101 + 8) as &i64) = v90;
                *((v101 + 16) as &i64) = v102;
                *(v101 as &i64) = 3;
                return a0;
            }
            v91 = *((&v27 as &char + 8) as &i128);
            v9 = v91;
            v92 = *((&v25 as &char + 8) as &i128);
            v8 = v92;
            v93 = *((&v23 as &char + 8) as &i128);
            v7 = v93;
            v94 = v16;
            v95 = v18;
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95;
            v96 = *((&v19 as &char + 8) as &i128);
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v96;
            v97 = *((&v21 as &char + 8) as &i128);
            v59 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v97;
            v6 = v97;
            v4 = v96;
            v3 = v95;
            v2 = v94;
            <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v29, &v2);
            v98 = v29;
            v68 = *((&v29 as &char + 8) as &i64);
            v69 = *((&v29 as &char + 16) as &i64);
            if v41 == 0x8000000000000000 {
                vvar_743{reg 128} = a0;
                *((v101 + 8) as &i64) = v68;
                *((v101 + 16) as &i64) = v69;
                *(v101 as &i64) = 3;
                return a0;
            }
            v45 = *((&v29 as &char + 40) as &i64);
            v99 = *((&v29 as &char + 24) as &i128);
            v52 = ...;
            v44 = v99;
            v41 = v98;
            v42 = v68;
            v43 = v69;
            alloc::vec::Vec<T,A>::push(&v11, &v41, v41);
            v100 = v1;
        } while (v50 > v100);
    }
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v46);
    if v2 == 9223372036854775810 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
        v3 = *((&v16 as &char + 16) as &i128);
        v2 = v16;
        v4 = alloc::boxed::Box<T>::new();
        v5 = &g_5ff870;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return a0;
    }
    core::panicking::panic(); /* do not return */
}
