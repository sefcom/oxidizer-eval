fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: &struct48, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0x2a0], Other Possible Types: i128
    let v1: i128;  // [sp-0x280]
    let v2: i128;  // [sp-0x270], Other Possible Types: struct16
    let v3: i64;  // [sp-0x268]
    let v4: i64;  // [sp-0x260]
    let v5: i128;  // [sp-0x258], Other Possible Types: struct24
    let v6: i128;  // [sp-0x248]
    let v7: i64;  // [sp-0x230], Other Possible Types: struct16
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: i64;  // [sp-0x218], Other Possible Types: struct40, struct16
    let v11: i64;  // [sp-0x210]
    let v12: i64;  // [sp-0x208]
    let v13: i64;  // [sp-0x1f0]
    let v14: i128;  // [sp-0x1e8]
    let v15: i192;  // [sp-0x1d8], Other Possible Types: struct24, struct56
    let v16: i1024;  // [sp-0x1a0], Other Possible Types: struct32, struct128, Result<struct16, struct8>, struct40, struct72
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190]
    let v19: i64;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i1024;  // [sp-0xd8], Other Possible Types: struct120, struct128, struct16, struct8, struct147, struct24, struct32
    let v22: i64;  // [sp-0xc8]
    let v23: i64;  // [sp-0xb8]
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: i128;  // xmm1
    let v29: i256;  // ymm1
    let v30: i256;  // ymm1
    let v32: i256;  // ymm2
    let v34: i256;  // ymm3
    let v35: i128;  // xmm0
    let v36: i128;  // xmm1
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v44: i64;  // r14
    let v45: i64;  // rbp
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i256;  // ymm0
    let v49: i64;  // rsi
    let v50: i64;  // rax

    v13 = a1;
    v16 = std::sync::mpmc::channel();
    v25 = v16;
    v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    v28 = *((&v16 as &char + 16) as &i128);
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v1 = v25;
    v14 = v28;
    v21 = core::iter::traits::iterator::Iterator::size_hint();
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21, 0);
    v2 = v17;
    v3 = v18;
    v4 = 0;
    v21 = core::iter::traits::iterator::Iterator::size_hint();
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v21, 0);
    v7 = v17;
    v8 = v18;
    v9 = 0;
    v15 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v18 = v18;
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
        if v11 == 9223372036854775809 {
            break;
        }
        v35 = *((&v10 as &char + 8) as &i128);
        v36 = *((&v10 as &char + 24) as &i128);
        v6 = v36;
        v5 = v35;
        v16 = std::sync::mpmc::sync_channel(0x2, v37, v38);
        v39 = v16;
        v0 = v39;
        v7 = alloc::vec::Vec<T,A>::push(v18, v19);
        v40 = *((&v5 as &char + 8) as &i128);
        if v18 == 0x8000000000000000 {
            return Err(struct16 {
                field_0: v40
            });
        }
        v41 = v0;
        v16 = struct72 {
            field_0: v41
            field_16: v42
            field_24: v40
            field_40: v38
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v16);
        v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v16 = struct128 {
            field_0: v10
            field_8: v26 as u128
            field_24: v29 as u128
            field_40: v31 as u128
            field_56: v33 as u128
            field_72: v26 as u128
            field_88: v26 as u128
            field_104: v26 as u128
            field_120: *((&v21 as &char + 112) as &i64)
        };
        v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 16) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 32) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 48) as &i128);
        v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v38);
        core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
        v18 = v18;
    }
    v44 = v4;
    if v44 {
        v45 = 0;
        do {
            v45 = <usize as core::iter::range::Step>::forward_unchecked(v45);
            v21 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v16 = struct128 {
                field_0: v45
                field_8: v26 as u128
                field_24: v29 as u128
                field_40: v31 as u128
                field_56: v33 as u128
                field_72: v26 as u128
                field_88: v26 as u128
                field_104: v26 as u128
                field_120: *((&v21 as &char + 112) as &i64)
            };
            v27 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 16) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 32) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v21 as &char + 48) as &i128);
            v21 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v38);
            core::result::Result<T,E>::unwrap(&v21, "src/uu/sort/src/merge.rs");
        } while (v45 < v44);
    }
    v21 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v46 = v14;
    v16 = v46;
    v47 = v2;
    v48 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
    v18 = v47;
    v20 = v4;
    memcpy(&v16, &v21, 160);
    v22 = 0x8000000000000000;
    v21 = struct8 {
        field_0: 0
    };
    v15 = std::thread::Builder::spawn_unchecked(&v21, &v16);
    v5 = core::result::Result<T,E>::expect(&v15);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v21 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
    v23 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21);
    if *((&v15 as &char + 8) as &i64) == 3 {
        *(&v21.field_0 as &struct24) = struct24 {
            field_0: v10
            field_16: v12
        };
        v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v21, a2, 1);
        return Ok(struct80 {
            field_0: v1
            field_16: v16
            field_32: v53
            field_48: v5
            field_64: v52
            field_72: 0
        });
    }
    do {
        *(&v0.field_0 as &struct16) = struct16 {
            field_0: v42
            field_8: *((&v15 as &char + 16) as &i64)
        };
        v50 = std::sync::mpmc::Receiver<T>::recv(&v0, v49, v37);
        if v50 {
            v16 = 1;
            v17 = 1;
            v18 = v50;
            v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
            v18 = alloc::boxed::Box<T>::new(&v16);
            *(&v16.field_0 as &struct40) = struct40 {
                field_0: v26 as u128
                field_16: v18
                field_24: 0
                field_32: vvar_388{reg 56}
            };
            v10 = alloc::vec::Vec<T,A>::push(&v16);
        }
    } while ((v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v21), *((&v15 as &char + 8) as &i64) != 3));
}
