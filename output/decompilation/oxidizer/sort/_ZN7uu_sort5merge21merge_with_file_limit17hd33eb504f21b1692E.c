fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: u32, a2: u32, a3: &u64, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x2d8]
    let v1: i64;  // [sp-0x2c8]
    let v2: iNone;  // [sp-0x2b8], Other Possible Types: struct112, Option<struct40>, struct80
    let v3: iNone;  // [sp-0x2a8]
    let v4: iNone;  // [bp-0x298]
    let v5: iNone;  // [sp-0x288]
    let v6: iNone;  // [sp-0x278]
    let v7: iNone;  // [sp-0x268]
    let v9: i8;  // [bp-0x250]
    let v10: struct36;  // [bp-0x248], Other Possible Types: struct40, struct48
    let v11: iNone;  // [sp-0x238]
    let v12: i64;  // [sp-0x210], Other Possible Types: int, struct16
    let v13: i64;  // [sp-0x200]
    let v14: i64;  // [sp-0x1f8]
    let v15: i64;  // [sp-0x1f0], Other Possible Types: Option<struct40>, struct32
    let v16: i64;  // [sp-0x1e8]
    let v17: i64;  // [sp-0x1e0]
    let v18: iNone;  // [sp-0x1d8]
    let v19: iNone;  // [sp-0x1c8]
    let v20: iNone;  // [sp-0x1b8]
    let v21: iNone;  // [sp-0x1a8]
    let v22: iNone;  // [sp-0x198]
    let v23: i64;  // [sp-0x188]
    let v24: i64;  // [sp-0x180]
    let v25: i64;  // [sp-0x178]
    let v26: i64;  // [sp-0x170]
    let v27: iNone;  // [sp-0x168]
    let v28: iNone;  // [sp-0x158]
    let v29: iNone;  // [sp-0x148]
    let v30: iNone;  // [sp-0x138]
    let v31: i64;  // [sp-0x128]
    let v32: iNone;  // [sp-0x120]
    let v33: i64;  // [sp-0x118]
    let v34: struct48;  // [sp-0x100], Other Possible Types: unsigned long
    let v35: struct129;  // [sp-0xd0]
    let v37: i64;  // r12
    let v39: i64;  // rbx
    let v41: i64;  // r13
    let v43: iNone;  // ymm0
    let v44: iNone;  // ymm1
    let v45: iNone;  // ymm2
    let v46: iNone;  // ymm3
    let v47: iNone;  // xmm0
    let v48: iNone;  // xmm1
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm1
    let v54: iNone;  // xmm2
    let v55: iNone;  // xmm3
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm0
    let v63: iNone;  // xmm1
    let v64: iNone;  // xmm2
    let v65: iNone;  // xmm3
    let v66: iNone;  // xmm0
    let v67: iNone;  // xmm0
    let v68: iNone;  // xmm0
    let v69: iNone;  // xmm1
    let v70: iNone;  // xmm2
    let v71: iNone;  // xmm3
    let v72: iNone;  // xmm0
    let v73: iNone;  // xmm0
    let v74: iNone;  // xmm0
    let v75: iNone;  // xmm0

    v37 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v37 {
        uu_sort::merge::merge_without_limit(a0, a1, a2);
    } else {
        v39 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
        v35 = itertools::Itertools::chunks(a1, a2, v37);
        v12 = 0;
        v12 = 8;
        v13 = 0;
        if v39 {
            v1 = (*((a3 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a3 + 56) as &i64));
            v14 = *((a3 + 64) as &i64);
            v41 = v39;
            do {
                v41 -= v37;
                if v41 < v37 {
                    v41 = 0;
                }
                v15 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
                match v15 {
                    None => {
                        core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                    },
                    Some(_) => {
                        v47 = v15 as i128;
                        v48 = *((&v15 as &char + 16) as &i128);
                        v10 = struct40 {
                            field_0: v47
                            field_16: v48
                            field_32: *((&v15 as &char + 32) as &i64)
                        };
                        v2 = uu_sort::merge::merge_without_limit(&v10, a3);
                    },
                }
                if v24 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v50
                        field_16: v51
                    };
                }
                v31 = *((&v2.field_80 as &char + 8) as &i64);
                v52 = *((&v2.field_16 as &char + 8) as &i128);
                v53 = *((&v2.field_32 as &char + 8) as &i128);
                v54 = *((&v2.field_48 as &char + 8) as &i128);
                v55 = *(&v2.field_72 as &i128);
                v30 = v55;
                v29 = v54;
                v28 = v53;
                v27 = v52;
                v24 = v2.field_0 as i64;
                v25 = *((&v2.field_0 as &char + 8) as &i64);
                v26 = v2.field_16 as i64;
                v10 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                if v33 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v11
                    };
                }
                v32 = *(&v10.field_0 as &i256);
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v32, v1, v14);
                if v15 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v16
                        field_16: v17
                    };
                }
                v23 = *(&v9 as &i64);
                v61 = *((&v2.field_80 as &char + 8) as &i128);
                v22 = v61;
                v62 = *((&v2.field_16 as &char + 8) as &i128);
                v63 = *((&v2.field_32 as &char + 8) as &i128);
                v64 = *((&v2.field_48 as &char + 8) as &i128);
                v65 = *(&v2.field_72 as &i128);
                v21 = v65;
                v20 = v64;
                v19 = v63;
                v18 = v62;
                v15 = v2.field_0 as i64;
                v16 = *((&v2.field_0 as &char + 8) as &i64);
                v17 = v2.field_16 as i64;
                v66 = (&v30)[8] as i128;
                v7 = v66;
                v67 = (&v29)[8] as i128;
                v6 = v67;
                v68 = *(&v24 as &i128);
                v69 = *(&v26 as &i128);
                v70 = (&v27)[8] as i128;
                v71 = (&v28)[8] as i128;
                v5 = v71;
                v4 = v70;
                v3 = v69;
                v2 = v68;
                v72 = (&v22)[8] as i128;
                v73 = (&v21)[8] as i128;
                v74 = (&v20)[8] as i128;
                v75 = *(&v15 as &i128);
                v44 = ((((v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v17 as &i128);
                v45 = (((v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v18)[8] as i128;
                v46 = (((v46 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v19)[8] as i128;
                v2 = struct112 {
                    field_0: v75
                    field_16: v76
                    field_32: v77
                    field_48: v78
                    field_64: v74
                    field_80: v73
                    field_96: v72
                };
                v10 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
                if v34 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v50
                        field_16: v51
                    };
                }
                v43 = ...;
                *(&v34.field_0 as &struct48) = struct48 {
                    field_0: v79
                    field_8: v50
                    field_16: v51
                    field_24: v80
                    field_40: v10.field_40
                };
                v12 = alloc::vec::Vec<T,A>::push(&v34);
                v39 = v41;
            } while (v39 > v37);
        }
        v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
        match v2 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v12);
                v2 = *(&v15 as &i384);
                uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
            },
        }
    }
}
