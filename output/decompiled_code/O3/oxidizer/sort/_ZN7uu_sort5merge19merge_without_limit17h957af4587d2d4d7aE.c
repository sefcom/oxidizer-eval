fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct40, a2: u32, a3: u32) -> u64 {
    let v0: i256;  // [sp-0x280], Other Possible Types: struct16, struct32
    let v1: i64;  // [sp-0x278]
    let v2: i64;  // [sp-0x270]
    let v3: i128;  // [sp-0x250]
    let v4: i64;  // [sp-0x240], Other Possible Types: struct16
    let v5: i64;  // [sp-0x238]
    let v6: i64;  // [sp-0x230]
    let v7: i192;  // [sp-0x228], Other Possible Types: struct24
    let v8: struct16;  // [bp-0x210]
    let v9: i128;  // [sp-0x200], Other Possible Types: struct16
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i384;  // [sp-0x1e8], Other Possible Types: struct24, struct48
    let v13: i64;  // [sp-0x1b8]
    let v14: i128;  // [sp-0x1b0]
    let v15: i256;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40, struct56
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [sp-0x190]
    let v18: i64;  // [sp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [bp-0x178]
    let v21: i128;  // [sp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i128;  // [sp-0x138]
    let v25: i64;  // [sp-0x128]
    let v26: i256;  // [sp-0xd8], Other Possible Types: struct120, struct128, struct16, struct8, struct32, struct147
    let v27: i64;  // [sp-0xc8]
    let v28: i64;  // [sp-0xb8]
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i256;  // ymm0
    let v33: i128;  // xmm1
    let v34: i256;  // ymm1
    let v35: i256;  // ymm1
    let v36: i256;  // ymm2
    let v37: i256;  // ymm3
    let v38: i64;  // rbx
    let v39: i64;  // rbp
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: i128;  // xmm3
    let v51: i64;  // rax
    let v52: i64;  // r14
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

    v13 = a1;
    v15 = std::sync::mpmc::channel(a1, a2);
    v30 = v15;
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    v33 = *((&v15 as &char + 16) as &i128);
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
    v3 = v30;
    v14 = v33;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v4 = v16;
    v5 = v17;
    v6 = 0;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v9 = v16;
    v10 = v17;
    v11 = 0;
    v12 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v18 = v18;
        v17 = v17;
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
        v38 = v1;
        if v38 == 2 {
            break;
        }
        v39 = *((&v0 as &char + 24) as &i64);
        v15 = std::sync::mpmc::sync_channel(0x2, v40, v41);
        v42 = v15;
        v7 = v42;
        v9 = alloc::vec::Vec<T,A>::push(v17, v18);
        if v38 {
            v51 = a0;
            *((v51 + 8) as &i64) = v2;
            *((v51 + 16) as &i64) = v39;
            *(v51 as &i64) = 3;
            return v70;
        }
        v15 = struct56 {
            field_0: v31 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v43
            field_48: v39
        };
        v4 = alloc::vec::Vec<T,A>::push(&v15, v40);
        v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = v0;
        v25 = *((&v26 as &char + 112) as &i64);
        v44 = *((&v26 as &char + 96) as &i128);
        v24 = v44;
        v45 = *((&v26 as &char + 80) as &i128);
        v23 = v45;
        v46 = *((&v26 as &char + 64) as &i128);
        v22 = v46;
        v47 = v26;
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v26 as &char + 16) as &i128);
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v49 = *((&v26 as &char + 32) as &i128);
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v50 = *((&v26 as &char + 48) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v21 = v50;
        v20 = v49;
        v18 = v48;
        v16 = v47;
        v26 = std::sync::mpmc::Sender<T>::send(&v3, &v15, v41);
        core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
        v17 = v17;
        v18 = v18;
    }
    v52 = v6;
    if v52 {
        v53 = 0;
        do {
            v54 = v53;
            v55 = <usize as core::iter::range::Step>::forward_unchecked(v54);
            v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = v54;
            v25 = *((&v26 as &char + 112) as &i64);
            v56 = *((&v26 as &char + 96) as &i128);
            v24 = v56;
            v57 = *((&v26 as &char + 80) as &i128);
            v23 = v57;
            v58 = *((&v26 as &char + 64) as &i128);
            v22 = v58;
            v59 = v26;
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v26 as &char + 16) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *((&v26 as &char + 32) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v62 = *((&v26 as &char + 48) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v21 = v62;
            v20 = v61;
            v18 = v60;
            v16 = v59;
            v26 = std::sync::mpmc::Sender<T>::send(&v3, &v15, v41);
            core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
            v53 = v55;
        } while (v55 < v52);
    }
    v26 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v63 = v14;
    v15 = v63;
    v64 = v4;
    v65 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
    v17 = v64;
    v19 = v6;
    memcpy(&v20, &v26, 160);
    v27 = 0x8000000000000000;
    v26 = struct8 {
        field_0: 0
    };
    v12 = std::thread::Builder::spawn_unchecked(&v26, &v15);
    v7 = core::result::Result<T,E>::expect(&v12);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    v28 = 0;
    v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v40);
    if *((&v12 as &char + 8) as &i64) != 3 {
        do {
            *(&v8.field_0 as &struct16) = struct16 {
                field_0: v67
                field_8: *((&v12 as &char + 16) as &i64)
            };
            v68 = std::sync::mpmc::Receiver<T>::recv(&v8, v66, v40);
            if v68 {
                v15 = 1;
                v16 = 1;
                v17 = v68;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v8.field_0;
                v17 = alloc::boxed::Box<T>::new(&v15);
                v15 = struct40 {
                    field_0: v31 as u128
                    field_16: v17
                    field_24: 0
                    field_32: vvar_377{reg 56}
                };
                v0 = alloc::vec::Vec<T,A>::push(&v15, v40);
            }
        } while ((v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v40), *((&v12 as &char + 8) as &i64) != 3));
    }
    v26 = v0;
    v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v26, a2, 1);
    v69 = a0;
    *((v69 + 48) as &i128) = v7;
    v70 = *((&v7 as &char + 16) as &i64);
    *((v69 + 64) as &i64) = v70;
    v71 = *((&v15 as &char + 16) as &i128);
    *((v69 + 16) as &i256) = v15;
    *((v69 + 32) as &i128) = v71;
    *(v69 as &i128) = v3;
    *((v69 + 72) as &i64) = 0;
    return v70;
}
