fn uu_sort::merge::merge_without_limit(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [bp-0x2a0], Other Possible Types: i128
    let v1: i128;  // [sp-0x280]
    let v2: i64;  // [sp-0x270]
    let v3: i64;  // [sp-0x268]
    let v4: i64;  // [sp-0x260]
    let v5: i192;  // [sp-0x258], Other Possible Types: struct24
    let v6: i128;  // [sp-0x248]
    let v7: i128;  // [sp-0x230], Other Possible Types: struct16
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: struct40;  // [sp-0x218], Other Possible Types: i320
    let v11: i64;  // [sp-0x1f0]
    let v12: i128;  // [sp-0x1e8]
    let v13: i192;  // [sp-0x1d8], Other Possible Types: struct24, struct56
    let v14: i64;  // [sp-0x1a0], Other Possible Types: Result<struct16, struct8>, struct32, struct40, struct72
    let v15: i64;  // [sp-0x198]
    let v16: i64;  // [bp-0x190]
    let v17: i128;  // [bp-0x188]
    let v18: i64;  // [sp-0x180]
    let v19: i128;  // [bp-0x178]
    let v20: i128;  // [bp-0x168]
    let v21: i128;  // [sp-0x158]
    let v22: i128;  // [sp-0x148]
    let v23: i128;  // [sp-0x138]
    let v24: i64;  // [sp-0x128]
    let v25: i1176;  // [sp-0xd8], Other Possible Types: struct128, struct120, struct24, struct8, struct147, struct32
    let v27: i64;  // r15
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v34: i64;  // rbx
    let v35: i64;  // r14
    let v36: i256;  // ymm2
    let v37: i256;  // ymm3
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i64;  // rdx
    let v41: i64;  // rcx
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i128;  // xmm2
    let v52: i128;  // xmm3
    let v53: i64;  // rax
    let v54: i64;  // r14
    let v56: i64;  // rbp
    let v57: i64;  // r13
    let v58: i128;  // xmm0
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm1
    let v63: i128;  // xmm2
    let v64: i128;  // xmm3
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: i256;  // ymm0
    let v68: i64;  // rsi
    let v69: i64;  // rax
    let v70: i64;  // rcx
    let v71: i64;  // rax
    let v72: i128;  // xmm2

    v27 = a1;
    v11 = a1;
    v14 = std::sync::mpmc::channel(a1, a2);
    v28 = v14;
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v31 = *((&v14 as &char + 16) as &i128);
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
    v1 = v28;
    v12 = v31;
    v34 = *((v27 + 8) as &i64);
    v35 = *((v27 + 24) as &i64);
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v34, v35);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v2 = v15;
    v3 = v14.field_16;
    v4 = 0;
    v25 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v34, v35);
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v7 = v15;
    v8 = v14.field_16;
    v9 = 0;
    v13 = core::iter::traits::iterator::Iterator::enumerate(v27);
    loop {
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13);
        if v10.field_8 == 9223372036854775809 {
            break;
        }
        v38 = *((&v10 as &char + 8) as &i128);
        v39 = *((&v10 as &char + 24) as &i128);
        v6 = v39;
        v5 = v38;
        v14 = std::sync::mpmc::sync_channel(2, v40, v41);
        v42 = v14;
        v0 = v42;
        v7 = alloc::vec::Vec<T,A>::push(v14.field_16, v14.field_24);
        v43 = *((&v5 as &char + 8) as &i128);
        if v14.field_16 == 0x8000000000000000 {
            v53 = a0;
            *((v53 + 8) as &i128) = v43;
            *(v53 as &i64) = 3;
            return v71;
        }
        v44 = v0;
        v14 = struct72 {
            field_0: v44
            field_16: v45
            field_24: v43
            field_40: v41
            field_48: 0
            field_56: 1
            field_64: 0
        };
        alloc::vec::Vec<T,A>::push(&v2, &v14, v40);
        v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v10;
        v24 = *((&v25 as &char + 112) as &i64);
        v46 = *((&v25 as &char + 96) as &i128);
        v23 = v46;
        v47 = *((&v25 as &char + 80) as &i128);
        v22 = v47;
        v48 = *((&v25 as &char + 64) as &i128);
        v21 = v48;
        v49 = v25;
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v50 = *((&v25 as &char + 16) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v51 = *((&v25 as &char + 32) as &i128);
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
        v52 = *((&v25 as &char + 48) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
        v20 = v52;
        v19 = v51;
        v17 = v50;
        v15 = v49;
        v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v41);
        core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
    }
    v54 = v4;
    if v54 {
        do {
            v56 = 0;
            v57 = <usize as core::iter::range::Step>::forward_unchecked(v56);
            v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v56;
            v24 = *((&v25 as &char + 112) as &i64);
            v58 = *((&v25 as &char + 96) as &i128);
            v23 = v58;
            v59 = *((&v25 as &char + 80) as &i128);
            v22 = v59;
            v60 = *((&v25 as &char + 64) as &i128);
            v21 = v60;
            v61 = v25;
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v62 = *((&v25 as &char + 16) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v63 = *((&v25 as &char + 32) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *((&v25 as &char + 48) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v20 = v64;
            v19 = v63;
            v17 = v62;
            v15 = v61;
            v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v41);
            core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
        } while (v57 < v54);
    }
    v25 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v65 = v12;
    v14 = v65;
    v66 = v2;
    v67 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
    v16 = v66;
    v18 = v4;
    memcpy(&v19, &v25, 160);
    v25.field_16 = 0x8000000000000000;
    v25 = struct8 {
        field_0: 0
    };
    v13 = std::thread::Builder::spawn_unchecked(&v25, &v14);
    v5 = core::result::Result<T,E>::expect(&v13);
    v10 = struct40 {
        field_0: 0
    };
    v25 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
    v25.32 = 0;
    v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v40);
    if *((&v13 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v45
                field_8: <UNKNOWN>
            };
            v69 = std::sync::mpmc::Receiver<T>::recv(&v0, v68, v40);
            if v69 {
                v14 = 1;
                v15 = 1;
                v16 = v69;
                v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v16 = alloc::boxed::Box<T>::new(&v14);
                *(&v14.field_0 as &struct40) = struct40 {
                    field_0: v29 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_396{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v10, &v14, v40);
            }
        } while ((v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v40), *((&v13 as &char + 8) as &i64) != 3));
    }
    v25 = v10.field_0;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v14, &v25, a2, 1);
    v70 = a0;
    *((v70 + 48) as &i128) = v5;
    v71 = *((&v5 as &char + 16) as &i64);
    *((v70 + 64) as &i64) = v71;
    v72 = *((&v14 as &char + 16) as &i128);
    *((v70 + 16) as &i320) = v14;
    *((v70 + 32) as &i128) = v72;
    *(v70 as &i128) = v1;
    *((v70 + 72) as &i64) = 0;
    return v71;
}
