fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: &struct32, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0x290], Other Possible Types: i128
    let v1: i128;  // [sp-0x270]
    let v2: i64;  // [sp-0x260], Other Possible Types: struct16
    let v3: i64;  // [sp-0x258]
    let v4: i64;  // [sp-0x250]
    let v5: i128;  // [sp-0x248], Other Possible Types: struct24
    let v6: i128;  // [sp-0x238]
    let v7: i320;  // [sp-0x220], Other Possible Types: struct40, struct16
    let v8: i64;  // [sp-0x218]
    let v9: i64;  // [sp-0x210]
    let v10: i192;  // [sp-0x1f8], Other Possible Types: struct24, struct40
    let v11: i128;  // [sp-0x1d0], Other Possible Types: struct16
    let v12: i64;  // [sp-0x1c8]
    let v13: i64;  // [sp-0x1c0]
    let v14: i64;  // [sp-0x1b8]
    let v15: i128;  // [sp-0x1b0]
    let v16: i64;  // [sp-0x1a0], Other Possible Types: struct32, struct128, Result<struct16, struct8>, struct40, struct72
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190]
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i960;  // [sp-0xd8], Other Possible Types: struct24, struct128, struct120, struct147, struct8, struct32
    let v22: i64;  // [sp-0xc8]
    let v23: i64;  // [sp-0xb8]
    let v25: i64;  // r15
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i128;  // xmm1
    let v30: i256;  // ymm1
    let v31: i256;  // ymm1
    let v32: i64;  // rbx
    let v33: i64;  // r14
    let v35: i256;  // ymm2
    let v37: i256;  // ymm3
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v48: i64;  // r14
    let v49: i64;  // rbp
    let v50: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: i256;  // ymm0
    let v53: i64;  // rsi
    let v54: i64;  // rax

    v25 = a1;
    v14 = a1;
    v16 = std::sync::mpmc::channel();
    v26 = v16;
    v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    v29 = *((&v16 as &char + 16) as &i128);
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v1 = v26;
    v15 = v29;
    v32 = *((v25 + 8) as &i64);
    v33 = *((v25 + 24) as &i64);
    v21 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v32, v33);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21, 0);
    v2 = v17;
    v3 = v18;
    v4 = 0;
    v21 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v32, v33);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21, 0);
    v11 = v17;
    v12 = v18;
    v13 = 0;
    v7 = core::iter::traits::iterator::Iterator::enumerate(v25);
    loop {
        v18 = v18;
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v7);
        if *((&v10 as &char + 8) as &i64) == 9223372036854775809 {
            break;
        }
        v38 = *((&v10 as &char + 8) as &i128);
        v39 = *((&v10 as &char + 24) as &i128);
        v6 = v39;
        v5 = v38;
        v16 = std::sync::mpmc::sync_channel(0x2, v40, v41);
        v42 = v16;
        v0 = v42;
        v11 = alloc::vec::Vec<T,A>::push(v18, v19);
        v43 = *((&v5 as &char + 8) as &i128);
        if v18 == 0x8000000000000000 {
            return Err(struct16 {
                field_0: v43
            });
        }
        v44 = v0;
        v16 = struct72 {
            field_0: v44
            field_16: v45
            field_24: v43
            field_40: v41
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v16);
        v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v16 = struct128 {
            field_0: v46
            field_8: v27 as u128
            field_24: v30 as u128
            field_40: v34 as u128
            field_56: v36 as u128
            field_72: v27 as u128
            field_88: v27 as u128
            field_104: v27 as u128
            field_120: *((&v21 as &char + 112) as &i64)
        };
        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 16) as &i128);
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 32) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 48) as &i128);
        v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v41);
        core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
        v18 = v18;
    }
    v48 = v4;
    if v48 {
        v49 = 0;
        do {
            v49 = <usize as core::iter::range::Step>::forward_unchecked(v49);
            v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v16 = struct128 {
                field_0: v49
                field_8: v27 as u128
                field_24: v30 as u128
                field_40: v34 as u128
                field_56: v36 as u128
                field_72: v27 as u128
                field_88: v27 as u128
                field_104: v27 as u128
                field_120: *((&v21 as &char + 112) as &i64)
            };
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 16) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 32) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 48) as &i128);
            v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v41);
            core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
        } while (v49 < v48);
    }
    v21 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v50 = v15;
    v16 = v50;
    v51 = v2;
    v52 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
    v18 = v51;
    v20 = v4;
    memcpy(&v16, &v21, 160);
    v22 = 0x8000000000000000;
    v21 = struct8 {
        field_0: 0
    };
    v10 = std::thread::Builder::spawn_unchecked(&v21, &v16);
    v5 = core::result::Result<T,E>::expect(&v10);
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v23 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21);
    if *((&v10 as &char + 8) as &i64) == 3 {
        *(&v21.field_0 as &struct24) = struct24 {
            field_0: v7
            field_16: v9
        };
        v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v21, a2, 1);
        return Ok(struct80 {
            field_0: v1
            field_16: v16
            field_32: v57
            field_48: v5
            field_64: v56
            field_72: 0
        });
    }
    do {
        v0 = struct16 {
            field_0: v45
            field_8: *((&v10 as &char + 16) as &i64)
        };
        v54 = std::sync::mpmc::Receiver<T>::recv(&v0, v53, v40);
        if v54 {
            v16 = 1;
            v17 = 1;
            v18 = v54;
            v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
            v18 = alloc::boxed::Box<T>::new(&v16);
            *(&v16.field_0 as &struct40) = struct40 {
                field_0: v27 as u128
                field_16: v18
                field_24: 0
                field_32: vvar_394{reg 56}
            };
            v7 = alloc::vec::Vec<T,A>::push(&v16);
        }
    } while ((v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21), *((&v10 as &char + 8) as &i64) != 3));
}
