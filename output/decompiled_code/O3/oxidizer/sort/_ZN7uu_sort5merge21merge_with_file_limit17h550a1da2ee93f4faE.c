fn uu_sort::merge::merge_with_file_limit(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [bp-0x268], Other Possible Types: Option<struct48>, struct32, struct56, Result<struct80, struct24>
    let v1: i128;  // [sp-0x258]
    let v2: i128;  // [bp-0x248]
    let v3: i64;  // [bp-0x238]
    let v4: i128;  // [sp-0x228]
    let v5: i128;  // [bp-0x220]
    let v6: i128;  // [sp-0x218]
    let v7: i8;  // [bp-0x210]
    let v8: i128;  // [sp-0x208], Other Possible Types: struct16
    let v9: i64;  // [sp-0x200]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0], Other Possible Types: Option<struct48>, struct56
    let v12: i64;  // [sp-0x1e8]
    let v13: i64;  // [sp-0x1e0]
    let v14: i288;  // [bp-0x1b8], Other Possible Types: struct48, struct24, struct36
    let v15: i64;  // [sp-0x188]
    let v16: i64;  // [sp-0x180], Other Possible Types: struct32
    let v17: i64;  // [sp-0x178]
    let v18: i64;  // [sp-0x170]
    let v19: i128;  // [sp-0x168]
    let v20: i128;  // [sp-0x158]
    let v21: i128;  // [sp-0x148]
    let v22: i128;  // [sp-0x138]
    let v23: i64;  // [sp-0x128]
    let v24: struct24;  // [sp-0x120], Other Possible Types: i64
    let v25: i256;  // [bp-0x108]
    let v26: i64;  // [sp-0x100]
    let v27: struct145;  // [bp-0xe8], Other Possible Types: i1160, struct32
    let v29: i64;  // r12
    let v30: i64;  // rcx
    let v31: i64;  // r14
    let v32: i256;  // ymm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm1
    let v35: i256;  // ymm1
    let v36: i64;  // r14
    let v38: i256;  // ymm2
    let v39: i256;  // ymm3
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i128;  // xmm2
    let v43: i64;  // rcx
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: i128;  // xmm3
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i64;  // rdx
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i128;  // xmm2
    let v60: i128;  // xmm3
    let v61: i64;  // rax
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i64;  // rbx

    v29 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v29 {
        *(&v27.field_0 as &struct32) = struct32 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
        };
        uu_sort::merge::merge_without_limit(a0, &v27, a2, v30);
        return a0;
    }
    v31 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    *(&v0.field_0 as &struct32) = struct32 {
        field_0: v32 as u128
        field_16: v34 as u128
    };
    v27 = itertools::Itertools::chunks(&v0, v29);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if v31 {
        v15 = 9223372036854775810;
        do {
            v11 = v11;
            v31 -= v29;
            if v31 < v29 {
                v31 = 0;
            }
            v11 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27);
            if v11 == v15 {
                core::option::unwrap_failed(); /* do not return */
            }
            v40 = v11;
            v41 = *((&v11 as &char + 16) as &i128);
            v42 = *((&v11 as &char + 32) as &i128);
            v14 = struct48 {
                field_0: v40
                field_16: v41
                field_32: v42
            };
            v0 = uu_sort::merge::merge_without_limit(&v14, a2, v43);
            v44 = v0;
            v45 = *((&v0 as &char + 8) as &i64);
            v46 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v65 = a0;
                    *((v65 + 8) as &i64) = v45;
                    *((v65 + 16) as &i64) = v46;
                    *(v65 as &i64) = 3;
                    return a0;
                },
                Ok(_) => {
                    v23 = v7;
                    v47 = *((&v0 as &char + 24) as &i128);
                    v48 = *((&v0 as &char + 40) as &i128);
                    v49 = *((&v0 as &char + 56) as &i128);
                    v50 = v5;
                    v22 = v50;
                    v21 = v49;
                    v20 = v48;
                    v19 = v47;
                    v16 = v44;
                    v17 = v45;
                    v18 = v46;
                    v14 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v16);
                },
            }
            if v26 == 0x8000000000000000 {
                v65 = a0;
                *((v65 + 8) as &struct36) = v14.16;
                *(v65 as &i64) = 3;
                return a0;
            }
            v25 = v14;
            v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v25);
            if v11 == 0x8000000000000000 {
                v65 = a0;
                *((v65 + 8) as &i64) = v12;
                *((v65 + 16) as &i64) = v13;
                *(v65 as &i64) = 3;
                return a0;
            }
            v51 = *((&v0 as &char + 24) as &i128);
            v52 = *((&v0 as &char + 40) as &i128);
            v11 = struct56 {
                field_0: v53
                field_8: v54
                field_16: v43
                field_24: v51
                field_40: v52
            };
            v55 = *((&v22 as &char + 8) as &i128);
            v6 = v55;
            v56 = *((&v21 as &char + 8) as &i128);
            v4 = v56;
            v57 = v16;
            v58 = v18;
            v59 = *((&v19 as &char + 8) as &i128);
            v60 = *((&v20 as &char + 8) as &i128);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v3 = v60;
            v2 = v59;
            v0.field_16 = vvar_263{reg 256};
            v0 = v57;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v11);
            v61 = uu_sort::merge::FileMerger::write_all_to(&v0, a2);
            if v61 {
                v65 = a0;
                *((v65 + 8) as &i64) = v61;
                *((v65 + 16) as &i64) = v53;
                *(v65 as &i64) = 3;
                return a0;
            }
            v3 = *((&v11.field_40 as &char + 8) as &i64);
            v62 = *(&v11.field_0 as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v14.16) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v63 = *(&v11.field_16 as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *((&v11.field_24 as &char + 8) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v2 = v64;
            v1 = v63;
            v0 = v62;
            v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v0);
            v45 = *((&v14 as &char + 8) as &i64);
            v46 = *((&v14 as &char + 16) as &i64);
            if v24 == 0x8000000000000000 {
                vvar_677{reg 40} = a0;
                *((v65 + 8) as &i64) = v45;
                *((v65 + 16) as &i64) = v46;
                *(v65 as &i64) = 3;
                return a0;
            }
            v24 = struct24 {
                field_0: v53
                field_8: v45
                field_16: v46
            };
            v8 = alloc::vec::Vec<T,A>::push(&v24, v24);
            v11 = v11;
        } while (v36 > v29);
    }
    v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27);
    if v0 == 9223372036854775810 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v0 = v16;
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return a0;
    }
    core::panicking::panic(); /* do not return */
}
