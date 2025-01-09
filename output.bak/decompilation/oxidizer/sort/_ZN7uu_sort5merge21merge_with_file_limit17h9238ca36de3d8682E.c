fn uu_sort::merge::merge_with_file_limit(a0: &Result<struct80, struct16>, a1: &u64, a2: &u64, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x350]
    let v1: i64;  // [sp-0x348]
    let v2: i128;  // [bp-0x338], Other Possible Types: Option<struct96>, Result<struct112, struct16>, struct112, struct32, struct48
    let v3: i128;  // [sp-0x328]
    let v4: i128;  // [bp-0x318]
    let v5: i128;  // [sp-0x308]
    let v6: i128;  // [sp-0x2f8]
    let v7: i128;  // [sp-0x2e8]
    let v8: i64;  // [sp-0x2c0], Other Possible Types: struct16
    let v9: i64;  // [sp-0x2b8]
    let v10: i64;  // [sp-0x2b0]
    let v11: i64;  // [sp-0x2a8]
    let v12: i64;  // [sp-0x2a0]
    let v13: i64;  // [bp-0x298], Other Possible Types: struct96, struct32
    let v14: i64;  // [sp-0x290]
    let v15: i64;  // [sp-0x288]
    let v16: i128;  // [bp-0x280]
    let v17: i128;  // [bp-0x270]
    let v18: i128;  // [bp-0x260]
    let v19: i128;  // [bp-0x250]
    let v20: i128;  // [sp-0x240]
    let v21: i64;  // [sp-0x230]
    let v22: i648;  // [sp-0x228], Other Possible Types: Result<struct80, struct16>, struct36
    let v23: i8;  // [bp-0x1d0]
    let v24: i64;  // [sp-0x1c8]
    let v25: i64;  // [sp-0x1c0]
    let v26: i64;  // [sp-0x1b8]
    let v27: i128;  // [sp-0x1b0]
    let v28: i128;  // [sp-0x1a0]
    let v29: i128;  // [sp-0x190]
    let v30: i128;  // [sp-0x180]
    let v31: i64;  // [sp-0x170]
    let v32: struct32;  // [bp-0x168]
    let v33: i64;  // [sp-0x160]
    let v34: struct48;  // [sp-0x148]
    let v35: i1160;  // [bp-0x118], Other Possible Types: struct145, struct32
    let v37: i64;  // r13
    let v38: i64;  // r12
    let v39: i256;  // ymm0
    let v40: i256;  // ymm0
    let v41: i256;  // ymm1
    let v42: i256;  // ymm1
    let v44: i64;  // r12
    let v47: i256;  // ymm2
    let v49: i256;  // ymm3
    let v50: i128;  // xmm2
    let v51: i64;  // rdx
    let v52: i64;  // rax
    let v53: i64;  // rcx
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2
    let v57: i128;  // xmm3
    let v58: i128;  // xmm0
    let v60: i64;  // rdx
    let v61: i64;  // rax
    let v62: i64;  // rcx
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1
    let v72: i128;  // xmm2
    let v73: i128;  // xmm3
    let v74: i64;  // rax
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i128;  // xmm0
    let v79: i64;  // rdx
    let v80: i64;  // rax
    let v81: i64;  // r14

    v37 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v37 {
        v35 = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v35, a2);
        return a0;
    }
    v38 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v40 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v2 = struct32 {
        field_0: v39 as u128
        field_16: v41 as u128
    };
    v35 = itertools::Itertools::chunks(&v2, v37);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if v38 {
        v1 = v37;
        v0 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v11 = *((a2 + 64) as &i64);
        v12 = 9223372036854775810;
        v1 = v1;
        do {
            v5 = v5;
            v6 = v6;
            v7 = v7;
            v2 = v2;
            v3 = v3;
            v38 = v44 - v1;
            if v44 < v1 {
                v38 = 0;
            }
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
            if v2 == v12 {
                core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
            }
            v50 = *((&v2 as &char + 32) as &i128);
            v13 = struct96 {
                field_0: v39 as u128
                field_16: v41 as u128
                field_32: v50
                field_48: v48 as u128
                field_64: v39 as u128
                field_80: v39 as u128
            };
            v22 = uu_sort::merge::merge_without_limit(&v13, a2);
            v51 = v22;
            v52 = *((&v22 as &char + 8) as &i64);
            v53 = *((&v22 as &char + 16) as &i64);
            match v22 {
                Err(_) => {
                    v81 = a0;
                    *((v81 + 8) as &i64) = v52;
                    *((v81 + 16) as &i64) = v53;
                    *(v81 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v31 = v23;
                    v54 = *((&v22 as &char + 24) as &i128);
                    v55 = *((&v22 as &char + 40) as &i128);
                    v56 = *((&v22 as &char + 56) as &i128);
                    v57 = *((&v22 as &char + 72) as &i128);
                    v30 = v57;
                    v29 = v56;
                    v28 = v55;
                    v27 = v54;
                    v24 = v51;
                    v25 = v52;
                    v26 = v53;
                    v22 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                },
            }
            if v33 == 0x8000000000000000 {
                v81 = a0;
                *((v81 + 8) as &i128) = *((&v22 as &char + 16) as &i128);
                *(v81 as &i64) = 3;
                return a0;
            }
            v58 = *((&v22 as &char + 16) as &i128);
            *(&v32.field_0 as &struct32) = struct32 {
                field_0: v22
                field_8: v59
                field_16: v58
            };
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v32, v0, v11);
            v60 = v2;
            v61 = *((&v2 as &char + 8) as &i64);
            v62 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v81 = a0;
                    *((v81 + 8) as &i64) = v14;
                    *((v81 + 16) as &i64) = v15;
                    *(v81 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v21 = *((&v2 as &char + 104) as &i64);
                    v63 = *((&v2 as &char + 88) as &i128);
                    v20 = v63;
                    v64 = *((&v2 as &char + 24) as &i128);
                    v65 = *((&v2 as &char + 40) as &i128);
                    v66 = *((&v2 as &char + 56) as &i128);
                    v67 = *((&v2 as &char + 72) as &i128);
                    v19 = v67;
                    v18 = v66;
                    v17 = v65;
                    v16 = v64;
                    v13 = v60;
                    v14 = v61;
                    v15 = v62;
                    v68 = *((&v30 as &char + 8) as &i128);
                    v7 = v68;
                    v69 = *((&v29 as &char + 8) as &i128);
                    v6 = v69;
                    v70 = v24;
                    v71 = v26;
                    v72 = *((&v27 as &char + 8) as &i128);
                    v73 = *((&v28 as &char + 8) as &i128);
                    v5 = v73;
                    v4 = v72;
                    v3 = v71;
                    v2 = v70;
                    v74 = uu_sort::merge::FileMerger::write_all_to(&v2, a2, <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v13));
                },
            }
            if v74 {
                v81 = a0;
                *((v81 + 8) as &i64) = v74;
                *((v81 + 16) as &i64) = v79;
                *(v81 as &i64) = 3;
                return a0;
            }
            v75 = *((&v20 as &char + 8) as &i128);
            v76 = *((&v19 as &char + 8) as &i128);
            v77 = *((&v18 as &char + 8) as &i128);
            v78 = v13;
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
            v47 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v16 as &char + 8) as &i128);
            v49 = v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v17 as &char + 8) as &i128);
            v2 = struct112 {
                field_0: v78
                field_16: v41 as u128
                field_32: v46 as u128
                field_48: v48 as u128
                field_64: v77
                field_80: v76
                field_96: v75
            };
            v22 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
            v52 = *((&v22 as &char + 8) as &i64);
            v53 = *((&v22 as &char + 16) as &i64);
            match v22 {
                Err(_) => {
                    vvar_758{reg 128} = a0;
                    *((v81 + 8) as &i64) = v52;
                    *((v81 + 16) as &i64) = v53;
                    *(v81 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v40 = ...;
                    v34 = struct48 {
                        field_0: v79
                        field_8: v52
                        field_16: v53
                        field_24: v39 as u128
                        field_40: *((&v22 as &char + 40) as &i64)
                    };
                    v8 = alloc::vec::Vec<T,A>::push(&v34);
                    v80 = v1;
                    v3 = v3;
                    v2 = v2;
                    v7 = v7;
                    v6 = v6;
                    v5 = v5;
                },
            }
        } while (v38 > v80);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v35);
    if v2 == 9223372036854775810 {
        v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        *(&v2.field_0 as &struct48) = struct48 {
            field_0: v13
            field_16: *((&v13 as &char + 16) as &i128)
            field_32: v4
            field_40: &g_6002f8
        };
        v4 = alloc::boxed::Box<T>::new();
        uu_sort::merge::merge_with_file_limit(a0, &v2, a2, a3);
        return a0;
    }
    core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
}
