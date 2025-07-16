fn uu_sort::merge::merge_with_file_limit(a1: &struct48, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x278], Other Possible Types: struct24
    let v1: u640;  // [bp-0x278]
    let v2: u128;  // [bp-0x278]
    let v3: struct24;  // [bp-0x278]
    let v4: Option<struct48>;  // [bp-0x278]
    let v5: u64;  // [bp-0x270]
    let v6: u128;  // [bp-0x268]
    let v7: u128;  // [bp-0x258], Other Possible Types: struct8
    let v8: u64;  // [bp-0x250]
    let v9: u64;  // [bp-0x248]
    let v11: u128;  // [bp-0x230]
    let v12: u64;  // [bp-0x220]
    let v13: core::option::Option<&str>;  // [bp-0x218], Other Possible Types: struct32
    let v14: u64;  // [bp-0x210]
    let v15: void*;  // [bp-0x208]
    let v16: struct16;  // [bp-0x200], Other Possible Types: Option<struct48>
    let v17: <anon>;  // [bp-0x200]
    let v18: Option<struct40>;  // [bp-0x1f8]
    let v19: Option<struct40>;  // [bp-0x1f0]
    let v20: u128;  // [bp-0x1e8]
    let v21: u128;  // [bp-0x1d8]
    let v22: u64;  // [bp-0x1d0]
    let v23: u128;  // [bp-0x1c8]
    let v24: u64;  // [bp-0x1c0]
    let v25: u128;  // [bp-0x1b8]
    let v26: u8;  // [bp-0x1a8]
    let v27: u64;  // [bp-0x198]
    let v28: void*;  // [bp-0x190]
    let v29: u64;  // [bp-0x188]
    let v30: u64;  // [bp-0x180]
    let v31: u128;  // [bp-0x178]
    let v32: u128;  // [bp-0x168]
    let v33: u128;  // [bp-0x158]
    let v34: u128;  // [bp-0x148]
    let v35: u64;  // [bp-0x138]
    let v36: struct16;  // [bp-0x130], Other Possible Types: u64
    let v37: u64;  // [bp-0x128]
    let v38: u64;  // [bp-0x120]
    let v39: u64;  // [bp-0x118]
    let v40: struct56;  // [bp-0x118]
    let v41: u64;  // [bp-0x110]
    let v42: u128;  // [bp-0x108]
    let v43: u64;  // [bp-0xf8], Other Possible Types: struct161
    let v45: u64;  // rax
    let v46: u64;  // r12
    let v47: u32;  // rdi
    let v48: u64;  // r14
    let v56: u64;  // rdx
    let v57: u64;  // rax
    let v58: u64;  // rcx
    let v59: u128;  // xmm0
    let v60: u128;  // xmm1
    let v61: u128;  // xmm2
    let v63: u64;  // rdx
    let v64: u64;  // rcx
    let v65: u128;  // xmm0
    let v71: core::str::pattern::CharSearcher;  // rax
    let v72: u128;  // xmm0
    let v73: u128;  // xmm1
    let v75: i64;  // rdi
    let v76: i64;  // rdi
    let v77: i64;  // rdi
    let v78: i64;  // rdi
    let v79: u64;  // rdx
    let v81: u64;  // rax
    let v82: u128;  // xmm0
    let v85: u64;  // [bp-0x1e0]
    let v89: u64;  // [bp-0x140]

    v45 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a0);
    v46 = *((a1 + 112) as &i64);
    if v45 <= v46 {
        v43 = struct48 {
            field_0: *(a0 as &i128)
            field_16: *((a0 + 16) as &i128)
            field_32: *((a0 + 32) as &i128)
        };
        uu_sort::merge::merge_without_limit(v47, &v43, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a0);
    v0 = struct48 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
    };
    v43 = itertools::Itertools::chunks(&v0, v46);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    if v48 {
        v27 = 9223372036854775810;
        do {
            v16 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v43);
            v17 = core::option::unwrap(v16);
            memcpy(&v26, &v17, 16);
            memcpy(&v25, &v17, 16);
            v23 = struct16 {
                field_0: v17.field_0.field_0
            };
            uu_sort::merge::merge_without_limit(&v0, &v23, a1);
            v56 = v0;
            v57 = v5;
            if v56 == 3 {
                *((v75 + 8) as &u64) = v57;
                *((v75 + 16) as &u64) = v58;
                *(v75 as &i64) = 3;
                return;
            }
            v35 = v12;
            v59 = *((&v0 as &char + 24) as &i128);
            v60 = *(&v8 as &i128);
            v61 = *((&v1 as &char + 56) as &i128);
            v34 = v11;
            v33 = v61;
            v32 = v60;
            v31 = v59;
            v28 = v56;
            v29 = v57;
            v30 = v58;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v28);
            if v24 == 0x8000000000000000 {
                *((v76 + 8) as &u128) = v25;
                *(v76 as &i64) = 3;
                return;
            }
            v39 = v23;
            v41 = v24;
            v42 = v25;
            v40 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(a1);
            v63 = v0;
            v64 = *((&v0 as &char + 16) as &i64);
            if v63 == 0x8000000000000000 {
                *((v77 + 8) as &u64) = v5;
                *((v77 + 16) as &Option<struct40>) = v19;
                *(v77 as &i64) = 3;
                return;
            }
            v65 = *((&v0 as &char + 24) as &i128);
            v21 = *(&v8 as &i128);
            v20 = v65;
            v16 = v63;
            v18 = v5;
            v19 = v64;
            memcpy(&v11, &v89, 16);
            v1 = struct80 {
                field_0: *(&v28 as &i128)
                field_16: *(&v30 as &i128)
                field_32: *((&v31 as &char + 8) as &i128)
                field_48: *((&v32 as &char + 8) as &i128)
                field_64: *((&v33 as &char + 8) as &i128)
            };
            v71 = uu_sort::merge::FileMerger::write_all_to(&v1, a1, <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v16));
            if v71 {
                *((v78 + 8) as &core::str::pattern::CharSearcher) = v71;
                *((v78 + 16) as &u64) = v79;
                *(v78 as &i64) = 3;
                return;
            }
            v9 = v22;
            v72 = *(&v16.field_0 as &i128);
            v73 = v19 as i128;
            v7 = *(&v85 as &i128);
            v6 = v73;
            v2 = v72;
            v3 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
            v57 = v24;
            if v23 as i64 == 0x8000000000000000 {
                *((v75 + 8) as &u64) = v57;
                *((v75 + 16) as &u64) = v58;
                *(v75 as &i64) = 3;
                return;
            }
            v36 = v23;
            v37 = v57;
            v38 = v58;
            v36 = alloc::vec::Vec<T,A>::push(v23 as i64);
        } while (v48 > v46);
    }
    v4 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v43);
    match v4 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v13 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v81 = alloc::boxed::Box<T>::new();
            v82 = *(&v28 as &i128);
            v6 = *(&v30 as &i128) as u128;
            v0 = v82;
            v7 = v81;
            v8 = &g_600348;
            v0 = uu_sort::merge::merge_with_file_limit(a1, a2, a3);
            return;
        },
    }
}
