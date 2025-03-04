fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: &struct48, a2: void*, a3: u32) -> u64 {
    let v0: struct56;  // [sp-0x278], Other Possible Types: int, struct80, Option<struct48>, struct48
    let v1: iNone;  // [sp-0x268]
    let v2: iNone;  // [bp-0x258]
    let v3: iNone;  // [bp-0x248]
    let v4: iNone;  // [sp-0x238]
    let v5: iNone;  // [bp-0x230]
    let v6: iNone;  // [sp-0x228]
    let v8: i64;  // [sp-0x218], Other Possible Types: int, struct16
    let v9: i64;  // [sp-0x208]
    let v10: i64;  // [sp-0x200], Other Possible Types: Option<struct48>
    let v11: i64;  // [sp-0x1f8]
    let v12: i64;  // [sp-0x1f0]
    let v13: iNone;  // [sp-0x1e8]
    let v14: iNone;  // [sp-0x1d8]
    let v15: struct36;  // [bp-0x1c8], Other Possible Types: struct24, struct48
    let v16: iNone;  // [sp-0x1b8]
    let v17: i64;  // [sp-0x198]
    let v18: struct32;  // [sp-0x190], Other Possible Types: unsigned long
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: iNone;  // [sp-0x178]
    let v22: iNone;  // [sp-0x168]
    let v23: iNone;  // [sp-0x158]
    let v24: iNone;  // [sp-0x148]
    let v25: i64;  // [sp-0x138]
    let v26: i64;  // [sp-0x130], Other Possible Types: struct24
    let v27: iNone;  // [sp-0x118]
    let v28: i64;  // [sp-0x110]
    let v29: struct161;  // [bp-0xf8], Other Possible Types: struct48
    let v31: i64;  // r12
    let v33: i64;  // r14
    let v35: iNone;  // ymm0
    let v36: iNone;  // ymm0
    let v38: iNone;  // ymm1
    let v39: iNone;  // ymm1
    let v41: iNone;  // ymm2
    let v42: iNone;  // ymm2
    let v43: i64;  // r13
    let v45: iNone;  // ymm3
    let v46: iNone;  // xmm0
    let v47: iNone;  // xmm1
    let v48: iNone;  // xmm2
    let v52: iNone;  // xmm0
    let v53: iNone;  // xmm1
    let v54: iNone;  // xmm2
    let v55: iNone;  // xmm3
    let v61: iNone;  // xmm0
    let v62: iNone;  // xmm1
    let v63: iNone;  // xmm0
    let v64: iNone;  // xmm0
    let v65: iNone;  // xmm0
    let v66: iNone;  // xmm1
    let v67: iNone;  // xmm2
    let v68: iNone;  // xmm3

    v31 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v31 {
        v29 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v29, a2);
    } else {
        v33 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
        v36 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
        v39 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
        v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
        v0 = struct48 {
            field_0: v34
            field_16: v37
            field_32: v40
        };
        v29 = itertools::Itertools::chunks(&v0, v31);
        v8 = 0;
        v8 = 8;
        v9 = 0;
        if v33 {
            v17 = 9223372036854775810;
            v43 = v33;
            do {
                v10 = v10;
                v43 -= v31;
                if v43 < v31 {
                    v43 = 0;
                }
                v10 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v29);
                if v10 == v17 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v46 = v10 as i128;
                v47 = *((&v10 as &char + 16) as &i128);
                v48 = *((&v10 as &char + 32) as &i128);
                v15 = struct48 {
                    field_0: v46
                    field_16: v47
                    field_32: v48
                };
                v0 = uu_sort::merge::merge_without_limit(&v15, a2);
                if v18 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v50
                        field_16: v51
                    };
                }
                v25 = (&v6)[8] as i64;
                v52 = *((&v0.field_16 as &char + 8) as &i128);
                v53 = *((&v0.field_32 as &char + 8) as &i128);
                v54 = *((&v0.field_48 as &char + 8) as &i128);
                v55 = v5 as i128;
                v24 = v55;
                v23 = v54;
                v22 = v53;
                v21 = v52;
                v18 = v0.field_0 as i64;
                v19 = *((&v0.field_0 as &char + 8) as &i64);
                v20 = v0.field_16 as i64;
                v15 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                if v28 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v16
                    };
                }
                v27 = *(&v15.field_0 as &i256);
                v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v27);
                if v10 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v11
                        field_16: v12
                    };
                }
                v61 = *(&v0.field_24 as &i128);
                v62 = *((&v0.field_32 as &char + 8) as &i128);
                v14 = v62;
                v13 = v61;
                v10 = v0.field_0 as i64;
                v11 = *((&v0.field_0 as &char + 8) as &i64);
                v12 = v0.field_16;
                v63 = (&v24)[8] as i128;
                v6 = v63;
                v64 = (&v23)[8] as i128;
                v4 = v64;
                v65 = *(&v18 as &i128);
                v66 = *(&v20 as &i128);
                v67 = (&v21)[8] as i128;
                v68 = (&v22)[8] as i128;
                v45 = (v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 as u256;
                v3 = v68;
                v2 = v67;
                v1 = v66;
                v0 = v65;
                v36 = (((((((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v10 as &i128);
                v39 = ((((v39 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v12 as &i128);
                v42 = (((v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (&v13)[8] as i128;
                *(&v0.field_0 as &struct56) = struct56 {
                    field_0: v69
                    field_16: v70
                    field_32: v71
                    field_48: (&v14)[8] as i64
                };
                v15 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v0);
                if v26 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v50
                        field_16: v51
                    };
                }
                *(&v26.field_0 as &struct24) = struct24 {
                    field_0: v72
                    field_8: v50
                    field_16: v51
                };
                v8 = alloc::vec::Vec<T,A>::push(&v26);
                v10 = v10;
                v33 = v43;
            } while (v33 > v31);
        }
        v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v29);
        match v0 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
                v0 = *(&v18 as &i384);
                uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
            },
        }
    }
}
