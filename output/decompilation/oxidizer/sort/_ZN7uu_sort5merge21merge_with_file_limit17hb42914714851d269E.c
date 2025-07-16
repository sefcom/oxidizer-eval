fn uu_sort::merge::merge_with_file_limit(a1: &struct48, a2: i64, a3: i64) -> : struct24 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x360]
    let v1: u64;  // [bp-0x358]
    let v2: u128;  // [bp-0x348], Other Possible Types: struct24, Option<struct96>, Result<struct48, struct24>
    let v3: <anon>;  // [bp-0x348]
    let v4: u640;  // [bp-0x348]
    let v5: Option<struct96>;  // [bp-0x348]
    let v6: u64;  // [bp-0x340]
    let v7: u128;  // [bp-0x338]
    let v8: u64;  // [bp-0x328]
    let v9: u128;  // [bp-0x318]
    let v10: u128;  // [bp-0x308]
    let v11: u64;  // [bp-0x2f0]
    let v12: u128;  // [bp-0x2e8]
    let v13: u128;  // [bp-0x2e0]
    let v14: struct32;  // [bp-0x2d0], Other Possible Types: void*
    let v15: u64;  // [bp-0x2c8]
    let v16: void*;  // [bp-0x2c0]
    let v17: u64;  // [bp-0x2b8]
    let v18: u64;  // [bp-0x2b0]
    let v19: struct25;  // [bp-0x2a8]
    let v20: u640;  // [bp-0x2a8]
    let v21: u64;  // [bp-0x2a0]
    let v23: core::str::pattern::CharSearcher;  // [bp-0x298]
    let v24: u128;  // [bp-0x290]
    let v25: u128;  // [bp-0x280]
    let v26: u128;  // [bp-0x270]
    let v27: u128;  // [bp-0x260]
    let v28: u128;  // [bp-0x258]
    let v29: u64;  // [bp-0x248]
    let v30: u64;  // [bp-0x240]
    let v31: u64;  // [bp-0x238]
    let v32: u64;  // [bp-0x230]
    let v33: u64;  // [bp-0x228]
    let v34: u128;  // [bp-0x220]
    let v35: u128;  // [bp-0x210]
    let v36: u128;  // [bp-0x200]
    let v37: u128;  // [bp-0x1f0]
    let v38: u64;  // [bp-0x1e0]
    let v39: u64;  // [bp-0x1d8]
    let v40: u64;  // [bp-0x1d0]
    let v41: u64;  // [bp-0x1c8]
    let v42: u128;  // [bp-0x1c0]
    let v43: u128;  // [bp-0x1b0]
    let v44: u128;  // [bp-0x1a0]
    let v45: u128;  // [bp-0x190]
    let v46: u64;  // [bp-0x180]
    let v47: u64;  // [bp-0x178]
    let v48: Result<struct112, struct24>;  // [bp-0x178]
    let v49: u64;  // [bp-0x170]
    let v51: u64;  // [bp-0x158], Other Possible Types: struct16
    let v52: u64;  // [bp-0x150]
    let v53: u64;  // [bp-0x148]
    let v54: u128;  // [bp-0x140]
    let v55: u64;  // [bp-0x130]
    let v56: struct161;  // [bp-0x128], Other Possible Types: u64
    let v58: core::option::Option<u32>;  // rax
    let v59: u64;  // r13
    let v60: u32;  // rdi
    let v61: core::result::Result<std::fs::File, std::io::error::Error>;  // r12
    let v74: u64;  // rax
    let v75: u64;  // rcx
    let v77: struct25;  // rdx
    let v78: core::str::pattern::CharSearcher;  // rcx
    let v80: u128;  // xmm0
    let v81: u128;  // xmm1
    let v82: u128;  // xmm2
    let v88: struct56;  // rax
    let v91: u128;  // xmm0
    let v92: u128;  // xmm1
    let v93: u128;  // xmm2
    let v96: i64;  // rdi
    let v97: i64;  // rdi
    let v98: i64;  // rdi
    let v99: i64;  // rdi
    let v100: u64;  // rdx
    let v102: u64;  // rax
    let v103: u128;  // xmm0
    let v106: u64;  // [bp-0x320]
    let v108: u64;  // [bp-0x300]

    v58 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a0);
    v59 = *((a1 + 112) as &i64);
    if v58 <= v59 {
        v56 = struct48 {
            field_0: *(a0 as &i128)
            field_16: *((a0 + 16) as &i128)
            field_32: *((a0 + 32) as &i128)
        };
        uu_sort::merge::merge_without_limit(v60, &v56, a1);
        return;
    }
    <core::iter::adapters::map::Map<I,F> as core::iter::traits::exact_size::ExactSizeIterator>::len(a0);
    v2 = struct48 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
    };
    v56 = itertools::Itertools::chunks(&v2, v59);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    if let Err(_) = v61 {
        v1 = v59;
        v0 = (*((a1 + 48) as &i64) == 0x8000000000000000 ? 0 : *((a1 + 56) as &i64));
        v17 = *((a1 + 64) as &i64);
        v18 = 9223372036854775810;
        do {
            v2 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v56);
            v3 = core::option::unwrap(v2);
            memcpy(&v28, &v3 as u64, 16);
            v20 = struct80 {
                field_0: v3.field_0.field_0
                field_16: v3.field_0.field_16
                field_32: v3.field_0.field_32
                field_48: v3.field_0.field_48
                field_64: v3.field_0.field_64
            };
            uu_sort::merge::merge_without_limit(&v31, &v20, a1);
            v74 = v32;
            v75 = v33;
            if v31 == 3 {
                *((v96 + 8) as &u64) = v74;
                *((v96 + 16) as &u64) = v75;
                *(v96 as &i64) = 3;
                return;
            }
            v46 = v38;
            v45 = v37;
            v44 = v36;
            v43 = v35;
            v42 = v34;
            v39 = v31;
            v40 = v74;
            v41 = v75;
            uu_sort::tmp_dir::TmpDirWrapper::next_file(a2, v31);
            if v32 == 0x8000000000000000 {
                *((v97 + 8) as &i128) = *(&v33 as &i128);
                *(v97 as &i64) = 3;
                return;
            }
            v47 = v31;
            v49 = v32;
            memcpy(stack_base + -360, stack_base + -552, 16);
            v48 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::create(v0, v17, a3);
            v77 = v3.field_0.field_0 as i64;
            v78 = v3.field_0.field_16 as i64;
            if v77 == 0x8000000000000000 {
                *((v98 + 8) as &u64) = v6;
                *((v98 + 16) as &core::str::pattern::CharSearcher) = v23;
                *(v98 as &i64) = 3;
                return;
            }
            v30 = v13 as i64;
            memcpy(&v28 as u8, &v11, 16);
            v80 = *((&v3.field_0.field_16 as &char + 8) as &i128);
            v81 = *((&v3.field_0.field_32 as &char + 8) as &i128);
            v82 = *((&v3.field_0.field_48 as &char + 8) as &i128);
            v27 = *(&v108 as &i128) as u128;
            v26 = v82;
            v25 = v81;
            v24 = v80;
            v19 = v77;
            v21 = v6;
            v23 = v78;
            memcpy(&v3 as u64, &v45 as u64, 16);
            v4 = struct80 {
                field_0: *(&v39 as &i128)
                field_16: *(&v41 as &i128)
                field_32: *((&v42 as &char + 8) as &i128)
                field_48: *((&v43 as &char + 8) as &i128)
                field_64: *((&v44 as &char + 8) as &i128)
            };
            v88 = uu_sort::merge::FileMerger::write_all_to(&v4, a1, <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::as_write(&v19));
            if v88 {
                *((v99 + 8) as &struct56) = v88;
                *((v99 + 16) as &u64) = v100;
                *(v99 as &i64) = 3;
                return;
            }
            v12 = *(&v29 as &i128) as u128;
            memcpy(&v3 as u64, &v28, 16);
            v10 = *((&v26 as &char + 8) as &i128) as u128;
            v91 = v19.field_0;
            v92 = *(&v23.haystack.data_ptr as &i128);
            v93 = *((&v24 as &char + 8) as &i128);
            v9 = *((&v25 as &char + 8) as &i128) as u128;
            v8 = v93;
            v7 = v92;
            v2 = v91;
            v2 = <uu_sort::merge::WriteableCompressedTmpFile as uu_sort::merge::WriteableTmpFile>::finished_writing(a1);
            v74 = v32;
            v75 = v33;
            if v31 == 0x8000000000000000 {
                *((v96 + 8) as &u64) = v74;
                *((v96 + 16) as &u64) = v75;
                *(v96 as &i64) = 3;
                return;
            }
            v55 = v35 as i64;
            v54 = v34;
            v51 = v31;
            v52 = v74;
            v53 = v75;
            v51 = alloc::vec::Vec<T,A>::push(v31);
        } while (v61 > v1);
    }
    v5 = <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(&v56);
    match v5 {
        Some(_) => {
            core::panicking::panic("assertion failed: batches.next().is_none()"); /* do not return */
        },
        None => {
            v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a1);
            v102 = alloc::boxed::Box<T>::new();
            v103 = v19.field_0;
            v7 = *(&v23.haystack.data_ptr as &i128) as u128;
            v2 = v103;
            v8 = v102;
            v106 = &g_600320;
            v2 = uu_sort::merge::merge_with_file_limit(a1, a2, a3);
            return;
        },
    }
}
