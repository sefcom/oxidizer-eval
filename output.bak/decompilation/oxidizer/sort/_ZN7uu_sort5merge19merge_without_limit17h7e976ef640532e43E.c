fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: &struct40, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x280], Other Possible Types: struct16, i64
    let v1: i64;  // [sp-0x278]
    let v2: i64;  // [sp-0x270]
    let v3: i128;  // [sp-0x250]
    let v4: i128;  // [sp-0x240], Other Possible Types: struct16
    let v5: i64;  // [sp-0x238]
    let v6: i64;  // [sp-0x230]
    let v7: i128;  // [sp-0x228], Other Possible Types: struct24
    let v8: struct16;  // [bp-0x210]
    let v9: i64;  // [sp-0x200], Other Possible Types: struct16
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i192;  // [sp-0x1e8], Other Possible Types: struct24, struct48
    let v13: i64;  // [sp-0x1b8]
    let v14: i128;  // [sp-0x1b0]
    let v15: i256;  // [sp-0x1a0], Other Possible Types: struct32, struct128, Result<struct16, struct8>, struct56, struct40
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190]
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [sp-0xd8], Other Possible Types: struct120, struct128, struct16, struct147, struct24, struct8, struct32
    let v21: i64;  // [sp-0xc8]
    let v22: i64;  // [sp-0xb8]
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i128;  // xmm1
    let v28: i256;  // ymm1
    let v29: i256;  // ymm1
    let v31: i256;  // ymm2
    let v33: i256;  // ymm3
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

    v13 = a1;
    v15 = std::sync::mpmc::channel();
    v24 = v15;
    v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    v27 = *((&v15 as &char + 16) as &i128);
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v3 = v24;
    v14 = v27;
    v20 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20, 0);
    v4 = v16;
    v5 = v17;
    v6 = 0;
    v20 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20, 0);
    v9 = v16;
    v10 = v17;
    v11 = 0;
    v12 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v18 = v18;
        v17 = v17;
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
        if v1 == 2 {
            break;
        }
        v15 = std::sync::mpmc::sync_channel(0x2, v36, v37);
        v38 = v15;
        v7 = v38;
        v9 = alloc::vec::Vec<T,A>::push(v17, v18);
        return Err(struct16 {
            field_0: v2
            field_8: v35
        });
        v15 = struct56 {
            field_0: v25 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v39
            field_48: v35
        };
        v4 = alloc::vec::Vec<T,A>::push(&v15);
        v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = struct128 {
            field_0: v0
            field_8: v25 as u128
            field_24: v28 as u128
            field_40: v30 as u128
            field_56: v32 as u128
            field_72: v25 as u128
            field_88: v25 as u128
            field_104: v25 as u128
            field_120: *((&v20 as &char + 112) as &i64)
        };
        v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 16) as &i128);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 32) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 48) as &i128);
        v20 = std::sync::mpmc::Sender<T>::send(&v3, &v15, v37);
        core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
        v17 = v17;
        v18 = v18;
    }
    v40 = v6;
    if v40 {
        v41 = 0;
        do {
            v41 = <usize as core::iter::range::Step>::forward_unchecked(v41);
            v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = struct128 {
                field_0: v41
                field_8: v25 as u128
                field_24: v28 as u128
                field_40: v30 as u128
                field_56: v32 as u128
                field_72: v25 as u128
                field_88: v25 as u128
                field_104: v25 as u128
                field_120: *((&v20 as &char + 112) as &i64)
            };
            v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 16) as &i128);
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 32) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 48) as &i128);
            v20 = std::sync::mpmc::Sender<T>::send(&v3, &v15, v37);
            core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
        } while (v41 < v40);
    }
    v20 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v42 = v14;
    v15 = v42;
    v43 = v4;
    v44 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
    v17 = v43;
    v19 = v6;
    memcpy(&v15, &v20, 160);
    v21 = 0x8000000000000000;
    v20 = struct8 {
        field_0: 0
    };
    v12 = std::thread::Builder::spawn_unchecked(&v20, &v15);
    v7 = core::result::Result<T,E>::expect(&v12);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    v22 = 0;
    v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
    if *((&v12 as &char + 8) as &i64) == 3 {
        *(&v20.field_0 as &struct24) = struct24 {
            field_0: v0
            field_16: v2
        };
        v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v20, a2, 1);
        return Ok(struct80 {
            field_0: v3
            field_16: v15
            field_32: v50
            field_48: v7
            field_64: v49
            field_72: 0
        });
    }
    do {
        *(&v8.field_0 as &struct16) = struct16 {
            field_0: v46
            field_8: *((&v12 as &char + 16) as &i64)
        };
        v47 = std::sync::mpmc::Receiver<T>::recv(&v8, v45, v36);
        if v47 {
            v15 = 1;
            v16 = 1;
            v17 = v47;
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8.field_0;
            v17 = alloc::boxed::Box<T>::new(&v15);
            v15 = struct40 {
                field_0: v25 as u128
                field_16: v17
                field_24: 0
                field_32: vvar_375{reg 56}
            };
            v0 = alloc::vec::Vec<T,A>::push(&v15);
        }
    } while ((v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20), *((&v12 as &char + 8) as &i64) != 3));
}
