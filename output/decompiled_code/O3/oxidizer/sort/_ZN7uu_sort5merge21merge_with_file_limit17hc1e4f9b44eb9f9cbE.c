fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: &u64, a2: void*, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x278], Other Possible Types: struct48, Option<struct48>, Result<struct80, struct24>
    let v1: i128;  // [sp-0x268]
    let v2: i128;  // [bp-0x258]
    let v3: i128;  // [bp-0x248]
    let v4: i128;  // [sp-0x238]
    let v6: i128;  // [sp-0x228]
    let v7: i8;  // [bp-0x220]
    let v8: struct24;  // [bp-0x218]
    let v9: i384;  // [sp-0x200], Other Possible Types: Option<struct48>
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i128;  // [sp-0x1e8]
    let v13: i128;  // [sp-0x1d8]
    let v14: i288;  // [bp-0x1c8], Other Possible Types: struct48, struct36
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [sp-0x190], Other Possible Types: struct32
    let v17: i64;  // [sp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i128;  // [sp-0x178]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i64;  // [sp-0x138]
    let v24: i64;  // [sp-0x130], Other Possible Types: struct24
    let v25: i256;  // [bp-0x118]
    let v26: i64;  // [sp-0x110]
    let v27: i1288;  // [bp-0xf8], Other Possible Types: struct161, struct48
    let v29: i64;  // r12
    let v30: i64;  // rcx
    let v31: i64;  // rax
    let v32: i64;  // r14
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i256;  // ymm1
    let v36: i256;  // ymm1
    let v37: i256;  // ymm2
    let v38: i256;  // ymm2
    let v39: i64;  // r14
    let v41: i256;  // ymm3
    let v42: i128;  // xmm0
    let v43: i128;  // xmm1
    let v44: i128;  // xmm2
    let v45: i64;  // rcx
    let v46: i64;  // rdx
    let v47: i64;  // rax
    let v48: i64;  // rcx
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v53: i64;  // rdx
    let v54: i64;  // rax
    let v55: i64;  // rcx
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm2
    let v63: i128;  // xmm3
    let v64: i64;  // rax
    let v65: i128;  // xmm0
    let v66: i128;  // xmm1
    let v67: i128;  // xmm2
    let v68: i64;  // rdx
    let v69: i64;  // rdx
    let v70: i64;  // rax
    let v71: i64;  // rdx
    let v72: i64;  // rcx

    v29 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v29 {
        v27 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v31 = uu_sort::merge::merge_without_limit(a0, &v27, a2, v30);
        return v31;
    }
    v32 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v38 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v0 = struct48 {
        field_0: v33 as u128
        field_16: v35 as u128
        field_32: v37 as u128
    };
    v27 = itertools::Itertools::chunks(&v0, v29);
    v8 = struct24 {
        field_0: 0
    };
    if v32 {
        v15 = 9223372036854775810;
        do {
            v9 = v9;
            v32 -= v29;
            if v32 < v29 {
                v32 = 0;
            }
            v9 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27);
            if v9 == v15 {
                core::option::unwrap_failed(); /* do not return */
            }
            v42 = v9;
            v43 = *((&v9 as &char + 16) as &i128);
            v44 = *((&v9 as &char + 32) as &i128);
            v14 = struct48 {
                field_0: v42
                field_16: v43
                field_32: v44
            };
            v0 = uu_sort::merge::merge_without_limit(&v14, a2, v45);
            v46 = v0;
            v47 = *((&v0 as &char + 8) as &i64);
            v48 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v69 = a0;
                    *((v69 + 8) as &i64) = v47;
                    *((v69 + 16) as &i64) = v48;
                    *(v69 as &i64) = 3;
                    return v31;
                },
                Ok(_) => {
                    v23 = v7;
                    v49 = *((&v0 as &char + 24) as &i128);
                    v50 = *((&v0 as &char + 40) as &i128);
                    v51 = *((&v0 as &char + 56) as &i128);
                    v52 = *((&v0 as &char + 72) as &i128);
                    v22 = v52;
                    v21 = v51;
                    v20 = v50;
                    v19 = v49;
                    v16 = v46;
                    v17 = v47;
                    v18 = v48;
                    v14 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v16);
                },
            }
            if v26 == 0x8000000000000000 {
                v70 = a0;
                *((v70 + 8) as &struct36) = v14.16;
                *(v70 as &i64) = 3;
                return v31;
            }
            v25 = v14;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, &v25);
            v53 = v0;
            v54 = *((&v0 as &char + 8) as &i64);
            v55 = *((&v0 as &char + 16) as &i64);
            if v9 == 0x8000000000000000 {
                v71 = a0;
                *((v71 + 8) as &i64) = v10;
                *((v71 + 16) as &i64) = v11;
                *(v71 as &i64) = 3;
                return v31;
            }
            v56 = *((&v0 as &char + 24) as &i128);
            v57 = *((&v0 as &char + 40) as &i128);
            v13 = v57;
            v12 = v56;
            v9 = v53;
            v10 = v54;
            v11 = v55;
            v58 = *((&v22 as &char + 8) as &i128);
            v6 = v58;
            v59 = *((&v21 as &char + 8) as &i128);
            v4 = v59;
            v60 = v16;
            v61 = v18;
            v62 = *((&v19 as &char + 8) as &i128);
            v63 = *((&v20 as &char + 8) as &i128);
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v3 = v63;
            v2 = v62;
            v1 = v61;
            v0 = v60;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v9);
            v64 = uu_sort::merge::FileMerger::write_all_to(&v0, a2);
            if v64 {
                v72 = a0;
                *((v72 + 8) as &i64) = v64;
                *((v72 + 16) as &i64) = v68;
                *(v72 as &i64) = 3;
                return v31;
            }
            v3 = *((&v13 as &char + 8) as &i64);
            v65 = v9;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v14.16) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v66 = v11;
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v67 = *((&v12 as &char + 8) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
            v2 = v67;
            v1 = v66;
            v0 = v65;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v14, &v0);
            v47 = *((&v14 as &char + 8) as &i64);
            v48 = *((&v14 as &char + 16) as &i64);
            if v24 == 0x8000000000000000 {
                vvar_670{reg 32} = a0;
                *((v69 + 8) as &i64) = v47;
                *((v69 + 16) as &i64) = v48;
                *(v69 as &i64) = 3;
                return v31;
            }
            *(&v24.field_0 as &struct24) = struct24 {
                field_0: v68
                field_8: v47
                field_16: v48
            };
            alloc::vec::Vec<T,A>::push(&v8, &v24, v24);
            v9 = v9;
        } while (v39 > v29);
    }
    v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v27);
    if v0 == 9223372036854775810 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v0 = v16;
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return v31;
    }
    core::panicking::panic(); /* do not return */
}
