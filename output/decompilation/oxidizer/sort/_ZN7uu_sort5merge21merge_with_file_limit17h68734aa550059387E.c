fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x260]
    let v1: i288;  // [sp-0x248], Other Possible Types: struct36
    let v2: i128;  // [sp-0x238]
    let v3: i64;  // [sp-0x228]
    let v4: i128;  // [bp-0x218], Other Possible Types: struct56, Option<struct40>
    let v5: i8;  // [bp-0x210]
    let v6: i128;  // [bp-0x208]
    let v8: i128;  // [bp-0x1f8]
    let v10: i64;  // [bp-0x1e8]
    let v11: i8;  // [bp-0x1e0]
    let v12: i128;  // [sp-0x1d8]
    let v14: i128;  // [sp-0x1c8]
    let v15: i8;  // [bp-0x1c0]
    let v16: i128;  // [sp-0x1b8], Other Possible Types: struct16
    let v17: i64;  // [sp-0x1b0]
    let v18: i64;  // [sp-0x1a8]
    let v19: i64;  // [sp-0x1a0], Other Possible Types: Option<struct40>
    let v20: i64;  // [sp-0x198]
    let v21: i64;  // [sp-0x190]
    let v22: i128;  // [sp-0x188]
    let v23: i128;  // [sp-0x178]
    let v24: i256;  // [sp-0x168], Other Possible Types: struct32
    let v25: i64;  // [sp-0x160]
    let v26: i64;  // [sp-0x158]
    let v27: i128;  // [sp-0x150]
    let v28: i128;  // [sp-0x140]
    let v29: i128;  // [sp-0x130]
    let v30: i128;  // [sp-0x120]
    let v31: i64;  // [sp-0x110]
    let v32: i64;  // [sp-0x108], Other Possible Types: struct24
    let v33: i256;  // [sp-0xf0]
    let v34: i64;  // [sp-0xe8]
    let v35: i1040;  // [sp-0xd0], Other Possible Types: struct129
    let v37: i64;  // r12
    let v39: i64;  // rbx
    let v40: i64;  // rbx
    let v42: i256;  // ymm0
    let v43: i256;  // ymm1
    let v44: i256;  // ymm2
    let v45: i256;  // ymm3
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2
    let v54: i128;  // xmm3
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm2

    v37 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v37 {
        uu_sort::merge::merge_without_limit(a0, a1, a2);
    } else {
        v39 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
        v35 = itertools::Itertools::chunks(a1, a2, v37);
        v16 = 0;
        v17 = 8;
        v18 = 0;
        if v39 {
            do {
                v39 = v40 - v37;
                if v40 < v37 {
                    v39 = 0;
                }
                v19 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
                match v19 {
                    None => {
                        core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                    },
                    Some(_) => {
                        v3 = *((&v19 as &char + 32) as &i64);
                        v46 = v19;
                        v47 = *((&v19 as &char + 16) as &i128);
                        v2 = v47;
                        v1 = v46;
                        uu_sort::merge::merge_without_limit(&v4, &v1, a3);
                    },
                }
                if v24 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v49
                        field_16: v50
                    };
                }
                v31 = v15;
                v51 = *((&v6 as &char + 8) as &i128);
                v52 = *((&v8 as &char + 8) as &i128);
                v53 = v11;
                v54 = *((&v12 as &char + 8) as &i128);
                v30 = v54;
                v29 = v53;
                v28 = v52;
                v27 = v51;
                v24 = v4;
                v25 = v5;
                v26 = v6;
                v1 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                if v34 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v2
                    };
                }
                v33 = v1;
                v4 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v33);
                if v19 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v20
                        field_16: v21
                    };
                }
                v60 = *((&v4 as &char + 24) as &i128);
                v61 = *((&v4 as &char + 40) as &i128);
                v23 = v61;
                v22 = v60;
                v19 = v4;
                v20 = *((&v4 as &char + 8) as &i64);
                v21 = *((&v4 as &char + 16) as &i64);
                v62 = *((&v30 as &char + 8) as &i128);
                v14 = v62;
                v63 = *((&v29 as &char + 8) as &i128);
                v12 = v63;
                v64 = v24;
                v65 = v26;
                v66 = *((&v27 as &char + 8) as &i128);
                v67 = *((&v28 as &char + 8) as &i128);
                v45 = (v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
                v10 = v67;
                v8 = v66;
                v6 = v65;
                v4 = v64;
                v10 = *((&v23 as &char + 8) as &i64);
                v68 = v19;
                v42 = (((((((v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
                v69 = v21;
                v43 = ((((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
                v70 = *((&v22 as &char + 8) as &i128);
                v44 = ((v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
                v8 = v70;
                v6 = v69;
                v4 = v68;
                <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v1, &v4);
                if v32 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v49
                        field_16: v50
                    };
                }
                v32 = struct24 {
                    field_0: v71
                    field_8: v49
                    field_16: v50
                };
                v16 = alloc::vec::Vec<T,A>::push(&v32);
            } while (v39 > v37);
        }
        v4 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
        match v4 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v24 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v16);
                v4 = v24;
                uu_sort::merge::merge_with_file_limit(a0, &v4, a3, a4);
            },
        }
    }
}
