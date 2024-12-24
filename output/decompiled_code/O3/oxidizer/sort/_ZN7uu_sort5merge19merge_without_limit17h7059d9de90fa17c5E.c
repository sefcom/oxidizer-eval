fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x280], Other Possible Types: struct40, struct32
    let v1: i128;  // [sp-0x250]
    let v2: i64;  // [sp-0x240]
    let v3: i64;  // [sp-0x238]
    let v4: i64;  // [sp-0x230]
    let v5: i128;  // [sp-0x228], Other Possible Types: struct24
    let v6: i64;  // [sp-0x210]
    let v7: i64;  // [sp-0x208]
    let v8: i64;  // [sp-0x200], Other Possible Types: struct16
    let v9: i64;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1f0]
    let v11: i384;  // [sp-0x1e8], Other Possible Types: struct24, struct48
    let v12: i64;  // [sp-0x1b8]
    let v13: i128;  // [sp-0x1b0]
    let v14: i64;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct56, struct40
    let v15: i128;  // [sp-0x198]
    let v16: i64;  // [bp-0x190]
    let v17: i128;  // [bp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i128;  // [bp-0x178]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i128;  // [sp-0x138]
    let v24: i64;  // [sp-0x128]
    let v25: i1176;  // [sp-0xd8], Other Possible Types: struct128, struct120, struct16, struct147, struct32, struct8
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm1
    let v31: i256;  // ymm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm2
    let v34: i256;  // ymm3
    let v35: i64;  // rbx
    let v36: i64;  // rbp
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v46: i128;  // xmm2
    let v47: i128;  // xmm3
    let v48: i64;  // rax
    let v49: i64;  // r14
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

    v12 = a1;
    v14 = std::sync::mpmc::channel(a1, a2);
    v27 = v14;
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v30 = *((&v14 as &char + 16) as &i128);
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    v1 = v27;
    v13 = v30;
    v25 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v2 = v15;
    v3 = v14.field_16;
    v4 = 0;
    v25 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v8 = v15;
    v9 = v14.field_16;
    v10 = 0;
    v11 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        v35 = v0.field_8;
        if v35 == 2 {
            break;
        }
        v36 = *((&v0 as &char + 24) as &i64);
        v14 = std::sync::mpmc::sync_channel(2, v37, v38);
        v39 = v14;
        v5 = v39;
        v8 = alloc::vec::Vec<T,A>::push(v14.field_16, v14.field_24);
        if v35 {
            v48 = a0;
            *((v48 + 8) as &struct32) = v0.16;
            *((v48 + 16) as &i64) = v36;
            *(v48 as &i64) = 3;
            return v67;
        }
        v14 = struct56 {
            field_0: v28 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v40
            field_48: v36
        };
        alloc::vec::Vec<T,A>::push(&v2, &v14, v37);
        v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v0;
        v24 = *((&v25 as &char + 112) as &i64);
        v41 = *((&v25 as &char + 96) as &i128);
        v23 = v41;
        v42 = *((&v25 as &char + 80) as &i128);
        v22 = v42;
        v43 = *((&v25 as &char + 64) as &i128);
        v21 = v43;
        v44 = v25;
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
        v45 = *((&v25 as &char + 16) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
        v46 = *((&v25 as &char + 32) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v47 = *((&v25 as &char + 48) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v20 = v47;
        v19 = v46;
        v17 = v45;
        v15 = v44;
        v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v38);
        core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
    }
    v49 = v4;
    if v49 {
        do {
            v51 = 0;
            v52 = <usize as core::iter::range::Step>::forward_unchecked(v51);
            v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v51;
            v24 = *((&v25 as &char + 112) as &i64);
            v53 = *((&v25 as &char + 96) as &i128);
            v23 = v53;
            v54 = *((&v25 as &char + 80) as &i128);
            v22 = v54;
            v55 = *((&v25 as &char + 64) as &i128);
            v21 = v55;
            v56 = v25;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
            v57 = *((&v25 as &char + 16) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
            v58 = *((&v25 as &char + 32) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = *((&v25 as &char + 48) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v20 = v59;
            v19 = v58;
            v17 = v57;
            v15 = v56;
            v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v38);
            core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
        } while (v52 < v49);
    }
    v25 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v60 = v13;
    v14 = v60;
    v61 = v2;
    v62 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
    v16 = v61;
    v18 = v4;
    memcpy(&v19, &v25, 160);
    v25.field_16 = 0x8000000000000000;
    v25 = struct8 {
        field_0: 0
    };
    v11 = std::thread::Builder::spawn_unchecked(&v25, &v14);
    v5 = core::result::Result<T,E>::expect(&v11);
    v0 = struct40 {
        field_0: 0
    };
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v8);
    v25.32 = 0;
    v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v37);
    v63 = *((&v11 as &char + 8) as &i64);
    if v63 != 3 {
        do {
            v6 = v63;
            v7 = *((&v11 as &char + 16) as &i64);
            v65 = std::sync::mpmc::Receiver<T>::recv(&v6, v64, v37);
            if v65 {
                v14 = 1;
                v15 = 1;
                v16 = v65;
                v62 = v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6;
                v16 = alloc::boxed::Box<T>::new(&v14);
                *(&v14.field_0 as &struct40) = struct40 {
                    field_0: v28 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_377{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v0, &v14, v37);
            }
        } while ((v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v37), v63 = *((&v11 as &char + 8) as &i64), v63 != 3));
    }
    v25 = v0.field_0;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v14, &v25, a2, 1);
    v66 = a0;
    *((v66 + 48) as &i128) = v5;
    v67 = *((&v5 as &char + 16) as &i64);
    *((v66 + 64) as &i64) = v67;
    v68 = *((&v14 as &char + 16) as &i128);
    *((v66 + 16) as &i320) = v14;
    *((v66 + 32) as &i128) = v68;
    *(v66 as &i128) = v1;
    *((v66 + 72) as &i64) = 0;
    return v67;
}
