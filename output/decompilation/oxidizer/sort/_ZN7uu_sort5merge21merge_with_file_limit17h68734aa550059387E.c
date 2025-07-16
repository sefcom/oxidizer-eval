fn uu_sort::merge::merge_with_file_limit(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x260]
    let v1: u128;  // [bp-0x248]
    let v2: struct24;  // [bp-0x248]
    let v3: u64;  // [bp-0x240]
    let v4: u8;  // [bp-0x238]
    let v5: u64;  // [bp-0x228]
    let v6: u384;  // [bp-0x218], Other Possible Types: Option<struct40>
    let v7: struct56;  // [bp-0x218]
    let v9: u64;  // [bp-0x210]
    let v11: u64;  // [bp-0x200]
    let v12: u64;  // [bp-0x1f0]
    let v15: u64;  // [bp-0x1e0]
    let v16: u128;  // [bp-0x1d0]
    let v17: u64;  // [bp-0x1c0]
    let v18: void*;  // [bp-0x1b8]
    let v19: struct16;  // [bp-0x1b8]
    let v20: u64;  // [bp-0x1b0]
    let v21: void*;  // [bp-0x1a8]
    let v22: Option<struct40>;  // [bp-0x1a0], Other Possible Types: u64
    let v23: <anon>;  // [bp-0x1a0]
    let v24: u64;  // [bp-0x198]
    let v25: u64;  // [bp-0x190]
    let v26: u128;  // [bp-0x188]
    let v27: u64;  // [bp-0x180]
    let v28: u128;  // [bp-0x178]
    let v29: u64;  // [bp-0x170]
    let v30: void*;  // [bp-0x168], Other Possible Types: struct32
    let v31: &str;  // [bp-0x160]
    let v32: u64;  // [bp-0x158]
    let v33: u128;  // [bp-0x150]
    let v34: u128;  // [bp-0x140]
    let v35: struct24;  // [bp-0x130]
    let v36: u128;  // [bp-0x120]
    let v37: u64;  // [bp-0x110]
    let v38: u192;  // [bp-0x108]
    let v39: u256;  // [bp-0xf0]
    let v40: struct129;  // [bp-0xd0]
    let v42: u64;  // rax
    let v43: core::option::Option<&str>;  // r12
    let v44: u32;  // rdi
    let v45: struct8;  // rbx
    let v49: struct33;  // r13
    let v51: u64;  // rdx
    let v52: &str;  // rax
    let v53: u64;  // rcx
    let v54: u128;  // xmm0
    let v55: u128;  // xmm1
    let v56: struct24;  // xmm2
    let v58: u64;  // rdx
    let v59: u64;  // rcx
    let v60: u128;  // xmm0
    let v66: u64;  // rax
    let v69: i64;  // rdi
    let v70: i64;  // rdi
    let v71: i64;  // rdi
    let v72: i64;  // rdi
    let v73: u64;  // rdx
    let v75: u64;  // rax
    let v77: u64;  // rdi
    let v83: u64;  // [bp-0x118]

    v0 = a0;
    v42 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v43 = a2[112] as i64;
    if v42 <= v43 {
        uu_sort::merge::merge_without_limit(v44, v0, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v40 = itertools::Itertools::chunks(v0, a1, v43);
    v18 = 0;
    v20 = 8;
    v21 = 0;
    if v45 {
        do {
            v22 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v40);
            v23 = core::option::unwrap(v22);
            v5 = v27;
            memcpy(&v4, &v23, 16);
            v1 = struct16 {
                field_0: v23.field_0.field_0
            };
            uu_sort::merge::merge_without_limit(&v6, &v1, a2);
            v51 = *(&v6 as &i64);
            v52 = v9;
            if v51 == 3 {
                *((v69 + 8) as &&str) = v52;
                *((v69 + 16) as &u64) = v53;
                *(v69 as &i64) = 3;
                return;
            }
            v37 = v17;
            v54 = *(&v11 as &i128);
            v55 = *(&v12 as &i128);
            v56 = *(&v15 as &i128);
            v36 = v16;
            v35 = v56;
            v34 = v55;
            v33 = v54;
            v30 = v51;
            v31 = v52;
            v32 = v53;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v30);
            if v3 == 0x8000000000000000 {
                *((v70 + 8) as &u128) = v4;
                *(v70 as &i64) = 3;
                return;
            }
            v39 = struct32 {
                field_0: v1 as i64
                field_8: v3
                field_16: v4
            };
            v7 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v39);
            v58 = v7.field_0;
            v59 = v7.field_16;
            if v58 == 0x8000000000000000 {
                *((v71 + 8) as &u64) = v9;
                *((v71 + 16) as &u64) = v25;
                *(v71 as &i64) = 3;
                return;
            }
            v60 = *(&v7.field_24 as &i128);
            v28 = *(&v12 as &i128);
            v26 = v60;
            v22 = v58;
            v24 = v9;
            v25 = v59;
            memcpy(&v16, &v83, 16);
            v6 = struct80 {
                field_0: *(&v30 as &i128)
                field_16: *(&v32 as &i128)
                field_32: *((&v33 as &char + 8) as &i128)
                field_48: *((&v34 as &char + 8) as &i128)
                field_64: *((&v35.field_0 as &char + 8) as &i128)
            };
            v66 = uu_sort::merge::FileMerger::write_all_to(&v6, a2, <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v22));
            if v66 {
                *((v72 + 8) as &u64) = v66;
                *((v72 + 16) as &u64) = v73;
                *(v72 as &i64) = 3;
                return;
            }
            v6 = struct56 {
                field_0: *(&v22 as &i128)
                field_16: *(&v25 as &i128)
                field_32: *((&v26 as &char + 8) as &i128)
                field_48: v29
            };
            v2 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v6);
            v52 = v3;
            if v2.field_0 as i64 == 0x8000000000000000 {
                *((v69 + 8) as &&str) = v52;
                *((v69 + 16) as &u64) = v53;
                *(v69 as &i64) = 3;
                return;
            }
            v38 = struct24 {
                field_0: v2.field_0 as i64
                field_8: v52
                field_16: v2.field_16
            };
            v19 = alloc::vec::Vec<T,A>::push(&v38);
            v45 = v49;
        } while (v45 > v43);
    }
    v6 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v40);
    match v6 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v30 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v18);
            v75 = alloc::boxed::Box<T>::new();
            v6 = struct48 {
                field_0: *(&v30.field_0 as &i128)
                field_16: *(&v30.field_16 as &i128)
                field_32: v75
                field_40: &g_6002b8
            };
            uu_sort::merge::merge_with_file_limit(v77, &v6, a2, a3);
            return;
        },
    }
}
