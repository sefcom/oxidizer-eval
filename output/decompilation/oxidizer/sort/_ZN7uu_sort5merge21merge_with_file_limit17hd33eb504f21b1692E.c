fn uu_sort::merge::merge_with_file_limit(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x2d8]
    let v1: u64;  // [bp-0x2c8]
    let v2: struct24;  // [bp-0x2b8], Other Possible Types: u8
    let v3: struct96;  // [bp-0x2b8]
    let v4: Result<struct48, struct24>;  // [bp-0x2b8]
    let v5: Option<struct40>;  // [bp-0x2b8]
    let v6: u64;  // [bp-0x2b0]
    let v7: u128;  // [bp-0x2a8]
    let v8: u64;  // [bp-0x2a0]
    let v9: u128;  // [bp-0x298]
    let v10: u64;  // [bp-0x290]
    let v11: u128;  // [bp-0x288]
    let v12: u64;  // [bp-0x280]
    let v13: u128;  // [bp-0x278]
    let v14: u64;  // [bp-0x270]
    let v15: u128;  // [bp-0x268]
    let v16: u64;  // [bp-0x260]
    let v17: u128;  // [bp-0x258]
    let v18: u64;  // [bp-0x250]
    let v19: struct40;  // [bp-0x248]
    let v20: u64;  // [bp-0x240]
    let v21: u128;  // [bp-0x220]
    let v22: void*;  // [bp-0x210], Other Possible Types: struct32
    let v23: struct8;  // [bp-0x208]
    let v24: void*;  // [bp-0x200]
    let v25: u64;  // [bp-0x1f8]
    let v26: Option<struct40>;  // [bp-0x1f0], Other Possible Types: u64
    let v27: <anon>;  // [bp-0x1f0]
    let v28: u64;  // [bp-0x1e8]
    let v29: u64;  // [bp-0x1e0]
    let v30: u64;  // [bp-0x1e0]
    let v31: u128;  // [bp-0x1d8]
    let v32: u64;  // [bp-0x1d0]
    let v33: u128;  // [bp-0x1c8]
    let v34: u128;  // [bp-0x1b8]
    let v35: u128;  // [bp-0x1a8]
    let v36: u128;  // [bp-0x198]
    let v37: u64;  // [bp-0x188]
    let v38: struct48;  // [bp-0x180]
    let v39: struct96;  // [bp-0x178]
    let v40: struct48;  // [bp-0x170]
    let v41: struct16;  // [bp-0x168]
    let v42: struct16;  // [bp-0x158]
    let v43: u128;  // [bp-0x148]
    let v44: u128;  // [bp-0x138]
    let v45: struct56;  // [bp-0x128]
    let v46: u64;  // [bp-0x120]
    let v47: Result<struct112, struct24>;  // [bp-0x120]
    let v48: u64;  // [bp-0x118]
    let v49: u128;  // [bp-0x110]
    let v50: struct40;  // [bp-0x100]
    let v51: struct16;  // [bp-0x100]
    let v52: u64;  // [bp-0xd8]
    let v53: struct129;  // [bp-0xd0]
    let v55: u64;  // rax
    let v56: core::option::Option<u32>;  // r12
    let v57: u32;  // rdi
    let v58: u64;  // rbx
    let v62: core::result::Result<usize, core::num::error::ParseIntError>;  // r13
    let v64: u64;  // rdx
    let v65: u64;  // rax
    let v66: struct56;  // rcx
    let v67: struct16;  // xmm0
    let v68: struct16;  // xmm1
    let v69: u128;  // xmm2
    let v71: u64;  // rdx
    let v72: u64;  // rcx
    let v74: u128;  // xmm0
    let v75: u128;  // xmm1
    let v76: u128;  // xmm2
    let v82: u64;  // rax
    let v86: u128;  // xmm0
    let v87: u128;  // xmm1
    let v88: u128;  // xmm2
    let v89: i64;  // rdi
    let v90: i64;  // rdi
    let v91: i64;  // rdi
    let v92: i64;  // rdi
    let v93: u64;  // rdx
    let v95: u64;  // rax
    let v96: u128;  // xmm0
    let v98: u64;  // [bp-0x298]
    let v100: u64;  // [bp-0x1c0]
    let v102: u64;  // [bp-0x1a0]

    v0 = a0;
    v55 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v56 = *((a2 + 112) as &i64);
    if v55 <= v56 {
        uu_sort::merge::merge_without_limit(v57, v0, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v53 = itertools::Itertools::chunks(v0, a1, v56);
    v22 = 0;
    v23 = 8;
    v24 = 0;
    if v58 {
        v1 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v25 = *((a2 + 64) as &i64);
        do {
            v29 = v29;
            v26 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v53);
            v27 = core::option::unwrap(v26);
            v19 = struct40 {
                field_0: v27.field_0.field_0
                field_16: *(&v27.field_0.field_16 as &i128)
                field_32: v32
            };
            uu_sort::merge::merge_without_limit(&v2, &v19, a2);
            v64 = *(&v2 as &i64);
            v65 = v6;
            if v64 == 3 {
                *((v89 + 8) as &u64) = v65;
                *((v89 + 16) as &struct56) = v66;
                *(v89 as &i64) = 3;
                return;
            }
            v45 = v16;
            v67 = *(&v8 as &i128);
            v68 = *(&v10 as &i128);
            v69 = *(&v12 as &i128);
            v44 = *(&v14 as &i128);
            v43 = v69;
            v42 = v68;
            v41 = v67;
            v38 = v64;
            v39 = v65;
            v40 = v66;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v38);
            if v20 == 0x8000000000000000 {
                *((v90 + 8) as &u128) = v19.field_16;
                *(v90 as &i64) = 3;
                return;
            }
            v46 = v19.field_0;
            v48 = v20;
            v49 = v19.field_16;
            v47 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(v1, v25, a3);
            v71 = *(&v2 as &i64);
            v72 = *((&v4 as &char + 16) as &i64);
            if v71 == 0x8000000000000000 {
                *((v91 + 8) as &u64) = v6;
                *((v91 + 16) as &u64) = v30;
                *(v91 as &i64) = 3;
                return;
            }
            v37 = v18;
            v36 = *(&v16 as &i128);
            v74 = *(&v8 as &i128);
            v75 = *(&v10 as &i128);
            v76 = *(&v12 as &i128);
            v35 = *(&v14 as &i128);
            v34 = v76;
            v33 = v75;
            v31 = v74;
            v26 = v71;
            v28 = v6;
            v30 = v72;
            v3 = struct96 {
                field_0: v38.field_0
                field_16: v40.field_0
                field_32: *(&v41.field_8 as &i128)
                field_48: *(&v42.field_8 as &i128)
                field_64: *((&v43 as &char + 8) as &i128)
                field_80: *((&v44 as &char + 8) as &i128)
            };
            v82 = uu_sort::merge::FileMerger::write_all_to(&v3, a2, <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v26));
            if v82 {
                *((v92 + 8) as &u64) = v82;
                *((v92 + 16) as &u64) = v93;
                *(v92 as &i64) = 3;
                return;
            }
            v17 = *((&v36 as &char + 8) as &i128);
            v15 = *(&v102 as &i128);
            v13 = *((&v34 as &char + 8) as &i128);
            v86 = *(&v26 as &i128);
            v87 = *(&v30 as &i128);
            v88 = *((&v31 as &char + 8) as &i128);
            v11 = *(&v100 as &i128);
            v9 = v88;
            v7 = v87;
            v2 = v86;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
            v65 = v20;
            if v19.field_0 as i64 == 0x8000000000000000 {
                *((v89 + 8) as &u64) = v65;
                *((v89 + 16) as &struct56) = v66;
                *(v89 as &i64) = 3;
                return;
            }
            v52 = v21;
            v50 = struct40 {
                field_0: v19.field_0 as i64
                field_8: v65
                field_16: v19.field_16 as i64
                field_24: *((&v19.field_16 as &char + 8) as &i128)
            };
            v51 = alloc::vec::Vec<T,A>::push(v50.field_0 as i64);
            v29 = v30;
            v58 = v62;
        } while (v58 > v56);
    }
    v5 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v53);
    match v5 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v22 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v95 = alloc::boxed::Box<T>::new();
            v96 = *(&v26 as &i128);
            v7 = *(&v30 as &i128) as u128;
            v2 = v96;
            v98 = v95;
            v10 = &g_600370;
            v2 = uu_sort::merge::merge_with_file_limit(a2, a3, a3);
            return;
        },
    }
}
