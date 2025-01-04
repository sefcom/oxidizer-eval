fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct48, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x308], Other Possible Types: struct16
    let v1: i128;  // [sp-0x2e8]
    let v2: i64;  // [sp-0x2d8], Other Possible Types: struct16
    let v3: i64;  // [sp-0x2d0]
    let v4: i64;  // [sp-0x2c8]
    let v5: i128;  // [sp-0x2c0], Other Possible Types: struct16
    let v6: i64;  // [sp-0x2b8]
    let v7: i64;  // [sp-0x2b0]
    let v8: i64;  // [sp-0x2a8]
    let v9: i64;  // [sp-0x2a0]
    let v10: i128;  // [sp-0x298]
    let v11: i192;  // [sp-0x288], Other Possible Types: struct24, struct120, struct128, struct32, struct147, struct8
    let v12: i64;  // [sp-0x278]
    let v13: i64;  // [sp-0x268]
    let v14: i128;  // [sp-0x1e0], Other Possible Types: struct32, Result<struct16, struct8>, struct40
    let v15: i64;  // [sp-0x1d8]
    let v16: i64;  // [sp-0x1d0]
    let v17: i128;  // [sp-0x1c8]
    let v18: i64;  // [sp-0x1c0]
    let v19: i128;  // [sp-0x1b8]
    let v20: i128;  // [sp-0x1a8]
    let v21: i128;  // [sp-0x198]
    let v22: i128;  // [sp-0x188]
    let v23: i64;  // [sp-0x180]
    let v24: i128;  // [sp-0x178]
    let v25: i64;  // [sp-0x170]
    let v26: i64;  // [sp-0x168]
    let v27: i128;  // [sp-0x118], Other Possible Types: struct16
    let v28: i64;  // [sp-0x110]
    let v29: i64;  // [bp-0x108]
    let v30: i128;  // [sp-0xf8]
    let v31: i128;  // [sp-0xe8]
    let v32: i128;  // [sp-0xd8]
    let v33: i192;  // [sp-0xc0], Other Possible Types: struct24, struct56
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
    v14 = std::sync::mpmc::channel(a1, a2);
    v37 = v14;
    v39 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
    v40 = *((&v14 as &char + 16) as &i128);
    v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
    v1 = v37;
    v10 = v40;
    v43 = *((v36 + 8) as &i64);
    v44 = *((v36 + 24) as &i64);
    v11 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v43, v44);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v2 = v15;
    v3 = v16;
    v4 = 0;
    v11 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v43, v44);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v11, 0);
    v5 = v15;
    v6 = v16;
    v7 = 0;
    v33 = core::iter::traits::iterator::Iterator::enumerate(v36);
    v9 = 9223372036854775809;
    loop {
        v16 = v16;
        v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v33);
        if *((&v34 as &char + 8) as &i64) == v9 {
            break;
        }
        v47 = v34;
        v48 = *((&v34 as &char + 72) as &i128);
        v32 = v48;
        v49 = *((&v34 as &char + 8) as &i128);
        v50 = *((&v34 as &char + 24) as &i128);
        v51 = *((&v34 as &char + 40) as &i128);
        v52 = *((&v34 as &char + 56) as &i128);
        v31 = v52;
        v30 = v51;
        v29 = v50;
        v27 = v49;
        v14 = std::sync::mpmc::sync_channel(0x2, v53, v54);
        v55 = v14;
        v0 = v55;
        v5 = alloc::vec::Vec<T,A>::push(v16, v17);
        v56 = *((&v27 as &char + 8) as &i128);
        if v16 == 0x8000000000000000 {
            v68 = a0;
            *((v68 + 8) as &i128) = v56;
            *(v68 as &i64) = 3;
            return v87;
        }
        v22 = *((&v32 as &char + 8) as &i64);
        v57 = *((&v29 as &char + 8) as &i128);
        v58 = *((&v30 as &char + 8) as &i128);
        v59 = *((&v31 as &char + 8) as &i128);
        v21 = v59;
        v20 = v58;
        v19 = v57;
        v60 = v0;
        v14 = v60;
        v16 = v27;
        v17 = v56;
        v23 = 0;
        v24 = 1;
        v25 = 0;
        v2 = alloc::vec::Vec<T,A>::push(&v14, v53);
        v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v47;
        v26 = *((&v11 as &char + 112) as &i64);
        v61 = *((&v11 as &char + 96) as &i128);
        v24 = v61;
        v62 = *((&v11 as &char + 80) as &i128);
        v22 = v62;
        v63 = *((&v11 as &char + 64) as &i128);
        v21 = v63;
        v64 = v11;
        v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
        v65 = *((&v11 as &char + 16) as &i128);
        v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
        v66 = *((&v11 as &char + 32) as &i128);
        v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
        v67 = *((&v11 as &char + 48) as &i128);
        v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
        v20 = v67;
        v19 = v66;
        v17 = v65;
        v15 = v64;
        v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v54);
        core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
        v16 = v16;
    }
    v69 = v4;
    if v69 {
        v70 = 0;
        do {
            v71 = v70;
            v72 = <usize as core::iter::range::Step>::forward_unchecked(v71);
            v11 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v71;
            v26 = *((&v11 as &char + 112) as &i64);
            v73 = *((&v11 as &char + 96) as &i128);
            v24 = v73;
            v74 = *((&v11 as &char + 80) as &i128);
            v22 = v74;
            v75 = *((&v11 as &char + 64) as &i128);
            v21 = v75;
            v76 = v11;
            v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v73 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v74 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v76;
            v77 = *((&v11 as &char + 16) as &i128);
            v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v77;
            v78 = *((&v11 as &char + 32) as &i128);
            v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v78;
            v79 = *((&v11 as &char + 48) as &i128);
            v46 = v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v79;
            v20 = v79;
            v19 = v78;
            v17 = v77;
            v15 = v76;
            v11 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v54);
            core::result::Result<T,E>::unwrap(&v11, "src/uu/sort/src/merge.rs");
            v70 = v72;
        } while (v72 < v69);
    }
    v11 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v80 = v10;
    v14 = v80;
    v81 = v2;
    v82 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v81;
    v16 = v81;
    v18 = v4;
    memcpy(&v19, &v11, 160);
    v12 = 0x8000000000000000;
    v11 = struct8 {
        field_0: 0
    };
    v34 = std::thread::Builder::spawn_unchecked(&v11, &v14);
    v33 = core::result::Result<T,E>::expect(&v34);
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v5);
    v13 = 0;
    v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v53);
    if *((&v34 as &char + 8) as &i64) != 3 {
        do {
            v0 = struct16 {
                field_0: v84
                field_8: *((&v34 as &char + 16) as &i64)
            };
            v85 = std::sync::mpmc::Receiver<T>::recv(&v0, v83, v53);
            if v85 {
                v14 = 1;
                v15 = 1;
                v16 = v85;
                v82 = v82 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v16 = alloc::boxed::Box<T>::new(&v14);
                v14 = struct40 {
                    field_0: v38 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_405{reg 56}
                };
                v27 = alloc::vec::Vec<T,A>::push(&v14, v53);
            }
        } while ((v34 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11, v53), *((&v34 as &char + 8) as &i64) != 3));
    }
    v11 = v27;
    v14 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v11, a2, 1);
    v86 = a0;
    *((v86 + 48) as &i192) = v33;
    v87 = *((&v33 as &char + 16) as &i64);
    *((v86 + 64) as &i64) = v87;
    v88 = *((&v14 as &char + 16) as &i128);
    *((v86 + 16) as &i256) = v14;
    *((v86 + 32) as &i128) = v88;
    *(v86 as &i128) = v1;
    *((v86 + 72) as &i64) = 0;
    return v87;
}
