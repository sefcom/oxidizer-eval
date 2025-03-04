fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: &struct48, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x360]
    let v1: i64;  // [sp-0x358]
    let v2: iNone;  // [sp-0x348], Other Possible Types: Option<struct96>, struct48, struct112
    let v3: iNone;  // [sp-0x338]
    let v4: iNone;  // [bp-0x328]
    let v5: iNone;  // [sp-0x318]
    let v6: iNone;  // [sp-0x308]
    let v7: iNone;  // [sp-0x2f8]
    let v9: i64;  // [sp-0x2d0], Other Possible Types: struct16, int
    let v10: i64;  // [sp-0x2c0]
    let v11: i64;  // [sp-0x2b8]
    let v12: i64;  // [sp-0x2b0]
    let v13: i64;  // [bp-0x2a8], Other Possible Types: struct96, struct32
    let v14: i64;  // [sp-0x2a0]
    let v15: i64;  // [sp-0x298]
    let v16: iNone;  // [bp-0x290]
    let v17: iNone;  // [bp-0x280]
    let v18: iNone;  // [bp-0x270]
    let v19: iNone;  // [bp-0x260]
    let v20: iNone;  // [sp-0x250]
    let v21: i64;  // [sp-0x240]
    let v22: struct48;  // [sp-0x238], Other Possible Types: struct36, struct80
    let v23: i8;  // [bp-0x1e0]
    let v24: i64;  // [sp-0x1d8]
    let v25: i64;  // [sp-0x1d0]
    let v26: i64;  // [sp-0x1c8]
    let v27: iNone;  // [sp-0x1c0]
    let v28: iNone;  // [sp-0x1b0]
    let v29: iNone;  // [sp-0x1a0]
    let v30: iNone;  // [sp-0x190]
    let v31: i64;  // [sp-0x180]
    let v32: iNone;  // [sp-0x178]
    let v33: i64;  // [sp-0x170]
    let v34: struct48;  // [sp-0x158], Other Possible Types: unsigned long
    let v35: struct161;  // [bp-0x128], Other Possible Types: struct48
    let v37: i64;  // r13
    let v39: i64;  // r12
    let v41: iNone;  // ymm0
    let v42: iNone;  // ymm0
    let v44: iNone;  // ymm1
    let v45: iNone;  // ymm1
    let v47: iNone;  // ymm2
    let v48: iNone;  // ymm2
    let v50: i64;  // r13
    let v51: i64;  // rax
    let v53: iNone;  // ymm3
    let v58: iNone;  // xmm2
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm1
    let v65: iNone;  // xmm2
    let v66: iNone;  // xmm3
    let v68: iNone;  // xmm0
    let v69: i64;  // rdx
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: iNone;  // xmm0
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm1
    let v75: iNone;  // xmm2
    let v76: iNone;  // xmm3
    let v77: iNone;  // xmm0
    let v78: iNone;  // xmm0
    let v79: iNone;  // xmm0
    let v80: iNone;  // xmm1
    let v81: iNone;  // xmm2
    let v82: iNone;  // xmm3
    let v83: iNone;  // xmm0
    let v84: iNone;  // xmm0
    let v85: iNone;  // xmm0
    let v86: iNone;  // xmm0

    v37 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v37 {
        v35 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v35, a2);
    } else {
        v39 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
        v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
        v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
        v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
        v2 = struct48 {
            field_0: v40
            field_16: v43
            field_32: v46
        };
        v35 = itertools::Itertools::chunks(&v2, v37);
        v9 = 0;
        v9 = 8;
        v10 = 0;
        if v39 {
            v1 = v37;
            v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
            v11 = *((a2 + 64) as &i64);
            v12 = 9223372036854775810;
            v50 = v39;
            v51 = v1;
            do {
                v50 -= v51;
                if v50 < v51 {
                    v50 = 0;
                }
                v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
                if v2 as i64 == v12 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v58 = *((&v2 as &char + 32) as &i128);
                v13 = struct96 {
                    field_0: v56
                    field_16: v57
                    field_32: v58
                    field_48: v59
                    field_64: v55
                    field_80: v54
                };
                v22 = uu_sort::merge::merge_without_limit(&v13, a2);
                if v24 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v61
                        field_16: v62
                    };
                }
                v31 = *(&v23 as &i64);
                v63 = *((&v22.field_16 as &char + 8) as &i128);
                v64 = *((&v22.field_32 as &char + 8) as &i128);
                v65 = *((&v22.field_48 as &char + 8) as &i128);
                v66 = *(&v22.field_72 as &i128);
                v30 = v66;
                v29 = v65;
                v28 = v64;
                v27 = v63;
                v24 = v22.field_0 as i64;
                v25 = *((&v22.field_0 as &char + 8) as &i64);
                v26 = v22.field_16 as i64;
                v22 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                if v33 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: *((&v22.field_4 as &char + 12) as &i128)
                    };
                }
                v68 = *((&v22.field_4 as &char + 12) as &i128);
                v32 = *(&v22.field_0 as &i256);
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v32, v0, v11);
                v69 = v2 as i64;
                v70 = *((&v2 as &char + 8) as &i64);
                v71 = *((&v2 as &char + 16) as &i64);
                if v13 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v14
                        field_16: v15
                    };
                }
                v21 = *((&v2.field_96 as &char + 8) as &i64);
                v72 = *((&v2 as &char + 88) as &i128);
                v20 = v72;
                v73 = *((&v2 as &char + 24) as &i128);
                v74 = *((&v2 as &char + 40) as &i128);
                v75 = *((&v2 as &char + 56) as &i128);
                v76 = *((&v2 as &char + 72) as &i128);
                v19 = v76;
                v18 = v75;
                v17 = v74;
                v16 = v73;
                v13 = v69;
                v14 = v70;
                v15 = v71;
                v77 = (&v30)[8] as i128;
                v7 = v77;
                v78 = (&v29)[8] as i128;
                v6 = v78;
                v79 = *(&v24 as &i128);
                v80 = *(&v26 as &i128);
                v81 = (&v27)[8] as i128;
                v82 = (&v28)[8] as i128;
                v5 = v82;
                v4 = v81;
                v3 = v80;
                v2 = v79;
                v83 = (&v20)[8] as i128;
                v84 = (&v19)[8] as i128;
                v85 = (&v18)[8] as i128;
                v86 = *(&v13 as &i128);
                v45 = ((((v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v15 as &i128);
                v48 = ((((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v16)[8] as i128;
                v53 = ((((v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v17)[8] as i128;
                v2 = struct112 {
                    field_0: v86
                    field_16: v87
                    field_32: v88
                    field_48: v89
                    field_64: v85
                    field_80: v84
                    field_96: v83
                };
                v22 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
                if v34 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v61
                        field_16: v62
                    };
                }
                v42 = ...;
                *(&v34.field_0 as &struct48) = struct48 {
                    field_0: v90
                    field_8: v61
                    field_16: v62
                    field_24: v91
                    field_40: *((&v22.field_32 as &char + 8) as &i64)
                };
                v9 = alloc::vec::Vec<T,A>::push(&v34);
                v51 = v1;
                v39 = v50;
            } while (v39 > v51);
        }
        v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
        match v2 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
                v2 = *(&v13 as &i384);
                uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
            },
        }
    }
}
