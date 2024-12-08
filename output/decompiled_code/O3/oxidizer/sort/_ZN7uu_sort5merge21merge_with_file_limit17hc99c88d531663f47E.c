fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x260]
    let v1: i288;  // [sp-0x248], Other Possible Types: struct36
    let v2: i128;  // [sp-0x218], Other Possible Types: Result<struct80, struct24>
    let v3: i128;  // [sp-0x208]
    let v4: i128;  // [bp-0x1f8]
    let v5: i64;  // [sp-0x1f0]
    let v6: i128;  // [bp-0x1e8]
    let v7: i128;  // [sp-0x1d8]
    let v8: i128;  // [sp-0x1c8]
    let v9: i8;  // [bp-0x1c0]
    let v10: struct24;  // [bp-0x1b8]
    let v11: i8;  // [bp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: i64;  // [bp-0x190]
    let v14: i128;  // [sp-0x188]
    let v15: i128;  // [sp-0x178]
    let v16: i256;  // [sp-0x168], Other Possible Types: struct32
    let v17: i64;  // [sp-0x160]
    let v18: i64;  // [sp-0x158]
    let v19: i128;  // [sp-0x150]
    let v20: i128;  // [sp-0x140]
    let v21: i128;  // [sp-0x130]
    let v22: i128;  // [sp-0x120]
    let v23: i64;  // [sp-0x110]
    let v24: i64;  // [sp-0x108], Other Possible Types: struct24
    let v25: struct32;  // [bp-0xf0]
    let v26: i64;  // [sp-0xe8]
    let v27: struct129;  // [sp-0xd0], Other Possible Types: i1032
    let v29: i64;  // r12
    let v30: i64;  // rax
    let v31: i64;  // rbx
    let v32: i64;  // rbx
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
    let v50: i64;  // rdx
    let v51: i64;  // rax
    let v52: i64;  // rcx
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
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
    let v65: i64;  // rdx
    let v66: i64;  // rdx
    let v67: i64;  // rax
    let v68: i64;  // rdx
    let v69: i64;  // rcx

    v29 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v29 {
        v30 = uu_sort::merge::merge_without_limit(a0, a1, a2, a3);
        return v30;
    }
    v31 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v27 = itertools::Itertools::chunks(a1, a2, v29);
    v10 = struct24 {
        field_0: 0
    };
    if v31 {
        do {
            v31 = v32 - v29;
            if v32 < v29 {
                v31 = 0;
            }
            <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v11, &v27);
            if v11 == 3 {
                core::option::unwrap_failed(); /* do not return */
            }
            v1.32 = (stack_base)[384] as i64;
            v39 = v11;
            v40 = v13;
            v1.16 = vvar_192{reg 256};
            v1 = v39;
            v2 = uu_sort::merge::merge_without_limit(&v1, a3, v41);
            v42 = v2;
            v43 = *((&v2 as &char + 8) as &i64);
            v44 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v66 = a0;
                    *((v66 + 8) as &i64) = v43;
                    *((v66 + 16) as &i64) = v44;
                    *(v66 as &i64) = 3;
                    return v30;
                },
                Ok(_) => {
                    v23 = v9;
                    v45 = *((&v2 as &char + 24) as &i128);
                    v46 = *((&v2 as &char + 40) as &i128);
                    v47 = *((&v2 as &char + 56) as &i128);
                    v48 = v2;
                    v22 = v48;
                    v21 = v47;
                    v20 = v46;
                    v19 = v45;
                    v16 = v42;
                    v17 = v43;
                    v18 = v44;
                    v1 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4, v16);
                },
            }
            if v26 == 0x8000000000000000 {
                v67 = a0;
                *((v67 + 8) as &struct36) = v1.16;
                *(v67 as &i64) = 3;
                return v30;
            }
            *(&v25.field_0 as &struct32) = struct32 {
                field_0: v1
                field_8: v49
                field_16: v34 as u128
            };
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v25);
            v50 = v2;
            v51 = *((&v2 as &char + 8) as &i64);
            v52 = *((&v2 as &char + 16) as &i64);
            if v11 == 0x8000000000000000 {
                v68 = a0;
                *((v68 + 8) as &i64) = v12;
                *((v68 + 16) as &i64) = v13;
                *(v68 as &i64) = 3;
                return v30;
            }
            v53 = *((&v2 as &char + 24) as &i128);
            v54 = *((&v2 as &char + 40) as &i128);
            v15 = v54;
            v14 = v53;
            v11 = v50;
            v12 = v51;
            v13 = v52;
            v55 = *((&v22 as &char + 8) as &i128);
            v8 = v55;
            v56 = *((&v21 as &char + 8) as &i128);
            v7 = v56;
            v57 = v16;
            v58 = v18;
            v59 = *((&v19 as &char + 8) as &i128);
            v60 = *((&v20 as &char + 8) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v6 = v60;
            v4 = v59;
            v3 = v58;
            v2 = v57;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v11);
            v61 = uu_sort::merge::FileMerger::write_all_to(&v2, a3);
            if v61 {
                v69 = a0;
                *((v69 + 8) as &i64) = v61;
                *((v69 + 16) as &i64) = v65;
                *(v69 as &i64) = 3;
                return v30;
            }
            v6 = *((&v15 as &char + 8) as &i64);
            v62 = v11;
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v1.16) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v63 = v13;
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *((&v14 as &char + 8) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v4 = v64;
            v3 = v63;
            v2 = v62;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v1, &v2);
            v43 = *((&v1 as &char + 8) as &i64);
            v44 = *((&v1 as &char + 16) as &i64);
            if v24 == 0x8000000000000000 {
                vvar_634{reg 32} = a0;
                *((v66 + 8) as &i64) = v43;
                *((v66 + 16) as &i64) = v44;
                *(v66 as &i64) = 3;
                return v30;
            }
            *(&v24.field_0 as &struct24) = struct24 {
                field_0: v65
                field_8: v43
                field_16: v44
            };
            alloc::vec::Vec<T,A>::push(&v10, &v24, v24);
        } while (v31 > v29);
    }
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v27);
    if v2 == 3 {
        v16 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
        v3 = *((&v16 as &char + 16) as &i128);
        v2 = v16;
        v4 = alloc::boxed::Box<T>::new();
        v5 = &g_5ff820;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
        return v30;
    }
    core::panicking::panic(); /* do not return */
}
