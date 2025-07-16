fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: u128;  // [bp-0x2a0]
    let v1: i64;  // [bp-0x290]
    let v2: u8;  // [bp-0x280]
    let v3: struct128;  // [bp-0x280]
    let v4: struct128;  // [bp-0x280]
    let v5: u64;  // [bp-0x270]
    let v6: u64;  // [bp-0x268]
    let v7: void*;  // [bp-0x260]
    let v8: u128;  // [bp-0x258]
    let v9: u64;  // [bp-0x248]
    let v10: u128;  // [bp-0x240]
    let v11: u64;  // [bp-0x230], Other Possible Types: struct32
    let v12: u64;  // [bp-0x228]
    let v13: void*;  // [bp-0x220]
    let v14: u320;  // [bp-0x218]
    let v15: u64;  // [bp-0x210], Other Possible Types: struct24
    let v16: struct16;  // [bp-0x208]
    let v18: i64;  // [bp-0x1f0]
    let v19: u8;  // [bp-0x1e8]
    let v20: struct24;  // [bp-0x1d8], Other Possible Types: u64, struct56
    let v21: struct24;  // [bp-0x1d0]
    let v22: u320;  // [bp-0x1c8]
    let v23: u128;  // [bp-0x1a0], Other Possible Types: struct16
    let v24: u128;  // [bp-0x1a0], Other Possible Types: struct16
    let v25: u128;  // [bp-0x1a0]
    let v26: u64;  // [bp-0x1a0]
    let v27: struct16;  // [bp-0x1a0]
    let v28: struct16;  // [bp-0x1a0]
    let v29: u128;  // [bp-0x198], Other Possible Types: struct128
    let v30: u128;  // [bp-0x198]
    let v31: u128;  // [bp-0x190]
    let v32: Option<struct40>;  // [bp-0x190]
    let v33: struct16;  // [bp-0x190]
    let v34: u64;  // [bp-0x190]
    let v35: void*;  // [bp-0x188], Other Possible Types: u64
    let v36: u128;  // [bp-0x188]
    let v37: u128;  // [bp-0x188]
    let v38: u64;  // [bp-0x180], Other Possible Types: struct24
    let v39: Option<struct40>;  // [bp-0x178], Other Possible Types: u64
    let v40: u128;  // [bp-0x178]
    let v41: struct24;  // [bp-0x170]
    let v42: struct56;  // [bp-0x168]
    let v43: u128;  // [bp-0x168]
    let v44: struct129;  // [bp-0x160]
    let v45: struct24;  // [bp-0x158]
    let v46: u8;  // [bp-0x148]
    let v47: struct24;  // [bp-0x138]
    let v48: u64;  // [bp-0x128], Other Possible Types: struct24
    let v49: struct24;  // [bp-0xd8], Other Possible Types: u192
    let v50: struct24;  // [sp-0xd8], Other Possible Types: struct32, void*
    let v51: <anon>;  // [bp-0xc8], Other Possible Types: struct24
    let v52: u64;  // [bp-0xb8], Other Possible Types: struct24
    let v53: u128;  // [bp-0xa8]
    let v54: struct24;  // [bp-0x98]
    let v55: u128;  // [bp-0x88]
    let v56: struct24;  // [bp-0x78]
    let v57: i8;  // [bp-0x68]
    let v59: u32;  // ecx
    let v61: u64;  // r8
    let v62: u64;  // rax
    let v63: u128;  // xmm0
    let v64: u64;  // rcx
    let v65: u128;  // xmm0
    let v66: u128;  // xmm1
    let v67: u128;  // xmm2
    let v68: struct25;  // rbp
    let v69: u64;  // rsi
    let v70: u64;  // r13
    let v71: u128;  // xmm0
    let v72: u128;  // xmm1
    let v73: u128;  // xmm2
    let v74: u64;  // rdx
    let v75: u64;  // rax
    let v76: u64;  // rsi
    let v77: u64;  // rax
    let v78: u128;  // xmm2
    let v79: u64;  // [bp-0x2a0]
    let v81: u64;  // [bp-0x198]

    v18 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v2, &v25, 16);
    memcpy(&v19, &v31, 16);
    v50 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50.field_0, 0, v59);
    v5 = v81;
    v6 = v32;
    v7 = 0;
    v50 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v50.field_0, 0, v59);
    v11 = v81;
    v12 = v32;
    v13 = 0;
    v20 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_723{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5446981, None), vvar_486{stack -536}), ((5446556, None), None)], 8: 𝜙@64b [((5446981, None), vvar_487{stack -528}), ((5446556, None), None)], 24: 𝜙@128b [((5446981, None), vvar_489{stack -512}), ((5446556, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v20);
        if v15 == 9223372036854775809 {
            break;
        }
        memcpy(&v9, &v14, 16);
        v8 = *((&v14 as &char + 8) as &i128);
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v61);
        v0 = *(&v25 as &i128);
        alloc::vec::Vec<T,A>::push(v32, v35, rcx<8>);
        v62 = v8;
        v63 = *((&v8 as &char + 8) as &i128);
        if v62 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v63;
            *(v1 as &i64) = 3;
            return;
        }
        v64 = v10;
        v25 = *(&v79 as &i128);
        v32 = v62;
        v36 = v63;
        v39 = v64;
        v41 = 0;
        v42 = 1;
        v44 = 0;
        v23 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v26 = v14;
        v48 = *(&v57 as &i64);
        v47 = v56;
        memcpy(&v46, &v55, 16);
        v45 = v54;
        v65 = *(&v50.field_0 as &i128);
        v66 = *(&v50.field_16 as &i128);
        v67 = *(&v52 as &i128);
        v43 = v53;
        v40 = v67;
        v37 = v66;
        v29 = v65;
        v3 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v61);
        core::result::Result<T,E>::unwrap(&v50, "src/uu/sort/src/merge.rs");
    }
    if v7 {
        do {
            v70 = <usize as core::iter::range::Step>::forward_unchecked(v68, v69);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v27 = v68;
            v48 = *(&v57 as &i64);
            v47 = v56;
            memcpy(&v46, &v55, 16);
            v45 = v54;
            v71 = *(&v50.field_0 as &i128);
            v72 = *(&v50.field_16 as &i128);
            v73 = *(&v52 as &i128);
            v43 = v53;
            v40 = v73;
            v36 = v72;
            v30 = v71;
            v4 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v61);
            core::result::Result<T,E>::unwrap(&v50, "src/uu/sort/src/merge.rs");
            v68 = v70;
        } while (v70 < v7);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v74);
    v24 = v19;
    v31 = v4.field_16;
    v38 = v7;
    memcpy(&v39, &v50, 160);
    v51 = 0x8000000000000000;
    v50 = 0;
    v20 = std::thread::Builder::spawn_unchecked(&v50, &v24);
    v20 = core::result::Result<T,E>::expect(a2);
    v11 as u64 = 0;
    v15 = 8;
    v16 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v52 = 0;
    v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v75 = v21;
    if v21 != 3 {
        do {
            v79 = struct16 {
                field_0: v21
                field_8: v22 as i64
            };
            v77 = std::sync::mpmc::Receiver<T>::recv(&v79, v76, a2);
            if v77 {
                v28 = 1;
                v29 = 1;
                v33 = v77;
                v34 = alloc::boxed::Box<T>::new(&v28);
                v35 = 0;
                v23 = v79;
                v38 = v20;
                v24 = alloc::vec::Vec<T,A>::push(a2);
            }
            v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v21 != 3);
    }
    v51 = 0;
    memcpy(&v49, &v11 as u64, 16);
    v50 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v61);
    *((v1 + 48) as &i128) = *((&v4.field_32 as &char + 8) as &i128);
    *((v1 + 64) as &u64) = v9;
    v78 = v31;
    *((v1 + 16) as &u128) = v24;
    *((v1 + 32) as &u128) = v78;
    *(v1 as &u128) = v4.field_0;
    *((v1 + 72) as &i64) = 0;
    return;
}
