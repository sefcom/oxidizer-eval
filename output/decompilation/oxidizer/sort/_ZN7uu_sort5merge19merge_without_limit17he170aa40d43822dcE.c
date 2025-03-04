fn uu_sort::merge::merge_without_limit(a0: &struct80, a1: &struct48, a2: u32) -> u64 {
    let v0: iNone;  // [bp-0x2a0], Other Possible Types: struct16
    let v1: iNone;  // [sp-0x280]
    let v2: i64;  // [sp-0x268], Other Possible Types: int, struct16
    let v3: i64;  // [sp-0x260]
    let v4: struct24;  // [sp-0x258], Other Possible Types: int
    let v5: iNone;  // [sp-0x248]
    let v6: i64;  // [sp-0x230], Other Possible Types: int, struct16
    let v7: i64;  // [sp-0x220]
    let v8: struct40;  // [sp-0x218]
    let v9: i64;  // [sp-0x218], Other Possible Types: int, struct16
    let v10: i64;  // [sp-0x210]
    let v11: i64;  // [sp-0x208]
    let v12: i64;  // [sp-0x1f0]
    let v13: iNone;  // [sp-0x1e8]
    let v14: struct24;  // [sp-0x1d8], Other Possible Types: struct56
    let v15: struct24;  // [sp-0x1d8]
    let v16: struct32;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct128, int, struct72, unsigned long, struct40
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190], Other Possible Types: int
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: struct128;  // [sp-0xd8], Other Possible Types: struct24, struct120, int, struct147, struct32, struct8
    let v22: i64;  // [sp-0xc8]
    let v23: i64;  // [sp-0xb8]
    let v25: iNone;  // xmm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // ymm0
    let v28: iNone;  // xmm1
    let v29: iNone;  // ymm1
    let v30: iNone;  // ymm1
    let v31: i64;  // rbx
    let v32: i64;  // r14
    let v34: iNone;  // ymm2
    let v36: iNone;  // ymm3
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm1
    let v39: i64;  // rcx
    let v40: iNone;  // xmm0
    let v42: iNone;  // xmm0
    let v44: iNone;  // xmm1
    let v52: i64;  // r14
    let v53: i64;  // rbp
    let v54: i64;  // r13
    let v62: iNone;  // xmm0
    let v63: iNone;  // xmm0
    let v64: iNone;  // ymm0
    let v66: i64;  // rsi
    let v68: i64;  // rax

    v12 = a1;
    v16 = std::sync::mpmc::channel();
    v25 = *(&v16.field_0 as &i128);
    v27 = v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25 as u256;
    v28 = *(&v16.field_16 as &i128);
    v30 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
    v1 = v25;
    v13 = v28;
    v31 = *((a1 + 8) as &i64);
    v32 = *((a1 + 24) as &i64);
    v21 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v31, v32);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21.field_0, 0);
    v2 = v17;
    v2 = v18;
    v3 = 0;
    v21 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v31, v32);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21.field_0, 0);
    v6 = v17;
    v6 = v18;
    v7 = 0;
    v14 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v18 = v18;
        v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14);
        if v10 == 9223372036854775809 {
            break;
        }
        v37 = v8.field_8;
        v38 = v8.field_24;
        v5 = v38;
        v4 = v37;
        v16 = std::sync::mpmc::sync_channel(0x2, a2, v39);
        v40 = *(&v16.field_0 as &i128);
        v0 = v40;
        v6 = alloc::vec::Vec<T,A>::push(v18, v19);
        v42 = (&v4)[8] as i128;
        v44 = v0 as i128;
        v16 = struct72 {
            field_0: v44
            field_16: v41
            field_24: v42
            field_40: v43
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v16);
        v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v16 = struct128 {
            field_0: v8
            field_8: v26 as u128
            field_24: v29 as u128
            field_40: v33 as u128
            field_56: v35 as u128
            field_72: v26 as u128
            field_88: v26 as u128
            field_104: v45
            field_120: v21.field_112
        };
        v27 = ((((((v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v21.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_0;
        v30 = ((v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v21.field_16 as &i128);
        v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21.field_24 as &char + 8) as &i128);
        v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_48;
        v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v39);
        core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
        v18 = v18;
    }
    v52 = v3;
    if v52 {
        v53 = 0;
        do {
            v54 = <usize as core::iter::range::Step>::forward_unchecked(v53);
            v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v16 = struct128 {
                field_0: v53
                field_8: v26 as u128
                field_24: v29 as u128
                field_40: v33 as u128
                field_56: v35 as u128
                field_72: v26 as u128
                field_88: v26 as u128
                field_104: v26 as u128
                field_120: v21.field_112
            };
            v27 = (((v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v21.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_0;
            v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v21.field_16 as &i128);
            v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21.field_24 as &char + 8) as &i128);
            v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21.field_48;
            v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v39);
            core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
            v53 = v54;
        } while (v54 < v52);
    }
    v21 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v62 = v13;
    v16 = v62;
    v63 = v2 as i128;
    v64 = (v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256;
    v18 = v63;
    v20 = v3;
    memcpy(&v16, &v21, 160);
    v22 = 0x8000000000000000;
    v21 = struct8 {
        field_0: 0
    };
    v14 = std::thread::Builder::spawn_unchecked(&v21, &v16);
    v4 = core::result::Result<T,E>::expect(&v14);
    v9 = 0;
    v9 = 8;
    v11 = 0;
    v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v23 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21);
    if v15.field_8 == 3 {
        v21 = v9 as i192;
        v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v21, a2, 1);
        return struct80 {
            field_0: v1
            field_16: *(&v16.field_0 as &i128)
            field_32: v71
            field_48: v4
            field_64: v70
            field_72: 0
        };
    }
    do {
        v0 = struct16 {
            field_0: v65
            field_8: (&v15)[16] as i64
        };
        v68 = std::sync::mpmc::Receiver<T>::recv(&v0, v66, a2);
        if v68 {
            v16 = 1;
            v17 = 1;
            v18 = v68;
            v64 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
            v18 = alloc::boxed::Box<T>::new(&v16);
            *(&v16.field_0 as &struct40) = struct40 {
                field_0: v69
                field_16: v18
                field_24: 0
                field_32: v67
            };
            v9 = alloc::vec::Vec<T,A>::push(&v16);
        }
    } while ((v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21), v15.field_8 != 3));
}
