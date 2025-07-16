fn uu_sort::merge::merge_with_file_limit(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x2d8]
    let v1: u64;  // [bp-0x2c8]
    let v2: u128;  // [bp-0x2b8], Other Possible Types: struct24
    let v3: u640;  // [bp-0x2b8]
    let v4: Result<struct48, struct24>;  // [bp-0x2b8]
    let v5: Option<struct40>;  // [bp-0x2b8]
    let v6: u64;  // [bp-0x2b0]
    let v7: u128;  // [bp-0x2a8]
    let v8: u64;  // [bp-0x2a0]
    let v9: u128;  // [bp-0x298]
    let v10: u64;  // [bp-0x290]
    let v11: u128;  // [bp-0x288]
    let v13: u128;  // [bp-0x278]
    let v14: u128;  // [bp-0x270]
    let v15: u64;  // [bp-0x260]
    let v16: u128;  // [bp-0x258]
    let v17: u64;  // [bp-0x250]
    let v18: u320;  // [bp-0x248]
    let v19: u64;  // [bp-0x240]
    let v20: u128;  // [bp-0x220]
    let v21: struct32;  // [bp-0x210], Other Possible Types: void*
    let v22: struct8;  // [bp-0x208]
    let v23: void*;  // [bp-0x200]
    let v24: u64;  // [bp-0x1f8]
    let v25: u64;  // [bp-0x1f0], Other Possible Types: Option<struct40>
    let v26: <anon>;  // [bp-0x1f0]
    let v27: u64;  // [bp-0x1e8]
    let v28: u64;  // [bp-0x1e0]
    let v29: u64;  // [bp-0x1e0]
    let v30: u128;  // [bp-0x1d8]
    let v31: u64;  // [bp-0x1d0]
    let v32: u128;  // [bp-0x1c8]
    let v33: u128;  // [bp-0x1b8]
    let v34: u128;  // [bp-0x1a8]
    let v35: u128;  // [bp-0x1a0]
    let v36: u64;  // [bp-0x190]
    let v37: u64;  // [bp-0x188]
    let v38: void*;  // [bp-0x180]
    let v39: u64;  // [bp-0x178]
    let v40: <anon>;  // [bp-0x170]
    let v41: u128;  // [bp-0x168]
    let v42: u128;  // [bp-0x158]
    let v43: u128;  // [bp-0x148]
    let v44: u128;  // [bp-0x138]
    let v45: struct56;  // [bp-0x128]
    let v46: u64;  // [bp-0x120]
    let v47: Result<struct112, struct24>;  // [bp-0x120]
    let v48: u64;  // [bp-0x118]
    let v50: struct16;  // [bp-0x100], Other Possible Types: u64
    let v51: u64;  // [bp-0xf8]
    let v52: u64;  // [bp-0xf0]
    let v53: u64;  // [bp-0xd8]
    let v54: struct129;  // [bp-0xd0]
    let v56: u64;  // rax
    let v57: core::option::Option<u32>;  // r12
    let v58: u32;  // rdi
    let v59: u64;  // rbx
    let v63: core::result::Result<usize, core::num::error::ParseIntError>;  // r13
    let v65: u64;  // rdx
    let v66: u64;  // rax
    let v67: u64;  // rcx
    let v68: u128;  // xmm0
    let v69: u128;  // xmm1
    let v70: u128;  // xmm2
    let v72: u64;  // rdx
    let v73: u64;  // rcx
    let v75: u128;  // xmm0
    let v76: u128;  // xmm1
    let v77: u128;  // xmm2
    let v83: u64;  // rax
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

    v0 = a0;
    v56 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v57 = *((a2 + 112) as &i64);
    if v56 <= v57 {
        uu_sort::merge::merge_without_limit(v58, v0, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v54 = itertools::Itertools::chunks(v0, a1, v57);
    v21 = 0;
    v22 = 8;
    v23 = 0;
    if v59 {
        v1 = (*((a2 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 56) as &i64));
        v24 = *((a2 + 64) as &i64);
        do {
            v28 = v28;
            v25 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v54);
            v26 = core::option::unwrap(v25);
            v18 = struct40 {
                field_0: v26.field_0.field_0
                field_16: *(&v26.field_0.field_16 as &i128)
                field_32: v31
            };
            uu_sort::merge::merge_without_limit(&v2, &v18, a2);
            v65 = *(&v2 as &i64);
            v66 = v6;
            if v65 == 3 {
                *((v89 + 8) as &u64) = v66;
                *((v89 + 16) as &u64) = v67;
                *(v89 as &i64) = 3;
                return;
            }
            v45 = v15;
            v68 = *(&v8 as &i128);
            v69 = *(&v10 as &i128);
            v70 = *((&v4 as &char + 56) as &i128);
            v44 = v14;
            v43 = v70;
            v42 = v69;
            v41 = v68;
            v38 = v65;
            v39 = v66;
            v40 = v67;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v38);
            if v19 == 0x8000000000000000 {
                *((v90 + 8) as &i128) = *((&v18 as &char + 16) as &i128);
                *(v90 as &i64) = 3;
                return;
            }
            v46 = v18;
            v48 = v19;
            memcpy(stack_base + -272, stack_base + -568, 16);
            v47 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(v1, v24, a3);
            v72 = *(&v2 as &i64);
            v73 = *((&v4 as &char + 16) as &i64);
            if v72 == 0x8000000000000000 {
                *((v91 + 8) as &u64) = v6;
                *((v91 + 16) as &u64) = v29;
                *(v91 as &i64) = 3;
                return;
            }
            v37 = v17;
            memcpy(&v35, &v15, 16);
            v75 = *(&v8 as &i128);
            v76 = *(&v10 as &i128);
            v77 = *((&v4 as &char + 56) as &i128);
            v34 = v14;
            v33 = v77;
            v32 = v76;
            v30 = v75;
            v25 = v72;
            v27 = v6;
            v29 = v73;
            memcpy(&v14, &v44, 16);
            v3 = struct80 {
                field_0: *(&v38 as &i128)
                field_16: v40.field_0.field_0
                field_32: *((&v41 as &char + 8) as &i128)
                field_48: *((&v42 as &char + 8) as &i128)
                field_64: *((&v43 as &char + 8) as &i128)
            };
            v83 = uu_sort::merge::FileMerger::write_all_to(&v3, a2, <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v25));
            if v83 {
                *((v92 + 8) as &u64) = v83;
                *((v92 + 16) as &u64) = v93;
                *(v92 as &i64) = 3;
                return;
            }
            v16 = *(&v36 as &i128);
            memcpy(&v14, &v34, 16);
            v13 = *((&v33 as &char + 8) as &i128);
            v86 = *(&v25 as &i128);
            v87 = *(&v29 as &i128);
            v88 = *((&v30 as &char + 8) as &i128);
            v11 = *(&v100 as &i128);
            v9 = v88;
            v7 = v87;
            v2 = v86;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
            v66 = v19;
            if v18 as i64 == 0x8000000000000000 {
                *((v89 + 8) as &u64) = v66;
                *((v89 + 16) as &u64) = v67;
                *(v89 as &i64) = 3;
                return;
            }
            v53 = v20;
            memcpy(&v47, &v18, 16);
            v50 = v18;
            v51 = v66;
            v52 = v67;
            v50 = alloc::vec::Vec<T,A>::push(v50);
            v28 = v29;
            v59 = v63;
        } while (v59 > v57);
    }
    v5 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v54);
    match v5 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v95 = alloc::boxed::Box<T>::new();
            v96 = *(&v25 as &i128);
            v7 = *(&v29 as &i128) as u128;
            v2 = v96;
            v98 = v95;
            v10 = &g_600370;
            v2 = uu_sort::merge::merge_with_file_limit(a2, a3, a3);
            return;
        },
    }
}
