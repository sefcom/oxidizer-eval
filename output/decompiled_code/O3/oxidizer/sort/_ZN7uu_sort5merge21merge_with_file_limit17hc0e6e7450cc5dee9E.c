fn uu_sort::merge::merge_with_file_limit(a0: &Result<struct80, struct24>, a1: &struct48, a2: void*, a3: u32) -> u64 {
    let v0: i384;  // [bp-0x278], Other Possible Types: struct48, Result<struct80, struct24>, Option<struct48>, struct56
    let v1: i128;  // [sp-0x268]
    let v2: i128;  // [bp-0x258]
    let v3: i128;  // [bp-0x248]
    let v4: i128;  // [sp-0x238]
    let v5: i128;  // [bp-0x230]
    let v6: i128;  // [sp-0x228]
    let v7: i8;  // [bp-0x220]
    let v8: i128;  // [sp-0x218], Other Possible Types: struct16
    let v9: i64;  // [sp-0x210]
    let v10: i64;  // [sp-0x208]
    let v11: i64;  // [sp-0x200], Other Possible Types: Option<struct48>, struct56
    let v12: i64;  // [sp-0x1f8]
    let v13: i64;  // [sp-0x1f0]
    let v14: i192;  // [bp-0x1c8], Other Possible Types: struct36, struct48, struct24
    let v15: i128;  // [sp-0x1b8]
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190], Other Possible Types: struct32
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [sp-0x178]
    let v21: i128;  // [sp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i64;  // [sp-0x138]
    let v25: struct24;  // [sp-0x130], Other Possible Types: i64
    let v26: i256;  // [bp-0x118]
    let v27: i64;  // [sp-0x110]
    let v28: struct161;  // [bp-0xf8], Other Possible Types: struct48, i1288
    let v30: i64;  // r12
    let v31: i64;  // rcx
    let v32: i64;  // rax
    let v33: i64;  // r14
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm1
    let v37: i256;  // ymm1
    let v38: i256;  // ymm2
    let v39: i256;  // ymm2
    let v40: i64;  // r14
    let v42: i256;  // ymm3
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i64;  // rcx
    let v47: i64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm2
    let v53: i128;  // xmm3
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i64;  // rdx
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
    let v69: i64;  // rax
    let v70: i64;  // rdx
    let v71: i64;  // rcx

    v30 = *((a2 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1) <= v30 {
        v28 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v32 = uu_sort::merge::merge_without_limit(a0, &v28, a2, v31);
        return v32;
    }
    v33 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a1);
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(a1 as &i128);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 16) as &i128);
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((a1 + 32) as &i128);
    v0 = struct48 {
        field_0: v34 as u128
        field_16: v36 as u128
        field_32: v38 as u128
    };
    v28 = itertools::Itertools::chunks(&v0, v30);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    if v33 {
        v16 = 9223372036854775810;
        do {
            v11 = v11;
            v33 -= v30;
            if v33 < v30 {
                v33 = 0;
            }
            v11 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
            if v11 == v16 {
                core::option::unwrap_failed(); /* do not return */
            }
            v43 = v11;
            v44 = *((&v11 as &char + 16) as &i128);
            v45 = *((&v11 as &char + 32) as &i128);
            v14 = struct48 {
                field_0: v43
                field_16: v44
                field_32: v45
            };
            v0 = uu_sort::merge::merge_without_limit(&v14, a2, v46);
            v47 = v0;
            v48 = *((&v0 as &char + 8) as &i64);
            v49 = *((&v0 as &char + 16) as &i64);
            match v0 {
                Err(_) => {
                    v68 = a0;
                    *((v68 + 8) as &i64) = v48;
                    *((v68 + 16) as &i64) = v49;
                    *(v68 as &i64) = 3;
                    return v32;
                },
                Ok(_) => {
                    v24 = v7;
                    v50 = *((&v0 as &char + 24) as &i128);
                    v51 = *((&v0 as &char + 40) as &i128);
                    v52 = *((&v0 as &char + 56) as &i128);
                    v53 = v5;
                    v23 = v53;
                    v22 = v52;
                    v21 = v51;
                    v20 = v50;
                    v17 = v47;
                    v18 = v48;
                    v19 = v49;
                    v14 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v17);
                },
            }
            if v27 == 0x8000000000000000 {
                v69 = a0;
                *((v69 + 8) as &i128) = v15;
                *(v69 as &i64) = 3;
                return v32;
            }
            v26 = v14;
            v0 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v26);
            if v11 == 0x8000000000000000 {
                v70 = a0;
                *((v70 + 8) as &i64) = v12;
                *((v70 + 16) as &i64) = v13;
                *(v70 as &i64) = 3;
                return v32;
            }
            v54 = *((&v0 as &char + 24) as &i128);
            v55 = *((&v0 as &char + 40) as &i128);
            v11 = struct56 {
                field_0: v56
                field_8: v57
                field_16: v46
                field_24: v54
                field_40: v55
            };
            v58 = *((&v23 as &char + 8) as &i128);
            v6 = v58;
            v59 = *((&v22 as &char + 8) as &i128);
            v4 = v59;
            v60 = v17;
            v61 = v19;
            v62 = *((&v20 as &char + 8) as &i128);
            v63 = *((&v21 as &char + 8) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v3 = v63;
            v2 = v62;
            v1 = v61;
            v0 = v60;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v11);
            v64 = uu_sort::merge::FileMerger::write_all_to(&v0, a2);
            if v64 {
                v71 = a0;
                *((v71 + 8) as &i64) = v64;
                *((v71 + 16) as &i64) = v56;
                *(v71 as &i64) = 3;
                return v32;
            }
            v3 = *((&v11.field_40 as &char + 8) as &i64);
            v65 = *(&v11.field_0 as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v66 = *(&v11.field_16 as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v67 = *((&v11.field_24 as &char + 8) as &i128);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
            v2 = v67;
            v1 = v66;
            v0 = v65;
            v14 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v0);
            v48 = *((&v14 as &char + 8) as &i64);
            v49 = *((&v14 as &char + 16) as &i64);
            if v25 == 0x8000000000000000 {
                vvar_673{reg 32} = a0;
                *((v68 + 8) as &i64) = v48;
                *((v68 + 16) as &i64) = v49;
                *(v68 as &i64) = 3;
                return v32;
            }
            v25 = struct24 {
                field_0: v56
                field_8: v48
                field_16: v49
            };
            v8 = alloc::vec::Vec<T,A>::push(&v25, v25);
            v11 = v11;
        } while (v40 > v30);
    }
    v0 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v28);
    if v0 == 9223372036854775810 {
        v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
        v0 = v17;
        uu_sort::merge::merge_with_file_limit(a0, &v0, a2, a3);
        return v32;
    }
    core::panicking::panic(); /* do not return */
}
