fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: &struct48, a2: void*, a3: u32) -> u64 {
    let v0: i384;  // [bp-0x278], Other Possible Types: Option<struct48>, struct56, struct48
    let v1: i128;  // [sp-0x268]
    let v2: i128;  // [bp-0x258]
    let v3: i128;  // [bp-0x250]
    let v4: i128;  // [bp-0x248]
    let v6: i128;  // [sp-0x238]
    let v7: i8;  // [bp-0x230]
    let v8: i128;  // [sp-0x228]
    let v10: i128;  // [sp-0x218], Other Possible Types: struct16
    let v11: i64;  // [sp-0x210]
    let v12: i64;  // [sp-0x208]
    let v13: i64;  // [sp-0x200], Other Possible Types: Option<struct48>
    let v14: i64;  // [sp-0x1f8]
    let v15: i64;  // [sp-0x1f0]
    let v16: i128;  // [sp-0x1e8]
    let v17: i128;  // [sp-0x1d8]
    let v18: i128;  // [sp-0x1c8], Other Possible Types: struct36
    let v19: i128;  // [sp-0x1b8]
    let v20: i128;  // [sp-0x1a8]
    let v21: i64;  // [sp-0x198]
    let v22: i256;  // [sp-0x190], Other Possible Types: struct32
    let v23: i64;  // [sp-0x188]
    let v24: i64;  // [sp-0x180]
    let v25: i128;  // [sp-0x178]
    let v26: i128;  // [sp-0x168]
    let v27: i128;  // [sp-0x158]
    let v28: i128;  // [sp-0x148]
    let v29: i64;  // [sp-0x138]
    let v30: struct24;  // [sp-0x130], Other Possible Types: i64
    let v31: i256;  // [sp-0x118]
    let v32: i64;  // [sp-0x110]
    let v33: i128;  // [sp-0xf8], Other Possible Types: struct161
    let v34: i128;  // [sp-0xe8]
    let v35: i128;  // [sp-0xd8]
    let v37: i64;  // r12
    let v39: i64;  // r14
    let v41: i256;  // ymm0
    let v42: i256;  // ymm0
    let v44: i256;  // ymm1
    let v45: i256;  // ymm1
    let v47: i256;  // ymm2
    let v48: i256;  // ymm2
    let v49: i64;  // r14
    let v51: i256;  // ymm3
    let v52: i128;  // xmm0
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1
    let v73: i128;  // xmm2
    let v74: i128;  // xmm3
    let v75: i128;  // xmm0
    let v76: i128;  // xmm1
    let v77: i128;  // xmm2

    v37 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v37 {
        v35 = *((a1 + 32) as &i128);
        v34 = *((a1 + 16) as &i128);
        v33 = *(a1 as &i128);
        uu_sort::merge::merge_without_limit(a0, &v33, a2);
    } else {
        v39 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
        v42 = v41 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
        v45 = v44 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
        v48 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
        v0 = struct48 {
            field_0: v40
            field_16: v43
            field_32: v46
        };
        v33 = itertools::Itertools::chunks(&v0, v37);
        v10 = 0;
        v11 = 8;
        v12 = 0;
        if v39 {
            v21 = 9223372036854775810;
            do {
                v13 = v13;
                v39 -= v37;
                if v39 < v37 {
                    v39 = 0;
                }
                v13 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v33);
                if v13 == v21 {
                    core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                }
                v52 = v13;
                v53 = *((&v13 as &char + 16) as &i128);
                v54 = *((&v13 as &char + 32) as &i128);
                v20 = v54;
                v19 = v53;
                v18 = v52;
                uu_sort::merge::merge_without_limit(&v0, &v18, a2);
                if v22 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v56
                        field_16: v57
                    };
                }
                v29 = *((&v8 as &char + 8) as &i64);
                v58 = *((&v0 as &char + 24) as &i128);
                v59 = v3;
                v60 = *((&v4 as &char + 8) as &i128);
                v61 = v7;
                v28 = v61;
                v27 = v60;
                v26 = v59;
                v25 = v58;
                v22 = v0.field_0;
                v23 = *((&v0 as &char + 8) as &i64);
                v24 = v0.field_16;
                v18 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                if v32 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v19
                    };
                }
                v31 = v18;
                v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v31);
                if v13 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v14
                        field_16: v15
                    };
                }
                v67 = *((&v0 as &char + 24) as &i128);
                v68 = *((&v0 as &char + 40) as &i128);
                v17 = v68;
                v16 = v67;
                v13 = v0;
                v14 = *((&v0 as &char + 8) as &i64);
                v15 = *((&v0 as &char + 16) as &i64);
                v69 = *((&v28 as &char + 8) as &i128);
                v8 = v69;
                v70 = *((&v27 as &char + 8) as &i128);
                v6 = v70;
                v71 = v22;
                v72 = v24;
                v73 = *((&v25 as &char + 8) as &i128);
                v74 = *((&v26 as &char + 8) as &i128);
                v51 = (v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
                v4 = v74;
                v2 = v73;
                v1 = v72;
                v0 = v71;
                v4 = *((&v17 as &char + 8) as &i64);
                v75 = v13;
                v42 = (((((((v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
                v76 = v15;
                v45 = ((((v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
                v77 = *((&v16 as &char + 8) as &i128);
                v48 = (((v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
                v2 = v77;
                v1 = v76;
                v0 = v75;
                <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing();
                if v30 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v56
                        field_16: v57
                    };
                }
                v30 = struct24 {
                    field_0: v78
                    field_8: v56
                    field_16: v57
                };
                v10 = alloc::vec::Vec<T,A>::push(&v30);
                v13 = v13;
            } while (v49 > v37);
        }
        v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v33);
        match v0 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
                v0 = v22;
                uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
            },
        }
    }
}
