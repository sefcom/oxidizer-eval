fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i256;  // [sp-0x260], Other Possible Types: struct24, struct32
    let v1: i128;  // [sp-0x230]
    let v2: i128;  // [sp-0x220], Other Possible Types: struct16
    let v3: i64;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i192;  // [sp-0x208], Other Possible Types: struct24, struct40
    let v6: i128;  // [sp-0x1f0], Other Possible Types: struct24
    let v7: i64;  // [sp-0x1d8]
    let v8: i64;  // [sp-0x1d0]
    let v9: i64;  // [sp-0x1c8], Other Possible Types: struct16
    let v10: i64;  // [sp-0x1c0]
    let v11: i64;  // [sp-0x1b8]
    let v12: i128;  // [sp-0x1b0]
    let v13: i64;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct40, struct56
    let v14: i128;  // [sp-0x198]
    let v15: i64;  // [bp-0x190]
    let v16: i128;  // [bp-0x188]
    let v17: i64;  // [sp-0x180]
    let v18: i128;  // [bp-0x178]
    let v19: i128;  // [sp-0x168]
    let v20: i128;  // [sp-0x158]
    let v21: i128;  // [sp-0x148]
    let v22: i128;  // [sp-0x138]
    let v23: i64;  // [sp-0x128]
    let v24: i960;  // [sp-0xd8], Other Possible Types: struct120, struct128, struct24, struct8, struct147, struct32
    let v26: i128;  // xmm0
    let v27: i256;  // ymm0
    let v28: i256;  // ymm0
    let v29: i128;  // xmm1
    let v30: i256;  // ymm1
    let v31: i256;  // ymm1
    let v32: i256;  // ymm2
    let v33: i256;  // ymm3
    let v34: i64;  // rbp
    let v35: i64;  // r14
    let v36: i64;  // r12
    let v37: i64;  // r13
    let v38: i64;  // rdx
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i128;  // xmm3
    let v48: i64;  // r14
    let v49: i64;  // rax
    let v51: i64;  // rbp
    let v52: i64;  // r13
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm1
    let v58: i128;  // xmm2
    let v59: i128;  // xmm3
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i256;  // ymm0
    let v63: i64;  // rax
    let v64: i64;  // rsi
    let v65: i64;  // rax
    let v66: i64;  // rcx
    let v67: i64;  // rax
    let v68: i128;  // xmm2

    v13 = std::sync::mpmc::channel(a1, a2);
    v26 = v13;
    v28 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
    v29 = *((&v13 as &char + 16) as &i128);
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v1 = v26;
    v12 = v29;
    v24 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v13 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v24, 0);
    v2 = v14;
    v3 = v13.field_16;
    v4 = 0;
    v24 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v13 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v24, 0);
    v9 = v14;
    v10 = v13.field_16;
    v11 = 0;
    v5 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
        v34 = *((&v0 as &char + 8) as &i64);
        if v34 == 2 {
            break;
        }
        v35 = v0;
        v36 = *((&v0 as &char + 16) as &i64);
        v37 = *((&v0 as &char + 24) as &i64);
        v13 = std::sync::mpmc::sync_channel(2, v38, v39);
        v40 = v13;
        v6 = v40;
        v9 = alloc::vec::Vec<T,A>::push(v13.field_16, v13.field_24);
        if v34 {
            v49 = a0;
            *((v49 + 8) as &i64) = v36;
            *((v49 + 16) as &i64) = v37;
            *(v49 as &i64) = 3;
            return v67;
        }
        v13 = struct56 {
            field_0: v27 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v36
            field_48: v37
        };
        v2 = alloc::vec::Vec<T,A>::push(&v13, v38);
        v24 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v13 = v35;
        v23 = *((&v24 as &char + 112) as &i64);
        v41 = *((&v24 as &char + 96) as &i128);
        v22 = v41;
        v42 = *((&v24 as &char + 80) as &i128);
        v21 = v42;
        v43 = *((&v24 as &char + 64) as &i128);
        v20 = v43;
        v44 = v24;
        v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v45 = *((&v24 as &char + 16) as &i128);
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
        v46 = *((&v24 as &char + 32) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v47 = *((&v24 as &char + 48) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v19 = v47;
        v18 = v46;
        v16 = v45;
        v14 = v44;
        v24 = std::sync::mpmc::Sender<T>::send(&v1, &v13, v39);
        core::result::Result<T,E>::unwrap(&v24, "src/uu/sort/src/merge.rs");
    }
    v48 = v4;
    if v48 {
        do {
            v51 = 0;
            v52 = <usize as core::iter::range::Step>::forward_unchecked(v51);
            v24 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v13 = v51;
            v23 = *((&v24 as &char + 112) as &i64);
            v53 = *((&v24 as &char + 96) as &i128);
            v22 = v53;
            v54 = *((&v24 as &char + 80) as &i128);
            v21 = v54;
            v55 = *((&v24 as &char + 64) as &i128);
            v20 = v55;
            v56 = v24;
            v28 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
            v57 = *((&v24 as &char + 16) as &i128);
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
            v58 = *((&v24 as &char + 32) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = *((&v24 as &char + 48) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v19 = v59;
            v18 = v58;
            v16 = v57;
            v14 = v56;
            v24 = std::sync::mpmc::Sender<T>::send(&v1, &v13, v39);
            core::result::Result<T,E>::unwrap(&v24, "src/uu/sort/src/merge.rs");
        } while (v52 < v48);
    }
    v24 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a3);
    v60 = v12;
    v13 = v60;
    v61 = v2;
    v62 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
    v15 = v61;
    v17 = v4;
    memcpy(&v18, &v24, 160);
    v24.field_16 = 0x8000000000000000;
    v24 = struct8 {
        field_0: 0
    };
    v0 = std::thread::Builder::spawn_unchecked(&v24, &v13);
    v6 = core::result::Result<T,E>::expect(&v0);
    v5 = struct40 {
        field_0: 0
    };
    v24 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    v24.32 = 0;
    v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v24, v38);
    v63 = *((&v0 as &char + 8) as &i64);
    if v63 != 3 {
        do {
            v7 = v63;
            v8 = *((&v0 as &char + 16) as &i64);
            v65 = std::sync::mpmc::Receiver<T>::recv(&v7, v64, v38);
            if v65 {
                v13 = 1;
                v13.field_8 = 1;
                v15 = v65;
                v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
                v15 = alloc::boxed::Box<T>::new(&v13);
                *(&v13.field_0 as &struct40) = struct40 {
                    field_0: v27 as u128
                    field_16: v15
                    field_24: 0
                    field_32: vvar_351{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v5, &v13, v38);
            }
        } while ((v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v24, v38), v63 = *((&v0 as &char + 8) as &i64), v63 != 3));
    }
    v24 = v5.field_0;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v13, &v24, a3, 1);
    v66 = a0;
    *((v66 + 48) as &i128) = v6;
    v67 = *((&v6 as &char + 16) as &i64);
    *((v66 + 64) as &i64) = v67;
    v68 = *((&v13 as &char + 16) as &i128);
    *((v66 + 16) as &i320) = v13;
    *((v66 + 32) as &i128) = v68;
    *(v66 as &i128) = v1;
    *((v66 + 72) as &i64) = 0;
    return v67;
}
