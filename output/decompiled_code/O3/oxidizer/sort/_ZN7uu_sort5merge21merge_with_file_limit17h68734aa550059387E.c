fn uu_sort::merge::merge_with_file_limit(a0: &Result<struct80, struct24>, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x260]
    let v1: i128;  // [sp-0x248], Other Possible Types: struct36, struct24
    let v2: i128;  // [sp-0x238]
    let v3: i64;  // [sp-0x228]
    let v4: i640;  // [sp-0x218], Other Possible Types: Option<struct40>, struct56, Result<struct80, struct24>
    let v5: i128;  // [sp-0x208]
    let v6: i128;  // [bp-0x1f8]
    let v7: i128;  // [bp-0x1e8]
    let v8: i128;  // [sp-0x1d8]
    let v9: i128;  // [sp-0x1c8]
    let v10: i8;  // [bp-0x1c0]
    let v11: i64;  // [sp-0x1b8], Other Possible Types: struct16
    let v12: i64;  // [sp-0x1b0]
    let v13: i64;  // [sp-0x1a8]
    let v14: i320;  // [sp-0x1a0], Other Possible Types: struct56, Option<struct40>
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [sp-0x190]
    let v17: i64;  // [sp-0x168], Other Possible Types: struct32
    let v18: i64;  // [sp-0x160]
    let v19: i64;  // [sp-0x158]
    let v20: i128;  // [sp-0x150]
    let v21: i128;  // [sp-0x140]
    let v22: i128;  // [sp-0x130]
    let v23: i128;  // [sp-0x120]
    let v24: i64;  // [sp-0x110]
    let v25: struct24;  // [sp-0x108], Other Possible Types: i64
    let v26: i256;  // [bp-0xf0]
    let v27: i64;  // [sp-0xe8]
    let v28: struct129;  // [sp-0xd0], Other Possible Types: i1032
    let v30: i64;  // r12
    let v31: i64;  // rax
    let v32: i64;  // rbx
    let v33: i64;  // rbx
    let v35: i256;  // ymm0
    let v36: i256;  // ymm1
    let v37: i256;  // ymm2
    let v38: i256;  // ymm3
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // rcx
    let v42: i64;  // rdx
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i128;  // xmm3
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i64;  // rdx
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm1
    let v57: i128;  // xmm2
    let v58: i128;  // xmm3
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm2
    let v63: i64;  // rdx
    let v64: i64;  // rax
    let v65: i64;  // rdx
    let v66: i64;  // rcx

    v30 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v30 {
        v31 = uu_sort::merge::merge_without_limit(a0, a1, a2, a3);
        return v31;
    }
    v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v28 = itertools::Itertools::chunks(a1, a2, v30);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    if v32 {
        do {
            v32 = v33 - v30;
            if v33 < v30 {
                v32 = 0;
            }
            v14 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
            match v14 {
                None => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Some(_) => {
                    v3 = *((&v14 as &char + 32) as &i64);
                    v39 = v14;
                    v40 = *((&v14 as &char + 16) as &i128);
                    v2 = v40;
                    v1 = v39;
                    v4 = uu_sort::merge::merge_without_limit(&v1, a3, v41);
                    v42 = v4;
                    v43 = *((&v4 as &char + 8) as &i64);
                    v44 = *((&v4 as &char + 16) as &i64);
                },
            }
            match v4 {
                Err(_) => {
                    v63 = a0;
                    *((v63 + 8) as &i64) = v43;
                    *((v63 + 16) as &i64) = v44;
                    *(v63 as &i64) = 3;
                    return v31;
                },
                Ok(_) => {
                    v24 = v10;
                    v45 = *((&v4 as &char + 24) as &i128);
                    v46 = *((&v4 as &char + 40) as &i128);
                    v47 = *((&v4 as &char + 56) as &i128);
                    v48 = *((&v4 as &char + 72) as &i128);
                    v23 = v48;
                    v22 = v47;
                    v21 = v46;
                    v20 = v45;
                    v17 = v42;
                    v18 = v43;
                    v19 = v44;
                    v1 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4, v17);
                },
            }
            if v27 == 0x8000000000000000 {
                v64 = a0;
                *((v64 + 8) as &i128) = v2;
                *(v64 as &i64) = 3;
                return v31;
            }
            v26 = v1;
            v4 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26);
            if v14 == 0x8000000000000000 {
                v65 = a0;
                *((v65 + 8) as &i64) = v15;
                *((v65 + 16) as &i64) = v16;
                *(v65 as &i64) = 3;
                return v31;
            }
            v49 = *((&v4 as &char + 24) as &i128);
            v50 = *((&v4 as &char + 40) as &i128);
            v14 = struct56 {
                field_0: v51
                field_8: v52
                field_16: v41
                field_24: v49
                field_40: v50
            };
            v53 = *((&v23 as &char + 8) as &i128);
            v9 = v53;
            v54 = *((&v22 as &char + 8) as &i128);
            v8 = v54;
            v55 = v17;
            v56 = v19;
            v57 = *((&v20 as &char + 8) as &i128);
            v58 = *((&v21 as &char + 8) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v7 = v58;
            v6 = v57;
            v5 = v56;
            v4 = v55;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v14);
            v59 = uu_sort::merge::FileMerger::write_all_to(&v4, a3);
            if v59 {
                v66 = a0;
                *((v66 + 8) as &i64) = v59;
                *((v66 + 16) as &i64) = v51;
                *(v66 as &i64) = 3;
                return v31;
            }
            v7 = *((&v14.field_40 as &char + 8) as &i64);
            v60 = *(&v14.field_0 as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *(&v14.field_16 as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v62 = *((&v14.field_24 as &char + 8) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v6 = v62;
            v5 = v61;
            v4 = v60;
            v1 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v4);
            v43 = *((&v1 as &char + 8) as &i64);
            v44 = *((&v1 as &char + 16) as &i64);
            if v25 == 0x8000000000000000 {
                vvar_639{reg 32} = a0;
                *((v63 + 8) as &i64) = v43;
                *((v63 + 16) as &i64) = v44;
                *(v63 as &i64) = 3;
                return v31;
            }
            v25 = struct24 {
                field_0: v51
                field_8: v43
                field_16: v44
            };
            v11 = alloc::vec::Vec<T,A>::push(&v25, v25);
        } while (v32 > v30);
    }
    v4 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
    if v4 == 3 {
        v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
        v4 = v17;
        uu_sort::merge::merge_with_file_limit(a0, &v4, a3, a4);
        return v31;
    }
    core::panicking::panic(); /* do not return */
}
