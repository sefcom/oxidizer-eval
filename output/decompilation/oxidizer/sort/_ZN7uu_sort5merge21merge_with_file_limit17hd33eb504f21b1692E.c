fn uu_sort::merge::merge_with_file_limit(a0: &struct24, a1: u32, a2: u32, a3: &u64, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x2d8]
    let v1: i64;  // [sp-0x2c8]
    let v2: i128;  // [bp-0x2b8], Other Possible Types: Option<struct40>
    let v4: i8;  // [bp-0x2a8]
    let v5: i8;  // [bp-0x2a0]
    let v6: i128;  // [bp-0x298]
    let v8: i128;  // [sp-0x288]
    let v9: i8;  // [bp-0x280]
    let v10: i128;  // [sp-0x278]
    let v11: i8;  // [bp-0x270]
    let v12: i128;  // [sp-0x268]
    let v14: i128;  // [sp-0x258]
    let v15: i8;  // [bp-0x250]
    let v16: i128;  // [sp-0x248], Other Possible Types: struct36
    let v17: i128;  // [sp-0x238]
    let v18: i64;  // [sp-0x228]
    let v20: i128;  // [sp-0x210], Other Possible Types: struct16
    let v21: i64;  // [sp-0x208]
    let v22: i64;  // [sp-0x200]
    let v23: i64;  // [sp-0x1f8]
    let v24: i64;  // [sp-0x1f0], Other Possible Types: Option<struct40>, struct32
    let v25: i64;  // [sp-0x1e8]
    let v26: i64;  // [sp-0x1e0]
    let v27: i128;  // [sp-0x1d8]
    let v28: i128;  // [sp-0x1c8]
    let v29: i128;  // [sp-0x1b8]
    let v30: i128;  // [sp-0x1a8]
    let v31: i128;  // [sp-0x198]
    let v32: i64;  // [sp-0x188]
    let v33: i64;  // [sp-0x180]
    let v34: i64;  // [sp-0x178]
    let v35: i64;  // [sp-0x170]
    let v36: i128;  // [sp-0x168]
    let v37: i128;  // [sp-0x158]
    let v38: i128;  // [sp-0x148]
    let v39: i128;  // [sp-0x138]
    let v40: i64;  // [sp-0x128]
    let v41: i256;  // [sp-0x120]
    let v42: i64;  // [sp-0x118]
    let v43: i64;  // [sp-0x100], Other Possible Types: struct48
    let v44: struct129;  // [sp-0xd0], Other Possible Types: i1040
    let v46: i64;  // r12
    let v48: i64;  // rbx
    let v50: i64;  // rbx
    let v52: i256;  // ymm0
    let v53: i256;  // ymm1
    let v54: i256;  // ymm2
    let v55: i256;  // ymm3
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1
    let v73: i128;  // xmm2
    let v74: i128;  // xmm3
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i128;  // xmm1
    let v79: i128;  // xmm2
    let v80: i128;  // xmm3
    let v81: i128;  // xmm0
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm1
    let v86: i128;  // xmm2
    let v87: i128;  // xmm3

    v46 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v46 {
        uu_sort::merge::merge_without_limit(a0, a1, a2);
    } else {
        v48 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
        v44 = itertools::Itertools::chunks(a1, a2, v46);
        v20 = 0;
        v21 = 8;
        v22 = 0;
        if v48 {
            v1 = (*((a3 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a3 + 56) as &i64));
            v23 = *((a3 + 64) as &i64);
            do {
                v48 = v50 - v46;
                if v50 < v46 {
                    v48 = 0;
                }
                v24 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
                match v24 {
                    None => {
                        core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
                    },
                    Some(_) => {
                        v18 = *((&v24 as &char + 32) as &i64);
                        v56 = v24;
                        v57 = *((&v24 as &char + 16) as &i128);
                        v17 = v57;
                        v16 = v56;
                        uu_sort::merge::merge_without_limit(&v2, &v16, a3);
                    },
                }
                if v33 == 3 {
                    return struct24 {
                        field_0: 3
                        field_8: v59
                        field_16: v60
                    };
                }
                v40 = *((&v12 as &char + 8) as &i64);
                v61 = v5;
                v62 = *((&v6 as &char + 8) as &i128);
                v63 = v9;
                v64 = v11;
                v39 = v64;
                v38 = v63;
                v37 = v62;
                v36 = v61;
                v33 = v2;
                v34 = *((&v2 as &char + 8) as &i64);
                v35 = v4;
                v16 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4);
                if v42 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v17
                    };
                }
                v41 = v16;
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v41, v1, v23);
                if v24 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v25
                        field_16: v26
                    };
                }
                v32 = v15;
                v70 = *((&v12 as &char + 8) as &i128);
                v31 = v70;
                v71 = v5;
                v72 = *((&v6 as &char + 8) as &i128);
                v73 = v9;
                v74 = v11;
                v30 = v74;
                v29 = v73;
                v28 = v72;
                v27 = v71;
                v24 = v2;
                v25 = *((&v2 as &char + 8) as &i64);
                v26 = v4;
                v75 = *((&v39 as &char + 8) as &i128);
                v12 = v75;
                v76 = *((&v38 as &char + 8) as &i128);
                v10 = v76;
                v77 = v33;
                v78 = v35;
                v79 = *((&v36 as &char + 8) as &i128);
                v80 = *((&v37 as &char + 8) as &i128);
                v8 = v80;
                v6 = v79;
                v4 = v78;
                v2 = v77;
                v81 = *((&v31 as &char + 8) as &i128);
                v14 = v81;
                v82 = *((&v30 as &char + 8) as &i128);
                v12 = v82;
                v83 = *((&v29 as &char + 8) as &i128);
                v10 = v83;
                v84 = v24;
                v85 = v26;
                v53 = ((((v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v85;
                v86 = *((&v27 as &char + 8) as &i128);
                v54 = (((v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
                v87 = *((&v28 as &char + 8) as &i128);
                v55 = (((v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87;
                v8 = v87;
                v6 = v86;
                v4 = v85;
                v2 = v84;
                <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing();
                if v43 == 0x8000000000000000 {
                    return struct24 {
                        field_0: 3
                        field_8: v59
                        field_16: v60
                    };
                }
                v52 = ...;
                v43 = struct48 {
                    field_0: v88
                    field_8: v59
                    field_16: v60
                    field_24: v89
                    field_40: v19
                };
                v20 = alloc::vec::Vec<T,A>::push(&v43);
            } while (v48 > v46);
        }
        v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v44);
        match v2 {
            Some(_) => {
                core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
            },
            None => {
                v24 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20);
                v2 = v24;
                uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
            },
        }
    }
}
