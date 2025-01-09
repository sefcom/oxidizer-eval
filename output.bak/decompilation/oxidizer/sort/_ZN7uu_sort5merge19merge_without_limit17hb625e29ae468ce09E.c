fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct16>, a1: &struct96, a2: u32) -> u64 {
    let v0: struct16;  // [bp-0x338], Other Possible Types: i128
    let v1: i128;  // [sp-0x318]
    let v2: i128;  // [sp-0x308], Other Possible Types: struct16
    let v3: i64;  // [sp-0x300]
    let v4: i64;  // [sp-0x2f8]
    let v5: i128;  // [sp-0x2f0], Other Possible Types: struct16
    let v6: i64;  // [sp-0x2e8]
    let v7: i64;  // [sp-0x2e0]
    let v8: i64;  // [sp-0x2d8]
    let v9: i64;  // [sp-0x2d0]
    let v10: i128;  // [sp-0x2c8]
    let v11: i256;  // [sp-0x2b8], Other Possible Types: struct128, struct16, struct120, struct32, struct24, struct8, struct147
    let v12: i64;  // [sp-0x2a8]
    let v13: i64;  // [sp-0x298]
    let v14: i256;  // [sp-0x210], Other Possible Types: struct32, Result<struct16, struct8>, struct128, struct40, struct120
    let v15: i64;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: i64;  // [sp-0x1f8]
    let v18: i64;  // [sp-0x1f0]
    let v19: i128;  // [sp-0x148], Other Possible Types: struct24
    let v20: i128;  // [sp-0x138]
    let v21: i128;  // [sp-0x128]
    let v22: i128;  // [sp-0x118]
    let v23: i128;  // [sp-0x108]
    let v24: i832;  // [sp-0xf0], Other Possible Types: struct24, struct104
    let v25: i704;  // [sp-0x88], Other Possible Types: struct16, struct88
    let v26: i64;  // [sp-0x80]
    let v27: i64;  // [sp-0x78]
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v32: i128;  // xmm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm1
    let v36: i256;  // ymm2
    let v38: i256;  // ymm3
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i128;  // xmm2
    let v43: i128;  // xmm3
    let v44: i64;  // rdx
    let v45: i64;  // rcx
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: i128;  // xmm3
    let v51: i128;  // xmm1
    let v54: i64;  // r14
    let v55: i64;  // rbp
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i256;  // ymm0
    let v59: i64;  // rsi
    let v60: i64;  // rax

    v8 = a1;
    v14 = std::sync::mpmc::channel();
    v29 = v14;
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v32 = *((&v14 as &char + 16) as &i128);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v1 = v29;
    v10 = v32;
    v11 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v2 = v15;
    v3 = v16;
    v4 = 0;
    v11 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v5 = v15;
    v6 = v16;
    v7 = 0;
    v24 = core::iter::traits::iterator::Iterator::enumerate(a1);
    v9 = 9223372036854775809;
    loop {
        v16 = v16;
        v25 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v24);
        if v26 == v9 {
            break;
        }
        v39 = *((&v25 as &char + 72) as &i128);
        v23 = v39;
        v40 = *((&v25 as &char + 8) as &i128);
        v41 = *((&v25 as &char + 24) as &i128);
        v42 = *((&v25 as &char + 40) as &i128);
        v43 = *((&v25 as &char + 56) as &i128);
        v22 = v43;
        v21 = v42;
        v20 = v41;
        v19 = v40;
        v14 = std::sync::mpmc::sync_channel(0x2, v44, v45);
        v46 = v14;
        v0 = v46;
        v5 = alloc::vec::Vec<T,A>::push(v16, v17);
        v47 = *((&v19 as &char + 8) as &i128);
        if v16 == 0x8000000000000000 {
            return Err(struct16 {
                field_0: v47
            });
        }
        v48 = *((&v20 as &char + 8) as &i128);
        v49 = *((&v21 as &char + 8) as &i128);
        v50 = *((&v22 as &char + 8) as &i128);
        v51 = v0;
        v14 = struct120 {
            field_0: v51
            field_16: v52
            field_24: v47
            field_40: v48
            field_56: v49
            field_72: v50
            field_88: *((&v23 as &char + 8) as &i64)
            field_96: 0
            field_104: 1
            field_112: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v14);
        v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = struct128 {
            field_0: v25
            field_8: v30 as u128
            field_24: v33 as u128
            field_40: v35 as u128
            field_56: v37 as u128
            field_72: v30 as u128
            field_88: v30 as u128
            field_104: v30 as u128
            field_120: *((&v11 as &char + 112) as &i64)
        };
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 16) as &i128);
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 32) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 48) as &i128);
        v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v45);
        core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        v16 = v16;
    }
    v54 = v4;
    if v54 {
        v55 = 0;
        do {
            v55 = <usize as core::iter::range::Step>::forward_unchecked(v55);
            v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = struct128 {
                field_0: v55
                field_8: v30 as u128
                field_24: v33 as u128
                field_40: v35 as u128
                field_56: v37 as u128
                field_72: v30 as u128
                field_88: v30 as u128
                field_104: v30 as u128
                field_120: *((&v11 as &char + 112) as &i64)
            };
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 96) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 80) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 64) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 16) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 32) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v11 as &char + 48) as &i128);
            v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v45);
            core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        } while (v55 < v54);
    }
    v11 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v56 = v10;
    v14 = v56;
    v57 = v2;
    v58 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
    v16 = v57;
    v18 = v4;
    memcpy(&v14, &v11, 160);
    v12 = 0x8000000000000000;
    v11 = struct8 {
        field_0: 0
    };
    v24 = std::thread::Builder::spawn_unchecked(&v11, &v14);
    v19 = core::result::Result<T,E>::expect(&v24);
    v25 = 0;
    v26 = 8;
    v27 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v13 = 0;
    v24 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
    if *((&v24 as &char + 8) as &i64) == 3 {
        *(&v11.field_0 as &struct24) = struct24 {
            field_0: v25
            field_16: v27
        };
        v14 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v11, a2, 1);
        return Ok(struct80 {
            field_0: v1
            field_16: v14
            field_32: v63
            field_48: v19
            field_64: v62
            field_72: 0
        });
    }
    do {
        *(&v0.field_0 as &struct16) = struct16 {
            field_0: v52
            field_8: *((&v24 as &char + 16) as &i64)
        };
        v60 = std::sync::mpmc::Receiver<T>::recv(&v0, v59, v44);
        if v60 {
            v14 = 1;
            v15 = 1;
            v16 = v60;
            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
            v16 = alloc::boxed::Box<T>::new(&v14);
            v14 = struct40 {
                field_0: v30 as u128
                field_16: v16
                field_24: 0
                field_32: vvar_397{reg 56}
            };
            v25 = alloc::vec::Vec<T,A>::push(&v14);
        }
    } while ((v24 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11), *((&v24 as &char + 8) as &i64) != 3));
}
