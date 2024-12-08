fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i256;  // [sp-0x260], Other Possible Types: struct24, struct32
    let v1: i128;  // [sp-0x230]
    let v2: i64;  // [sp-0x220]
    let v3: i64;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i192;  // [sp-0x208], Other Possible Types: struct24, struct40
    let v7: i192;  // [sp-0x1f0], Other Possible Types: struct24
    let v8: i64;  // [sp-0x1d8]
    let v9: i64;  // [sp-0x1d0]
    let v10: i64;  // [sp-0x1c8], Other Possible Types: struct16
    let v11: i64;  // [sp-0x1c0]
    let v12: i64;  // [sp-0x1b8]
    let v13: i128;  // [sp-0x1b0]
    let v14: i256;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct40, struct56
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [bp-0x190]
    let v17: i128;  // [bp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i128;  // [bp-0x178]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i128;  // [sp-0x138]
    let v24: i64;  // [sp-0x128]
    let v25: i192;  // [sp-0xd8], Other Possible Types: struct24, struct128, struct120, struct8, struct147, struct32
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm1
    let v31: i256;  // ymm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm2
    let v34: i256;  // ymm3
    let v35: i64;  // rbp
    let v36: i64;  // r14
    let v37: i64;  // r12
    let v38: i64;  // r13
    let v39: i64;  // rdx
    let v40: i64;  // rcx
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i128;  // xmm3
    let v49: i64;  // r14
    let v50: i64;  // rax
    let v52: i64;  // rbp
    let v53: i64;  // r13
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm1
    let v59: i128;  // xmm2
    let v60: i128;  // xmm3
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i256;  // ymm0
    let v64: i64;  // rax
    let v65: i64;  // rsi
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // rax
    let v69: i128;  // xmm2

    v14 = std::sync::mpmc::channel(a1, a2);
    v27 = v14;
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v30 = *((&v14 as &char + 16) as &i128);
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    v1 = v27;
    v13 = v30;
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v2 = v15;
    v3 = v14.field_16;
    v4 = 0;
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v10 = v15;
    v11 = v14.field_16;
    v12 = 0;
    v5 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
        v35 = *((&v0 as &char + 8) as &i64);
        if v35 == 2 {
            break;
        }
        v36 = v0;
        v37 = *((&v0 as &char + 16) as &i64);
        v38 = *((&v0 as &char + 24) as &i64);
        v14 = std::sync::mpmc::sync_channel(2, v39, v40);
        v41 = v14;
        v7 = v41;
        v10 = alloc::vec::Vec<T,A>::push(v14.field_16, v14.field_24);
        if v35 {
            v50 = a0;
            *((v50 + 8) as &i64) = v37;
            *((v50 + 16) as &i64) = v38;
            *(v50 as &i64) = 3;
            return v68;
        }
        v14 = struct56 {
            field_0: v28 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v37
            field_48: v38
        };
        alloc::vec::Vec<T,A>::push(&v2, &v14, v39);
        v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v36;
        v24 = *((&v25 as &char + 112) as &i64);
        v42 = *((&v25 as &char + 96) as &i128);
        v23 = v42;
        v43 = *((&v25 as &char + 80) as &i128);
        v22 = v43;
        v44 = *((&v25 as &char + 64) as &i128);
        v21 = v44;
        v45 = v25;
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
        v46 = *((&v25 as &char + 16) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v47 = *((&v25 as &char + 32) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v25 as &char + 48) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v20 = v48;
        v19 = v47;
        v17 = v46;
        v15 = v45;
        v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v40);
        core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
    }
    v49 = v4;
    if v49 {
        do {
            v52 = 0;
            v53 = <usize as core::iter::range::Step>::forward_unchecked(v52);
            v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v52;
            v24 = *((&v25 as &char + 112) as &i64);
            v54 = *((&v25 as &char + 96) as &i128);
            v23 = v54;
            v55 = *((&v25 as &char + 80) as &i128);
            v22 = v55;
            v56 = *((&v25 as &char + 64) as &i128);
            v21 = v56;
            v57 = v25;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
            v58 = *((&v25 as &char + 16) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = *((&v25 as &char + 32) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v25 as &char + 48) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v20 = v60;
            v19 = v59;
            v17 = v58;
            v15 = v57;
            v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v40);
            core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
        } while (v53 < v49);
    }
    v25 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a3);
    v61 = v13;
    v14 = v61;
    v62 = v2;
    v63 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
    v16 = v62;
    v18 = v4;
    memcpy(&v19, &v25, 160);
    v25.field_16 = 0x8000000000000000;
    v25 = struct8 {
        field_0: 0
    };
    v0 = std::thread::Builder::spawn_unchecked(&v25, &v14);
    v7 = core::result::Result<T,E>::expect(&v0);
    v5 = struct40 {
        field_0: 0
    };
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v25.32 = 0;
    v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v39);
    v64 = *((&v0 as &char + 8) as &i64);
    if v64 != 3 {
        do {
            v8 = v64;
            v9 = *((&v0 as &char + 16) as &i64);
            v66 = std::sync::mpmc::Receiver<T>::recv(&v8, v65, v39);
            if v66 {
                v14 = 1;
                v14.field_8 = 1;
                v16 = v66;
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8;
                v16 = alloc::boxed::Box<T>::new(&v14);
                *(&v14.field_0 as &struct40) = struct40 {
                    field_0: v28 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_351{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v5, &v14, v39);
            }
        } while ((v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v39), v64 = *((&v0 as &char + 8) as &i64), v64 != 3));
    }
    v25 = struct24 {
        field_0: v5.field_0 as i128
        field_16: v6
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v14, &v25, a3, 1);
    v67 = a0;
    *((v67 + 48) as &i128) = v7;
    v68 = *((&v7 as &char + 16) as &i64);
    *((v67 + 64) as &i64) = v68;
    v69 = *((&v14 as &char + 16) as &i128);
    *((v67 + 16) as &i320) = v14;
    *((v67 + 32) as &i128) = v69;
    *(v67 as &i128) = v1;
    *((v67 + 72) as &i64) = 0;
    return v68;
}
