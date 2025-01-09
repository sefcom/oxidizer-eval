fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [sp-0x260], Other Possible Types: struct24, struct32
    let v1: i128;  // [sp-0x230]
    let v2: i64;  // [sp-0x220], Other Possible Types: struct16
    let v3: i64;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208], Other Possible Types: struct24, struct16
    let v6: i64;  // [sp-0x200]
    let v7: i64;  // [sp-0x1f8]
    let v8: i128;  // [sp-0x1f0], Other Possible Types: struct24
    let v9: struct16;  // [bp-0x1d8]
    let v10: i128;  // [sp-0x1c8], Other Possible Types: struct16
    let v11: i64;  // [sp-0x1c0]
    let v12: i64;  // [sp-0x1b8]
    let v13: i128;  // [sp-0x1b0]
    let v14: i256;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct128, struct40, struct56
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [sp-0x190]
    let v17: i64;  // [sp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i960;  // [sp-0xd8], Other Possible Types: struct24, struct120, struct128, struct147, struct32, struct8
    let v20: i64;  // [sp-0xc8]
    let v21: i64;  // [sp-0xb8]
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i128;  // xmm1
    let v27: i256;  // ymm1
    let v28: i256;  // ymm1
    let v30: i256;  // ymm2
    let v32: i256;  // ymm3
    let v36: i64;  // rdx
    let v37: i64;  // rcx
    let v38: i128;  // xmm0
    let v40: i64;  // r14
    let v41: i64;  // rbp
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i256;  // ymm0
    let v45: i64;  // rsi
    let v47: i64;  // rax

    v14 = std::sync::mpmc::channel();
    v23 = v14;
    v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
    v26 = *((&v14 as &char + 16) as &i128);
    v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    v1 = v23;
    v13 = v26;
    v19 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v19, 0);
    v2 = v15;
    v3 = v16;
    v4 = 0;
    v19 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v19, 0);
    v10 = v15;
    v11 = v16;
    v12 = 0;
    v5 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v17 = v17;
        v16 = v16;
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
        if *((&v0 as &char + 8) as &i64) == 2 {
            break;
        }
        v14 = std::sync::mpmc::sync_channel(0x2, v36, v37);
        v38 = v14;
        v8 = v38;
        v10 = alloc::vec::Vec<T,A>::push(v16, v17);
        return Err(struct16 {
            field_0: v34
            field_8: v35
        });
        v14 = struct56 {
            field_0: v24 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v34
            field_48: v35
        };
        v2 = alloc::vec::Vec<T,A>::push(&v14);
        v19 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = struct128 {
            field_0: v39
            field_8: v24 as u128
            field_24: v27 as u128
            field_40: v29 as u128
            field_56: v31 as u128
            field_72: v24 as u128
            field_88: v24 as u128
            field_104: v24 as u128
            field_120: *((&v19 as &char + 112) as &i64)
        };
        v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 16) as &i128);
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 32) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 48) as &i128);
        v19 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v37);
        core::result::Result<T,E>::unwrap(&v19, "src/uu/sort/src/merge.rs");
        v16 = v16;
        v17 = v17;
    }
    v40 = v4;
    if v40 {
        v41 = 0;
        do {
            v41 = <usize as core::iter::range::Step>::forward_unchecked(v41);
            v19 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = struct128 {
                field_0: v41
                field_8: v24 as u128
                field_24: v27 as u128
                field_40: v29 as u128
                field_56: v31 as u128
                field_72: v24 as u128
                field_88: v24 as u128
                field_104: v24 as u128
                field_120: *((&v19 as &char + 112) as &i64)
            };
            v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 16) as &i128);
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 32) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v19 as &char + 48) as &i128);
            v19 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v37);
            core::result::Result<T,E>::unwrap(&v19, "src/uu/sort/src/merge.rs");
        } while (v41 < v40);
    }
    v19 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(v37);
    v42 = v13;
    v14 = v42;
    v43 = v2;
    v44 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
    v16 = v43;
    v18 = v4;
    memcpy(&v14, &v19, 160);
    v20 = 0x8000000000000000;
    v19 = struct8 {
        field_0: 0
    };
    v0 = std::thread::Builder::spawn_unchecked(&v19, &v14);
    v8 = core::result::Result<T,E>::expect(&v0);
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v21 = 0;
    v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19);
    if *((&v0 as &char + 8) as &i64) == 3 {
        *(&v19.field_0 as &struct24) = struct24 {
            field_0: v5
            field_16: v7
        };
        v14 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v19, v37, 1);
        return Ok(struct80 {
            field_0: v1
            field_16: v14
            field_32: v50
            field_48: v8
            field_64: v49
            field_72: 0
        });
    }
    do {
        v9 = struct16 {
            field_0: v46
            field_8: *((&v0 as &char + 16) as &i64)
        };
        v47 = std::sync::mpmc::Receiver<T>::recv(&v9, v45, v36);
        if v47 {
            v14 = 1;
            v15 = 1;
            v16 = v47;
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_0 as &i128);
            v16 = alloc::boxed::Box<T>::new(&v14);
            v14 = struct40 {
                field_0: v24 as u128
                field_16: v16
                field_24: 0
                field_32: vvar_350{reg 56}
            };
            v5 = alloc::vec::Vec<T,A>::push(&v14);
        }
    } while ((v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v19), *((&v0 as &char + 8) as &i64) != 3));
}
