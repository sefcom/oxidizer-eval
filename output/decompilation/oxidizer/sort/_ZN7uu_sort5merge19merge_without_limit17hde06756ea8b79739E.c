fn uu_sort::merge::merge_without_limit(a0: &struct80, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [sp-0x260], Other Possible Types: struct32
    let v1: struct24;  // [sp-0x260]
    let v2: iNone;  // [sp-0x230]
    let v3: i64;  // [sp-0x220], Other Possible Types: struct16, int
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208], Other Possible Types: struct16, struct24
    let v6: i64;  // [sp-0x200]
    let v7: i64;  // [sp-0x1f8]
    let v8: struct24;  // [sp-0x1f0], Other Possible Types: int
    let v9: struct16;  // [bp-0x1d8]
    let v10: i64;  // [sp-0x1c8], Other Possible Types: int, struct16
    let v11: i64;  // [sp-0x1b8]
    let v12: iNone;  // [sp-0x1b0]
    let v13: struct32;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct128, int, struct40, unsigned long, struct56
    let v14: i64;  // [sp-0x198]
    let v15: i64;  // [sp-0x190], Other Possible Types: int
    let v16: i64;  // [sp-0x188]
    let v17: i64;  // [sp-0x180]
    let v18: struct24;  // [sp-0xd8], Other Possible Types: struct120, struct128, struct147, struct8, struct32
    let v19: i64;  // [sp-0xc8]
    let v20: i64;  // [sp-0xb8]
    let v22: iNone;  // xmm0
    let v23: iNone;  // ymm0
    let v24: iNone;  // ymm0
    let v25: iNone;  // xmm1
    let v26: iNone;  // ymm1
    let v27: iNone;  // ymm1
    let v29: iNone;  // ymm2
    let v31: iNone;  // ymm3
    let v36: i64;  // rcx
    let v37: iNone;  // xmm0
    let v46: i64;  // r14
    let v47: i64;  // rbp
    let v48: i64;  // r13
    let v56: iNone;  // xmm0
    let v57: iNone;  // xmm0
    let v58: iNone;  // ymm0
    let v60: i64;  // rsi
    let v62: i64;  // rax

    v13 = std::sync::mpmc::channel();
    v22 = *(&v13.field_0 as &i128);
    v24 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22 as u256;
    v25 = *(&v13.field_16 as &i128);
    v27 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
    v2 = v22;
    v12 = v25;
    v18 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v13 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v18.field_0, 0);
    v3 = v14;
    v3 = v15;
    v4 = 0;
    v18 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v13 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v18.field_0, 0);
    v10 = v14;
    v10 = v15;
    v11 = 0;
    v5 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
        if v0.field_8 == 2 {
            break;
        }
        v13 = std::sync::mpmc::sync_channel(0x2, a2, v36);
        v37 = *(&v13.field_0 as &i128);
        v8 = v37;
        v10 = alloc::vec::Vec<T,A>::push(v15, v16);
        v13 = struct56 {
            field_0: v38
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v34
            field_48: v35
        };
        v3 = alloc::vec::Vec<T,A>::push(&v13);
        v18 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v13 = struct128 {
            field_0: v33
            field_8: v23 as u128
            field_24: v26 as u128
            field_40: v44
            field_56: v30 as u128
            field_72: v23 as u128
            field_88: v23 as u128
            field_104: v23 as u128
            field_120: v18.field_112
        };
        v24 = (((((v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v18.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_0;
        v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_16 as &i128);
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v18.field_24 as &char + 8) as &i128);
        v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_48;
        v18 = std::sync::mpmc::Sender<T>::send(&v2, &v13, v36);
        core::result::Result<T,E>::unwrap(&v18, "src/uu/sort/src/merge.rs");
    }
    v46 = v4;
    if v46 {
        v47 = 0;
        do {
            v48 = <usize as core::iter::range::Step>::forward_unchecked(v47);
            v18 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v13 = struct128 {
                field_0: v47
                field_8: v23 as u128
                field_24: v26 as u128
                field_40: v28 as u128
                field_56: v55
                field_72: v23 as u128
                field_88: v23 as u128
                field_104: v23 as u128
                field_120: v18.field_112
            };
            v24 = (((v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v18.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_0;
            v27 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_16 as &i128);
            v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v18.field_24 as &char + 8) as &i128);
            v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18.field_48;
            v18 = std::sync::mpmc::Sender<T>::send(&v2, &v13, v36);
            core::result::Result<T,E>::unwrap(&v18, "src/uu/sort/src/merge.rs");
            v47 = v48;
        } while (v48 < v46);
    }
    v18 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(v36);
    v56 = v12;
    v13 = v56;
    v57 = v3 as i128;
    v58 = (v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
    v15 = v57;
    v17 = v4;
    memcpy(&v13, &v18, 160);
    v19 = 0x8000000000000000;
    v18 = struct8 {
        field_0: 0
    };
    v0 = std::thread::Builder::spawn_unchecked(&v18, &v13);
    v8 = core::result::Result<T,E>::expect(&v0);
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v20 = 0;
    v1 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v18);
    if v1.field_8 == 3 {
        v18 = v5;
        v13 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v18, v36, 1);
        return struct80 {
            field_0: v2
            field_16: *(&v13.field_0 as &i128)
            field_32: v65
            field_48: v8
            field_64: v64
            field_72: 0
        };
    }
    do {
        v9 = struct16 {
            field_0: v59
            field_8: v1.field_16
        };
        v62 = std::sync::mpmc::Receiver<T>::recv(&v9, v60, a2);
        if v62 {
            v13 = 1;
            v14 = 1;
            v15 = v62;
            v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_0 as &i128);
            v15 = alloc::boxed::Box<T>::new(&v13);
            v13 = struct40 {
                field_0: v63
                field_16: v15
                field_24: 0
                field_32: v61
            };
            v5 = alloc::vec::Vec<T,A>::push(&v13);
        }
    } while ((v1 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v18), v1.field_8 != 3));
}
