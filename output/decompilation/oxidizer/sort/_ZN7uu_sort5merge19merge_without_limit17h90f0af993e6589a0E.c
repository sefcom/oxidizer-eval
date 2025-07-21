fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct96, a2: i64) {
    let v0: struct16;  // [bp-0x338], Other Possible Types: u64
    let v1: u128;  // [bp-0x338]
    let v2: i64;  // [bp-0x328]
    let v3: u128;  // [bp-0x318]
    let v4: struct128;  // [bp-0x318]
    let v5: struct128;  // [bp-0x318]
    let v6: struct56;  // [bp-0x308]
    let v7: struct129;  // [bp-0x300]
    let v8: struct24;  // [bp-0x2f8]
    let v9: struct32;  // [bp-0x2f0], Other Possible Types: struct48
    let v10: <anon>;  // [bp-0x2e8]
    let v11: void*;  // [bp-0x2e0]
    let v12: u64;  // [bp-0x2d8]
    let v14: u128;  // [bp-0x2c8]
    let v15: struct32;  // [bp-0x2b8], Other Possible Types: struct24, struct16
    let v16: u128;  // [bp-0x2b8]
    let v17: struct16;  // [bp-0x2b8]
    let v18: struct24;  // [bp-0x2a8], Other Possible Types: u64
    let v19: struct24;  // [bp-0x298], Other Possible Types: u64
    let v20: u128;  // [bp-0x288]
    let v21: u128;  // [bp-0x278]
    let v22: u128;  // [bp-0x268]
    let v23: u128;  // [bp-0x258]
    let v24: u448;  // [bp-0x248]
    let v25: struct16;  // [bp-0x210], Other Possible Types: struct24
    let v26: struct16;  // [bp-0x210]
    let v27: struct16;  // [bp-0x210], Other Possible Types: u64
    let v28: i8;  // [bp-0x210], Other Possible Types: u64
    let v29: struct32;  // [bp-0x210]
    let v30: struct24;  // [bp-0x210]
    let v31: u128;  // [bp-0x208]
    let v32: struct48;  // [bp-0x208]
    let v33: u128;  // [bp-0x208]
    let v34: struct32;  // [bp-0x200]
    let v35: i8;  // [bp-0x200], Other Possible Types: u128
    let v36: struct24;  // [bp-0x200]
    let v37: struct147;  // [bp-0x1f8], Other Possible Types: u64
    let v38: u128;  // [bp-0x1f8]
    let v39: u128;  // [bp-0x1f8]
    let v40: struct120;  // [bp-0x1f0], Other Possible Types: struct32
    let v41: <anon>;  // [bp-0x1e8], Other Possible Types: struct32
    let v42: struct16;  // [bp-0x1d8], Other Possible Types: struct24, struct48
    let v43: struct48;  // [bp-0x1c8], Other Possible Types: struct24
    let v44: struct24;  // [bp-0x1b8]
    let v45: u128;  // [bp-0x1b8]
    let v46: struct16;  // [bp-0x1b0]
    let v47: struct128;  // [bp-0x1a8]
    let v48: u128;  // [bp-0x1a8]
    let v49: struct24;  // [bp-0x1a0]
    let v50: struct16;  // [bp-0x198], Other Possible Types: struct56
    let v51: u128;  // [bp-0x148]
    let v52: struct32;  // [bp-0x138]
    let v53: struct16;  // [bp-0x128]
    let v54: struct24;  // [bp-0x118]
    let v55: u128;  // [bp-0x108]
    let v56: struct104;  // [bp-0xf0], Other Possible Types: struct24, u64
    let v57: struct24;  // [bp-0xe8]
    let v58: u704;  // [bp-0xe0]
    let v59: struct24;  // [bp-0x88], Other Possible Types: struct88
    let v60: struct24;  // [bp-0x80], Other Possible Types: u64
    let v61: struct16;  // [bp-0x78]
    let v62: struct32;  // [bp-0x70]
    let v63: struct16;  // [bp-0x60]
    let v64: struct24;  // [bp-0x50]
    let v66: u32;  // ecx
    let v67: u128;  // xmm0
    let v69: u64;  // r8
    let v70: u64;  // rax
    let v71: u128;  // xmm0
    let v72: struct32;  // rbp
    let v73: struct16;  // rsi
    let v74: u64;  // r13
    let v75: u64;  // rdx
    let v76: u64;  // rax
    let v77: struct88;  // rsi
    let v78: u64;  // rax
    let v79: u128;  // xmm2

    v12 = a1;
    std::sync::mpmc::channel(a1);
    v3 = *(&v28 as &i128);
    v14 = *(&v35 as &i128);
    v15 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v15.field_0 as i64, 0, v66);
    v6 = v32;
    v7 = v36;
    v8 = 0;
    v15 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v15.field_0 as i64, 0, v66);
    v9 = v32;
    v10 = v36;
    v11 = 0;
    v56 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_757{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5435245, None), vvar_489{stack -136}), ((5434729, None), None)], 8: 𝜙@64b [((5435245, None), vvar_490{stack -128}), ((5434729, None), None)], 24: 𝜙@128b [((5435245, None), vvar_493{stack -112}), ((5434729, None), None)], 40: 𝜙@128b [((5435245, None), vvar_494{stack -96}), ((5434729, None), None)], 56: 𝜙@128b [((5435245, None), vvar_495{stack -80}), ((5434729, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v59, &v56);
        if v60 == 9223372036854775809 {
            break;
        }
        v55 = v59.field_72;
        v67 = v59.field_8;
        v54 = v64;
        v53 = v63;
        v52 = v62;
        v51 = v67;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v69);
        v1 = v29.field_0;
        alloc::vec::Vec<T,A>::push(v36, v37, rcx<8>);
        v70 = v51;
        v71 = *((&v51 as &char + 8) as &i128);
        if v70 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v71;
            *(v2 as &i64) = 3;
            return;
        }
        v44 = *((&v55 as &char + 8) as &i64);
        v43 = *(&v54.field_8 as &i128);
        v42 = *((&v53.field_0 as &char + 8) as &i128);
        v41 = *((&v52.field_0 as &char + 8) as &i128);
        *(&v28 as &i128) = *(&v0 as &i128);
        v36 = v70;
        v38 = v71;
        v46 = 0;
        v47 = 1;
        v49 = 0;
        v25 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v29 = v59.field_0;
        v50 = v24 as i64;
        v48 = v23;
        v45 = v22;
        v43 = v21;
        v42 = v20;
        v41 = *(&v19 as &i128);
        v39 = *(&v18 as &i128);
        v31 = v16;
        v4 = std::sync::mpmc::Sender<T>::send(&v29, rcx<8>, v69);
        core::result::Result<T,E>::unwrap(&v5 as u8, "src/uu/sort/src/merge.rs");
    }
    if v8 {
        do {
            v74 = <usize as core::iter::range::Step>::forward_unchecked(v72, v73);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v30 = v72;
            v50 = v24 as i64;
            v48 = v23;
            v45 = v22;
            v43 = v21;
            v42 = v20;
            v41 = *(&v19 as &i128);
            v38 = *(&v18 as &i128);
            v33 = v16;
            v5 = std::sync::mpmc::Sender<T>::send(&v30, rcx<8>, v69);
            core::result::Result<T,E>::unwrap(&v5 as u8, "src/uu/sort/src/merge.rs");
            v72 = v74;
        } while (v74 < v8);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v75);
    v27 = v14;
    v35 = v5.field_16;
    v40 = v8;
    memcpy(&v41, &v5 as u8, 160);
    v15 = 0;
    v15 = struct24 {
        field_0: v17 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v56 = std::thread::Builder::spawn_unchecked(&v15, &v27);
    v56 = core::result::Result<T,E>::expect(a2);
    v59 = 0;
    v60 = 8;
    v61 = 0;
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v19 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v76 = v57;
    if v57 != 3 {
        do {
            v0 = struct16 {
                field_0: v57
                field_8: v58 as i64
            };
            v0 = struct16 {
                field_0: v57
                field_8: v58 as i64
            };
            v78 = std::sync::mpmc::Receiver<T>::recv(&v0, v77, a2);
            if v78 {
                v25 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v78
                };
                v34 = alloc::boxed::Box<T>::new(&v25);
                v37 = 0;
                v26.field_0 = v0.field_0;
                v40 = v56;
                v27 = alloc::vec::Vec<T,A>::push(a2);
            }
            v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v57 != 3);
    }
    v18 = 0;
    v15 = *(&v59.field_0 as &i128);
    v15 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v69);
    *((v2 + 48) as &u128) = v51;
    *((v2 + 64) as &i64) = v52.field_0;
    v79 = v35;
    *((v2 + 16) as &i128) = *(&v27 as &i128);
    *((v2 + 32) as &u128) = v79;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
