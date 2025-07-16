fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct80, a2: i64) {
    let v0: u64;  // [bp-0x338]
    let v1: u128;  // [bp-0x338]
    let v2: i64;  // [bp-0x328]
    let v3: u8;  // [bp-0x318]
    let v4: struct128;  // [bp-0x318]
    let v5: struct128;  // [bp-0x318]
    let v6: u64;  // [bp-0x308]
    let v7: struct128;  // [bp-0x300]
    let v8: void*;  // [bp-0x2f8]
    let v9: struct56;  // [bp-0x2f0], Other Possible Types: struct32
    let v10: struct129;  // [bp-0x2e8]
    let v11: void*;  // [bp-0x2e0]
    let v12: u64;  // [bp-0x2d8]
    let v14: u8;  // [bp-0x2c8]
    let v15: u192;  // [bp-0x2b8], Other Possible Types: struct24
    let v16: struct16;  // [sp-0x2b8], Other Possible Types: void*, struct32
    let v17: u64;  // [bp-0x2a8], Other Possible Types: struct16
    let v18: u8;  // [bp-0x298], Other Possible Types: struct56
    let v19: u128;  // [bp-0x288]
    let v20: u128;  // [bp-0x278]
    let v21: u128;  // [bp-0x268]
    let v22: u128;  // [bp-0x258]
    let v23: u448;  // [bp-0x248]
    let v24: struct24;  // [bp-0x210], Other Possible Types: struct16
    let v25: u128;  // [bp-0x210]
    let v26: u128;  // [bp-0x210], Other Possible Types: struct16
    let v27: u128;  // [bp-0x210]
    let v28: struct24;  // [bp-0x210]
    let v29: struct16;  // [bp-0x210]
    let v30: struct16;  // [bp-0x208], Other Possible Types: struct32
    let v31: u128;  // [bp-0x208]
    let v32: u8;  // [bp-0x200], Other Possible Types: struct128
    let v33: struct32;  // [bp-0x200]
    let v34: struct128;  // [bp-0x200]
    let v35: u128;  // [bp-0x200]
    let v36: u64;  // [bp-0x1f8], Other Possible Types: struct147
    let v37: u128;  // [bp-0x1f8]
    let v38: u128;  // [bp-0x1f8]
    let v39: struct120;  // [bp-0x1f0], Other Possible Types: struct128
    let v40: struct16;  // [bp-0x1e8], Other Possible Types: struct128
    let v41: struct16;  // [bp-0x1e8]
    let v42: u128;  // [bp-0x1e8]
    let v43: struct24;  // [bp-0x1d8], Other Possible Types: struct32
    let v44: u8;  // [bp-0x1c8], Other Possible Types: struct16, struct24
    let v45: struct24;  // [bp-0x1b8]
    let v46: struct24;  // [bp-0x1b0]
    let v47: u64;  // [bp-0x1a8]
    let v48: u128;  // [bp-0x1a8]
    let v49: struct24;  // [bp-0x1a0]
    let v50: struct48;  // [bp-0x198], Other Possible Types: struct145
    let v51: u128;  // [bp-0x148]
    let v52: u128;  // [bp-0x138]
    let v53: u128;  // [bp-0x128]
    let v54: struct32;  // [bp-0x120]
    let v55: u8;  // [bp-0x110]
    let v56: u128;  // [bp-0x108]
    let v57: struct24;  // [bp-0xf0], Other Possible Types: struct104, u64
    let v58: struct32;  // [bp-0xe8]
    let v59: u704;  // [bp-0xe0]
    let v60: void*;  // [bp-0x88], Other Possible Types: u704
    let v61: struct24;  // [bp-0x80], Other Possible Types: u64
    let v62: struct24;  // [bp-0x78]
    let v63: u128;  // [bp-0x70]
    let v64: u128;  // [bp-0x60]
    let v67: u32;  // ecx
    let v68: u128;  // xmm0
    let v70: u64;  // r8
    let v71: u64;  // rax
    let v72: u128;  // xmm0
    let v73: struct16;  // xmm0
    let v74: void*;  // rbp
    let v75: u64;  // rsi
    let v76: u64;  // r13
    let v77: u128;  // xmm0
    let v78: u64;  // rdx
    let v79: u64;  // rax
    let v80: u64;  // rsi
    let v81: u64;  // rax
    let v82: u128;  // xmm2
    let v83: u64;  // [bp-0x208]

    v12 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v3, &v27, 16);
    memcpy(&v14, &v32, 16);
    v16 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0 as i64, 0, v67);
    v6 = v83;
    v7 = v34;
    v8 = 0;
    v5 as u128 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0 as i64, 0, v67);
    v9 = v83;
    v10 = v34;
    v11 = 0;
    v57 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v41 = v40;
        vvar_744{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5435245, None), vvar_489{stack -136}), ((5434729, None), None)], 8: 𝜙@64b [((5435245, None), vvar_490{stack -128}), ((5434729, None), None)], 24: 𝜙@128b [((5435245, None), vvar_493{stack -112}), ((5434729, None), None)], 40: 𝜙@128b [((5435245, None), vvar_494{stack -96}), ((5434729, None), None)], 56: 𝜙@128b [((5435245, None), vvar_495{stack -80}), ((5434729, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v60, &v57);
        if v61 == 9223372036854775809 {
            break;
        }
        v56 = *((&v60 as &char + 72) as &i128);
        v68 = *((&v60 as &char + 8) as &i128);
        memcpy(&v54 as u8, &v60, 16);
        v53 = v64;
        v52 = v63;
        v51 = v68;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v70);
        v1 = *(&v27 as &i128);
        alloc::vec::Vec<T,A>::push(v34, v36, rcx<8>);
        v71 = v51;
        v72 = *((&v51 as &char + 8) as &i128);
        if v71 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v72;
            *(v2 as &i64) = 3;
            return;
        }
        v45 = *((&v56 as &char + 8) as &i64);
        memcpy(&v44, &v55, 16);
        v43 = v54;
        memcpy(&v40, &v52, 16);
        v27 = *(&v0 as &i128);
        v34 = v71;
        v37 = v72;
        v46 = 0;
        v47 = 1;
        v49 = 0;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v28 = v60 as i64;
        v50 = v23 as i64;
        v48 = v22;
        memcpy(&v45, &v21, 16);
        v44 = v20;
        v73 = v4.field_96;
        v43 = v19;
        memcpy(&v40, &v18, 16);
        v38 = *(&v17 as &i128);
        v30 = v73;
        v4 = std::sync::mpmc::Sender<T>::send(&v28, rcx<8>, v70);
        core::result::Result<T,E>::unwrap(&v5 as u128, "src/uu/sort/src/merge.rs");
        v40 = v42;
    }
    v40 = v41;
    if v8 {
        do {
            v76 = <usize as core::iter::range::Step>::forward_unchecked(v74, v75);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v29 = v74;
            v50 = v23 as i64;
            v48 = v22;
            memcpy(&v45, &v21, 16);
            v44 = v20;
            v77 = v5.field_96;
            v43 = v19;
            memcpy(&v40, &v18, 16);
            v37 = *(&v17 as &i128);
            v31 = v77;
            v5 = std::sync::mpmc::Sender<T>::send(&v29, rcx<8>, v70);
            core::result::Result<T,E>::unwrap(&v5 as u128, "src/uu/sort/src/merge.rs");
            v74 = v76;
            v40 = v42;
        } while (v76 < v8);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v78);
    v26 = v14;
    v35 = v5.field_16;
    v39 = v8;
    memcpy(&v40, &v5 as u128, 160);
    v17 = 0x8000000000000000;
    v16 = 0;
    v57 = std::thread::Builder::spawn_unchecked(&v16, &v26);
    v57 = core::result::Result<T,E>::expect(a2);
    v60 = 0;
    v61 = 8;
    v62 = 0;
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v18 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v79 = v58;
    if v58 != 3 {
        do {
            v0 = struct16 {
                field_0: v58
                field_8: v59 as i64
            };
            v81 = std::sync::mpmc::Receiver<T>::recv(&v0, v80, a2);
            if v81 {
                v24 = 1;
                v30 = 1;
                v32 = v81;
                v33 = alloc::boxed::Box<T>::new(&v24);
                v36 = 0;
                v25 = v0;
                v39 = v57;
                v26 = alloc::vec::Vec<T,A>::push(a2);
            }
            v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v58 != 3);
    }
    v17 = 0;
    memcpy(&v15, &v60, 16);
    v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v70);
    *((v2 + 48) as &u128) = v51;
    *((v2 + 64) as &i64) = v52;
    v82 = v35;
    *((v2 + 16) as &u128) = v26;
    *((v2 + 32) as &u128) = v82;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
