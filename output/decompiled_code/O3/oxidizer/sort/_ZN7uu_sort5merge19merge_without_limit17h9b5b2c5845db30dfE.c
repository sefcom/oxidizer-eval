fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct32, a2: u32, a3: u32) -> u64 {
    let v0: struct16;  // [bp-0x290], Other Possible Types: i128
    let v1: i128;  // [sp-0x270]
    let v2: i128;  // [sp-0x260], Other Possible Types: struct16
    let v3: i64;  // [sp-0x258]
    let v4: i64;  // [sp-0x250]
    let v5: i128;  // [sp-0x248], Other Possible Types: struct24
    let v6: i128;  // [sp-0x238]
    let v7: i64;  // [sp-0x220], Other Possible Types: struct40, struct16
    let v8: i64;  // [sp-0x218]
    let v9: i64;  // [sp-0x210]
    let v10: i192;  // [sp-0x1f8], Other Possible Types: struct24, struct40
    let v11: i128;  // [sp-0x1d0], Other Possible Types: struct16
    let v12: i64;  // [sp-0x1c8]
    let v13: i64;  // [sp-0x1c0]
    let v14: i64;  // [sp-0x1b8]
    let v15: i128;  // [sp-0x1b0]
    let v16: i256;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40, struct72
    let v17: i64;  // [sp-0x198]
    let v18: i64;  // [sp-0x190]
    let v19: i128;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i128;  // [bp-0x178]
    let v22: i128;  // [bp-0x168]
    let v23: i128;  // [sp-0x158]
    let v24: i128;  // [sp-0x148]
    let v25: i128;  // [sp-0x138]
    let v26: i64;  // [sp-0x128]
    let v27: i1176;  // [sp-0xd8], Other Possible Types: struct128, struct24, struct120, struct147, struct8, struct32
    let v28: i64;  // [sp-0xc8]
    let v29: i64;  // [sp-0xb8]
    let v31: i64;  // r15
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i128;  // xmm1
    let v36: i256;  // ymm1
    let v37: i256;  // ymm1
    let v38: i64;  // rbx
    let v39: i64;  // r14
    let v40: i256;  // ymm2
    let v41: i256;  // ymm3
    let v42: i64;  // r12
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i64;  // rdx
    let v46: i64;  // rcx
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm1
    let v51: i128;  // xmm0
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0
    let v54: i128;  // xmm0
    let v55: i128;  // xmm1
    let v56: i128;  // xmm2
    let v57: i128;  // xmm3
    let v58: i64;  // rax
    let v59: i64;  // r14
    let v60: i64;  // rbp
    let v61: i64;  // rbp
    let v62: i64;  // r13
    let v63: i128;  // xmm0
    let v64: i128;  // xmm0
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0
    let v67: i128;  // xmm1
    let v68: i128;  // xmm2
    let v69: i128;  // xmm3
    let v70: i128;  // xmm0
    let v71: i128;  // xmm0
    let v72: i256;  // ymm0
    let v73: i64;  // rsi
    let v74: i64;  // rax
    let v75: i64;  // rcx
    let v76: i64;  // rax
    let v77: i128;  // xmm2

    v31 = a1;
    v14 = a1;
    v16 = std::sync::mpmc::channel(a1, a2);
    v32 = v16;
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v35 = *((&v16 as &char + 16) as &i128);
    v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35;
    v1 = v32;
    v15 = v35;
    v38 = *((v31 + 8) as &i64);
    v39 = *((v31 + 24) as &i64);
    v27 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v38, v39);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, 0);
    v2 = v17;
    v3 = v18;
    v4 = 0;
    v27 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(v38, v39);
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, 0);
    v11 = v17;
    v12 = v18;
    v13 = 0;
    v7 = core::iter::traits::iterator::Iterator::enumerate(v31);
    loop {
        v18 = v18;
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v7);
        if *((&v10 as &char + 8) as &i64) == 9223372036854775809 {
            break;
        }
        v42 = v10;
        v43 = *((&v10 as &char + 8) as &i128);
        v44 = *((&v10 as &char + 24) as &i128);
        v6 = v44;
        v5 = v43;
        v16 = std::sync::mpmc::sync_channel(0x2, v45, v46);
        v47 = v16;
        v0 = v47;
        v11 = alloc::vec::Vec<T,A>::push(v18, v19);
        v48 = *((&v5 as &char + 8) as &i128);
        if v18 == 0x8000000000000000 {
            v58 = a0;
            *((v58 + 8) as &i128) = v48;
            *(v58 as &i64) = 3;
            return v76;
        }
        v49 = v0;
        v16 = struct72 {
            field_0: v49
            field_16: v50
            field_24: v48
            field_40: v46
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v16, v45);
        v27 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v16 = v42;
        v26 = *((&v27 as &char + 112) as &i64);
        v51 = *((&v27 as &char + 96) as &i128);
        v25 = v51;
        v52 = *((&v27 as &char + 80) as &i128);
        v24 = v52;
        v53 = *((&v27 as &char + 64) as &i128);
        v23 = v53;
        v54 = v27;
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
        v55 = *((&v27 as &char + 16) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55;
        v56 = *((&v27 as &char + 32) as &i128);
        v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
        v57 = *((&v27 as &char + 48) as &i128);
        v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57;
        v22 = v57;
        v21 = v56;
        v19 = v55;
        v17 = v54;
        v27 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v46);
        core::result::Result<T,E>::unwrap(&v27, "src/uu/sort/src/merge.rs");
        v18 = v18;
    }
    v59 = v4;
    if v59 {
        v60 = 0;
        do {
            v61 = v60;
            v62 = <usize as core::iter::range::Step>::forward_unchecked(v61);
            v27 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v16 = v61;
            v26 = *((&v27 as &char + 112) as &i64);
            v63 = *((&v27 as &char + 96) as &i128);
            v25 = v63;
            v64 = *((&v27 as &char + 80) as &i128);
            v24 = v64;
            v65 = *((&v27 as &char + 64) as &i128);
            v23 = v65;
            v66 = v27;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66;
            v67 = *((&v27 as &char + 16) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
            v68 = *((&v27 as &char + 32) as &i128);
            v40 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v68;
            v69 = *((&v27 as &char + 48) as &i128);
            v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v69;
            v22 = v69;
            v21 = v68;
            v19 = v67;
            v17 = v66;
            v27 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v46);
            core::result::Result<T,E>::unwrap(&v27, "src/uu/sort/src/merge.rs");
            v60 = v62;
        } while (v62 < v59);
    }
    v27 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v70 = v15;
    v16 = v70;
    v71 = v2;
    v72 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v70 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v71;
    v18 = v71;
    v20 = v4;
    memcpy(&v21, &v27, 160);
    v28 = 0x8000000000000000;
    v27 = struct8 {
        field_0: 0
    };
    v10 = std::thread::Builder::spawn_unchecked(&v27, &v16);
    v5 = core::result::Result<T,E>::expect(&v10);
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v27 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v29 = 0;
    v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v45);
    if *((&v10 as &char + 8) as &i64) != 3 {
        do {
            v0 = struct16 {
                field_0: v50
                field_8: *((&v10 as &char + 16) as &i64)
            };
            v74 = std::sync::mpmc::Receiver<T>::recv(&v0, v73, v45);
            if v74 {
                v16 = 1;
                v17 = 1;
                v18 = v74;
                v72 = v72 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                v18 = alloc::boxed::Box<T>::new(&v16);
                *(&v16.field_0 as &struct40) = struct40 {
                    field_0: v33 as u128
                    field_16: v18
                    field_24: 0
                    field_32: vvar_396{reg 56}
                };
                v7 = alloc::vec::Vec<T,A>::push(&v16, v45);
            }
        } while ((v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v45), *((&v10 as &char + 8) as &i64) != 3));
    }
    v27 = v7;
    v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v27, a2, 1);
    v75 = a0;
    *((v75 + 48) as &i128) = v5;
    v76 = *((&v5 as &char + 16) as &i64);
    *((v75 + 64) as &i64) = v76;
    v77 = *((&v16 as &char + 16) as &i128);
    *((v75 + 16) as &i256) = v16;
    *((v75 + 32) as &i128) = v77;
    *(v75 as &i128) = v1;
    *((v75 + 72) as &i64) = 0;
    return v76;
}
