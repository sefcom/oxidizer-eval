fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x280], Other Possible Types: struct32, struct40
    let v2: i128;  // [sp-0x250]
    let v3: i64;  // [sp-0x240]
    let v4: i64;  // [sp-0x238]
    let v5: i64;  // [sp-0x230]
    let v6: i192;  // [sp-0x228], Other Possible Types: struct24
    let v7: i64;  // [sp-0x210]
    let v8: i64;  // [sp-0x208]
    let v9: i128;  // [sp-0x200], Other Possible Types: struct16
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i192;  // [sp-0x1e8], Other Possible Types: struct24, struct48
    let v13: i64;  // [sp-0x1b8]
    let v14: i128;  // [sp-0x1b0]
    let v15: i64;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct40, struct56
    let v16: i128;  // [sp-0x198]
    let v17: i64;  // [bp-0x190]
    let v18: i128;  // [bp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [bp-0x178]
    let v21: i128;  // [sp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i128;  // [sp-0x138]
    let v25: i64;  // [sp-0x128]
    let v26: i128;  // [sp-0xd8], Other Possible Types: struct16, struct128, struct120, struct32, struct24, struct8, struct147
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm2
    let v35: i256;  // ymm3
    let v36: i64;  // rbx
    let v37: i64;  // rbp
    let v38: i64;  // rdx
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v47: i128;  // xmm2
    let v48: i128;  // xmm3
    let v49: i64;  // rax
    let v50: i64;  // r14
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

    v13 = a1;
    v15 = std::sync::mpmc::channel(a1, a2);
    v28 = v15;
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v31 = *((&v15 as &char + 16) as &i128);
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
    v2 = v28;
    v14 = v31;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v3 = v16;
    v4 = v15.field_16;
    v5 = 0;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v9 = v16;
    v10 = v15.field_16;
    v11 = 0;
    v12 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
        v36 = v0.field_8;
        if v36 == 2 {
            break;
        }
        v37 = *((&v0 as &char + 24) as &i64);
        v15 = std::sync::mpmc::sync_channel(2, v38, v39);
        v40 = v15;
        v6 = v40;
        v9 = alloc::vec::Vec<T,A>::push(v15.field_16, v15.field_24);
        if v36 {
            v49 = a0;
            *((v49 + 8) as &struct32) = v0.16;
            *((v49 + 16) as &i64) = v37;
            *(v49 as &i64) = 3;
            return v68;
        }
        v15 = struct56 {
            field_0: v29 as u128
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v41
            field_48: v37
        };
        alloc::vec::Vec<T,A>::push(&v3, &v15, v38);
        v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = v0;
        v25 = *((&v26 as &char + 112) as &i64);
        v42 = *((&v26 as &char + 96) as &i128);
        v24 = v42;
        v43 = *((&v26 as &char + 80) as &i128);
        v23 = v43;
        v44 = *((&v26 as &char + 64) as &i128);
        v22 = v44;
        v45 = v26;
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
        v46 = *((&v26 as &char + 16) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v47 = *((&v26 as &char + 32) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v26 as &char + 48) as &i128);
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v21 = v48;
        v20 = v47;
        v18 = v46;
        v16 = v45;
        v26 = std::sync::mpmc::Sender<T>::send(&v2, &v15, v39);
        core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
    }
    v50 = v5;
    if v50 {
        do {
            v52 = 0;
            v53 = <usize as core::iter::range::Step>::forward_unchecked(v52);
            v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = v52;
            v25 = *((&v26 as &char + 112) as &i64);
            v54 = *((&v26 as &char + 96) as &i128);
            v24 = v54;
            v55 = *((&v26 as &char + 80) as &i128);
            v23 = v55;
            v56 = *((&v26 as &char + 64) as &i128);
            v22 = v56;
            v57 = v26;
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
            v58 = *((&v26 as &char + 16) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = *((&v26 as &char + 32) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v26 as &char + 48) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v21 = v60;
            v20 = v59;
            v18 = v58;
            v16 = v57;
            v26 = std::sync::mpmc::Sender<T>::send(&v2, &v15, v39);
            core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
        } while (v53 < v50);
    }
    v26 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v61 = v14;
    v15 = v61;
    v62 = v3;
    v63 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
    v17 = v62;
    v19 = v5;
    memcpy(&v20, &v26, 160);
    v26.field_16 = 0x8000000000000000;
    v26 = struct8 {
        field_0: 0
    };
    v12 = std::thread::Builder::spawn_unchecked(&v26, &v15);
    v6 = core::result::Result<T,E>::expect(&v12);
    v0 = struct40 {
        field_0: 0
    };
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v9);
    v26.32 = 0;
    v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v38);
    v64 = *((&v12 as &char + 8) as &i64);
    if v64 != 3 {
        do {
            v7 = v64;
            v8 = *((&v12 as &char + 16) as &i64);
            v66 = std::sync::mpmc::Receiver<T>::recv(&v7, v65, v38);
            if v66 {
                v15 = 1;
                v16 = 1;
                v17 = v66;
                v63 = v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v7;
                v17 = alloc::boxed::Box<T>::new(&v15);
                *(&v15.field_0 as &struct40) = struct40 {
                    field_0: v29 as u128
                    field_16: v17
                    field_24: 0
                    field_32: vvar_377{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v0, &v15, v38);
            }
        } while ((v12 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v38), v64 = *((&v12 as &char + 8) as &i64), v64 != 3));
    }
    v26 = struct24 {
        field_0: v0.field_0 as i128
        field_16: v1
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v15, &v26, a2, 1);
    v67 = a0;
    *((v67 + 48) as &i128) = v6;
    v68 = *((&v6 as &char + 16) as &i64);
    *((v67 + 64) as &i64) = v68;
    v69 = *((&v15 as &char + 16) as &i128);
    *((v67 + 16) as &i320) = v15;
    *((v67 + 32) as &i128) = v69;
    *(v67 as &i128) = v2;
    *((v67 + 72) as &i64) = 0;
    return v68;
}
