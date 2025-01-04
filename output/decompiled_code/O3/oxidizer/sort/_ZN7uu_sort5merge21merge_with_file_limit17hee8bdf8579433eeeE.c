fn uu_sort::merge::merge_with_file_limit(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i384;  // [bp-0x268], Other Possible Types: Option<struct48>, struct32, Result<struct80, struct24>, struct56
    let v1: i128;  // [sp-0x258]
    let v2: i128;  // [bp-0x248]
    let v3: i128;  // [bp-0x238]
    let v4: i128;  // [sp-0x228]
    let v6: i128;  // [sp-0x218]
    let v8: i64;  // [sp-0x208], Other Possible Types: struct16
    let v9: i64;  // [sp-0x200]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0], Other Possible Types: struct56, Option<struct48>
    let v12: i64;  // [sp-0x1e8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i288;  // [bp-0x1b8], Other Possible Types: struct48, struct24, struct36
    let v15: i128;  // [sp-0x1a8]
    let v16: i64;  // [sp-0x188]
    let v17: i64;  // [sp-0x180], Other Possible Types: struct32
    let v18: i64;  // [sp-0x178]
    let v19: i64;  // [sp-0x170]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i128;  // [sp-0x138]
    let v24: i64;  // [sp-0x128]
    let v25: struct24;  // [sp-0x120], Other Possible Types: i64
    let v26: i256;  // [bp-0x108]
    let v27: i64;  // [sp-0x100]
    let v28: i1160;  // [bp-0xe8], Other Possible Types: struct145, struct32
    let v30: i64;  // r12
    let v31: i64;  // rcx
    let v32: i64;  // r14
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i256;  // ymm1
    let v36: i256;  // ymm1
    let v37: i64;  // r14
    let v39: i256;  // ymm2
    let v40: i256;  // ymm3
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i128;  // xmm2
    let v44: i64;  // rcx
    let v45: i64;  // rdx
    let v46: i64;  // rax
    let v47: i64;  // rcx
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v50: i128;  // xmm2
    let v51: i128;  // xmm3
    let v52: i128;  // xmm0
    let v53: i128;  // xmm1
    let v54: i64;  // rdx
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i64;  // rax
    let v63: i128;  // xmm0
    let v64: i128;  // xmm1
    let v65: i128;  // xmm2
    let v66: i64;  // rbx

    v30 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v30 {
        *(&v28.field_0 as &struct32) = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v28, a2, v31);
        return a0;
    }
    v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    *(&v0.field_0 as &struct32) = struct32 {
        field_0: v33 as u128
        field_16: v35 as u128
    };
    v28 = itertools::Itertools::chunks(&v0, v30);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if v32 {
        v16 = 9223372036854775810;
        do {
            v11 = v11;
            v32 -= v30;
            if v32 < v30 {
                v32 = 0;
            }
            v11 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
            if v11 == v16 {
                core::option::unwrap_failed(); /* do not return */
            }
            v41 = v11;
            v42 = *((&v11 as &char + 16) as &i128);
            v43 = *((&v11 as &char + 32) as &i128);
            v14 = struct48 {
                field_0: v41
                field_16: v42
                field_32: v43
            };
            v0 = uu_sort::merge::merge_without_limit(&v14, a2, v44);
            v45 = v0;
            v46 = *((&v0 as &char + 8) as &i64);
            v47 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v66 = a0;
                    *((v66 + 8) as &i64) = v46;
                    *((v66 + 16) as &i64) = v47;
                    *(v66 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v24 = *((&v6 as &char + 8) as &i64);
                    v48 = *((&v0 as &char + 24) as &i128);
                    v49 = *((&v0 as &char + 40) as &i128);
                    v50 = *((&v0 as &char + 56) as &i128);
                    v51 = *((&v0 as &char + 72) as &i128);
                    v23 = v51;
                    v22 = v50;
                    v21 = v49;
                    v20 = v48;
                    v17 = v45;
                    v18 = v46;
                    v19 = v47;
                    v14 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v17);
                },
            }
            if v27 == 0x8000000000000000 {
                v66 = a0;
                *((v66 + 8) as &i128) = v15;
                *(v66 as &i64) = 3;
                return a0;
            }
            v26 = v14;
            v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26);
            if v11 == 0x8000000000000000 {
                v66 = a0;
                *((v66 + 8) as &i64) = v12;
                *((v66 + 16) as &i64) = v13;
                *(v66 as &i64) = 3;
                return a0;
            }
            v52 = *((&v0 as &char + 24) as &i128);
            v53 = *((&v0 as &char + 40) as &i128);
            v11 = struct56 {
                field_0: v54
                field_8: v55
                field_16: v44
                field_24: v52
                field_40: v53
            };
            v56 = *((&v23 as &char + 8) as &i128);
            v6 = v56;
            v57 = *((&v22 as &char + 8) as &i128);
            v4 = v57;
            v58 = v17;
            v59 = v19;
            v60 = *((&v20 as &char + 8) as &i128);
            v61 = *((&v21 as &char + 8) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v3 = v61;
            v2 = v60;
            v1 = v59;
            v0 = v58;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v11);
            v62 = uu_sort::merge::FileMerger::write_all_to(&v0, a2);
            if v62 {
                v66 = a0;
                *((v66 + 8) as &i64) = v62;
                *((v66 + 16) as &i64) = v54;
                *(v66 as &i64) = 3;
                return a0;
            }
            v3 = *((&v11.field_40 as &char + 8) as &i64);
            v63 = *(&v11.field_0 as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *(&v11.field_16 as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v65 = *((&v11.field_24 as &char + 8) as &i128);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v2 = v65;
            v1 = v64;
            v0 = v63;
            v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v0);
            v46 = *((&v14 as &char + 8) as &i64);
            v47 = *((&v14 as &char + 16) as &i64);
            if v25 == 0x8000000000000000 {
                vvar_677{reg 40} = a0;
                *((v66 + 8) as &i64) = v46;
                *((v66 + 16) as &i64) = v47;
                *(v66 as &i64) = 3;
                return a0;
            }
            v25 = struct24 {
                field_0: v54
                field_8: v46
                field_16: v47
            };
            v8 = alloc::vec::Vec<T,A>::push(&v25, v25);
            v11 = v11;
        } while (v37 > v30);
    }
    v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
    if v0 == 9223372036854775810 {
        v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v0 = v17;
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return a0;
    }
    core::panicking::panic(); /* do not return */
}
