fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x2a0], Other Possible Types: struct24
    let v1: i128;  // [sp-0x280]
    let v2: i64;  // [sp-0x270]
    let v3: i64;  // [sp-0x268]
    let v4: i64;  // [sp-0x260]
    let v5: i128;  // [sp-0x258], Other Possible Types: struct24
    let v6: i128;  // [sp-0x248]
    let v7: i64;  // [sp-0x230], Other Possible Types: struct16
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: i320;  // [sp-0x218], Other Possible Types: struct40
    let v12: i64;  // [sp-0x1f0]
    let v13: i128;  // [sp-0x1e8]
    let v14: i448;  // [sp-0x1d8], Other Possible Types: struct24, struct56
    let v15: i64;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40, struct72
    let v16: i64;  // [sp-0x198]
    let v17: i128;  // [bp-0x190]
    let v18: i128;  // [bp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [bp-0x178]
    let v21: i128;  // [bp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i128;  // [sp-0x138]
    let v25: i64;  // [sp-0x128]
    let v26: i960;  // [sp-0xd8], Other Possible Types: struct16, struct128, struct120, struct147, struct8, struct32, struct24
    let v28: i128;  // xmm0
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v31: i128;  // xmm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm2
    let v35: i256;  // ymm3
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i64;  // rdx
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0
    let v48: i128;  // xmm1
    let v49: i128;  // xmm2
    let v50: i128;  // xmm3
    let v51: i64;  // rax
    let v52: i64;  // r14
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
    let v67: i64;  // rax
    let v68: i64;  // rcx
    let v69: i64;  // rax
    let v70: i128;  // xmm2

    v12 = a1;
    v15 = std::sync::mpmc::channel(a1, a2);
    v28 = v15;
    v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
    v31 = *((&v15 as &char + 16) as &i128);
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
    v1 = v28;
    v13 = v31;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v2 = v16;
    v3 = v15.field_16;
    v4 = 0;
    v26 = core::iter::traits::iterator::Iterator::size_hint();
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v7 = v16;
    v8 = v15.field_16;
    v9 = 0;
    v14 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14);
        if v10.field_8 == 9223372036854775809 {
            break;
        }
        v36 = *((&v10 as &char + 8) as &i128);
        v37 = *((&v10 as &char + 24) as &i128);
        v6 = v37;
        v5 = v36;
        v15 = std::sync::mpmc::sync_channel(2, v38, v39);
        v40 = v15;
        v0 = v40;
        v7 = alloc::vec::Vec<T,A>::push(v15.field_16, v15.field_24);
        v41 = *((&v5 as &char + 8) as &i128);
        if v15.field_16 == 0x8000000000000000 {
            v51 = a0;
            *((v51 + 8) as &i128) = v41;
            *(v51 as &i64) = 3;
            return v69;
        }
        v42 = v0;
        v15 = struct72 {
            field_0: v42
            field_16: v43
            field_24: v41
            field_40: v39
            field_48: 0
            field_56: 1
            field_64: 0
        };
        alloc::vec::Vec<T,A>::push(&v2, &v15, v38);
        v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = v10;
        v25 = *((&v26 as &char + 112) as &i64);
        v44 = *((&v26 as &char + 96) as &i128);
        v24 = v44;
        v45 = *((&v26 as &char + 80) as &i128);
        v23 = v45;
        v46 = *((&v26 as &char + 64) as &i128);
        v22 = v46;
        v47 = v26;
        v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v26 as &char + 16) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v49 = *((&v26 as &char + 32) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v50 = *((&v26 as &char + 48) as &i128);
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v21 = v50;
        v20 = v49;
        v18 = v48;
        v16 = v47;
        v26 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v39);
        core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
    }
    v52 = v4;
    if v52 {
        do {
            v54 = 0;
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
            v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v26 as &char + 16) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *((&v26 as &char + 32) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v62 = *((&v26 as &char + 48) as &i128);
            v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v21 = v62;
            v20 = v61;
            v18 = v60;
            v16 = v59;
            v26 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v39);
            core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
        } while (v55 < v52);
    }
    v26 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v63 = v13;
    v15 = v63;
    v64 = v2;
    v65 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
    v17 = v64;
    v19 = v4;
    memcpy(&v20, &v26, 160);
    v26.field_16 = 0x8000000000000000;
    v26 = struct8 {
        field_0: 0
    };
    v14 = std::thread::Builder::spawn_unchecked(&v26, &v15);
    v5 = core::result::Result<T,E>::expect(&v14);
    v10 = struct40 {
        field_0: 0
    };
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
    v26.32 = 0;
    v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v38);
    if *((&v14 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v43
                field_8: <UNKNOWN>
            };
            v67 = std::sync::mpmc::Receiver<T>::recv(&v0, v66, v38);
            if v67 {
                v15 = 1;
                v16 = 1;
                v17 = v67;
                v65 = v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v17 = alloc::boxed::Box<T>::new(&v15);
                *(&v15.field_0 as &struct40) = struct40 {
                    field_0: v29 as u128
                    field_16: v17
                    field_24: 0
                    field_32: vvar_390{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v10, &v15, v38);
            }
        } while ((v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v38), *((&v14 as &char + 8) as &i64) != 3));
    }
    v26 = struct24 {
        field_0: v10.field_0 as i128
        field_16: v11
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v15, &v26, a2, 1);
    v68 = a0;
    *((v68 + 48) as &i128) = v5;
    v69 = *((&v5 as &char + 16) as &i64);
    *((v68 + 64) as &i64) = v69;
    v70 = *((&v15 as &char + 16) as &i128);
    *((v68 + 16) as &i320) = v15;
    *((v68 + 32) as &i128) = v70;
    *(v68 as &i128) = v1;
    *((v68 + 72) as &i64) = 0;
    return v69;
}
