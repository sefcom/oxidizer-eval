fn uu_sort::merge::merge_without_limit(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [bp-0x2a0], Other Possible Types: struct24
    let v1: i128;  // [sp-0x280]
    let v2: i64;  // [sp-0x270]
    let v3: i64;  // [sp-0x268]
    let v4: i64;  // [sp-0x260]
    let v5: i128;  // [sp-0x258], Other Possible Types: struct24
    let v6: i128;  // [sp-0x248]
    let v7: i128;  // [sp-0x230], Other Possible Types: struct16
    let v8: i64;  // [sp-0x228]
    let v9: i64;  // [sp-0x220]
    let v10: struct40;  // [sp-0x218], Other Possible Types: i64
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
    let v25: i192;  // [sp-0xd8], Other Possible Types: struct16, struct120, struct128, struct32, struct147, struct8
    let v27: i128;  // xmm0
    let v28: i256;  // ymm0
    let v29: i256;  // ymm0
    let v30: i128;  // xmm1
    let v31: i256;  // ymm1
    let v32: i256;  // ymm1
    let v33: i256;  // ymm2
    let v34: i256;  // ymm3
    let v35: i128;  // xmm0
    let v36: i128;  // xmm1
    let v37: i64;  // rdx
    let v38: i64;  // rcx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i128;  // xmm1
    let v43: i128;  // xmm0
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i128;  // xmm3
    let v50: i64;  // rax
    let v51: i64;  // r14
    let v53: i64;  // rbp
    let v54: i64;  // r13
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i128;  // xmm0
    let v58: i128;  // xmm0
    let v59: i128;  // xmm1
    let v60: i128;  // xmm2
    let v61: i128;  // xmm3
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i256;  // ymm0
    let v65: i64;  // rsi
    let v66: i64;  // rax
    let v67: i64;  // rcx
    let v68: i64;  // rax
    let v69: i128;  // xmm2

    v11 = a1;
    v14 = std::sync::mpmc::channel(a1, a2);
    v27 = v14;
    v29 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27;
    v30 = *((&v14 as &char + 16) as &i128);
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    v1 = v27;
    v12 = v30;
    v25 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v2 = v15;
    v3 = v14.field_16;
    v4 = 0;
    v25 = core::iter::traits::iterator::Iterator::size_hint();
    v14 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v25, 0);
    v7 = v15;
    v8 = v14.field_16;
    v9 = 0;
    v13 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v10 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13);
        if v10.field_8 == 9223372036854775809 {
            break;
        }
        v35 = *((&v10 as &char + 8) as &i128);
        v36 = *((&v10 as &char + 24) as &i128);
        v6 = v36;
        v5 = v35;
        v14 = std::sync::mpmc::sync_channel(2, v37, v38);
        v39 = v14;
        v0 = v39;
        v7 = alloc::vec::Vec<T,A>::push(v14.field_16, v14.field_24);
        v40 = *((&v5 as &char + 8) as &i128);
        if v14.field_16 == 0x8000000000000000 {
            v50 = a0;
            *((v50 + 8) as &i128) = v40;
            *(v50 as &i64) = 3;
            return v68;
        }
        v41 = v0;
        v14 = struct72 {
            field_0: v41
            field_16: v42
            field_24: v40
            field_40: v38
            field_48: 0
            field_56: 1
            field_64: 0
        };
        alloc::vec::Vec<T,A>::push(&v2, &v14, v37);
        v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v14 = v10;
        v24 = *((&v25 as &char + 112) as &i64);
        v43 = *((&v25 as &char + 96) as &i128);
        v23 = v43;
        v44 = *((&v25 as &char + 80) as &i128);
        v22 = v44;
        v45 = *((&v25 as &char + 64) as &i128);
        v21 = v45;
        v46 = v25;
        v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
        v47 = *((&v25 as &char + 16) as &i128);
        v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
        v48 = *((&v25 as &char + 32) as &i128);
        v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
        v49 = *((&v25 as &char + 48) as &i128);
        v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
        v20 = v49;
        v19 = v48;
        v17 = v47;
        v15 = v46;
        v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v38);
        core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
    }
    v51 = v4;
    if v51 {
        do {
            v53 = 0;
            v54 = <usize as core::iter::range::Step>::forward_unchecked(v53);
            v25 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v14 = v53;
            v24 = *((&v25 as &char + 112) as &i64);
            v55 = *((&v25 as &char + 96) as &i128);
            v23 = v55;
            v56 = *((&v25 as &char + 80) as &i128);
            v22 = v56;
            v57 = *((&v25 as &char + 64) as &i128);
            v21 = v57;
            v58 = v25;
            v29 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v58;
            v59 = *((&v25 as &char + 16) as &i128);
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v59;
            v60 = *((&v25 as &char + 32) as &i128);
            v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60;
            v61 = *((&v25 as &char + 48) as &i128);
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v61;
            v20 = v61;
            v19 = v60;
            v17 = v59;
            v15 = v58;
            v25 = std::sync::mpmc::Sender<T>::send(&v1, &v14, v38);
            core::result::Result<T,E>::unwrap(&v25, "src/uu/sort/src/merge.rs");
        } while (v54 < v51);
    }
    v25 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v62 = v12;
    v14 = v62;
    v63 = v2;
    v64 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v62 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v63;
    v16 = v63;
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
    v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v37);
    if *((&v13 as &char + 8) as &i64) != 3 {
        do {
            *(&v0.field_0 as &struct24) = struct24 {
                field_0: v42
                field_8: <UNKNOWN>
            };
            v66 = std::sync::mpmc::Receiver<T>::recv(&v0, v65, v37);
            if v66 {
                v14 = 1;
                v15 = 1;
                v16 = v66;
                v64 = v64 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0;
                v16 = alloc::boxed::Box<T>::new(&v14);
                *(&v14.field_0 as &struct40) = struct40 {
                    field_0: v28 as u128
                    field_16: v16
                    field_24: 0
                    field_32: vvar_390{reg 56}
                };
                alloc::vec::Vec<T,A>::push(&v10, &v14, v37);
            }
        } while ((v13 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v25, v37), *((&v13 as &char + 8) as &i64) != 3));
    }
    v25 = v10.field_0;
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v14, &v25, a2, 1);
    v67 = a0;
    *((v67 + 48) as &i128) = v5;
    v68 = *((&v5 as &char + 16) as &i64);
    *((v67 + 64) as &i64) = v68;
    v69 = *((&v14 as &char + 16) as &i128);
    *((v67 + 16) as &i320) = v14;
    *((v67 + 32) as &i128) = v69;
    *(v67 as &i128) = v1;
    *((v67 + 72) as &i64) = 0;
    return v68;
}
