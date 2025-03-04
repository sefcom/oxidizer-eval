fn uu_sort::merge::merge_without_limit(a0: &struct80, a1: &struct96, a2: u32) -> u64 {
    let v0: iNone;  // [bp-0x338], Other Possible Types: struct16
    let v1: iNone;  // [sp-0x318]
    let v2: i64;  // [sp-0x300], Other Possible Types: struct16, int
    let v3: i64;  // [sp-0x2f8]
    let v4: i64;  // [sp-0x2f0], Other Possible Types: int, struct16
    let v5: i64;  // [sp-0x2e0]
    let v6: i64;  // [sp-0x2d8]
    let v7: i64;  // [sp-0x2d0]
    let v8: iNone;  // [sp-0x2c8]
    let v9: struct128;  // [sp-0x2b8], Other Possible Types: struct120, struct16, int, struct147, struct8, struct32
    let v10: i64;  // [sp-0x2a8]
    let v11: i64;  // [sp-0x298]
    let v12: struct32;  // [sp-0x210], Other Possible Types: int, struct128, Result<struct16, struct8>, struct40, unsigned long, struct120
    let v13: i64;  // [sp-0x208]
    let v14: i64;  // [sp-0x200], Other Possible Types: int
    let v15: i64;  // [sp-0x1f8]
    let v16: i64;  // [sp-0x1f0]
    let v17: iNone;  // [sp-0x148], Other Possible Types: struct24
    let v18: iNone;  // [sp-0x138]
    let v19: iNone;  // [sp-0x128]
    let v20: iNone;  // [sp-0x118]
    let v21: iNone;  // [sp-0x108]
    let v22: struct24;  // [sp-0xf0], Other Possible Types: struct104
    let v23: struct24;  // [sp-0xf0]
    let v24: struct88;  // [sp-0x88]
    let v25: i64;  // [sp-0x88], Other Possible Types: struct16, int
    let v26: i64;  // [sp-0x80]
    let v27: i64;  // [sp-0x78]
    let v29: iNone;  // xmm0
    let v30: iNone;  // ymm0
    let v31: iNone;  // ymm0
    let v32: iNone;  // xmm1
    let v33: iNone;  // ymm1
    let v34: iNone;  // ymm1
    let v36: iNone;  // ymm2
    let v38: iNone;  // ymm3
    let v39: iNone;  // xmm0
    let v40: iNone;  // xmm0
    let v41: iNone;  // xmm1
    let v42: iNone;  // xmm2
    let v43: iNone;  // xmm3
    let v44: i64;  // rcx
    let v45: iNone;  // xmm0
    let v47: iNone;  // xmm0
    let v48: iNone;  // xmm1
    let v49: iNone;  // xmm2
    let v50: iNone;  // xmm3
    let v51: iNone;  // xmm1
    let v59: i64;  // r14
    let v60: i64;  // rbp
    let v61: i64;  // r13
    let v69: iNone;  // xmm0
    let v70: iNone;  // xmm0
    let v71: iNone;  // ymm0
    let v73: i64;  // rsi
    let v75: i64;  // rax

    v6 = a1;
    v12 = std::sync::mpmc::channel();
    v29 = *(&v12.field_0 as &i128);
    v31 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256;
    v32 = *(&v12.field_16 as &i128);
    v34 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
    v1 = v29;
    v8 = v32;
    v9 = core::iter::traits::iterator::Iterator::size_hint();
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v9.field_0 as i64, 0);
    v2 = v13;
    v2 = v14;
    v3 = 0;
    v9 = core::iter::traits::iterator::Iterator::size_hint();
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v9.field_0 as i64, 0);
    v4 = v13;
    v4 = v14;
    v5 = 0;
    v22 = core::iter::traits::iterator::Iterator::enumerate(a1);
    v7 = 9223372036854775809;
    loop {
        v14 = v14;
        v24 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v22);
        if v26 == v7 {
            break;
        }
        v39 = v24.field_72;
        v21 = v39;
        v40 = v24.field_8;
        v41 = v24.field_24;
        v42 = v24.field_40;
        v43 = v24.field_56;
        v20 = v43;
        v19 = v42;
        v18 = v41;
        v17 = v40;
        v12 = std::sync::mpmc::sync_channel(0x2, a2, v44);
        v45 = *(&v12.field_0 as &i128);
        v0 = v45;
        v4 = alloc::vec::Vec<T,A>::push(v14, v15);
        v47 = (&v17)[8] as i128;
        v48 = (&v18)[8] as i128;
        v49 = (&v19)[8] as i128;
        v50 = (&v20)[8] as i128;
        v51 = v0 as i128;
        v12 = struct120 {
            field_0: v51
            field_16: v46
            field_24: v47
            field_40: v48
            field_56: v49
            field_72: v50
            field_88: (&v21)[8] as i64
            field_96: 0
            field_104: 1
            field_112: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v12);
        v9 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v12 = struct128 {
            field_0: v24
            field_8: v30 as u128
            field_24: v33 as u128
            field_40: v35 as u128
            field_56: v37 as u128
            field_72: v54
            field_88: v30 as u128
            field_104: v52
            field_120: v9.field_112
        };
        v31 = (((((((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_96 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_56 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9.field_0;
        v34 = (((v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_16 as &i128);
        v36 = ((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_24 as &char + 8) as &i128);
        v38 = ((v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_40 as &char + 8) as &i128);
        v9 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v44);
        core::result::Result<T,E>::unwrap(&v9, "src/uu/sort/src/merge.rs");
        v14 = v14;
    }
    v59 = v3;
    if v59 {
        v60 = 0;
        do {
            v61 = <usize as core::iter::range::Step>::forward_unchecked(v60);
            v9 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v12 = struct128 {
                field_0: v60
                field_8: v65
                field_24: v66
                field_40: v35 as u128
                field_56: v68
                field_72: v64
                field_88: v30 as u128
                field_104: v62
                field_120: v9.field_112
            };
            v31 = (((v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_96 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_56 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v9.field_0;
            v34 = v34 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_16 as &i128);
            v36 = v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_24 as &char + 8) as &i128);
            v38 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v9.field_40 as &char + 8) as &i128);
            v9 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v44);
            core::result::Result<T,E>::unwrap(&v9, "src/uu/sort/src/merge.rs");
            v60 = v61;
        } while (v61 < v59);
    }
    v9 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v69 = v8;
    v12 = v69;
    v70 = v2 as i128;
    v71 = (v31 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 as u256;
    v14 = v70;
    v16 = v3;
    memcpy(&v12, &v9, 160);
    v10 = 0x8000000000000000;
    v9 = struct8 {
        field_0: 0
    };
    v22 = std::thread::Builder::spawn_unchecked(&v9, &v12);
    v17 = core::result::Result<T,E>::expect(&v22);
    v25 = 0;
    v25 = 8;
    v27 = 0;
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v11 = 0;
    v23 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9);
    if v23.field_8 == 3 {
        v9 = v25 as i192;
        v12 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v9, a2, 1);
        return struct80 {
            field_0: v1
            field_16: *(&v12.field_0 as &i128)
            field_32: v78
            field_48: v17
            field_64: v77
            field_72: 0
        };
    }
    do {
        *(&v0.field_0 as &struct16) = struct16 {
            field_0: v72
            field_8: v23.field_16
        };
        v75 = std::sync::mpmc::Receiver<T>::recv(&v0, v73, a2);
        if v75 {
            v12 = 1;
            v13 = 1;
            v14 = v75;
            v71 = v71 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
            v14 = alloc::boxed::Box<T>::new(&v12);
            v12 = struct40 {
                field_0: v76
                field_16: v14
                field_24: 0
                field_32: v74
            };
            v25 = alloc::vec::Vec<T,A>::push(&v12);
        }
    } while ((v23 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v9), v23.field_8 != 3));
}
