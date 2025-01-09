fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: &struct48, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: i384;  // [bp-0x348], Other Possible Types: Option<struct96>, struct48
    let v3: i128;  // [sp-0x338]
    let v4: i128;  // [bp-0x328]
    let v5: i128;  // [sp-0x318]
    let v6: i128;  // [sp-0x308]
    let v7: i128;  // [sp-0x2f8]
    let v8: i128;  // [sp-0x2e8]
    let v9: i8;  // [bp-0x2e0]
    let v10: i128;  // [sp-0x2d0], Other Possible Types: struct16
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
    let v28: i288;  // [bp-0x238], Other Possible Types: struct36
    let v29: i8;  // [bp-0x230]
    let v31: i8;  // [bp-0x220]
    let v32: i8;  // [bp-0x210]
    let v33: i8;  // [bp-0x200]
    let v34: i8;  // [bp-0x1f0]
    let v35: i8;  // [bp-0x1e0]
    let v36: i64;  // [sp-0x1d8]
    let v37: i64;  // [sp-0x1d0]
    let v38: i64;  // [sp-0x1c8]
    let v39: i128;  // [sp-0x1c0]
    let v40: i128;  // [sp-0x1b0]
    let v41: i128;  // [sp-0x1a0]
    let v42: i128;  // [sp-0x190]
    let v43: i64;  // [sp-0x180]
    let v44: i256;  // [sp-0x178]
    let v45: i64;  // [sp-0x170]
    let v46: struct48;  // [sp-0x158], Other Possible Types: i64
    let v47: i1296;  // [sp-0x128], Other Possible Types: struct161
    let v48: i128;  // [sp-0x118]
    let v49: i128;  // [sp-0x108]
    let v51: i64;  // r13
    let v53: i64;  // r12
    let v55: i256;  // ymm0
    let v56: i256;  // ymm0
    let v58: i256;  // ymm1
    let v59: i256;  // ymm1
    let v61: i256;  // ymm2
    let v62: i256;  // ymm2
    let v64: i64;  // r12
    let v66: i256;  // ymm3
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm1
    let v71: i128;  // xmm2
    let v72: i128;  // xmm3
    let v76: i128;  // xmm0
    let v77: i128;  // xmm1
    let v78: i128;  // xmm2
    let v79: i128;  // xmm3
    let v81: i128;  // xmm0
    let v82: i64;  // rdx
    let v83: i64;  // rax
    let v84: i64;  // rcx
    let v85: i128;  // xmm0
    let v86: i128;  // xmm0
    let v87: i128;  // xmm1
    let v88: i128;  // xmm2
    let v89: i128;  // xmm3
    let v90: i128;  // xmm0
    let v91: i128;  // xmm0
    let v92: i128;  // xmm0
    let v93: i128;  // xmm1
    let v94: i128;  // xmm2
    let v95: i128;  // xmm3
    let v96: i128;  // xmm0
    let v97: i128;  // xmm0
    let v98: i128;  // xmm0
    let v99: i128;  // xmm0
    let v100: i128;  // xmm1
    let v101: i128;  // xmm2
    let v102: i128;  // xmm3
    let v105: i64;  // rax

    v51 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v51 {
        v49 = *((a1 + 32) as &i128);
        v48 = *((a1 + 16) as &i128);
        v47 = *(a1 as &i128);
        uu_sort::merge::merge_without_limit(a0, &v47, a2);
    } else {
        v53 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
        v56 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
        v59 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
        v62 = v61 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
        v2 = struct48 {
            field_0: v54
            field_16: v57
            field_32: v60
        };
        v47 = itertools::Itertools::chunks(&v2, v51);
        v10 = 0;
        v11 = 8;
        v12 = 0;
        if v53 {
            v1 = v51;
            v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
            v13 = *((a2 + 64) as &i64);
            v14 = 9223372036854775810;
            v1 = v1;
            do {
                v53 = v64 - v1;
                if v64 < v1 {
                    v53 = 0;
                }
                v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v47);
                if v2 == v14 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v67 = v7;
                v25 = v67;
                v68 = v6;
                v23 = v68;
                v69 = v2;
                v70 = v3;
                v71 = *((&v2 as &char + 32) as &i128);
                v72 = v5;
                v21 = v72;
                v19 = v71;
                v17 = v70;
                v15 = v69;
                uu_sort::merge::merge_without_limit(&v28, &v15, a2);
                if v36 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v74
                        field_16: v75
                    };
                }
                v43 = v35;
                v76 = v31;
                v77 = v32;
                v78 = v33;
                v79 = v34;
                v42 = v79;
                v41 = v78;
                v40 = v77;
                v39 = v76;
                v36 = v28;
                v37 = v29;
                v38 = *((&v28 as &char + 16) as &i64);
                v28 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                if v45 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: *((&v28 as &char + 16) as &i128)
                    };
                }
                v81 = *((&v28 as &char + 16) as &i128);
                v44 = v28;
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v44, v0, v13);
                v82 = v2;
                v83 = *((&v2 as &char + 8) as &i64);
                v84 = *((&v2 as &char + 16) as &i64);
                if v15 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v16
                        field_16: v17
                    };
                }
                v27 = v9;
                v85 = v7;
                v26 = v85;
                v86 = *((&v2 as &char + 24) as &i128);
                v87 = *((&v2 as &char + 40) as &i128);
                v88 = *((&v2 as &char + 56) as &i128);
                v89 = *((&v2 as &char + 72) as &i128);
                v24 = v89;
                v22 = v88;
                v20 = v87;
                v18 = v86;
                v15 = v82;
                v16 = v83;
                v17 = v84;
                v90 = *((&v42 as &char + 8) as &i128);
                v7 = v90;
                v91 = *((&v41 as &char + 8) as &i128);
                v6 = v91;
                v92 = v36;
                v93 = v38;
                v94 = *((&v39 as &char + 8) as &i128);
                v95 = *((&v40 as &char + 8) as &i128);
                v5 = v95;
                v4 = v94;
                v3 = v93;
                v2 = v92;
                v96 = *((&v26 as &char + 8) as &i128);
                v8 = v96;
                v97 = *((&v24 as &char + 8) as &i128);
                v7 = v97;
                v98 = *((&v22 as &char + 8) as &i128);
                v6 = v98;
                v99 = v15;
                v100 = v17;
                v59 = ((((v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v93) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v100;
                v101 = *((&v18 as &char + 8) as &i128);
                v62 = ((((v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v94) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v101;
                v102 = *((&v20 as &char + 8) as &i128);
                v66 = ((((v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v89) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v95) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v102;
                v5 = v102;
                v4 = v101;
                v3 = v100;
                v2 = v99;
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing();
                if v46 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v74
                        field_16: v75
                    };
                }
                v56 = ...;
                *(&v46.field_0 as &struct48) = struct48 {
                    field_0: v103
                    field_8: v74
                    field_16: v75
                    field_24: v104
                    field_40: v32
                };
                v10 = alloc::vec::Vec<T,A>::push(&v46);
                v105 = v1;
            } while (v53 > v105);
        }
        v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v47);
        match v2 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
                v2 = v15;
                uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
            },
        }
    }
}
