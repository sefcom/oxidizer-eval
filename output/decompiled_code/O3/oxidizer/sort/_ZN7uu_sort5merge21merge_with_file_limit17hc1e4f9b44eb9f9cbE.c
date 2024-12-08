fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: &u64, a2: void*, a3: u32) -> u64 {
    let v0: i640;  // [bp-0x278], Other Possible Types: Result<struct80, struct24>, struct48
    let v1: i128;  // [sp-0x268]
    let v2: i64;  // [bp-0x258]
    let v3: i64;  // [sp-0x250]
    let v4: i128;  // [bp-0x248]
    let v5: i128;  // [sp-0x238]
    let v7: i128;  // [sp-0x228]
    let v9: struct24;  // [bp-0x218]
    let v10: i64;  // [sp-0x200]
    let v11: i64;  // [sp-0x1f8]
    let v12: i64;  // [bp-0x1f0]
    let v13: i128;  // [sp-0x1e8]
    let v14: i8;  // [bp-0x1e0]
    let v15: i128;  // [sp-0x1d8]
    let v16: struct48;  // [bp-0x1c8], Other Possible Types: struct36, i288
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190], Other Possible Types: struct32
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i128;  // [sp-0x178]
    let v22: i128;  // [sp-0x168]
    let v23: i128;  // [sp-0x158]
    let v24: i128;  // [sp-0x148]
    let v25: i64;  // [sp-0x138]
    let v26: struct24;  // [sp-0x130], Other Possible Types: i64
    let v27: struct32;  // [bp-0x118]
    let v28: i64;  // [sp-0x110]
    let v29: i1288;  // [bp-0xf8], Other Possible Types: struct48, struct161
    let v31: i64;  // r12
    let v32: i64;  // rcx
    let v33: i64;  // rax
    let v34: i64;  // r14
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v37: i256;  // ymm1
    let v38: i256;  // ymm1
    let v39: i256;  // ymm2
    let v40: i256;  // ymm2
    let v41: i64;  // r14
    let v43: i256;  // ymm3
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i64;  // rcx
    let v48: i64;  // rdx
    let v49: i64;  // rax
    let v50: i64;  // rcx
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2
    let v54: i128;  // xmm3
    let v56: i64;  // rdx
    let v57: i64;  // rax
    let v58: i64;  // rcx
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm1
    let v65: i128;  // xmm2
    let v66: i128;  // xmm3
    let v67: i64;  // rax
    let v68: i128;  // xmm0
    let v69: i128;  // xmm1
    let v70: i128;  // xmm2
    let v71: i64;  // rdx
    let v72: i64;  // rdx
    let v73: i64;  // rax
    let v74: i64;  // rdx
    let v75: i64;  // rcx

    v31 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v31 {
        v29 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v33 = uu_sort::merge::merge_without_limit(a0, &v29, a2, v32);
        return v33;
    }
    v34 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v38 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v40 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v0 = struct48 {
        field_0: v35 as u128
        field_16: v37 as u128
        field_32: v39 as u128
    };
    v29 = itertools::Itertools::chunks(&v0, v31);
    v9 = struct24 {
        field_0: 0
    };
    if v34 {
        v17 = 9223372036854775810;
        do {
            v10 = v10;
            v34 -= v31;
            if v34 < v31 {
                v34 = 0;
            }
            <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v10, &v29);
            if v10 == v17 {
                core::option::unwrap_failed(); /* do not return */
            }
            v44 = v10;
            v45 = v12;
            v46 = v14;
            v16 = struct48 {
                field_0: v44
                field_16: v45
                field_32: v46
            };
            v0 = uu_sort::merge::merge_without_limit(&v16, a2, v47);
            v48 = v0;
            v49 = *((&v0 as &char + 8) as &i64);
            v50 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v72 = a0;
                    *((v72 + 8) as &i64) = v49;
                    *((v72 + 16) as &i64) = v50;
                    *(v72 as &i64) = 3;
                    return v33;
                },
                Ok(_) => {
                    v25 = *((&v7 as &char + 8) as &i64);
                    v51 = *((&v0 as &char + 24) as &i128);
                    v52 = *((&v0 as &char + 40) as &i128);
                    v53 = *((&v0 as &char + 56) as &i128);
                    v54 = *((&v0 as &char + 72) as &i128);
                    v24 = v54;
                    v23 = v53;
                    v22 = v52;
                    v21 = v51;
                    v18 = v48;
                    v19 = v49;
                    v20 = v50;
                    v16 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v18);
                },
            }
            if v28 == 0x8000000000000000 {
                v73 = a0;
                *((v73 + 8) as &struct36) = v16.16;
                *(v73 as &i64) = 3;
                return v33;
            }
            *(&v27.field_0 as &struct32) = struct32 {
                field_0: v16
                field_8: v55
                field_16: v35 as u128
            };
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v0, &v27);
            v56 = v0;
            v57 = *((&v0 as &char + 8) as &i64);
            v58 = *((&v0 as &char + 16) as &i64);
            if v10 == 0x8000000000000000 {
                v74 = a0;
                *((v74 + 8) as &i64) = v11;
                *((v74 + 16) as &i64) = v12;
                *(v74 as &i64) = 3;
                return v33;
            }
            v59 = *((&v0 as &char + 24) as &i128);
            v60 = *((&v0 as &char + 40) as &i128);
            v15 = v60;
            v13 = v59;
            v10 = v56;
            v11 = v57;
            v12 = v58;
            v61 = *((&v24 as &char + 8) as &i128);
            v7 = v61;
            v62 = *((&v23 as &char + 8) as &i128);
            v5 = v62;
            v63 = v18;
            v64 = v20;
            v65 = *((&v21 as &char + 8) as &i128);
            v66 = *((&v22 as &char + 8) as &i128);
            v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v4 = v66;
            v2 = v65;
            v1 = v64;
            v0 = v63;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v10);
            v67 = uu_sort::merge::FileMerger::write_all_to(&v0, a2);
            if v67 {
                v75 = a0;
                *((v75 + 8) as &i64) = v67;
                *((v75 + 16) as &i64) = v71;
                *(v75 as &i64) = 3;
                return v33;
            }
            v4 = *((&v15 as &char + 8) as &i64);
            v68 = v10;
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v16.16) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
            v69 = v12;
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
            v70 = *((&v13 as &char + 8) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
            v2 = v70;
            v1 = v69;
            v0 = v68;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v16, &v0);
            v49 = *((&v16 as &char + 8) as &i64);
            v50 = *((&v16 as &char + 16) as &i64);
            if v26 == 0x8000000000000000 {
                vvar_668{reg 32} = a0;
                *((v72 + 8) as &i64) = v49;
                *((v72 + 16) as &i64) = v50;
                *(v72 as &i64) = 3;
                return v33;
            }
            *(&v26.field_0 as &struct24) = struct24 {
                field_0: v71
                field_8: v49
                field_16: v50
            };
            alloc::vec::Vec<T,A>::push(&v9, &v26, v26);
            v10 = v10;
        } while (v41 > v31);
    }
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v0, &v29);
    if v0 == 9223372036854775810 {
        v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v1 = *((&v18 as &char + 16) as &i128);
        v0 = v18;
        v2 = alloc::boxed::Box<T>::new();
        v3 = &g_5ff7f8;
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return v33;
    }
    core::panicking::panic(); /* do not return */
}
