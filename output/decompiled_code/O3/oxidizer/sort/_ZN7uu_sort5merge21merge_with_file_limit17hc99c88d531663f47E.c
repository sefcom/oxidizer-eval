fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: u32, a2: u32, a3: void*, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x260]
    let v1: i128;  // [sp-0x248], Other Possible Types: struct36
    let v2: i128;  // [sp-0x218], Other Possible Types: Option<struct40>, Result<struct80, struct24>
    let v3: i128;  // [sp-0x208]
    let v4: i128;  // [bp-0x1f8]
    let v5: i128;  // [bp-0x1e8]
    let v6: i128;  // [sp-0x1d8]
    let v7: i128;  // [sp-0x1c8]
    let v9: struct24;  // [bp-0x1b8]
    let v10: i64;  // [sp-0x1a0], Other Possible Types: Option<struct40>
    let v11: i64;  // [sp-0x198]
    let v12: i64;  // [sp-0x190]
    let v13: i128;  // [sp-0x188]
    let v14: i128;  // [sp-0x178]
    let v15: i256;  // [sp-0x168], Other Possible Types: struct32
    let v16: i64;  // [sp-0x160]
    let v17: i64;  // [sp-0x158]
    let v18: i128;  // [sp-0x150]
    let v19: i128;  // [sp-0x140]
    let v20: i128;  // [sp-0x130]
    let v21: i128;  // [sp-0x120]
    let v22: i64;  // [sp-0x110]
    let v23: i64;  // [sp-0x108], Other Possible Types: struct24
    let v24: i256;  // [bp-0xf0]
    let v25: i64;  // [sp-0xe8]
    let v26: i1032;  // [sp-0xd0], Other Possible Types: struct129
    let v28: i64;  // r12
    let v29: i64;  // rax
    let v30: i64;  // rbx
    let v31: i64;  // rbx
    let v33: i256;  // ymm0
    let v34: i256;  // ymm1
    let v35: i256;  // ymm2
    let v36: i256;  // ymm3
    let v37: i128;  // xmm0
    let v38: i128;  // xmm1
    let v39: i64;  // rcx
    let v40: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rcx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i128;  // xmm3
    let v47: i64;  // rdx
    let v48: i64;  // rax
    let v49: i64;  // rcx
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2
    let v57: i128;  // xmm3
    let v58: i64;  // rax
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i64;  // rdx
    let v63: i64;  // rdx
    let v64: i64;  // rax
    let v65: i64;  // rdx
    let v66: i64;  // rcx

    v28 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v28 {
        v29 = uu_sort::merge::merge_without_limit(a0, a1, a2, a3);
        return v29;
    }
    v30 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v26 = itertools::Itertools::chunks(a1, a2, v28);
    v9 = struct24 {
        field_0: 0
    };
    if v30 {
        do {
            v30 = v31 - v28;
            if v31 < v28 {
                v30 = 0;
            }
            v10 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26);
            match v10 {
                None => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Some(_) => {
                    v1.32 = (stack_base)[384] as i64;
                    v37 = v10;
                    v38 = *((&v10 as &char + 16) as &i128);
                    v1.16 = vvar_192{reg 256};
                    v1 = v37;
                    v2 = uu_sort::merge::merge_without_limit(&v1, a3, v39);
                    v40 = v2;
                    v41 = *((&v2 as &char + 8) as &i64);
                    v42 = *((&v2 as &char + 16) as &i64);
                },
            }
            match v2 {
                Err(_) => {
                    v63 = a0;
                    *((v63 + 8) as &i64) = v41;
                    *((v63 + 16) as &i64) = v42;
                    *(v63 as &i64) = 3;
                    return v29;
                },
                Ok(_) => {
                    v22 = *((&v7 as &char + 8) as &i64);
                    v43 = *((&v2 as &char + 24) as &i128);
                    v44 = *((&v2 as &char + 40) as &i128);
                    v45 = *((&v2 as &char + 56) as &i128);
                    v46 = *((&v2 as &char + 72) as &i128);
                    v21 = v46;
                    v20 = v45;
                    v19 = v44;
                    v18 = v43;
                    v15 = v40;
                    v16 = v41;
                    v17 = v42;
                    v1 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4, v15);
                },
            }
            if v25 == 0x8000000000000000 {
                v64 = a0;
                *((v64 + 8) as &struct36) = v1.16;
                *(v64 as &i64) = 3;
                return v29;
            }
            v24 = v1;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v2, &v24);
            v47 = v2;
            v48 = *((&v2 as &char + 8) as &i64);
            v49 = *((&v2 as &char + 16) as &i64);
            if v10 == 0x8000000000000000 {
                v65 = a0;
                *((v65 + 8) as &i64) = v11;
                *((v65 + 16) as &i64) = v12;
                *(v65 as &i64) = 3;
                return v29;
            }
            v50 = *((&v2 as &char + 24) as &i128);
            v51 = *((&v2 as &char + 40) as &i128);
            v14 = v51;
            v13 = v50;
            v10 = v47;
            v11 = v48;
            v12 = v49;
            v52 = *((&v21 as &char + 8) as &i128);
            v7 = v52;
            v53 = *((&v20 as &char + 8) as &i128);
            v6 = v53;
            v54 = v15;
            v55 = v17;
            v56 = *((&v18 as &char + 8) as &i128);
            v57 = *((&v19 as &char + 8) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
            v5 = v57;
            v4 = v56;
            v3 = v55;
            v2 = v54;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v10);
            v58 = uu_sort::merge::FileMerger::write_all_to(&v2, a3);
            if v58 {
                v66 = a0;
                *((v66 + 8) as &i64) = v58;
                *((v66 + 16) as &i64) = v62;
                *(v66 as &i64) = 3;
                return v29;
            }
            v5 = *((&v14 as &char + 8) as &i64);
            v59 = v10;
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (v1.16) as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = v12;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *((&v13 as &char + 8) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v4 = v61;
            v3 = v60;
            v2 = v59;
            <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v1, &v2);
            v41 = *((&v1 as &char + 8) as &i64);
            v42 = *((&v1 as &char + 16) as &i64);
            if v23 == 0x8000000000000000 {
                vvar_636{reg 32} = a0;
                *((v63 + 8) as &i64) = v41;
                *((v63 + 16) as &i64) = v42;
                *(v63 as &i64) = 3;
                return v29;
            }
            *(&v23.field_0 as &struct24) = struct24 {
                field_0: v62
                field_8: v41
                field_16: v42
            };
            alloc::vec::Vec<T,A>::push(&v9, &v23, v23);
        } while (v30 > v28);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v26);
    if v2 == 3 {
        v15 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
        v2 = v15;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
        return v29;
    }
    core::panicking::panic(); /* do not return */
}
