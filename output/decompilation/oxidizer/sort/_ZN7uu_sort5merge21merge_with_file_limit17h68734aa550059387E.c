fn uu_sort::merge::merge_with_file_limit(a1: i64, a2: i64, a3: i64, a4: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x260]
    let v1: struct40;  // [bp-0x248]
    let v2: struct24;  // [bp-0x248]
    let v3: u64;  // [bp-0x240]
    let v4: struct32;  // [bp-0x238]
    let v5: Option<struct40>;  // [bp-0x218], Other Possible Types: struct48, struct96, u8
    let v6: struct56;  // [bp-0x218]
    let v7: struct56;  // [bp-0x218]
    let v8: u64;  // [bp-0x210]
    let v10: u64;  // [bp-0x200]
    let v11: u64;  // [bp-0x1f0]
    let v14: u64;  // [bp-0x1e0]
    let v15: u64;  // [bp-0x1d0]
    let v16: u64;  // [bp-0x1c0]
    let v17: struct24;  // [bp-0x1b8]
    let v18: struct16;  // [bp-0x1b8]
    let v19: Option<struct40>;  // [bp-0x1a0], Other Possible Types: struct24
    let v20: <anon>;  // [bp-0x1a0]
    let v21: u64;  // [bp-0x198]
    let v22: struct24;  // [bp-0x190], Other Possible Types: u64
    let v23: struct24;  // [bp-0x190]
    let v24: u128;  // [bp-0x188]
    let v25: u64;  // [bp-0x180]
    let v26: u128;  // [bp-0x178]
    let v27: u64;  // [bp-0x170]
    let v28: void*;  // [bp-0x168], Other Possible Types: struct32
    let v29: &str;  // [bp-0x160]
    let v30: u64;  // [bp-0x158]
    let v31: struct24;  // [bp-0x150]
    let v32: u128;  // [bp-0x140]
    let v33: struct24;  // [bp-0x130]
    let v34: u128;  // [bp-0x120]
    let v35: u64;  // [bp-0x110]
    let v36: struct24;  // [bp-0x108]
    let v37: struct32;  // [bp-0xf0]
    let v38: struct129;  // [bp-0xd0]
    let v40: u64;  // rax
    let v41: core::option::Option<&str>;  // r12
    let v42: u32;  // rdi
    let v43: struct8;  // rbx
    let v47: struct33;  // r13
    let v49: u64;  // rdx
    let v50: &str;  // rax
    let v51: u64;  // rcx
    let v52: struct24;  // xmm0
    let v53: u128;  // xmm1
    let v54: struct24;  // xmm2
    let v56: u64;  // rdx
    let v57: u64;  // rcx
    let v58: u128;  // xmm0
    let v64: u64;  // rax
    let v67: i64;  // rdi
    let v68: i64;  // rdi
    let v69: i64;  // rdi
    let v70: i64;  // rdi
    let v71: u64;  // rdx
    let v73: u64;  // rax
    let v75: u64;  // rdi

    v0 = a0;
    v40 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v41 = *((a2 + 112) as &i64);
    if v40 <= v41 {
        uu_sort::merge::merge_without_limit(v42, v0, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(&v0);
    v38 = itertools::Itertools::chunks(v0, a1, v41);
    v17 = struct24 {
        field_0: 0
        field_8: 8
        field_16: 0
    };
    if v43 {
        do {
            v22 = v22;
            v19 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v38);
            v20 = core::option::unwrap(v19);
            v1 = struct40 {
                field_0: v20.field_0.field_0
                field_16: *(&v20.field_0.field_16 as &i128)
                field_32: v25
            };
            uu_sort::merge::merge_without_limit(&v5, &v1, a2);
            v49 = v7.field_0;
            v50 = v8;
            if v49 == 3 {
                *((v67 + 8) as &&str) = v50;
                *((v67 + 16) as &u64) = v51;
                *(v67 as &i64) = 3;
                return;
            }
            v35 = v16;
            v52 = *(&v10 as &i128);
            v53 = *(&v11 as &i128);
            v54 = *(&v14 as &i128);
            v34 = *(&v15 as &i128);
            v33 = v54;
            v32 = v53;
            v31 = v52;
            v28 = v49;
            v29 = v50;
            v30 = v51;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a3, v28);
            if v3 == 0x8000000000000000 {
                *((v68 + 8) as &struct32) = v4;
                *(v68 as &i64) = 3;
                return;
            }
            v37 = struct32 {
                field_0: v1.field_0 as i64
                field_8: v3
                field_16: v4
            };
            v6 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v37);
            v56 = v6.field_0;
            v57 = v6.field_16;
            if v56 == 0x8000000000000000 {
                *((v69 + 8) as &u64) = v8;
                *((v69 + 16) as &struct24) = v23;
                *(v69 as &i64) = 3;
                return;
            }
            v58 = *(&v6.field_24 as &i128);
            v26 = *(&v11 as &i128);
            v24 = v58;
            v19 = v56;
            v21 = v8;
            v23 = v57;
            v5 = struct96 {
                field_0: *(&v28 as &i128)
                field_16: *(&v30 as &i128)
                field_32: *(&v31.field_8 as &i128)
                field_48: *((&v32 as &char + 8) as &i128)
                field_64: *(&v33.field_8 as &i128)
                field_80: *((&v34 as &char + 8) as &i128)
            };
            v64 = uu_sort::merge::FileMerger::write_all_to(&v5, a2, <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v19));
            if v64 {
                *((v70 + 8) as &u64) = v64;
                *((v70 + 16) as &u64) = v71;
                *(v70 as &i64) = 3;
                return;
            }
            v5 = struct56 {
                field_0: *(&v19.field_0 as &i128)
                field_16: *(&v23.field_0 as &i128)
                field_32: *((&v24 as &char + 8) as &i128)
                field_48: v27
            };
            v2 = <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(&v5);
            v50 = v3;
            if v2.field_0 == 0x8000000000000000 {
                *((v67 + 8) as &&str) = v50;
                *((v67 + 16) as &u64) = v51;
                *(v67 as &i64) = 3;
                return;
            }
            v36 = struct24 {
                field_0: v2.field_0
                field_8: v50
                field_16: v2.field_16
            };
            v18 = alloc::vec::Vec<T,A>::push(&v36);
            v22 = v23;
            v43 = v47;
        } while (v43 > v41);
    }
    v5 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v38);
    match v5 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v28 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v17 as u64);
            v73 = alloc::boxed::Box<T>::new();
            v5 = struct48 {
                field_0: v28.field_0
                field_16: v28.field_16
                field_32: v73
                field_40: &g_6002b8
            };
            uu_sort::merge::merge_with_file_limit(v75, &v5, a2, a3);
            return;
        },
    }
}
