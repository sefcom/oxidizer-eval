fn uu_sort::merge::merge_without_limit(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x2f0], Other Possible Types: struct24
    let v1: i128;  // [sp-0x2d0]
    let v2: struct16;  // [bp-0x2c0]
    let v3: i64;  // [sp-0x2b0]
    let v4: i64;  // [sp-0x2a8], Other Possible Types: struct16
    let v5: i64;  // [sp-0x2a0]
    let v6: i64;  // [sp-0x298]
    let v7: i64;  // [sp-0x290]
    let v8: i64;  // [sp-0x288]
    let v9: i128;  // [sp-0x280]
    let v10: i320;  // [sp-0x270], Other Possible Types: struct24, struct40
    let v11: i1024;  // [sp-0x248], Other Possible Types: struct24, struct120, struct128, struct147, struct8, struct32
    let v12: i256;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct40
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x190]
    let v15: i128;  // [bp-0x188]
    let v16: i64;  // [sp-0x180]
    let v17: i128;  // [sp-0x178]
    let v18: i128;  // [sp-0x168]
    let v19: i128;  // [sp-0x158]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x140]
    let v22: i128;  // [sp-0x138]
    let v23: i64;  // [sp-0x130]
    let v24: i64;  // [sp-0x128]
    let v25: i64;  // [sp-0xd0]
    let v26: i64;  // [bp-0xc8]
    let v27: i128;  // [sp-0xb8]
    let v28: i128;  // [sp-0xa8]
    let v29: i128;  // [sp-0x98]
    let v30: i192;  // [sp-0x88], Other Possible Types: struct24, struct88
    let v32: i64;  // r15
    let v33: i128;  // xmm0
    let v34: i256;  // ymm0
    let v35: i256;  // ymm0
    let v36: i128;  // xmm1
    let v37: i256;  // ymm1
    let v38: i256;  // ymm1
    let v39: i64;  // rbx
    let v40: i64;  // r14
    let v41: i256;  // ymm2
    let v42: i256;  // ymm3
    let v43: i64;  // r12
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i128;  // xmm3
    let v49: i64;  // rdx
    let v50: i64;  // rcx
    let v51: i128;  // xmm0
    let v52: i128;  // xmm0
    let v53: i128;  // xmm1
    let v54: i128;  // xmm2
    let v55: i128;  // xmm3
    let v56: i128;  // xmm1
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm1
    let v62: i128;  // xmm2
    let v63: i128;  // xmm3
    let v64: i64;  // rax
    let v65: i64;  // r14
    let v67: i64;  // rbp
    let v68: i64;  // r13
    let v69: i128;  // xmm0
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i128;  // xmm0
    let v73: i128;  // xmm1
    let v74: i128;  // xmm2
    let v75: i128;  // xmm3
    let v76: i128;  // xmm0
    let v77: i128;  // xmm0
    let v78: i256;  // ymm0
    let v79: i64;  // rsi
    let v81: i64;  // rax
    let v82: i64;  // rcx
    let v83: i64;  // rax
    let v84: i128;  // xmm2
    let v85: i64;  // [sp-0xd8]

    v32 = a1;
    v7 = a1;
    v12 = std::sync::mpmc::channel(a1, a2);
    v33 = v12;
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
    v36 = *((&v12 as &char + 16) as &i128);
    v38 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
    v1 = v33;
    v9 = v36;
    v39 = *((v32 + 8) as &i64);
    v40 = *((v32 + 24) as &i64);
    v11 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v39, v40);
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v2 = struct16 {
        field_0: v13
        field_8: v14
    };
    v3 = 0;
    v11 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v39, v40);
    v12 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v4 = v13;
    v5 = v12.field_16;
    v6 = 0;
    v10 = core::iter::traits::iterator::Iterator::enumerate(v32);
    v8 = 9223372036854775809;
    loop {
        v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v10);
        if *((&v30 as &char + 8) as &i64) == v8 {
            break;
        }
        v43 = v30;
        v44 = *((&v30 as &char + 72) as &i128);
        v29 = v44;
        v45 = *((&v30 as &char + 8) as &i128);
        v46 = *((&v30 as &char + 24) as &i128);
        v47 = *((&v30 as &char + 40) as &i128);
        v48 = *((&v30 as &char + 56) as &i128);
        v28 = v48;
        v27 = v47;
        v26 = v46;
        v85 = v45;
        v12 = std::sync::mpmc::sync_channel(2, v49, v50);
        v51 = v12;
        v0 = v51;
        v4 = alloc::vec::Vec<T,A>::push(v12.field_16, v12.field_24);
        v52 = *((&v85 as &char + 8) as &i128);
        if v12.field_16 == 0x8000000000000000 {
            v64 = a0;
            *((v64 + 8) as &i128) = v52;
            *(v64 as &i64) = 3;
            return v83;
        }
        v20 = *((&v29 as &char + 8) as &i64);
        v53 = *((&v26 as &char + 8) as &i128);
        v54 = *((&v27 as &char + 8) as &i128);
        v55 = *((&v28 as &char + 8) as &i128);
        v19 = v55;
        v18 = v54;
        v17 = v53;
        v56 = v0;
        v12 = v56;
        v12.field_16 = vvar_550{stack -216};
        v15 = v52;
        v21 = 0;
        v22 = 1;
        v23 = 0;
        alloc::vec::Vec<T,A>::push(&v2, &v12, v49);
        v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v12 = v43;
        v24 = *((&v11 as &char + 112) as &i64);
        v57 = *((&v11 as &char + 96) as &i128);
        v22 = v57;
        v58 = *((&v11 as &char + 80) as &i128);
        v20 = v58;
        v59 = *((&v11 as &char + 64) as &i128);
        v19 = v59;
        v60 = v11;
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
        v61 = *((&v11 as &char + 16) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
        v62 = *((&v11 as &char + 32) as &i128);
        v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
        v63 = *((&v11 as &char + 48) as &i128);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
        v18 = v63;
        v17 = v62;
        v15 = v61;
        v13 = v60;
        v11 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v50);
        core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
    }
    v65 = v3;
    if v65 {
        do {
            v67 = 0;
            v68 = <usize as core::iter::range::Step>::forward_unchecked(v67);
            v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v12 = v67;
            v24 = *((&v11 as &char + 112) as &i64);
            v69 = *((&v11 as &char + 96) as &i128);
            v22 = v69;
            v70 = *((&v11 as &char + 80) as &i128);
            v20 = v70;
            v71 = *((&v11 as &char + 64) as &i128);
            v19 = v71;
            v72 = v11;
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v72;
            v73 = *((&v11 as &char + 16) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73;
            v74 = *((&v11 as &char + 32) as &i128);
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74;
            v75 = *((&v11 as &char + 48) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75;
            v18 = v75;
            v17 = v74;
            v15 = v73;
            v13 = v72;
            v11 = std::sync::mpmc::Sender<T>::send(&v1, &v12, v50);
            core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        } while (v68 < v65);
    }
    v11 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v76 = v9;
    v12 = v76;
    v77 = *(&v2.field_0 as &i128);
    v78 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
    v14 = v77;
    v16 = v3;
    memcpy(&v17, &v11, 160);
    v11.field_16 = 0x8000000000000000;
    v11 = struct8 {
        field_0: 0
    };
    v30 = std::thread::Builder::spawn_unchecked(&v11, &v12);
    v10 = core::result::Result<T,E>::expect(&v30);
    v85 = 0;
    v25 = 8;
    v26 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v4);
    v11.32 = 0;
    v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v49);
    if *((&v30 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v80
                field_8: <UNKNOWN>
            };
            v81 = std::sync::mpmc::Receiver<T>::recv(&v0, v79, v49);
            if v81 {
                v12 = 1;
                v13 = 1;
                v14 = v81;
                v78 = v78 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v14 = alloc::boxed::Box<T>::new(&v12);
                *(&v12.field_0 as &struct40) = struct40 {
                    field_0: v34 as u128
                    field_16: v14
                    field_24: 0
                    field_32: vvar_405{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v85, &v12, v49);
            }
        } while ((v30 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v49), *((&v30 as &char + 8) as &i64) != 3));
    }
    *(&v11.field_0 as &struct24) = struct24 {
        field_0: v85
        field_16: v26
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v12, &v11, a2, 1);
    v82 = a0;
    *((v82 + 48) as &i192) = v10;
    v83 = *((&v10 as &char + 16) as &i64);
    *((v82 + 64) as &i64) = v83;
    v84 = *((&v12 as &char + 16) as &i128);
    *((v82 + 16) as &i320) = v12;
    *((v82 + 32) as &i128) = v84;
    *(v82 as &i128) = v1;
    *((v82 + 72) as &i64) = 0;
    return v83;
}
