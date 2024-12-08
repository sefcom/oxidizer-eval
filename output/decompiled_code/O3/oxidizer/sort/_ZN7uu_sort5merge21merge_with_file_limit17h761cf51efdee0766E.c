fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: u32, a2: u32, a3: &u64, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x2d8]
    let v1: i64;  // [sp-0x2c8]
    let v2: i640;  // [sp-0x2b8], Other Possible Types: Result<struct80, struct24>
    let v3: i128;  // [sp-0x2a8]
    let v4: i128;  // [bp-0x298]
    let v5: i64;  // [sp-0x290]
    let v6: i128;  // [sp-0x288]
    let v7: i128;  // [sp-0x278]
    let v8: i128;  // [sp-0x268]
    let v9: i8;  // [bp-0x260]
    let v10: i128;  // [sp-0x258]
    let v11: i384;  // [sp-0x248], Other Possible Types: Result<struct48, struct24>, struct36
    let v12: i128;  // [sp-0x238]
    let v13: i64;  // [sp-0x228]
    let v14: i128;  // [sp-0x210], Other Possible Types: struct16
    let v15: i64;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: i64;  // [sp-0x1f8]
    let v18: i8;  // [bp-0x1f0], Other Possible Types: struct32
    let v19: i64;  // [sp-0x1e8]
    let v20: i64;  // [bp-0x1e0]
    let v21: i128;  // [sp-0x1d8]
    let v23: i128;  // [sp-0x1c8]
    let v24: i128;  // [sp-0x1b8]
    let v25: i128;  // [sp-0x1a8]
    let v26: i128;  // [sp-0x198]
    let v27: i64;  // [sp-0x188]
    let v28: i64;  // [sp-0x180]
    let v29: i64;  // [sp-0x178]
    let v30: i64;  // [sp-0x170]
    let v31: i128;  // [sp-0x168]
    let v32: i128;  // [sp-0x158]
    let v33: i128;  // [sp-0x148]
    let v34: i128;  // [sp-0x138]
    let v35: i64;  // [sp-0x128]
    let v36: struct32;  // [bp-0x120]
    let v37: i64;  // [sp-0x118]
    let v38: i64;  // [sp-0x100]
    let v39: i64;  // [sp-0xf8]
    let v40: i64;  // [sp-0xf0]
    let v41: i128;  // [sp-0xe8]
    let v42: i64;  // [sp-0xd8]
    let v43: i1032;  // [sp-0xd0], Other Possible Types: struct129
    let v45: i64;  // r12
    let v46: i64;  // rax
    let v47: i64;  // rbx
    let v49: i64;  // rbx
    let v52: i256;  // ymm0
    let v53: i256;  // ymm1
    let v54: i256;  // ymm2
    let v55: i256;  // ymm3
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i64;  // rcx
    let v59: i64;  // rdx
    let v60: i64;  // rax
    let v61: i64;  // rcx
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v67: i64;  // rdx
    let v68: i64;  // rax
    let v69: i64;  // rcx
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1
    let v73: i128;  // xmm2
    let v74: i128;  // xmm3
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i128;  // xmm1
    let v79: i128;  // xmm2
    let v80: i128;  // xmm3
    let v81: i64;  // rax
    let v82: i128;  // xmm0
    let v83: i128;  // xmm0
    let v84: i128;  // xmm0
    let v85: i128;  // xmm0
    let v86: i128;  // xmm1
    let v87: i128;  // xmm2
    let v88: i128;  // xmm3
    let v89: i64;  // rdx
    let v90: i128;  // xmm0
    let v91: i64;  // rdx
    let v92: i64;  // rax
    let v93: i64;  // rdx
    let v94: i64;  // rcx
    let v95: i64;  // rdx

    v45 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v45 {
        v46 = uu_sort::merge::merge_without_limit(a0, a1, a2, a3);
        return v46;
    }
    v47 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v43 = itertools::Itertools::chunks(a1, a2, v45);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    if v47 {
        v1 = (*((a3 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a3 + 56) as &i64));
        v17 = *((a3 + 64) as &i64);
        do {
            v47 = v49 - v45;
            if v49 < v45 {
                v47 = 0;
            }
            <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v18, &v43);
            if v18 == 3 {
                core::option::unwrap_failed(); /* do not return */
            }
            v13 = *((&v21 as &char + 8) as &i64);
            v56 = v18;
            v57 = v20;
            v12 = v57;
            v11 = v56;
            v2 = uu_sort::merge::merge_without_limit(&v11, a3, v58);
            v59 = v2;
            v60 = *((&v2 as &char + 8) as &i64);
            v61 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v91 = a0;
                    *((v91 + 8) as &i64) = v60;
                    *((v91 + 16) as &i64) = v61;
                    *(v91 as &i64) = 3;
                    return v46;
                },
                Ok(_) => {
                    v35 = v9;
                    v62 = *((&v2 as &char + 24) as &i128);
                    v63 = *((&v2 as &char + 40) as &i128);
                    v64 = *((&v2 as &char + 56) as &i128);
                    v65 = *((&v2 as &char + 72) as &i128);
                    v34 = v65;
                    v33 = v64;
                    v32 = v63;
                    v31 = v62;
                    v28 = v59;
                    v29 = v60;
                    v30 = v61;
                    v11 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4, v28);
                },
            }
            if v37 == 0x8000000000000000 {
                v92 = a0;
                *((v92 + 8) as &struct36) = v11.16;
                *(v92 as &i64) = 3;
                return v46;
            }
            *(&v36.field_0 as &struct32) = struct32 {
                field_0: v11
                field_8: v66
                field_16: v51 as u128
            };
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v36, v1, v17);
            v67 = v2;
            v68 = *((&v2 as &char + 8) as &i64);
            v69 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v93 = a0;
                    *((v93 + 8) as &i64) = v19;
                    *((v93 + 16) as &i64) = v20;
                    *(v93 as &i64) = 3;
                    return v46;
                },
                Ok(_) => {
                    v27 = *((&v2 as &char + 104) as &i64);
                    v70 = *((&v2 as &char + 88) as &i128);
                    v26 = v70;
                    v71 = *((&v2 as &char + 24) as &i128);
                    v72 = *((&v2 as &char + 40) as &i128);
                    v73 = *((&v2 as &char + 56) as &i128);
                    v74 = *((&v2 as &char + 72) as &i128);
                    v25 = v74;
                    v24 = v73;
                    v23 = v72;
                    v21 = v71;
                    v18 = v67;
                    v19 = v68;
                    v20 = v69;
                    v75 = *((&v34 as &char + 8) as &i128);
                    v8 = v75;
                    v76 = *((&v33 as &char + 8) as &i128);
                    v7 = v76;
                    v77 = v28;
                    v78 = v30;
                    v79 = *((&v31 as &char + 8) as &i128);
                    v80 = *((&v32 as &char + 8) as &i128);
                    v6 = v80;
                    v4 = v79;
                    v3 = v78;
                    v2 = v77;
                    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v18);
                    v81 = uu_sort::merge::FileMerger::write_all_to(&v2, a3);
                },
            }
            if v81 {
                v94 = a0;
                *((v94 + 8) as &i64) = v81;
                *((v94 + 16) as &i64) = v95;
                *(v94 as &i64) = 3;
                return v46;
            }
            v82 = *((&v26 as &char + 8) as &i128);
            v10 = v82;
            v83 = *((&v25 as &char + 8) as &i128);
            v8 = v83;
            v84 = *((&v24 as &char + 8) as &i128);
            v7 = v84;
            v85 = v18;
            v86 = v20;
            v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v86;
            v87 = *((&v21 as &char + 8) as &i128);
            v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v87;
            v88 = *((&v23 as &char + 8) as &i128);
            v55 = v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v88;
            v6 = v88;
            v4 = v87;
            v3 = v86;
            v2 = v85;
            v11 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
            v89 = v11;
            v60 = *((&v11 as &char + 8) as &i64);
            v61 = *((&v11 as &char + 16) as &i64);
            match v11 {
                Err(_) => {
                    vvar_740{reg 32} = a0;
                    *((v91 + 8) as &i64) = v60;
                    *((v91 + 16) as &i64) = v61;
                    *(v91 as &i64) = 3;
                    return v46;
                },
                Ok(_) => {
                    v42 = *((&v11 as &char + 40) as &i64);
                    v90 = *((&v11 as &char + 24) as &i128);
                    v52 = ...;
                    v41 = v90;
                    v38 = v89;
                    v39 = v60;
                    v40 = v61;
                    v14 = alloc::vec::Vec<T,A>::push(&v38, v38);
                },
            }
        } while (v47 > v45);
    }
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v2, &v43);
    if v2 == 3 {
        v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v14);
        v3 = *((&v18 as &char + 16) as &i128);
        v2 = v18;
        v4 = alloc::boxed::Box<T>::new();
        v5 = &g_5ff7d0;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
        return v46;
    }
    core::panicking::panic(); /* do not return */
}
