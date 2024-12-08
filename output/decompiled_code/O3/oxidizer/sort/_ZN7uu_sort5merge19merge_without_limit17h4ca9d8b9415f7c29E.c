fn uu_sort::merge::merge_without_limit(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x290], Other Possible Types: struct24
    let v1: i128;  // [sp-0x270]
    let v2: i64;  // [sp-0x260]
    let v3: i64;  // [sp-0x258]
    let v4: i64;  // [sp-0x250]
    let v5: i128;  // [sp-0x248], Other Possible Types: struct24
    let v6: i128;  // [sp-0x238]
    let v7: struct40;  // [sp-0x220], Other Possible Types: i320
    let v9: i192;  // [sp-0x1f8], Other Possible Types: struct24, struct40
    let v10: i64;  // [sp-0x1d0], Other Possible Types: struct16
    let v11: i64;  // [sp-0x1c8]
    let v12: i64;  // [sp-0x1c0]
    let v13: i64;  // [sp-0x1b8]
    let v14: i128;  // [sp-0x1b0]
    let v15: i64;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct72, struct40
    let v16: i64;  // [sp-0x198]
    let v17: i64;  // [bp-0x190]
    let v18: i128;  // [bp-0x188]
    let v19: i64;  // [sp-0x180]
    let v20: i128;  // [bp-0x178]
    let v21: i128;  // [bp-0x168]
    let v22: i128;  // [sp-0x158]
    let v23: i128;  // [sp-0x148]
    let v24: i128;  // [sp-0x138]
    let v25: i64;  // [sp-0x128]
    let v26: i192;  // [sp-0xd8], Other Possible Types: struct24, struct120, struct128, struct147, struct32, struct8
    let v28: i64;  // r15
    let v29: i128;  // xmm0
    let v30: i256;  // ymm0
    let v31: i256;  // ymm0
    let v32: i128;  // xmm1
    let v33: i256;  // ymm1
    let v34: i256;  // ymm1
    let v35: i64;  // rbx
    let v36: i64;  // r14
    let v37: i256;  // ymm2
    let v38: i256;  // ymm3
    let v39: i64;  // r12
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v42: i64;  // rdx
    let v43: i64;  // rcx
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm1
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm2
    let v54: i128;  // xmm3
    let v55: i64;  // rax
    let v56: i64;  // r14
    let v58: i64;  // rbp
    let v59: i64;  // r13
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i128;  // xmm1
    let v65: i128;  // xmm2
    let v66: i128;  // xmm3
    let v67: i128;  // xmm0
    let v68: i128;  // xmm0
    let v69: i256;  // ymm0
    let v70: i64;  // rsi
    let v71: i64;  // rax
    let v72: i64;  // rcx
    let v73: i64;  // rax
    let v74: i128;  // xmm2

    v28 = a1;
    v13 = a1;
    v15 = std::sync::mpmc::channel(a1, a2);
    v29 = v15;
    v31 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29;
    v32 = *((&v15 as &char + 16) as &i128);
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v1 = v29;
    v14 = v32;
    v35 = *((v28 + 8) as &i64);
    v36 = *((v28 + 24) as &i64);
    v26 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v35, v36);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v2 = v16;
    v3 = v15.field_16;
    v4 = 0;
    v26 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v35, v36);
    v15 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v26, 0);
    v10 = v16;
    v11 = v15.field_16;
    v12 = 0;
    v7 = core::iter::traits::iterator::Iterator::enumerate(v28);
    loop {
        v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v7);
        if *((&v9 as &char + 8) as &i64) == 9223372036854775809 {
            break;
        }
        v39 = v9;
        v40 = *((&v9 as &char + 8) as &i128);
        v41 = *((&v9 as &char + 24) as &i128);
        v6 = v41;
        v5 = v40;
        v15 = std::sync::mpmc::sync_channel(2, v42, v43);
        v44 = v15;
        v0 = v44;
        v10 = alloc::vec::Vec<T,A>::push(v15.field_16, v15.field_24);
        v45 = *((&v5 as &char + 8) as &i128);
        if v15.field_16 == 0x8000000000000000 {
            v55 = a0;
            *((v55 + 8) as &i128) = v45;
            *(v55 as &i64) = 3;
            return v73;
        }
        v46 = v0;
        v15 = struct72 {
            field_0: v46
            field_16: v47
            field_24: v45
            field_40: v43
            field_48: 0
            field_56: 1
            field_64: 0
        };
        alloc::vec::Vec<T,A>::push(&v2, &v15, v42);
        v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v15 = v39;
        v25 = *((&v26 as &char + 112) as &i64);
        v48 = *((&v26 as &char + 96) as &i128);
        v24 = v48;
        v49 = *((&v26 as &char + 80) as &i128);
        v23 = v49;
        v50 = *((&v26 as &char + 64) as &i128);
        v22 = v50;
        v51 = v26;
        v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
        v52 = *((&v26 as &char + 16) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
        v53 = *((&v26 as &char + 32) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
        v54 = *((&v26 as &char + 48) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
        v21 = v54;
        v20 = v53;
        v18 = v52;
        v16 = v51;
        v26 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v43);
        core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
    }
    v56 = v4;
    if v56 {
        do {
            v58 = 0;
            v59 = <usize as core::iter::range::Step>::forward_unchecked(v58);
            v26 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v15 = v58;
            v25 = *((&v26 as &char + 112) as &i64);
            v60 = *((&v26 as &char + 96) as &i128);
            v24 = v60;
            v61 = *((&v26 as &char + 80) as &i128);
            v23 = v61;
            v62 = *((&v26 as &char + 64) as &i128);
            v22 = v62;
            v63 = v26;
            v31 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *((&v26 as &char + 16) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v65 = *((&v26 as &char + 32) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v66 = *((&v26 as &char + 48) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v21 = v66;
            v20 = v65;
            v18 = v64;
            v16 = v63;
            v26 = std::sync::mpmc::Sender<T>::send(&v1, &v15, v43);
            core::result::Result<T,E>::unwrap(&v26, "src/uu/sort/src/merge.rs");
        } while (v59 < v56);
    }
    v26 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v67 = v14;
    v15 = v67;
    v68 = v2;
    v69 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
    v17 = v68;
    v19 = v4;
    memcpy(&v20, &v26, 160);
    v26.field_16 = 0x8000000000000000;
    v26 = struct8 {
        field_0: 0
    };
    v9 = std::thread::Builder::spawn_unchecked(&v26, &v15);
    v5 = core::result::Result<T,E>::expect(&v9);
    v7 = struct40 {
        field_0: 0
    };
    v26 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v26.32 = 0;
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v42);
    if *((&v9 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v47
                field_8: <UNKNOWN>
            };
            v71 = std::sync::mpmc::Receiver<T>::recv(&v0, v70, v42);
            if v71 {
                v15 = 1;
                v16 = 1;
                v17 = v71;
                v69 = v69 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v17 = alloc::boxed::Box<T>::new(&v15);
                *(&v15.field_0 as &struct40) = struct40 {
                    field_0: v30 as u128
                    field_16: v17
                    field_24: 0
                    field_32: vvar_396{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v7, &v15, v42);
            }
        } while ((v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v26, v42), *((&v9 as &char + 8) as &i64) != 3));
    }
    *(&v26.field_0 as &struct24) = struct24 {
        field_0: v7.field_0 as i128
        field_16: v8
    };
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v15, &v26, a2, 1);
    v72 = a0;
    *((v72 + 48) as &i128) = v5;
    v73 = *((&v5 as &char + 16) as &i64);
    *((v72 + 64) as &i64) = v73;
    v74 = *((&v15 as &char + 16) as &i128);
    *((v72 + 16) as &i320) = v15;
    *((v72 + 32) as &i128) = v74;
    *(v72 as &i128) = v1;
    *((v72 + 72) as &i64) = 0;
    return v73;
}
