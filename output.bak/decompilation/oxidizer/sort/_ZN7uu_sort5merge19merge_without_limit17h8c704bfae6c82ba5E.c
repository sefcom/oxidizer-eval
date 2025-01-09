fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: &struct32, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0x2f0], Other Possible Types: i128
    let v1: i128;  // [sp-0x2d0]
    let v2: i64;  // [sp-0x2c0], Other Possible Types: struct16
    let v3: i64;  // [sp-0x2b8]
    let v4: i64;  // [sp-0x2b0]
    let v5: i64;  // [sp-0x2a8], Other Possible Types: struct16
    let v6: i64;  // [sp-0x2a0]
    let v7: i64;  // [sp-0x298]
    let v8: i64;  // [sp-0x290]
    let v9: i64;  // [sp-0x288]
    let v10: i128;  // [sp-0x280]
    let v11: struct40;  // [sp-0x270], Other Possible Types: i320, struct24
    let v12: i1176;  // [sp-0x248], Other Possible Types: struct24, struct120, struct128, struct8, struct147, struct32
    let v13: i64;  // [sp-0x238]
    let v14: i64;  // [sp-0x228]
    let v15: i64;  // [sp-0x1a0], Other Possible Types: struct32, struct128, Result<struct16, struct8>, struct40, struct120
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190]
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i64;  // [bp-0xd8], Other Possible Types: struct16
    let v21: i64;  // [sp-0xd0]
    let v22: i128;  // [bp-0xc8]
    let v23: i128;  // [sp-0xb8]
    let v24: i128;  // [sp-0xa8]
    let v25: i128;  // [sp-0x98]
    let v26: i704;  // [sp-0x88], Other Possible Types: struct24, struct88
    let v28: i64;  // r15
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v32: i128;  // xmm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm1
    let v35: i64;  // rbx
    let v36: i64;  // r14
    let v38: i256;  // ymm2
    let v40: i256;  // ymm3
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm1
    let v44: i128;  // xmm2
    let v45: i128;  // xmm3
    let v46: i64;  // rdx
    let v47: i64;  // rcx
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v53: i128;  // xmm1
    let v56: i64;  // r14
    let v57: i64;  // rbp
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i256;  // ymm0
    let v61: i64;  // rsi
    let v63: i64;  // rax

    v28 = a1;
    v8 = a1;
    v15 = std::sync::mpmc::channel();
    v29 = v15;
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v32 = *((&v15 as &char + 16) as &i128);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v1 = v29;
    v10 = v32;
    v35 = *((v28 + 8) as &i64);
    v36 = *((v28 + 24) as &i64);
    v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v35, v36);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v12, 0);
    v2 = v16;
    v3 = v17;
    v4 = 0;
    v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v35, v36);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v12, 0);
    v5 = v16;
    v6 = v17;
    v7 = 0;
    v11 = core::iter::traits::iterator::Iterator::enumerate(v28);
    v9 = 9223372036854775809;
    loop {
        v17 = v17;
        v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        if *((&v26 as &char + 8) as &i64) == v9 {
            break;
        }
        v41 = *((&v26 as &char + 72) as &i128);
        v25 = v41;
        v42 = *((&v26 as &char + 8) as &i128);
        v43 = *((&v26 as &char + 24) as &i128);
        v44 = *((&v26 as &char + 40) as &i128);
        v45 = *((&v26 as &char + 56) as &i128);
        v24 = v45;
        v23 = v44;
        v22 = v43;
        v20 = v42;
        v15 = std::sync::mpmc::sync_channel(0x2, v46, v47);
        v48 = v15;
        v0 = v48;
        v5 = alloc::vec::Vec<T,A>::push(v17, v18);
        v49 = *((&v20 as &char + 8) as &i128);
        if v17 == 0x8000000000000000 {
            return Err(struct16 {
                field_0: v49
            });
        }
        v50 = *((&v22 as &char + 8) as &i128);
        v51 = *((&v23 as &char + 8) as &i128);
        v52 = *((&v24 as &char + 8) as &i128);
        v53 = v0;
        v15 = struct120 {
            field_0: v53
            field_16: v20
            field_24: v49
            field_40: v50
            field_56: v51
            field_72: v52
            field_88: *((&v25 as &char + 8) as &i64)
            field_96: 0
            field_104: 1
            field_112: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v15);
        v12 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = struct128 {
            field_0: v54
            field_8: v30 as u128
            field_24: v33 as u128
            field_40: v37 as u128
            field_56: v39 as u128
            field_72: v30 as u128
            field_88: v30 as u128
            field_104: v30 as u128
            field_120: *((&v12 as &char + 112) as &i64)
        };
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12;
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 16) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 32) as &i128);
        v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 48) as &i128);
        v12 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v47);
        core::result::Result<T,E>::unwrap(&v12, "src/uu/sort/src/merge.rs");
        v17 = v17;
    }
    v56 = v4;
    if v56 {
        v57 = 0;
        do {
            v57 = <usize as core::iter::range::Step>::forward_unchecked(v57);
            v12 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = struct128 {
                field_0: v57
                field_8: v30 as u128
                field_24: v33 as u128
                field_40: v37 as u128
                field_56: v39 as u128
                field_72: v30 as u128
                field_88: v30 as u128
                field_104: v30 as u128
                field_120: *((&v12 as &char + 112) as &i64)
            };
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v12;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 16) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 32) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v12 as &char + 48) as &i128);
            v12 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v47);
            core::result::Result<T,E>::unwrap(&v12, "src/uu/sort/src/merge.rs");
        } while (v57 < v56);
    }
    v12 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v58 = v10;
    v15 = v58;
    v59 = v2;
    v60 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
    v17 = v59;
    v19 = v4;
    memcpy(&v15, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = struct8 {
        field_0: 0
    };
    v26 = std::thread::Builder::spawn_unchecked(&v12, &v15);
    v11 = core::result::Result<T,E>::expect(&v26);
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v14 = 0;
    v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
    if *((&v26 as &char + 8) as &i64) == 3 {
        *(&v12.field_0 as &struct24) = struct24 {
            field_0: v20
            field_16: v22
        };
        v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v12, a2, 1);
        return Ok(struct80 {
            field_0: v1
            field_16: v15
            field_32: v66
            field_48: v11
            field_64: v65
            field_72: 0
        });
    }
    do {
        v0 = struct16 {
            field_0: v62
            field_8: *((&v26 as &char + 16) as &i64)
        };
        v63 = std::sync::mpmc::Receiver<T>::recv(&v0, v61, v46);
        if v63 {
            v15 = 1;
            v16 = 1;
            v17 = v63;
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
            v17 = alloc::boxed::Box<T>::new(&v15);
            *(&v15.field_0 as &struct40) = struct40 {
                field_0: v30 as u128
                field_16: v17
                field_24: 0
                field_32: vvar_403{reg 56}
            };
            v20 = alloc::vec::Vec<T,A>::push(&v15);
        }
    } while ((v26 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12), *((&v26 as &char + 8) as &i64) != 3));
}
