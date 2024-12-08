fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x338], Other Possible Types: struct24
    let v1: i128;  // [sp-0x318]
    let v2: i64;  // [sp-0x308], Other Possible Types: struct16
    let v3: i64;  // [sp-0x300]
    let v4: i64;  // [sp-0x2f8]
    let v5: i64;  // [sp-0x2f0], Other Possible Types: struct16
    let v6: i64;  // [sp-0x2e8]
    let v7: i64;  // [sp-0x2e0]
    let v8: i64;  // [sp-0x2d8]
    let v9: i64;  // [sp-0x2d0]
    let v10: i128;  // [sp-0x2c8]
    let v11: i128;  // [sp-0x2b8], Other Possible Types: struct120, struct16, struct128, struct147, struct8, struct32, struct24
    let v12: i64;  // [sp-0x210], Other Possible Types: struct32, Result<struct16, struct8>, struct40
    let v13: i128;  // [sp-0x208]
    let v14: i64;  // [bp-0x200]
    let v15: i128;  // [bp-0x1f8]
    let v16: i64;  // [sp-0x1f0]
    let v17: i128;  // [sp-0x1e8]
    let v18: i128;  // [sp-0x1d8]
    let v19: i128;  // [sp-0x1c8]
    let v20: i128;  // [sp-0x1b8]
    let v21: i64;  // [sp-0x1b0]
    let v22: i64;  // [sp-0x1a8]
    let v23: i64;  // [sp-0x1a0]
    let v24: i64;  // [sp-0x198]
    let v25: i128;  // [sp-0x148], Other Possible Types: struct24
    let v26: i128;  // [sp-0x138]
    let v27: i128;  // [sp-0x128]
    let v28: i128;  // [sp-0x118]
    let v29: i128;  // [sp-0x108]
    let v30: i192;  // [sp-0xf0], Other Possible Types: struct24, struct104
    let v31: i64;  // [sp-0x88], Other Possible Types: struct40, struct88
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v37: i128;  // xmm1
    let v38: i256;  // ymm1
    let v39: i256;  // ymm1
    let v40: i256;  // ymm2
    let v41: i256;  // ymm3
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i128;  // xmm2
    let v46: i128;  // xmm3
    let v47: i64;  // rdx
    let v48: i64;  // rcx
    let v49: i128;  // xmm0
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2
    let v54: i128;  // xmm3
    let v55: i128;  // xmm1
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i128;  // xmm3
    let v63: i64;  // rax
    let v64: i64;  // r14
    let v66: i64;  // rbp
    let v67: i64;  // r13
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i128;  // xmm1
    let v73: i128;  // xmm2
    let v74: i128;  // xmm3
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i256;  // ymm0
    let v78: i64;  // rsi
    let v80: i64;  // rax
    let v81: i64;  // rcx
    let v82: i64;  // rax
    let v83: i128;  // xmm2

    v8 = a1;
    v12 = std::sync::mpmc::channel(a1, a2);
    v34 = v12;
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
    v37 = *((&v12 as &char + 16) as &i128);
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
    v1 = v34;
    v10 = v37;
    v11 = core::iter::traits::iterator::Iterator::size_hint();
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v2 = v13;
    v3 = v12.field_16;
    v4 = 0;
    v11 = core::iter::traits::iterator::Iterator::size_hint();
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v5 = v13;
    v6 = v12.field_16;
    v7 = 0;
    v30 = core::iter::traits::iterator::Iterator::enumerate(a1);
    v9 = 9223372036854775809;
    loop {
        v31 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v30);
        if v31.field_8 == v9 {
            break;
        }
        v42 = *((&v31 as &char + 72) as &i128);
        v29 = v42;
        v43 = *((&v31 as &char + 8) as &i128);
        v44 = *((&v31 as &char + 24) as &i128);
        v45 = *((&v31 as &char + 40) as &i128);
        v46 = *((&v31 as &char + 56) as &i128);
        v28 = v46;
        v27 = v45;
        v26 = v44;
        v25 = v43;
        v12 = std::sync::mpmc::sync_channel(2, v47, v48);
        v49 = v12;
        v0 = v49;
        v5 = alloc::vec::Vec<T,A>::push(v12.field_16, v12.field_24);
        v50 = v25;
        v51 = *((&v25 as &char + 8) as &i128);
        if v12.field_16 == 0x8000000000000000 {
            v63 = a0;
            *((v63 + 8) as &i128) = v51;
            *(v63 as &i64) = 3;
            return v82;
        }
        v20 = *((&v29 as &char + 8) as &i64);
        v52 = *((&v26 as &char + 8) as &i128);
        v53 = *((&v27 as &char + 8) as &i128);
        v54 = *((&v28 as &char + 8) as &i128);
        v19 = v54;
        v18 = v53;
        v17 = v52;
        v55 = v0;
        v12 = v55;
        v12.field_16 = vvar_215{reg 16};
        v15 = v51;
        v21 = 0;
        v22 = 1;
        v23 = 0;
        v2 = alloc::vec::Vec<T,A>::push(&v12, v47);
        v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v12 = v31;
        v24 = *((&v11 as &char + 112) as &i64);
        v56 = *((&v11 as &char + 96) as &i128);
        v22 = v56;
        v57 = *((&v11 as &char + 80) as &i128);
        v20 = v57;
        v58 = *((&v11 as &char + 64) as &i128);
        v19 = v58;
        v59 = v11;
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
        v60 = *((&v11 as &char + 16) as &i128);
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
        v61 = *((&v11 as &char + 32) as &i128);
        v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
        v62 = *((&v11 as &char + 48) as &i128);
        v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v18 = v62;
        v17 = v61;
        v15 = v60;
        v13 = v59;
        v11 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v48);
        core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
    }
    v64 = v4;
    if v64 {
        do {
            v66 = 0;
            v67 = <usize as core::iter::range::Step>::forward_unchecked(v66);
            v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v12 = v66;
            v24 = *((&v11 as &char + 112) as &i64);
            v68 = *((&v11 as &char + 96) as &i128);
            v22 = v68;
            v69 = *((&v11 as &char + 80) as &i128);
            v20 = v69;
            v70 = *((&v11 as &char + 64) as &i128);
            v19 = v70;
            v71 = v11;
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
            v72 = *((&v11 as &char + 16) as &i128);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
            v73 = *((&v11 as &char + 32) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
            v74 = *((&v11 as &char + 48) as &i128);
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v18 = v74;
            v17 = v73;
            v15 = v72;
            v13 = v71;
            v11 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v48);
            core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        } while (v67 < v64);
    }
    v11 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v75 = v10;
    v12 = v75;
    v76 = v2;
    v77 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
    v14 = v76;
    v16 = v4;
    memcpy(&v17, &v11, 160);
    v11.field_16 = 0x8000000000000000;
    v11 = struct8 {
        field_0: 0
    };
    v30 = std::thread::Builder::spawn_unchecked(&v11, &v12);
    v25 = core::result::Result<T,E>::expect(&v30);
    v31 = struct40 {
        field_0: 0
    };
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v11.32 = 0;
    v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v47);
    if *((&v30 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v79
                field_8: <UNKNOWN>
            };
            v80 = std::sync::mpmc::Receiver<T>::recv(&v0, v78, v47);
            if v80 {
                v12 = 1;
                v12.field_8 = 1;
                v14 = v80;
                v77 = v77 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v14 = alloc::boxed::Box<T>::new(&v12);
                *(&v12.field_0 as &struct40) = struct40 {
                    field_0: v35 as u128
                    field_16: v14
                    field_24: 0
                    field_32: vvar_399{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v31, &v12, v47);
            }
        } while ((v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v47), *((&v30 as &char + 8) as &i64) != 3));
    }
    v11 = struct24 {
        field_0: v31.field_0 as i128
        field_16: v32
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v12, &v11, a2, 1);
    v81 = a0;
    *((v81 + 48) as &i128) = v25;
    v82 = *((&v25 as &char + 16) as &i64);
    *((v81 + 64) as &i64) = v82;
    v83 = *((&v12 as &char + 16) as &i128);
    *((v81 + 16) as &i320) = v12;
    *((v81 + 32) as &i128) = v83;
    *(v81 as &i128) = v1;
    *((v81 + 72) as &i64) = 0;
    return v82;
}
