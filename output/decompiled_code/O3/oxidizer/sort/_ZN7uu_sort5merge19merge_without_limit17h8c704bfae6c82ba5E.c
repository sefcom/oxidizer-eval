fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct32, a2: u32, a3: u32) -> u64 {
    let v0: struct16;  // [bp-0x2f0], Other Possible Types: i128
    let v1: i128;  // [sp-0x2d0]
    let v2: i64;  // [sp-0x2c0], Other Possible Types: struct16
    let v3: i64;  // [sp-0x2b8]
    let v4: i64;  // [sp-0x2b0]
    let v5: i64;  // [sp-0x2a8], Other Possible Types: struct16
    let v6: i64;  // [sp-0x2a0]
    let v7: i64;  // [sp-0x298]
    let v8: i64;  // [sp-0x290]
    let v9: i64;  // [sp-0x288]
    let v10: i128;  // [sp-0x280]
    let v11: i192;  // [sp-0x270], Other Possible Types: struct40, struct24
    let v12: i1024;  // [sp-0x248], Other Possible Types: struct120, struct24, struct128, struct8, struct147, struct32
    let v13: i64;  // [sp-0x238]
    let v14: i64;  // [sp-0x228]
    let v15: i64;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190]
    let v18: i128;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [sp-0x178]
    let v21: i128;  // [sp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i64;  // [sp-0x140]
    let v25: i128;  // [sp-0x138]
    let v26: i64;  // [sp-0x130]
    let v27: i64;  // [sp-0x128]
    let v28: i128;  // [sp-0xd8], Other Possible Types: struct16
    let v29: i64;  // [sp-0xd0]
    let v30: i128;  // [bp-0xc8]
    let v31: i128;  // [sp-0xb8]
    let v32: i128;  // [sp-0xa8]
    let v33: i128;  // [sp-0x98]
    let v34: i192;  // [sp-0x88], Other Possible Types: struct24, struct88
    let v36: i64;  // r15
    let v37: i128;  // xmm0
    let v38: i256;  // ymm0
    let v39: i256;  // ymm0
    let v40: i128;  // xmm1
    let v41: i256;  // ymm1
    let v42: i256;  // ymm1
    let v43: i64;  // rbx
    let v44: i64;  // r14
    let v45: i256;  // ymm2
    let v46: i256;  // ymm3
    let v47: i64;  // r12
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v53: i64;  // rdx
    let v54: i64;  // rcx
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i128;  // xmm2
    let v59: i128;  // xmm3
    let v60: i128;  // xmm1
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm1
    let v66: i128;  // xmm2
    let v67: i128;  // xmm3
    let v68: i64;  // rax
    let v69: i64;  // r14
    let v70: i64;  // rbp
    let v71: i64;  // rbp
    let v72: i64;  // r13
    let v73: i128;  // xmm0
    let v74: i128;  // xmm0
    let v75: i128;  // xmm0
    let v76: i128;  // xmm0
    let v77: i128;  // xmm1
    let v78: i128;  // xmm2
    let v79: i128;  // xmm3
    let v80: i128;  // xmm0
    let v81: i128;  // xmm0
    let v82: i256;  // ymm0
    let v83: i64;  // rsi
    let v85: i64;  // rax
    let v86: i64;  // rcx
    let v87: i64;  // rax
    let v88: i128;  // xmm2

    v36 = a1;
    v8 = a1;
    v15 = std::sync::mpmc::channel(a1, a2);
    v37 = v15;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
    v40 = *((&v15 as &char + 16) as &i128);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
    v1 = v37;
    v10 = v40;
    v43 = *((v36 + 8) as &i64);
    v44 = *((v36 + 24) as &i64);
    v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v43, v44);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v12, 0);
    v2 = v16;
    v3 = v17;
    v4 = 0;
    v12 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v43, v44);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v12, 0);
    v5 = v16;
    v6 = v17;
    v7 = 0;
    v11 = core::iter::traits::iterator::Iterator::enumerate(v36);
    v9 = 9223372036854775809;
    loop {
        v17 = v17;
        v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        if *((&v34 as &char + 8) as &i64) == v9 {
            break;
        }
        v47 = v34;
        v48 = *((&v34 as &char + 72) as &i128);
        v33 = v48;
        v49 = *((&v34 as &char + 8) as &i128);
        v50 = *((&v34 as &char + 24) as &i128);
        v51 = *((&v34 as &char + 40) as &i128);
        v52 = *((&v34 as &char + 56) as &i128);
        v32 = v52;
        v31 = v51;
        v30 = v50;
        v28 = v49;
        v15 = std::sync::mpmc::sync_channel(0x2, v53, v54);
        v55 = v15;
        v0 = v55;
        v5 = alloc::vec::Vec<T,A>::push(v17, v18);
        v56 = *((&v28 as &char + 8) as &i128);
        if v17 == 0x8000000000000000 {
            v68 = a0;
            *((v68 + 8) as &i128) = v56;
            *(v68 as &i64) = 3;
            return v87;
        }
        v23 = *((&v33 as &char + 8) as &i64);
        v57 = *((&v30 as &char + 8) as &i128);
        v58 = *((&v31 as &char + 8) as &i128);
        v59 = *((&v32 as &char + 8) as &i128);
        v22 = v59;
        v21 = v58;
        v20 = v57;
        v60 = v0;
        v15 = v60;
        v17 = v28;
        v18 = v56;
        v24 = 0;
        v25 = 1;
        v26 = 0;
        v2 = alloc::vec::Vec<T,A>::push(&v15, v53);
        v12 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = v47;
        v27 = *((&v12 as &char + 112) as &i64);
        v61 = *((&v12 as &char + 96) as &i128);
        v25 = v61;
        v62 = *((&v12 as &char + 80) as &i128);
        v23 = v62;
        v63 = *((&v12 as &char + 64) as &i128);
        v22 = v63;
        v64 = v12;
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v65 = *((&v12 as &char + 16) as &i128);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v66 = *((&v12 as &char + 32) as &i128);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
        v67 = *((&v12 as &char + 48) as &i128);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
        v21 = v67;
        v20 = v66;
        v18 = v65;
        v16 = v64;
        v12 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v54);
        core::result::Result<T,E>::unwrap(&v12, "src/uu/sort/src/merge.rs");
        v17 = v17;
    }
    v69 = v4;
    if v69 {
        v70 = 0;
        do {
            v71 = v70;
            v72 = <usize as core::iter::range::Step>::forward_unchecked(v71);
            v12 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = v71;
            v27 = *((&v12 as &char + 112) as &i64);
            v73 = *((&v12 as &char + 96) as &i128);
            v25 = v73;
            v74 = *((&v12 as &char + 80) as &i128);
            v23 = v74;
            v75 = *((&v12 as &char + 64) as &i128);
            v22 = v75;
            v76 = v12;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            v77 = *((&v12 as &char + 16) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
            v78 = *((&v12 as &char + 32) as &i128);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78;
            v79 = *((&v12 as &char + 48) as &i128);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79;
            v21 = v79;
            v20 = v78;
            v18 = v77;
            v16 = v76;
            v12 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v54);
            core::result::Result<T,E>::unwrap(&v12, "src/uu/sort/src/merge.rs");
            v70 = v72;
        } while (v72 < v69);
    }
    v12 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v80 = v10;
    v15 = v80;
    v81 = v2;
    v82 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81;
    v17 = v81;
    v19 = v4;
    memcpy(&v20, &v12, 160);
    v13 = 0x8000000000000000;
    v12 = struct8 {
        field_0: 0
    };
    v34 = std::thread::Builder::spawn_unchecked(&v12, &v15);
    v11 = core::result::Result<T,E>::expect(&v34);
    v28 = 0;
    v29 = 8;
    v30 = 0;
    v12 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v14 = 0;
    v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12, v53);
    if *((&v34 as &char + 8) as &i64) != 3 {
        do {
            v0 = struct16 {
                field_0: v84
                field_8: *((&v34 as &char + 16) as &i64)
            };
            v85 = std::sync::mpmc::Receiver<T>::recv(&v0, v83, v53);
            if v85 {
                v15 = 1;
                v16 = 1;
                v17 = v85;
                v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v17 = alloc::boxed::Box<T>::new(&v15);
                *(&v15.field_0 as &struct40) = struct40 {
                    field_0: v38 as u128
                    field_16: v17
                    field_24: 0
                    field_32: vvar_405{reg 56}
                };
                v28 = alloc::vec::Vec<T,A>::push(&v15, v53);
            }
        } while ((v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12, v53), *((&v34 as &char + 8) as &i64) != 3));
    }
    v12 = v28;
    v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v12, a2, 1);
    v86 = a0;
    *((v86 + 48) as &i192) = v11;
    v87 = *((&v11 as &char + 16) as &i64);
    *((v86 + 64) as &i64) = v87;
    v88 = *((&v15 as &char + 16) as &i128);
    *((v86 + 16) as &i256) = v15;
    *((v86 + 32) as &i128) = v88;
    *(v86 as &i128) = v1;
    *((v86 + 72) as &i64) = 0;
    return v87;
}
