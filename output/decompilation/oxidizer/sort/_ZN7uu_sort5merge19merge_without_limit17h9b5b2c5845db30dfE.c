fn uu_sort::merge::merge_without_limit(a0: &struct80, a1: &struct32, a2: u32) -> u64 {
    let v0: iNone;  // [bp-0x290], Other Possible Types: struct16
    let v1: iNone;  // [sp-0x270]
    let v2: i64;  // [sp-0x258], Other Possible Types: struct16, int
    let v3: i64;  // [sp-0x250]
    let v4: struct24;  // [sp-0x248], Other Possible Types: int
    let v5: iNone;  // [sp-0x238]
    let v6: struct40;  // [sp-0x220]
    let v7: i64;  // [sp-0x220], Other Possible Types: int, struct16
    let v8: i64;  // [sp-0x210]
    let v9: struct24;  // [sp-0x1f8], Other Possible Types: struct40
    let v10: struct24;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1d0], Other Possible Types: struct16, int
    let v12: i64;  // [sp-0x1c0]
    let v13: i64;  // [sp-0x1b8]
    let v14: iNone;  // [sp-0x1b0]
    let v15: struct32;  // [sp-0x1a0], Other Possible Types: struct128, int, Result<struct16, struct8>, struct72, struct40, unsigned long
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190], Other Possible Types: int
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: struct128;  // [sp-0xd8], Other Possible Types: struct24, struct120, struct8, struct32, int, struct147
    let v21: i64;  // [sp-0xc8]
    let v22: i64;  // [sp-0xb8]
    let v24: iNone;  // xmm0
    let v25: iNone;  // ymm0
    let v26: iNone;  // ymm0
    let v27: iNone;  // xmm1
    let v28: iNone;  // ymm1
    let v29: iNone;  // ymm1
    let v30: i64;  // rbx
    let v31: i64;  // r14
    let v33: iNone;  // ymm2
    let v35: iNone;  // ymm3
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

    v13 = a1;
    v15 = std::sync::mpmc::channel();
    v24 = *(&v15.field_0 as &i128);
    v26 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 as u256;
    v27 = *(&v15.field_16 as &i128);
    v29 = v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
    v1 = v24;
    v14 = v27;
    v30 = *((a1 + 8) as &i64);
    v31 = *((a1 + 24) as &i64);
    v20 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v30, v31);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20.field_0, 0);
    v2 = v16;
    v2 = v17;
    v3 = 0;
    v20 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v30, v31);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v20.field_0, 0);
    v11 = v16;
    v11 = v17;
    v12 = 0;
    v6 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v17 = v17;
        v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v6);
        if *((&v9.field_0 as &char + 8) as &i64) == 9223372036854775809 {
            break;
        }
        v37 = *((&v9.field_0 as &char + 8) as &i128);
        v38 = *((&v9.field_16 as &char + 8) as &i128);
        v5 = v38;
        v4 = v37;
        v15 = std::sync::mpmc::sync_channel(0x2, a2, v39);
        v40 = *(&v15.field_0 as &i128);
        v0 = v40;
        v11 = alloc::vec::Vec<T,A>::push(v17, v18);
        v42 = (&v4)[8] as i128;
        v44 = v0 as i128;
        v15 = struct72 {
            field_0: v44
            field_16: v41
            field_24: v42
            field_40: v43
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v15);
        v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = struct128 {
            field_0: v36
            field_8: v25 as u128
            field_24: v28 as u128
            field_40: v50
            field_56: v34 as u128
            field_72: v25 as u128
            field_88: v25 as u128
            field_104: v25 as u128
            field_120: v20.field_112
        };
        v26 = ((((((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_0;
        v29 = ((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_16 as &i128);
        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_24 as &char + 8) as &i128);
        v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_48;
        v20 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v39);
        core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
        v17 = v17;
    }
    v52 = v3;
    if v52 {
        v53 = 0;
        do {
            v54 = <usize as core::iter::range::Step>::forward_unchecked(v53);
            v20 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = struct128 {
                field_0: v53
                field_8: v25 as u128
                field_24: v59
                field_40: v60
                field_56: v34 as u128
                field_72: v25 as u128
                field_88: v25 as u128
                field_104: v25 as u128
                field_120: v20.field_112
            };
            v26 = (((v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_96) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_72 as &char + 8) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_64 as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_0;
            v29 = v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v20.field_16 as &i128);
            v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20.field_24 as &char + 8) as &i128);
            v35 = v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20.field_48;
            v20 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v39);
            core::result::Result<T,E>::unwrap(&v20, "src/uu/sort/src/merge.rs");
            v53 = v54;
        } while (v54 < v52);
    }
    v20 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v62 = v14;
    v15 = v62;
    v63 = v2 as i128;
    v64 = (v26 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 as u256;
    v17 = v63;
    v19 = v3;
    memcpy(&v15, &v20, 160);
    v21 = 0x8000000000000000;
    v20 = struct8 {
        field_0: 0
    };
    v9 = std::thread::Builder::spawn_unchecked(&v20, &v15);
    v4 = core::result::Result<T,E>::expect(&v9);
    v7 = 0;
    v7 = 8;
    v8 = 0;
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v22 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20);
    if v10.field_8 == 3 {
        v20 = v7 as i192;
        v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v20, a2, 1);
        return struct80 {
            field_0: v1
            field_16: *(&v15.field_0 as &i128)
            field_32: v71
            field_48: v4
            field_64: v70
            field_72: 0
        };
    }
    do {
        v0 = struct16 {
            field_0: v65
            field_8: v10.field_16
        };
        v68 = std::sync::mpmc::Receiver<T>::recv(&v0, v66, a2);
        if v68 {
            v15 = 1;
            v16 = 1;
            v17 = v68;
            v64 = v64 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
            v17 = alloc::boxed::Box<T>::new(&v15);
            *(&v15.field_0 as &struct40) = struct40 {
                field_0: v69
                field_16: v17
                field_24: 0
                field_32: v67
            };
            v7 = alloc::vec::Vec<T,A>::push(&v15);
        }
    } while ((v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v20), v10.field_8 != 3));
}
