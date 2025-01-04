fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct96, a2: u32, a3: u32) -> u64 {
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
    let v11: i960;  // [sp-0x2b8], Other Possible Types: struct120, struct128, struct16, struct8, struct32, struct147
    let v12: i64;  // [sp-0x2a8]
    let v13: i64;  // [sp-0x298]
    let v14: i64;  // [sp-0x210], Other Possible Types: struct32, Result<struct16, struct8>, struct40
    let v15: i128;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: i128;  // [sp-0x1f8]
    let v18: i64;  // [sp-0x1f0]
    let v19: i128;  // [sp-0x1e8]
    let v20: i128;  // [sp-0x1d8]
    let v21: i128;  // [sp-0x1c8]
    let v22: i128;  // [sp-0x1b8]
    let v23: i64;  // [sp-0x1b0]
    let v24: i128;  // [sp-0x1a8]
    let v25: i64;  // [sp-0x1a0]
    let v26: i64;  // [sp-0x198]
    let v27: i192;  // [sp-0x148], Other Possible Types: struct24
    let v28: i128;  // [sp-0x138]
    let v29: i128;  // [sp-0x128]
    let v30: i128;  // [sp-0x118]
    let v31: i128;  // [sp-0x108]
    let v32: i192;  // [sp-0xf0], Other Possible Types: struct24, struct104
    let v33: i704;  // [sp-0x88], Other Possible Types: struct88, struct16
    let v34: i64;  // [sp-0x80]
    let v35: i64;  // [sp-0x78]
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i256;  // ymm0
    let v40: i128;  // xmm1
    let v41: i256;  // ymm1
    let v42: i256;  // ymm1
    let v43: i256;  // ymm2
    let v44: i256;  // ymm3
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i128;  // xmm3
    let v50: i64;  // rdx
    let v51: i64;  // rcx
    let v52: i128;  // xmm0
    let v53: i64;  // rax
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2
    let v57: i128;  // xmm3
    let v58: i128;  // xmm1
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v66: i64;  // rax
    let v67: i64;  // r14
    let v68: i64;  // rbp
    let v69: i64;  // rbp
    let v70: i64;  // r13
    let v71: i128;  // xmm0
    let v72: i128;  // xmm0
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm1
    let v76: i128;  // xmm2
    let v77: i128;  // xmm3
    let v78: i128;  // xmm0
    let v79: i128;  // xmm0
    let v80: i256;  // ymm0
    let v81: i64;  // rsi
    let v83: i64;  // rax
    let v84: i64;  // rcx
    let v85: i64;  // rax
    let v86: i128;  // xmm2

    v8 = a1;
    v14 = std::sync::mpmc::channel(a1, a2);
    v37 = v14;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
    v40 = *((&v14 as &char + 16) as &i128);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
    v1 = v37;
    v10 = v40;
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
    v32 = core::iter::traits::iterator::Iterator::enumerate(a1);
    v9 = 9223372036854775809;
    loop {
        v16 = v16;
        v33 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v32);
        if v34 == v9 {
            break;
        }
        v45 = *((&v33 as &char + 72) as &i128);
        v31 = v45;
        v46 = *((&v33 as &char + 8) as &i128);
        v47 = *((&v33 as &char + 24) as &i128);
        v48 = *((&v33 as &char + 40) as &i128);
        v49 = *((&v33 as &char + 56) as &i128);
        v30 = v49;
        v29 = v48;
        v28 = v47;
        v27 = v46;
        v14 = std::sync::mpmc::sync_channel(0x2, v50, v51);
        v52 = v14;
        v0 = v52;
        v5 = alloc::vec::Vec<T,A>::push(v16, v17);
        v53 = v27;
        v54 = *((&v27 as &char + 8) as &i128);
        if v16 == 0x8000000000000000 {
            v66 = a0;
            *((v66 + 8) as &i128) = v54;
            *(v66 as &i64) = 3;
            return v85;
        }
        v22 = *((&v31 as &char + 8) as &i64);
        v55 = *((&v28 as &char + 8) as &i128);
        v56 = *((&v29 as &char + 8) as &i128);
        v57 = *((&v30 as &char + 8) as &i128);
        v21 = v57;
        v20 = v56;
        v19 = v55;
        v58 = v0;
        v14 = v58;
        v16 = v53;
        v17 = v54;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        v2 = alloc::vec::Vec<T,A>::push(&v14, v50);
        v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v33;
        v26 = *((&v11 as &char + 112) as &i64);
        v59 = *((&v11 as &char + 96) as &i128);
        v24 = v59;
        v60 = *((&v11 as &char + 80) as &i128);
        v22 = v60;
        v61 = *((&v11 as &char + 64) as &i128);
        v21 = v61;
        v62 = v11;
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v63 = *((&v11 as &char + 16) as &i128);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
        v64 = *((&v11 as &char + 32) as &i128);
        v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v65 = *((&v11 as &char + 48) as &i128);
        v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v20 = v65;
        v19 = v64;
        v17 = v63;
        v15 = v62;
        v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v51);
        core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        v16 = v16;
    }
    v67 = v4;
    if v67 {
        v68 = 0;
        do {
            v69 = v68;
            v70 = <usize as core::iter::range::Step>::forward_unchecked(v69);
            v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v69;
            v26 = *((&v11 as &char + 112) as &i64);
            v71 = *((&v11 as &char + 96) as &i128);
            v24 = v71;
            v72 = *((&v11 as &char + 80) as &i128);
            v22 = v72;
            v73 = *((&v11 as &char + 64) as &i128);
            v21 = v73;
            v74 = v11;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v75 = *((&v11 as &char + 16) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v76 = *((&v11 as &char + 32) as &i128);
            v43 = v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            v77 = *((&v11 as &char + 48) as &i128);
            v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
            v20 = v77;
            v19 = v76;
            v17 = v75;
            v15 = v74;
            v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v51);
            core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
            v68 = v70;
        } while (v70 < v67);
    }
    v11 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v78 = v10;
    v14 = v78;
    v79 = v2;
    v80 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79;
    v16 = v79;
    v18 = v4;
    memcpy(&v19, &v11, 160);
    v12 = 0x8000000000000000;
    v11 = struct8 {
        field_0: 0
    };
    v32 = std::thread::Builder::spawn_unchecked(&v11, &v14);
    v27 = core::result::Result<T,E>::expect(&v32);
    v33 = 0;
    v34 = 8;
    v35 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v13 = 0;
    v32 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v50);
    if *((&v32 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct16) = struct16 {
                field_0: v82
                field_8: *((&v32 as &char + 16) as &i64)
            };
            v83 = std::sync::mpmc::Receiver<T>::recv(&v0, v81, v50);
            if v83 {
                v14 = 1;
                v15 = 1;
                v16 = v83;
                v80 = v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v16 = alloc::boxed::Box<T>::new(&v14);
                v14 = struct40 {
                    field_0: v38 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_399{reg 56}
                };
                v33 = alloc::vec::Vec<T,A>::push(&v14, v50);
            }
        } while ((v32 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v50), *((&v32 as &char + 8) as &i64) != 3));
    }
    v11 = v33;
    v14 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v11, a2, 1);
    v84 = a0;
    *((v84 + 48) as &i128) = v27;
    v85 = *((&v27 as &char + 16) as &i64);
    *((v84 + 64) as &i64) = v85;
    v86 = *((&v14 as &char + 16) as &i128);
    *((v84 + 16) as &i256) = v14;
    *((v84 + 32) as &i128) = v86;
    *(v84 as &i128) = v1;
    *((v84 + 72) as &i64) = 0;
    return v85;
}
