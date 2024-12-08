fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [bp-0x338], Other Possible Types: i128
    let v1: i128;  // [sp-0x318]
    let v2: struct16;  // [bp-0x308]
    let v3: i64;  // [sp-0x2f8]
    let v4: i128;  // [sp-0x2f0], Other Possible Types: struct16
    let v5: i64;  // [sp-0x2e8]
    let v6: i64;  // [sp-0x2e0]
    let v7: i64;  // [sp-0x2d8]
    let v8: i64;  // [sp-0x2d0]
    let v9: i128;  // [sp-0x2c8]
    let v10: i256;  // [sp-0x2b8], Other Possible Types: struct128, struct16, struct120, struct8, struct147, struct24, struct32
    let v11: i320;  // [sp-0x210], Other Possible Types: Result<struct16, struct8>, struct32, struct40
    let v12: i128;  // [sp-0x208]
    let v13: i128;  // [sp-0x200]
    let v14: i128;  // [bp-0x1f8]
    let v15: i64;  // [sp-0x1f0]
    let v16: i128;  // [sp-0x1e8]
    let v17: i128;  // [sp-0x1d8]
    let v18: i128;  // [sp-0x1c8]
    let v19: i64;  // [sp-0x1b8]
    let v20: i64;  // [sp-0x1b0]
    let v21: i64;  // [sp-0x1a8]
    let v22: i64;  // [sp-0x1a0]
    let v23: i64;  // [sp-0x198]
    let v24: i192;  // [sp-0x148], Other Possible Types: struct24
    let v25: i128;  // [sp-0x138]
    let v26: i128;  // [sp-0x128]
    let v27: i128;  // [sp-0x118]
    let v28: i128;  // [sp-0x108]
    let v29: i192;  // [sp-0xf0], Other Possible Types: struct24, struct104
    let v30: i64;  // [sp-0x88], Other Possible Types: struct88, struct40
    let v33: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v36: i128;  // xmm1
    let v37: i256;  // ymm1
    let v38: i256;  // ymm1
    let v39: i256;  // ymm2
    let v40: i256;  // ymm3
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm1
    let v44: i128;  // xmm2
    let v45: i128;  // xmm3
    let v46: i64;  // rdx
    let v47: i64;  // rcx
    let v48: i128;  // xmm0
    let v49: i64;  // rax
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm2
    let v53: i128;  // xmm3
    let v54: i128;  // xmm1
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i64;  // rax
    let v63: i64;  // r14
    let v65: i64;  // rbp
    let v66: i64;  // r13
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm1
    let v72: i128;  // xmm2
    let v73: i128;  // xmm3
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i256;  // ymm0
    let v77: i64;  // rsi
    let v79: i64;  // rax
    let v80: i64;  // rcx
    let v81: i64;  // rax
    let v82: i128;  // xmm2

    v7 = a1;
    v11 = std::sync::mpmc::channel(a1, a2);
    v33 = v11;
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
    v36 = *((&v11 as &char + 16) as &i128);
    v38 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
    v1 = v33;
    v9 = v36;
    v10 = core::iter::traits::iterator::Iterator::size_hint();
    v11 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v10, 0);
    *(&v2.field_0 as &struct16) = struct16 {
        field_0: v12
        field_8: v13
    };
    v3 = 0;
    v10 = core::iter::traits::iterator::Iterator::size_hint();
    v11 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v10, 0);
    v4 = v12;
    v5 = v11.field_16;
    v6 = 0;
    v29 = core::iter::traits::iterator::Iterator::enumerate(a1);
    v8 = 9223372036854775809;
    loop {
        v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v29);
        if v30.field_8 == v8 {
            break;
        }
        v41 = *((&v30 as &char + 72) as &i128);
        v28 = v41;
        v42 = *((&v30 as &char + 8) as &i128);
        v43 = *((&v30 as &char + 24) as &i128);
        v44 = *((&v30 as &char + 40) as &i128);
        v45 = *((&v30 as &char + 56) as &i128);
        v27 = v45;
        v26 = v44;
        v25 = v43;
        v24 = v42;
        v11 = std::sync::mpmc::sync_channel(2, v46, v47);
        v48 = v11;
        v0 = v48;
        v4 = alloc::vec::Vec<T,A>::push(v11.field_16, v11.field_24);
        v49 = v24;
        v50 = *((&v24 as &char + 8) as &i128);
        if v11.field_16 == 0x8000000000000000 {
            v62 = a0;
            *((v62 + 8) as &i128) = v50;
            *(v62 as &i64) = 3;
            return v81;
        }
        v19 = *((&v28 as &char + 8) as &i64);
        v51 = *((&v25 as &char + 8) as &i128);
        v52 = *((&v26 as &char + 8) as &i128);
        v53 = *((&v27 as &char + 8) as &i128);
        v18 = v53;
        v17 = v52;
        v16 = v51;
        v54 = v0;
        v11 = v54;
        v11.field_16 = vvar_215{reg 16};
        v14 = v50;
        v20 = 0;
        v21 = 1;
        v22 = 0;
        alloc::vec::Vec<T,A>::push(&v2, &v11, v46);
        v10 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v11 = v30;
        v23 = *((&v10 as &char + 112) as &i64);
        v55 = *((&v10 as &char + 96) as &i128);
        v21 = v55;
        v56 = *((&v10 as &char + 80) as &i128);
        v19 = v56;
        v57 = *((&v10 as &char + 64) as &i128);
        v18 = v57;
        v58 = v10;
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
        v59 = *((&v10 as &char + 16) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
        v60 = *((&v10 as &char + 32) as &i128);
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
        v61 = *((&v10 as &char + 48) as &i128);
        v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
        v17 = v61;
        v16 = v60;
        v14 = v59;
        v12 = v58;
        v10 = std::sync::mpmc::Sender<T>::send(&v1, &v11, v47);
        core::result::Result<T,E>::unwrap(&v10, "src/uu/sort/src/merge.rs");
    }
    v63 = v3;
    if v63 {
        do {
            v65 = 0;
            v66 = <usize as core::iter::range::Step>::forward_unchecked(v65);
            v10 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v11 = v65;
            v23 = *((&v10 as &char + 112) as &i64);
            v67 = *((&v10 as &char + 96) as &i128);
            v21 = v67;
            v68 = *((&v10 as &char + 80) as &i128);
            v19 = v68;
            v69 = *((&v10 as &char + 64) as &i128);
            v18 = v69;
            v70 = v10;
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70;
            v71 = *((&v10 as &char + 16) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
            v72 = *((&v10 as &char + 32) as &i128);
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
            v73 = *((&v10 as &char + 48) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
            v17 = v73;
            v16 = v72;
            v14 = v71;
            v12 = v70;
            v10 = std::sync::mpmc::Sender<T>::send(&v1, &v11, v47);
            core::result::Result<T,E>::unwrap(&v10, "src/uu/sort/src/merge.rs");
        } while (v66 < v63);
    }
    v10 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v74 = v9;
    v11 = v74;
    v75 = v2.field_0;
    v76 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
    v13 = v75;
    v15 = v3;
    memcpy(&v16, &v10, 160);
    v10.field_16 = 0x8000000000000000;
    v10 = struct8 {
        field_0: 0
    };
    v29 = std::thread::Builder::spawn_unchecked(&v10, &v11);
    v24 = core::result::Result<T,E>::expect(&v29);
    v30 = struct40 {
        field_0: 0
    };
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v10.32 = 0;
    v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10, v46);
    if *((&v29 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v78
                field_8: <UNKNOWN>
            };
            v79 = std::sync::mpmc::Receiver<T>::recv(&v0, v77, v46);
            if v79 {
                v11 = 1;
                v12 = 1;
                v13 = v79;
                v76 = v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v13 = alloc::boxed::Box<T>::new(&v11);
                *(&v11.field_0 as &struct40) = struct40 {
                    field_0: v34 as u128
                    field_16: v13
                    field_24: 0
                    field_32: vvar_399{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v30, &v11, v46);
            }
        } while ((v29 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10, v46), *((&v29 as &char + 8) as &i64) != 3));
    }
    v10 = struct24 {
        field_0: v30.field_0 as i128
        field_16: v31
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v11, &v10, a2, 1);
    v80 = a0;
    *((v80 + 48) as &i128) = v24;
    v81 = *((&v24 as &char + 16) as &i64);
    *((v80 + 64) as &i64) = v81;
    v82 = *((&v11 as &char + 16) as &i128);
    *((v80 + 16) as &i320) = v11;
    *((v80 + 32) as &i128) = v82;
    *(v80 as &i128) = v1;
    *((v80 + 72) as &i64) = 0;
    return v81;
}
