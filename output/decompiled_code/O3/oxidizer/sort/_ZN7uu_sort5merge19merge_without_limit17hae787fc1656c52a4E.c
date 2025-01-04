fn uu_sort::merge::merge_without_limit(a0: &Result<struct80, struct24>, a1: &struct48, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x2a0], Other Possible Types: struct16
    let v1: i128;  // [sp-0x280]
    let v2: i64;  // [sp-0x270], Other Possible Types: struct16
    let v3: i64;  // [sp-0x268]
    let v4: i64;  // [sp-0x260]
    let v5: i192;  // [sp-0x258], Other Possible Types: struct24
    let v6: i128;  // [sp-0x248]
    let v7: i128;  // [sp-0x230], Other Possible Types: struct16
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: i64;  // [sp-0x218], Other Possible Types: struct16, struct40
    let v11: i64;  // [sp-0x210]
    let v12: i64;  // [sp-0x208]
    let v13: i64;  // [sp-0x1f0]
    let v14: i128;  // [sp-0x1e8]
    let v15: i192;  // [sp-0x1d8], Other Possible Types: struct24, struct56
    let v16: i64;  // [sp-0x1a0], Other Possible Types: struct32, Result<struct16, struct8>, struct40, struct72
    let v17: i128;  // [sp-0x198]
    let v18: i128;  // [sp-0x190]
    let v19: i128;  // [sp-0x188]
    let v20: i64;  // [sp-0x180]
    let v21: i128;  // [bp-0x178]
    let v22: i128;  // [bp-0x168]
    let v23: i128;  // [sp-0x158]
    let v24: i128;  // [sp-0x148]
    let v25: i128;  // [sp-0x138]
    let v26: i64;  // [sp-0x128]
    let v27: i192;  // [sp-0xd8], Other Possible Types: struct128, struct120, struct16, struct147, struct8, struct32
    let v28: i64;  // [sp-0xc8]
    let v29: i64;  // [sp-0xb8]
    let v31: i128;  // xmm0
    let v32: i256;  // ymm0
    let v33: i256;  // ymm0
    let v34: i128;  // xmm1
    let v35: i256;  // ymm1
    let v36: i256;  // ymm1
    let v37: i256;  // ymm2
    let v38: i256;  // ymm3
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // rdx
    let v42: i64;  // rcx
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm1
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i128;  // xmm0
    let v50: i128;  // xmm0
    let v51: i128;  // xmm1
    let v52: i128;  // xmm2
    let v53: i128;  // xmm3
    let v54: i64;  // rax
    let v55: i64;  // r14
    let v56: i64;  // rbp
    let v57: i64;  // rbp
    let v58: i64;  // r13
    let v59: i128;  // xmm0
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm1
    let v64: i128;  // xmm2
    let v65: i128;  // xmm3
    let v66: i128;  // xmm0
    let v67: i128;  // xmm0
    let v68: i256;  // ymm0
    let v69: i64;  // rsi
    let v70: i64;  // rax
    let v71: i64;  // rcx
    let v72: i64;  // rax
    let v73: i128;  // xmm2

    v13 = a1;
    v16 = std::sync::mpmc::channel(a1, a2);
    v31 = v16;
    v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
    v34 = *((&v16 as &char + 16) as &i128);
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
    v1 = v31;
    v14 = v34;
    v27 = core::iter::traits::iterator::Iterator::size_hint();
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, 0);
    v2 = v17;
    v3 = v18;
    v4 = 0;
    v27 = core::iter::traits::iterator::Iterator::size_hint();
    v16 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v27, 0);
    v7 = v17;
    v8 = v18;
    v9 = 0;
    v15 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v18 = v18;
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15);
        if v11 == 9223372036854775809 {
            break;
        }
        v39 = *((&v10 as &char + 8) as &i128);
        v40 = *((&v10 as &char + 24) as &i128);
        v6 = v40;
        v5 = v39;
        v16 = std::sync::mpmc::sync_channel(0x2, v41, v42);
        v43 = v16;
        v0 = v43;
        v7 = alloc::vec::Vec<T,A>::push(v18, v19);
        v44 = *((&v5 as &char + 8) as &i128);
        if v18 == 0x8000000000000000 {
            v54 = a0;
            *((v54 + 8) as &i128) = v44;
            *(v54 as &i64) = 3;
            return v72;
        }
        v45 = v0;
        v16 = struct72 {
            field_0: v45
            field_16: v46
            field_24: v44
            field_40: v42
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v2 = alloc::vec::Vec<T,A>::push(&v16, v41);
        v27 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v16 = v10;
        v26 = *((&v27 as &char + 112) as &i64);
        v47 = *((&v27 as &char + 96) as &i128);
        v25 = v47;
        v48 = *((&v27 as &char + 80) as &i128);
        v24 = v48;
        v49 = *((&v27 as &char + 64) as &i128);
        v23 = v49;
        v50 = v27;
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
        v51 = *((&v27 as &char + 16) as &i128);
        v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
        v52 = *((&v27 as &char + 32) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
        v53 = *((&v27 as &char + 48) as &i128);
        v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
        v22 = v53;
        v21 = v52;
        v19 = v51;
        v17 = v50;
        v27 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v42);
        core::result::Result<T,E>::unwrap(&v27, "src/uu/sort/src/merge.rs");
        v18 = v18;
    }
    v55 = v4;
    if v55 {
        v56 = 0;
        do {
            v57 = v56;
            v58 = <usize as core::iter::range::Step>::forward_unchecked(v57);
            v27 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v16 = v57;
            v26 = *((&v27 as &char + 112) as &i64);
            v59 = *((&v27 as &char + 96) as &i128);
            v25 = v59;
            v60 = *((&v27 as &char + 80) as &i128);
            v24 = v60;
            v61 = *((&v27 as &char + 64) as &i128);
            v23 = v61;
            v62 = v27;
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62;
            v63 = *((&v27 as &char + 16) as &i128);
            v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
            v64 = *((&v27 as &char + 32) as &i128);
            v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64;
            v65 = *((&v27 as &char + 48) as &i128);
            v38 = v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v65;
            v22 = v65;
            v21 = v64;
            v19 = v63;
            v17 = v62;
            v27 = std::sync::mpmc::Sender<T>::send(&v1, &v16, v42);
            core::result::Result<T,E>::unwrap(&v27, "src/uu/sort/src/merge.rs");
            v56 = v58;
        } while (v58 < v55);
    }
    v27 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v66 = v14;
    v16 = v66;
    v67 = v2;
    v68 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v67;
    v18 = v67;
    v20 = v4;
    memcpy(&v21, &v27, 160);
    v28 = 0x8000000000000000;
    v27 = struct8 {
        field_0: 0
    };
    v15 = std::thread::Builder::spawn_unchecked(&v27, &v16);
    v5 = core::result::Result<T,E>::expect(&v15);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v27 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v7);
    v29 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v41);
    if *((&v15 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct16) = struct16 {
                field_0: v46
                field_8: *((&v15 as &char + 16) as &i64)
            };
            v70 = std::sync::mpmc::Receiver<T>::recv(&v0, v69, v41);
            if v70 {
                v16 = 1;
                v17 = 1;
                v18 = v70;
                v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v18 = alloc::boxed::Box<T>::new(&v16);
                *(&v16.field_0 as &struct40) = struct40 {
                    field_0: v32 as u128
                    field_16: v18
                    field_24: 0
                    field_32: vvar_390{reg 56}
                };
                v10 = alloc::vec::Vec<T,A>::push(&v16, v41);
            }
        } while ((v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27, v41), *((&v15 as &char + 8) as &i64) != 3));
    }
    v27 = v10;
    v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v27, a2, 1);
    v71 = a0;
    *((v71 + 48) as &i128) = v5;
    v72 = *((&v5 as &char + 16) as &i64);
    *((v71 + 64) as &i64) = v72;
    v73 = *((&v16 as &char + 16) as &i128);
    *((v71 + 16) as &i256) = v16;
    *((v71 + 32) as &i128) = v73;
    *(v71 as &i128) = v1;
    *((v71 + 72) as &i64) = 0;
    return v72;
}
