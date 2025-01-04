fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i192;  // [sp-0x260], Other Possible Types: struct24, struct32
    let v1: i128;  // [sp-0x230]
    let v2: i128;  // [sp-0x220], Other Possible Types: struct16
    let v3: i64;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208], Other Possible Types: struct24, struct16
    let v6: i64;  // [sp-0x200]
    let v7: i64;  // [sp-0x1f8]
    let v8: i128;  // [sp-0x1f0], Other Possible Types: struct24
    let v9: struct16;  // [bp-0x1d8]
    let v10: i128;  // [sp-0x1c8], Other Possible Types: struct16
    let v11: i64;  // [sp-0x1c0]
    let v12: i64;  // [sp-0x1b8]
    let v13: i128;  // [sp-0x1b0]
    let v14: i64;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40, struct56
    let v15: i128;  // [sp-0x198]
    let v16: i64;  // [sp-0x190]
    let v17: i64;  // [sp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i128;  // [bp-0x178]
    let v20: i128;  // [sp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i128;  // [sp-0x138]
    let v24: i64;  // [sp-0x128]
    let v25: i1024;  // [sp-0xd8], Other Possible Types: struct128, struct120, struct24, struct8, struct147, struct32
    let v26: i64;  // [sp-0xc8]
    let v27: i64;  // [sp-0xb8]
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v32: i128;  // xmm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm1
    let v35: i256;  // ymm2
    let v36: i256;  // ymm3
    let v37: i64;  // rbp
    let v38: i64;  // r14
    let v39: i64;  // r12
    let v40: i64;  // r13
    let v41: i64;  // rdx
    let v42: i64;  // rcx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: i128;  // xmm3
    let v51: i64;  // r14
    let v52: i64;  // rax
    let v53: i64;  // rbp
    let v54: i64;  // rbp
    let v55: i64;  // r13
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm1
    let v61: i128;  // xmm2
    let v62: i128;  // xmm3
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i256;  // ymm0
    let v66: i64;  // rsi
    let v68: i64;  // rax
    let v69: i64;  // rcx
    let v70: i64;  // rax
    let v71: i128;  // xmm2

    v14 = std::sync::mpmc::channel(a1, a2);
    v29 = v14;
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v32 = *((&v14 as &char + 16) as &i128);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v1 = v29;
    v13 = v32;
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v2 = v15;
    v3 = v16;
    v4 = 0;
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v10 = v15;
    v11 = v16;
    v12 = 0;
    v5 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v17 = v17;
        v16 = v16;
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v5);
        v37 = *((&v0 as &char + 8) as &i64);
        if v37 == 2 {
            break;
        }
        v38 = v0;
        v39 = *((&v0 as &char + 16) as &i64);
        v40 = *((&v0 as &char + 24) as &i64);
        v14 = std::sync::mpmc::sync_channel(0x2, v41, v42);
        v43 = v14;
        v8 = v43;
        v10 = alloc::vec::Vec<T,A>::push(v16, v17);
        if v37 {
            v52 = a0;
            *((v52 + 8) as &i64) = v39;
            *((v52 + 16) as &i64) = v40;
            *(v52 as &i64) = 3;
            return v70;
        }
        v14 = struct56 {
            field_0: v30 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v39
            field_48: v40
        };
        v2 = alloc::vec::Vec<T,A>::push(&v14, v41);
        v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v38;
        v24 = *((&v25 as &char + 112) as &i64);
        v44 = *((&v25 as &char + 96) as &i128);
        v23 = v44;
        v45 = *((&v25 as &char + 80) as &i128);
        v22 = v45;
        v46 = *((&v25 as &char + 64) as &i128);
        v21 = v46;
        v47 = v25;
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v25 as &char + 16) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v49 = *((&v25 as &char + 32) as &i128);
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v50 = *((&v25 as &char + 48) as &i128);
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v20 = v50;
        v19 = v49;
        v17 = v48;
        v15 = v47;
        v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v42);
        core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
        v16 = v16;
        v17 = v17;
    }
    v51 = v4;
    if v51 {
        v53 = 0;
        do {
            v54 = v53;
            v55 = <usize as core::iter::range::Step>::forward_unchecked(v54);
            v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v54;
            v24 = *((&v25 as &char + 112) as &i64);
            v56 = *((&v25 as &char + 96) as &i128);
            v23 = v56;
            v57 = *((&v25 as &char + 80) as &i128);
            v22 = v57;
            v58 = *((&v25 as &char + 64) as &i128);
            v21 = v58;
            v59 = v25;
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v25 as &char + 16) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *((&v25 as &char + 32) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v62 = *((&v25 as &char + 48) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v20 = v62;
            v19 = v61;
            v17 = v60;
            v15 = v59;
            v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v42);
            core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
            v53 = v55;
        } while (v55 < v51);
    }
    v25 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a3);
    v63 = v13;
    v14 = v63;
    v64 = v2;
    v65 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
    v16 = v64;
    v18 = v4;
    memcpy(&v19, &v25, 160);
    v26 = 0x8000000000000000;
    v25 = struct8 {
        field_0: 0
    };
    v0 = std::thread::Builder::spawn_unchecked(&v25, &v14);
    v8 = core::result::Result<T,E>::expect(&v0);
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v27 = 0;
    v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v41);
    if *((&v0 as &char + 8) as &i64) != 3 {
        do {
            v9 = struct16 {
                field_0: v67
                field_8: *((&v0 as &char + 16) as &i64)
            };
            v68 = std::sync::mpmc::Receiver<T>::recv(&v9, v66, v41);
            if v68 {
                v14 = 1;
                v15 = 1;
                v16 = v68;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v9.field_0 as &i128);
                v16 = alloc::boxed::Box<T>::new(&v14);
                v14 = struct40 {
                    field_0: v30 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_351{reg 56}
                };
                v5 = alloc::vec::Vec<T,A>::push(&v14, v41);
            }
        } while ((v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v41), *((&v0 as &char + 8) as &i64) != 3));
    }
    v25 = v5;
    v14 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v25, a3, 1);
    v69 = a0;
    *((v69 + 48) as &i128) = v8;
    v70 = *((&v8 as &char + 16) as &i64);
    *((v69 + 64) as &i64) = v70;
    v71 = *((&v14 as &char + 16) as &i128);
    *((v69 + 16) as &i256) = v14;
    *((v69 + 32) as &i128) = v71;
    *(v69 as &i128) = v1;
    *((v69 + 72) as &i64) = 0;
    return v70;
}
