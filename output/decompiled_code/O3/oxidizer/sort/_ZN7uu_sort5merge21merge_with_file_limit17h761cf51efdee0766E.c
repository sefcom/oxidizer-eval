fn uu_sort::merge::merge_with_file_limit(a0: &u64, a1: u32, a2: u32, a3: &u64, a4: u32) -> u64 {
    let v0: i8;  // [bp-0x2d8]
    let v1: i64;  // [sp-0x2c8]
    let v2: i640;  // [sp-0x2b8], Other Possible Types: Result<struct112, struct24>, Option<struct40>
    let v3: i128;  // [sp-0x2a8]
    let v4: i128;  // [bp-0x298]
    let v5: i128;  // [sp-0x288]
    let v6: i128;  // [sp-0x278]
    let v7: i128;  // [sp-0x268]
    let v8: i8;  // [bp-0x260]
    let v9: i128;  // [sp-0x258]
    let v10: i288;  // [sp-0x248], Other Possible Types: struct36, Result<struct48, struct24>
    let v11: i128;  // [sp-0x238]
    let v12: i64;  // [sp-0x228]
    let v13: i128;  // [sp-0x210], Other Possible Types: struct16
    let v14: i64;  // [sp-0x208]
    let v15: i64;  // [sp-0x200]
    let v16: i64;  // [sp-0x1f8]
    let v17: i320;  // [sp-0x1f0], Other Possible Types: struct32, Option<struct40>
    let v18: i64;  // [sp-0x1e8]
    let v19: i64;  // [sp-0x1e0]
    let v20: i128;  // [sp-0x1d8]
    let v21: i128;  // [sp-0x1c8]
    let v22: i128;  // [sp-0x1b8]
    let v23: i128;  // [sp-0x1a8]
    let v24: i128;  // [sp-0x198]
    let v25: i64;  // [sp-0x188]
    let v26: i64;  // [sp-0x180]
    let v27: i64;  // [sp-0x178]
    let v28: i64;  // [sp-0x170]
    let v29: i128;  // [sp-0x168]
    let v30: i128;  // [sp-0x158]
    let v31: i128;  // [sp-0x148]
    let v32: i128;  // [sp-0x138]
    let v33: i64;  // [sp-0x128]
    let v34: i256;  // [bp-0x120]
    let v35: i64;  // [sp-0x118]
    let v36: i64;  // [sp-0x100]
    let v37: i64;  // [sp-0xf8]
    let v38: i64;  // [sp-0xf0]
    let v39: i128;  // [sp-0xe8]
    let v40: i64;  // [sp-0xd8]
    let v41: struct129;  // [sp-0xd0], Other Possible Types: i1032
    let v43: i64;  // r12
    let v44: i64;  // rax
    let v45: i64;  // rbx
    let v47: i64;  // rbx
    let v49: i256;  // ymm0
    let v50: i256;  // ymm1
    let v51: i256;  // ymm2
    let v52: i256;  // ymm3
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1
    let v55: i64;  // rcx
    let v56: i64;  // rdx
    let v57: i64;  // rax
    let v58: i64;  // rcx
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i128;  // xmm3
    let v63: i64;  // rdx
    let v64: i64;  // rax
    let v65: i64;  // rcx
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i128;  // xmm1
    let v69: i128;  // xmm2
    let v70: i128;  // xmm3
    let v71: i128;  // xmm0
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm1
    let v75: i128;  // xmm2
    let v76: i128;  // xmm3
    let v77: i64;  // rax
    let v78: i128;  // xmm0
    let v79: i128;  // xmm0
    let v80: i128;  // xmm0
    let v81: i128;  // xmm0
    let v82: i128;  // xmm1
    let v83: i128;  // xmm2
    let v84: i128;  // xmm3
    let v85: i64;  // rdx
    let v86: i128;  // xmm0
    let v87: i64;  // rdx
    let v88: i64;  // rax
    let v89: i64;  // rdx
    let v90: i64;  // rcx
    let v91: i64;  // rdx

    v43 = *((a3 + 112) as &i64);
    if <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0) <= v43 {
        v44 = uu_sort::merge::merge_without_limit(a0, a1, a2, a3);
        return v44;
    }
    v45 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v41 = itertools::Itertools::chunks(a1, a2, v43);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    if v45 {
        v1 = (*((a3 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a3 + 56) as &i64));
        v16 = *((a3 + 64) as &i64);
        do {
            v45 = v47 - v43;
            if v47 < v43 {
                v45 = 0;
            }
            v17 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v41);
            match v17 {
                None => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Some(_) => {
                    v12 = *((&v17 as &char + 32) as &i64);
                    v53 = v17;
                    v54 = *((&v17 as &char + 16) as &i128);
                    v11 = v54;
                    v10 = v53;
                    v2 = uu_sort::merge::merge_without_limit(&v10, a3, v55);
                    v56 = v2;
                    v57 = *((&v2 as &char + 8) as &i64);
                    v58 = *((&v2 as &char + 16) as &i64);
                },
            }
            match v2 {
                Err(_) => {
                    v87 = a0;
                    *((v87 + 8) as &i64) = v57;
                    *((v87 + 16) as &i64) = v58;
                    *(v87 as &i64) = 3;
                    return v44;
                },
                Ok(_) => {
                    v33 = v8;
                    v59 = *((&v2 as &char + 24) as &i128);
                    v60 = *((&v2 as &char + 40) as &i128);
                    v61 = *((&v2 as &char + 56) as &i128);
                    v62 = *((&v2 as &char + 72) as &i128);
                    v32 = v62;
                    v31 = v61;
                    v30 = v60;
                    v29 = v59;
                    v26 = v56;
                    v27 = v57;
                    v28 = v58;
                    v10 = uu_sort::tmp_dir::TmpDirWrapper::next_file(a4, v26);
                },
            }
            if v35 == 0x8000000000000000 {
                v88 = a0;
                *((v88 + 8) as &struct36) = v10.16;
                *(v88 as &i64) = 3;
                return v44;
            }
            v34 = v10;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v34, v1, v16);
            v63 = v2;
            v64 = *((&v2 as &char + 8) as &i64);
            v65 = *((&v2 as &char + 16) as &i64);
            match v2 {
                Err(_) => {
                    v89 = a0;
                    *((v89 + 8) as &i64) = v18;
                    *((v89 + 16) as &i64) = v19;
                    *(v89 as &i64) = 3;
                    return v44;
                },
                Ok(_) => {
                    v25 = *((&v2 as &char + 104) as &i64);
                    v66 = *((&v2 as &char + 88) as &i128);
                    v24 = v66;
                    v67 = *((&v2 as &char + 24) as &i128);
                    v68 = *((&v2 as &char + 40) as &i128);
                    v69 = *((&v2 as &char + 56) as &i128);
                    v70 = *((&v2 as &char + 72) as &i128);
                    v23 = v70;
                    v22 = v69;
                    v21 = v68;
                    v20 = v67;
                    v17 = v63;
                    v18 = v64;
                    v19 = v65;
                    v71 = *((&v32 as &char + 8) as &i128);
                    v7 = v71;
                    v72 = *((&v31 as &char + 8) as &i128);
                    v6 = v72;
                    v73 = v26;
                    v74 = v28;
                    v75 = *((&v29 as &char + 8) as &i128);
                    v76 = *((&v30 as &char + 8) as &i128);
                    v5 = v76;
                    v4 = v75;
                    v3 = v74;
                    v2 = v73;
                    <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v17);
                    v77 = uu_sort::merge::FileMerger::write_all_to(&v2, a3);
                },
            }
            if v77 {
                v90 = a0;
                *((v90 + 8) as &i64) = v77;
                *((v90 + 16) as &i64) = v91;
                *(v90 as &i64) = 3;
                return v44;
            }
            v78 = *((&v24 as &char + 8) as &i128);
            v9 = v78;
            v79 = *((&v23 as &char + 8) as &i128);
            v7 = v79;
            v80 = *((&v22 as &char + 8) as &i128);
            v6 = v80;
            v81 = v17;
            v82 = v19;
            v50 = v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v82;
            v83 = *((&v20 as &char + 8) as &i128);
            v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v83;
            v84 = *((&v21 as &char + 8) as &i128);
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v84;
            v5 = v84;
            v4 = v83;
            v3 = v82;
            v2 = v81;
            v10 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v2);
            v85 = v10;
            v57 = *((&v10 as &char + 8) as &i64);
            v58 = *((&v10 as &char + 16) as &i64);
            match v10 {
                Err(_) => {
                    vvar_742{reg 32} = a0;
                    *((v87 + 8) as &i64) = v57;
                    *((v87 + 16) as &i64) = v58;
                    *(v87 as &i64) = 3;
                    return v44;
                },
                Ok(_) => {
                    v40 = *((&v10 as &char + 40) as &i64);
                    v86 = *((&v10 as &char + 24) as &i128);
                    v49 = ...;
                    v39 = v86;
                    v36 = v85;
                    v37 = v57;
                    v38 = v58;
                    v13 = alloc::vec::Vec<T,A>::push(&v36, v36);
                },
            }
        } while (v45 > v43);
    }
    v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v41);
    if v2 == 3 {
        v17 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v13);
        v2 = v17;
        uu_sort::merge::merge_with_file_limit(a0, &v2, a3, a4);
        return v44;
    }
    core::panicking::panic(); /* do not return */
}
