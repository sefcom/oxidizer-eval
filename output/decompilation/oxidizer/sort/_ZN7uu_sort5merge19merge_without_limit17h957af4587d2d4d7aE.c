fn uu_sort::merge::merge_without_limit(a0: &struct80, a1: &struct40, a2: u32) -> u64 {
    let v0: struct32;  // [sp-0x280]
    let v1: i64;  // [sp-0x280], Other Possible Types: struct16, int
    let v2: i64;  // [sp-0x278]
    let v3: i64;  // [sp-0x270]
    let v4: iNone;  // [sp-0x250]
    let v5: i64;  // [sp-0x238], Other Possible Types: int, struct16
    let v6: i64;  // [sp-0x230]
    let v7: iNone;  // [sp-0x228], Other Possible Types: struct24
    let v8: struct16;  // [bp-0x210]
    let v9: i64;  // [sp-0x200], Other Possible Types: int, struct16
    let v10: i64;  // [sp-0x1f0]
    let v11: struct24;  // [sp-0x1e8], Other Possible Types: struct48
    let v12: struct24;  // [sp-0x1e8]
    let v13: i64;  // [sp-0x1b8]
    let v14: iNone;  // [sp-0x1b0]
    let v15: struct32;  // [sp-0x1a0], Other Possible Types: int, struct128, Result<struct16, struct8>, unsigned long, struct40, struct56
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190], Other Possible Types: int
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: struct120;  // [sp-0xd8], Other Possible Types: struct16, struct128, struct8, struct32, int, struct147
    let v21: i64;  // [sp-0xc8]
    let v22: i64;  // [sp-0xb8]
    let v24: iNone;  // xmm0
    let v25: iNone;  // ymm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // xmm1
    let v28: iNone;  // ymm1
    let v29: iNone;  // ymm1
    let v31: iNone;  // ymm2
    let v33: iNone;  // ymm3
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

    v13 = a1;
    v15 = std::sync::mpmc::channel();
    v24 = *(&v15.field_0 as &i128);
    v26 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256;
    v27 = *(&v15.field_16 as &i128);
    v29 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
    v4 = v24;
    v14 = v27;
    v20 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20.field_0 as i64, 0);
    v5 = v16;
    v5 = v17;
    v6 = 0;
    v20 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20.field_0 as i64, 0);
    v9 = v16;
    v9 = v17;
    v10 = 0;
    v11 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        if v2 == 2 {
            break;
        }
        v15 = std::sync::mpmc::sync_channel(0x2, a2, v36);
        v37 = *(&v15.field_0 as &i128);
        v7 = v37;
        v9 = alloc::vec::Vec<T,A>::push(v17, v18);
        v15 = struct56 {
            field_0: v38
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v3
            field_48: v35
        };
        v5 = alloc::vec::Vec<T,A>::push(&v15);
        v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = struct128 {
            field_0: v0
            field_8: v42
            field_24: v43
            field_40: v44
            field_56: v45
            field_72: v25 as u128
            field_88: v40
            field_104: v25 as u128
            field_120: v20.field_112
        };
        v26 = (((((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_0;
        v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_16 as &i128);
        v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_24 as &char + 8) as &i128);
        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_48;
        v20 = std::sync::mpmc::Sender<T>::send(&v4, &v15, v36);
        core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
    }
    v46 = v6;
    if v46 {
        v47 = 0;
        do {
            v48 = <usize as core::iter::range::Step>::forward_unchecked(v47);
            v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = struct128 {
                field_0: v47
                field_8: v52
                field_24: v53
                field_40: v30 as u128
                field_56: v32 as u128
                field_72: v51
                field_88: v50
                field_104: v49
                field_120: v20.field_112
            };
            v26 = (((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_0;
            v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_16 as &i128);
            v31 = v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_24 as &char + 8) as &i128);
            v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_48;
            v20 = std::sync::mpmc::Sender<T>::send(&v4, &v15, v36);
            core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
            v47 = v48;
        } while (v48 < v46);
    }
    v20 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v56 = v14;
    v15 = v56;
    v57 = v5 as i128;
    v58 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256;
    v17 = v57;
    v19 = v6;
    memcpy(&v15, &v20, 160);
    v21 = 0x8000000000000000;
    v20 = struct8 {
        field_0: 0
    };
    v11 = std::thread::Builder::spawn_unchecked(&v20, &v15);
    v7 = core::result::Result<T,E>::expect(&v11);
    v1 = 0;
    v1 = 8;
    v3 = 0;
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    v22 = 0;
    v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
    if v12.field_8 == 3 {
        v20 = v1 as i192;
        v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v20, a2, 1);
        return struct80 {
            field_0: v4
            field_16: *(&v15.field_0 as &i128)
            field_32: v65
            field_48: v7
            field_64: v64
            field_72: 0
        };
    }
    do {
        *(&v8.field_0 as &struct16) = struct16 {
            field_0: v59
            field_8: v12.field_16
        };
        v62 = std::sync::mpmc::Receiver<T>::recv(&v8, v60, a2);
        if v62 {
            v15 = 1;
            v16 = 1;
            v17 = v62;
            v58 = v58 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8.field_0;
            v17 = alloc::boxed::Box<T>::new(&v15);
            v15 = struct40 {
                field_0: v63
                field_16: v17
                field_24: 0
                field_32: v61
            };
            v1 = alloc::vec::Vec<T,A>::push(&v15);
        }
    } while ((v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20), v12.field_8 != 3));
}
