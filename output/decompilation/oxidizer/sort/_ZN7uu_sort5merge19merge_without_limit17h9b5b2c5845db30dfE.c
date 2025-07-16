fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct32, a2: i64) {
    let v0: u128;  // [bp-0x290]
    let v1: i64;  // [bp-0x280]
    let v2: u8;  // [bp-0x270]
    let v3: struct128;  // [bp-0x270]
    let v4: struct128;  // [bp-0x270]
    let v5: u64;  // [bp-0x260]
    let v6: u64;  // [bp-0x258]
    let v7: void*;  // [bp-0x250]
    let v8: u128;  // [bp-0x248]
    let v9: u64;  // [bp-0x238]
    let v10: u128;  // [bp-0x230]
    let v11: struct40;  // [bp-0x220], Other Possible Types: <anon>
    let v12: struct24;  // [bp-0x218]
    let v13: struct16;  // [bp-0x210]
    let v14: u64;  // [bp-0x1f8]
    let v15: u320;  // [bp-0x1f8]
    let v16: struct24;  // [bp-0x1f8]
    let v17: u64;  // [bp-0x1f0]
    let v18: u64;  // [bp-0x1e8]
    let v20: u64;  // [bp-0x1d0], Other Possible Types: struct32
    let v21: u64;  // [bp-0x1c8]
    let v22: void*;  // [bp-0x1c0]
    let v23: i64;  // [bp-0x1b8]
    let v24: u8;  // [bp-0x1b0]
    let v25: u128;  // [bp-0x1a0], Other Possible Types: struct16
    let v26: u128;  // [sp-0x1a0]
    let v27: struct16;  // [bp-0x1a0], Other Possible Types: struct32
    let v28: u64;  // [bp-0x1a0]
    let v29: struct32;  // [bp-0x1a0]
    let v30: u128;  // [bp-0x1a0]
    let v31: struct16;  // [bp-0x198], Other Possible Types: u128
    let v32: u128;  // [bp-0x198]
    let v33: u128;  // [bp-0x190]
    let v34: Option<struct40>;  // [bp-0x190]
    let v35: struct128;  // [bp-0x190]
    let v36: u64;  // [bp-0x190]
    let v37: void*;  // [bp-0x188], Other Possible Types: u64
    let v38: u128;  // [bp-0x188]
    let v39: u128;  // [bp-0x188]
    let v40: u64;  // [bp-0x180], Other Possible Types: struct24
    let v41: u64;  // [bp-0x178], Other Possible Types: Option<struct40>
    let v42: u128;  // [bp-0x178]
    let v43: struct24;  // [bp-0x170]
    let v44: u64;  // [bp-0x168]
    let v45: u128;  // [bp-0x168]
    let v46: struct129;  // [bp-0x160]
    let v47: struct24;  // [bp-0x158]
    let v48: u8;  // [bp-0x148]
    let v49: struct24;  // [bp-0x138]
    let v50: u64;  // [bp-0x128], Other Possible Types: struct128
    let v51: struct24;  // [bp-0xd8], Other Possible Types: u192
    let v52: struct24;  // [sp-0xd8], Other Possible Types: void*, struct32
    let v53: <anon>;  // [bp-0xc8], Other Possible Types: void*
    let v54: struct24;  // [bp-0xb8], Other Possible Types: u64
    let v55: u128;  // [bp-0xa8]
    let v56: u128;  // [bp-0x98]
    let v57: u128;  // [bp-0x88]
    let v58: struct24;  // [bp-0x78]
    let v59: i8;  // [bp-0x68]
    let v61: u32;  // ecx
    let v63: u64;  // r8
    let v64: u64;  // rax
    let v65: u128;  // xmm0
    let v66: u64;  // rcx
    let v67: u128;  // xmm0
    let v68: u128;  // xmm1
    let v69: u128;  // xmm2
    let v70: struct25;  // rbp
    let v71: u64;  // rsi
    let v72: u64;  // r13
    let v73: u128;  // xmm0
    let v74: u128;  // xmm1
    let v75: u128;  // xmm2
    let v76: u64;  // rdx
    let v77: u64;  // rax
    let v78: u64;  // rsi
    let v79: u64;  // rax
    let v80: u128;  // xmm2
    let v81: u64;  // [bp-0x290]
    let v83: u64;  // [bp-0x198]

    v23 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v2, &v26, 16);
    memcpy(&v24, &v33, 16);
    v52 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52.field_0, 0, v61);
    v5 = v83;
    v6 = v34;
    v7 = 0;
    v52 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v52.field_0, 0, v61);
    v20 = v83;
    v21 = v34;
    v22 = 0;
    v11 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_722{stack -504} = struct40 OrderedDict({0: 𝜙@64b [((5439157, None), vvar_486{stack -504}), ((5438732, None), None)], 8: 𝜙@64b [((5439157, None), vvar_487{stack -496}), ((5438732, None), None)], 24: 𝜙@128b [((5439157, None), vvar_489{stack -480}), ((5438732, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15, &v11);
        if v17 == 9223372036854775809 {
            break;
        }
        memcpy(&v9, &v15, 16);
        v8 = *((&v15 as &char + 8) as &i128);
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v63);
        v0 = *(&v26 as &i128);
        alloc::vec::Vec<T,A>::push(v34, v37, rcx<8>);
        v64 = v8;
        v65 = *((&v8 as &char + 8) as &i128);
        if v64 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v65;
            *(v1 as &i64) = 3;
            return;
        }
        v66 = v10;
        v26 = *(&v81 as &i128);
        v34 = v64;
        v38 = v65;
        v41 = v66;
        v43 = 0;
        v44 = 1;
        v46 = 0;
        v27 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v28 = v15;
        v50 = *(&v59 as &i64);
        v49 = v58;
        memcpy(&v48, &v57, 16);
        v47 = v56;
        v67 = *(&v52.field_0 as &i128);
        v68 = *(&v52.field_16 as &i128);
        v69 = *(&v54 as &i128);
        v45 = v55;
        v42 = v69;
        v39 = v68;
        v31 = v67;
        v3 = std::sync::mpmc::Sender<T>::send(&v28, rcx<8>, v63);
        core::result::Result<T,E>::unwrap(&v52, "src/uu/sort/src/merge.rs");
    }
    if v7 {
        do {
            v72 = <usize as core::iter::range::Step>::forward_unchecked(v70, v71);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v29 = v70;
            v50 = *(&v59 as &i64);
            v49 = v58;
            memcpy(&v48, &v57, 16);
            v47 = v56;
            v73 = *(&v52.field_0 as &i128);
            v74 = *(&v52.field_16 as &i128);
            v75 = *(&v54 as &i128);
            v45 = v55;
            v42 = v75;
            v38 = v74;
            v32 = v73;
            v4 = std::sync::mpmc::Sender<T>::send(&v29, rcx<8>, v63);
            core::result::Result<T,E>::unwrap(&v52, "src/uu/sort/src/merge.rs");
            v70 = v72;
        } while (v72 < v7);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v76);
    v25 = v24;
    v33 = v4.field_16;
    v40 = v7;
    memcpy(&v41, &v52, 160);
    v53 = 0x8000000000000000;
    v52 = 0;
    v16 = std::thread::Builder::spawn_unchecked(&v52, &v25);
    v16 = core::result::Result<T,E>::expect(a2);
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v20 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v54 = 0;
    v51 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v77 = v17;
    if v17 != 3 {
        do {
            v81 = struct16 {
                field_0: v17
                field_8: v18
            };
            v79 = std::sync::mpmc::Receiver<T>::recv(&v81, v78, a2);
            if v79 {
                v27 = 1;
                v31 = 1;
                v35 = v79;
                v36 = alloc::boxed::Box<T>::new(&v27);
                v37 = 0;
                v30 = v81;
                v40 = v14;
                v25 = alloc::vec::Vec<T,A>::push(a2);
            }
            v51 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v17 != 3);
    }
    v53 = 0;
    memcpy(&v51, &v11, 16);
    v52 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v63);
    *((v1 + 48) as &i128) = *((&v4.field_32 as &char + 8) as &i128);
    *((v1 + 64) as &u64) = v9;
    v80 = v33;
    *((v1 + 16) as &u128) = v25;
    *((v1 + 32) as &u128) = v80;
    *(v1 as &u128) = v4.field_0;
    *((v1 + 72) as &i64) = 0;
    return;
}
