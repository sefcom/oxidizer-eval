fn uu_sort::merge::merge_with_file_limit(a0: &Result<struct80, struct16>, a1: &u64, a2: void*, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x268], Other Possible Types: struct56, struct48, Option<struct48>, struct32, Result<struct80, struct16>
    let v1: i128;  // [sp-0x258]
    let v2: i128;  // [bp-0x248]
    let v3: i128;  // [bp-0x238]
    let v4: i128;  // [sp-0x228]
    let v6: i128;  // [sp-0x218]
    let v7: i8;  // [bp-0x210]
    let v8: i64;  // [sp-0x208], Other Possible Types: struct16
    let v9: i64;  // [sp-0x200]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0], Other Possible Types: Option<struct48>
    let v12: i64;  // [sp-0x1e8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i128;  // [sp-0x1d8]
    let v15: i128;  // [sp-0x1c8]
    let v16: struct36;  // [bp-0x1b8], Other Possible Types: struct48, i192, struct24
    let v17: i128;  // [sp-0x1a8]
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180], Other Possible Types: struct32
    let v20: i64;  // [sp-0x178]
    let v21: i64;  // [sp-0x170]
    let v22: i128;  // [sp-0x168]
    let v23: i128;  // [sp-0x158]
    let v24: i128;  // [sp-0x148]
    let v25: i128;  // [sp-0x138]
    let v26: i64;  // [sp-0x128]
    let v27: struct24;  // [sp-0x120], Other Possible Types: i64
    let v28: struct32;  // [bp-0x108]
    let v29: i64;  // [sp-0x100]
    let v30: struct32;  // [bp-0xe8], Other Possible Types: i1160, struct145
    let v32: i64;  // r12
    let v33: i64;  // r14
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm1
    let v37: i256;  // ymm1
    let v38: i64;  // r14
    let v41: i256;  // ymm2
    let v42: i256;  // ymm3
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i64;  // rdx
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v54: i64;  // rdx
    let v55: i64;  // rax
    let v56: i64;  // rcx
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v65: i64;  // rax
    let v66: i64;  // rdx
    let v67: i64;  // rbx

    v32 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v32 {
        v30 = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v30, a2);
        return a0;
    }
    v33 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v0 = struct32 {
        field_0: v34 as u128
        field_16: v36 as u128
    };
    v30 = itertools::Itertools::chunks(&v0, v32);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if v33 {
        v18 = 9223372036854775810;
        do {
            v11 = v11;
            v33 -= v32;
            if v33 < v32 {
                v33 = 0;
            }
            v11 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v30);
            if v11 == v18 {
                core::option::unwrap_failed("src/uu/sort/src/merge.rs"); /* do not return */
            }
            v43 = v11;
            v44 = *((&v11 as &char + 16) as &i128);
            v45 = *((&v11 as &char + 32) as &i128);
            v16 = struct48 {
                field_0: v43
                field_16: v44
                field_32: v45
            };
            v0 = uu_sort::merge::merge_without_limit(&v16, a2);
            v46 = v0;
            v47 = *((&v0 as &char + 8) as &i64);
            v48 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v67 = a0;
                    *((v67 + 8) as &i64) = v47;
                    *((v67 + 16) as &i64) = v48;
                    *(v67 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v26 = v7;
                    v49 = *((&v0 as &char + 24) as &i128);
                    v50 = *((&v0 as &char + 40) as &i128);
                    v51 = *((&v0 as &char + 56) as &i128);
                    v52 = *((&v0 as &char + 72) as &i128);
                    v25 = v52;
                    v24 = v51;
                    v23 = v50;
                    v22 = v49;
                    v19 = v46;
                    v20 = v47;
                    v21 = v48;
                    v16 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3);
                },
            }
            if v29 == 0x8000000000000000 {
                v67 = a0;
                *((v67 + 8) as &i128) = v17;
                *(v67 as &i64) = 3;
                return a0;
            }
            *(&v28.field_0 as &struct32) = struct32 {
                field_0: v16
                field_8: v53
                field_16: v34 as u128
            };
            v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v28);
            v54 = v0;
            v55 = *((&v0 as &char + 8) as &i64);
            v56 = *((&v0 as &char + 16) as &i64);
            if v11 == 0x8000000000000000 {
                v67 = a0;
                *((v67 + 8) as &i64) = v12;
                *((v67 + 16) as &i64) = v13;
                *(v67 as &i64) = 3;
                return a0;
            }
            v57 = *((&v0 as &char + 24) as &i128);
            v58 = *((&v0 as &char + 40) as &i128);
            v15 = v58;
            v14 = v57;
            v11 = v54;
            v12 = v55;
            v13 = v56;
            v59 = *((&v25 as &char + 8) as &i128);
            v6 = v59;
            v60 = *((&v24 as &char + 8) as &i128);
            v4 = v60;
            v61 = v19;
            v62 = v21;
            v63 = *((&v22 as &char + 8) as &i128);
            v64 = *((&v23 as &char + 8) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v3 = v64;
            v2 = v63;
            v1 = v62;
            v0 = v61;
            v65 = uu_sort::merge::FileMerger::write_all_to(&v0, a2, <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v11));
            if v65 {
                v67 = a0;
                *((v67 + 8) as &i64) = v65;
                *((v67 + 16) as &i64) = v66;
                *(v67 as &i64) = 3;
                return a0;
            }
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v14 as &char + 8) as &i128);
            *(&v0.field_0 as &struct56) = struct56 {
                field_0: v34 as u128
                field_16: v36 as u128
                field_32: v40 as u128
                field_48: *((&v15 as &char + 8) as &i64)
            };
            v16 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v0);
            v47 = *((&v16 as &char + 8) as &i64);
            v48 = *((&v16 as &char + 16) as &i64);
            if v27 == 0x8000000000000000 {
                vvar_677{reg 40} = a0;
                *((v67 + 8) as &i64) = v47;
                *((v67 + 16) as &i64) = v48;
                *(v67 as &i64) = 3;
                return a0;
            }
            *(&v27.field_0 as &struct24) = struct24 {
                field_0: v66
                field_8: v47
                field_16: v48
            };
            v8 = alloc::vec::Vec<T,A>::push(&v27);
            v11 = v11;
        } while (v38 > v32);
    }
    v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v30);
    if v0 == 9223372036854775810 {
        v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        *(&v0.field_0 as &struct48) = struct48 {
            field_0: v19
            field_16: *((&v19 as &char + 16) as &i128)
            field_32: v2
            field_40: &g_600398
        };
        v2 = alloc::boxed::Box<T>::new();
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return a0;
    }
    core::panicking::panic("assertion failed: batches.next().is_none()", "src/uu/sort/src/merge.rs"); /* do not return */
}
