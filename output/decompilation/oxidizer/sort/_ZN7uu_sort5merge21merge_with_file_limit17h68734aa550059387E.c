fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x260]
    let v1: struct40;  // [sp-0x248], Other Possible Types: struct36, struct24
    let v2: iNone;  // [sp-0x238]
    let v3: iNone;  // [sp-0x218], Other Possible Types: struct56, struct80, Option<struct40>
    let v4: iNone;  // [sp-0x208]
    let v5: iNone;  // [bp-0x1f8]
    let v6: iNone;  // [bp-0x1e8]
    let v7: iNone;  // [sp-0x1d8]
    let v8: iNone;  // [sp-0x1c8]
    let v9: i8;  // [bp-0x1c0]
    let v10: i64;  // [sp-0x1b8], Other Possible Types: struct16, int
    let v11: i64;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x1a0], Other Possible Types: Option<struct40>
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x190]
    let v15: iNone;  // [sp-0x188]
    let v16: iNone;  // [sp-0x178]
    let v17: i64;  // [sp-0x168], Other Possible Types: struct32
    let v18: i64;  // [sp-0x160]
    let v19: i64;  // [sp-0x158]
    let v20: iNone;  // [sp-0x150]
    let v21: iNone;  // [sp-0x140]
    let v22: iNone;  // [sp-0x130]
    let v23: iNone;  // [sp-0x120]
    let v24: i64;  // [sp-0x110]
    let v25: struct24;  // [sp-0x108], Other Possible Types: unsigned long
    let v26: iNone;  // [sp-0xf0]
    let v27: i64;  // [sp-0xe8]
    let v28: struct129;  // [sp-0xd0]
    let v30: i64;  // r12
    let v32: i64;  // rbx
    let v33: i64;  // r13
    let v35: iNone;  // ymm0
    let v36: iNone;  // ymm1
    let v37: iNone;  // ymm2
    let v38: iNone;  // ymm3
    let v39: iNone;  // xmm0
    let v40: iNone;  // xmm1
    let v44: iNone;  // xmm0
    let v45: iNone;  // xmm1
    let v46: iNone;  // xmm2
    let v47: iNone;  // xmm3
    let v53: iNone;  // xmm0
    let v54: iNone;  // xmm1
    let v55: iNone;  // xmm0
    let v56: iNone;  // xmm0
    let v57: iNone;  // xmm0
    let v58: iNone;  // xmm1
    let v59: iNone;  // xmm2
    let v60: iNone;  // xmm3

    v30 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v30 {
        uu_sort::merge::merge_without_limit(a0, a1, a2);
    } else {
        v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
        v28 = itertools::Itertools::chunks(a1, a2, v30);
        v10 = 0;
        v10 = 8;
        v11 = 0;
        if v32 {
            v33 = v32;
            do {
                v33 -= v30;
                if v33 < v30 {
                    v33 = 0;
                }
                v12 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
                match v12 {
                    None => {
                        core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                    },
                    Some(_) => {
                        v39 = v12 as i128;
                        v40 = *((&v12 as &char + 16) as &i128);
                        v1 = struct40 {
                            field_0: v39
                            field_16: v40
                            field_32: *((&v12 as &char + 32) as &i64)
                        };
                        v3 = uu_sort::merge::merge_without_limit(&v1, a3);
                    },
                }
                if v17 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v42
                        field_16: v43
                    };
                }
                v24 = *(&v9 as &i64);
                v44 = *((&v3.field_16 as &char + 8) as &i128);
                v45 = *((&v3.field_32 as &char + 8) as &i128);
                v46 = *((&v3.field_48 as &char + 8) as &i128);
                v47 = *(&v3.field_72 as &i128);
                v23 = v47;
                v22 = v46;
                v21 = v45;
                v20 = v44;
                v17 = v3.field_0 as i64;
                v18 = *((&v3.field_0 as &char + 8) as &i64);
                v19 = v3.field_16 as i64;
                v1 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                if v27 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v2
                    };
                }
                v26 = *(&v1.field_0 as &i256);
                v3 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26);
                if v12 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v13
                        field_16: v14
                    };
                }
                v53 = *(&v3.field_24 as &i128);
                v54 = *((&v3.field_32 as &char + 8) as &i128);
                v16 = v54;
                v15 = v53;
                v12 = v3.field_0 as i64;
                v13 = *((&v3.field_0 as &char + 8) as &i64);
                v14 = v3.field_16;
                v55 = (&v23)[8] as i128;
                v8 = v55;
                v56 = (&v22)[8] as i128;
                v7 = v56;
                v57 = *(&v17 as &i128);
                v58 = *(&v19 as &i128);
                v59 = (&v20)[8] as i128;
                v60 = (&v21)[8] as i128;
                v38 = (v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256;
                v6 = v60;
                v5 = v59;
                v4 = v58;
                v3 = v57;
                v35 = (((((((v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12 as &i128);
                v36 = ((((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v14 as &i128);
                v37 = ((v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v15)[8] as i128;
                *(&v3.field_0 as &struct56) = struct56 {
                    field_0: v61
                    field_16: v62
                    field_32: v63
                    field_48: (&v16)[8] as i64
                };
                v1 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v3);
                if v25 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v42
                        field_16: v43
                    };
                }
                *(&v25.field_0 as &struct24) = struct24 {
                    field_0: v64
                    field_8: v42
                    field_16: v43
                };
                v10 = alloc::vec::Vec<T,A>::push(&v25);
                v32 = v33;
            } while (v32 > v30);
        }
        v3 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
        match v3 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
                v3 = *(&v17 as &i384);
                uu_sort::merge::merge_with_file_limit(a0, &v3, a3, a4);
            },
        }
    }
}
