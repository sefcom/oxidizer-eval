fn uu_sort::merge::merge_without_limit(a0: i64, a1: i64, a2: i64) {
    let v0: u64;  // [bp-0x260]
    let v1: struct24;  // [bp-0x260], Other Possible Types: u256
    let v2: u64;  // [bp-0x258]
    let v3: u64;  // [bp-0x250]
    let v4: u64;  // [bp-0x248]
    let v5: i64;  // [bp-0x240]
    let v6: u8;  // [bp-0x230]
    let v7: struct128;  // [bp-0x230]
    let v8: struct128;  // [bp-0x230]
    let v9: struct16;  // [bp-0x220]
    let v10: u64;  // [bp-0x220]
    let v11: u64;  // [bp-0x218]
    let v12: void*;  // [bp-0x210]
    let v13: struct24;  // [bp-0x208], Other Possible Types: void*
    let v14: u64;  // [bp-0x200]
    let v15: void*;  // [bp-0x1f8]
    let v16: u128;  // [bp-0x1f0]
    let v17: u64;  // [bp-0x1e0]
    let v18: u128;  // [bp-0x1d8]
    let v19: u64;  // [bp-0x1c8], Other Possible Types: struct32
    let v20: u64;  // [bp-0x1c0]
    let v21: void*;  // [bp-0x1b8]
    let v22: u8;  // [bp-0x1b0]
    let v23: u128;  // [sp-0x1a0], Other Possible Types: struct16
    let v24: u8;  // [bp-0x1a0]
    let v25: struct8;  // [bp-0x1a0]
    let v26: struct24;  // [bp-0x1a0]
    let v27: u64;  // [bp-0x1a0]
    let v28: u128;  // [bp-0x1a0]
    let v29: u128;  // [bp-0x198]
    let v30: u128;  // [bp-0x198]
    let v31: u64;  // [bp-0x198]
    let v32: u64;  // [bp-0x190], Other Possible Types: void*
    let v33: u128;  // [bp-0x190]
    let v34: struct32;  // [bp-0x190]
    let v35: u64;  // [bp-0x188]
    let v36: u128;  // [bp-0x188], Other Possible Types: struct16
    let v37: u64;  // [sp-0x180], Other Possible Types: Option<struct40>, void*
    let v38: u64;  // [bp-0x178]
    let v39: u128;  // [bp-0x178]
    let v40: u64;  // [bp-0x170]
    let v41: u128;  // [bp-0x168]
    let v42: u128;  // [bp-0x158]
    let v43: u8;  // [bp-0x148]
    let v44: u128;  // [bp-0x138]
    let v45: u64;  // [bp-0x128]
    let v46: struct24;  // [sp-0xd8], Other Possible Types: void*, struct32
    let v47: struct24;  // [sp-0xd8], Other Possible Types: u192
    let v48: u64;  // [bp-0xc8], Other Possible Types: struct129
    let v49: u64;  // [bp-0xb8], Other Possible Types: void*
    let v50: u128;  // [bp-0xa8]
    let v51: u128;  // [bp-0x98]
    let v52: u128;  // [bp-0x88]
    let v53: u128;  // [bp-0x78]
    let v54: i8;  // [bp-0x68]
    let v56: u32;  // ecx
    let v57: u64;  // rcx
    let v58: u64;  // r8
    let v59: u128;  // xmm0
    let v60: u128;  // xmm1
    let v61: struct8;  // rbp
    let v62: u64;  // rsi
    let v63: u64;  // r13
    let v64: u128;  // xmm0
    let v65: u128;  // xmm1
    let v66: u64;  // rdx
    let v67: u64;  // rax
    let v68: u64;  // rsi
    let v69: u64;  // rax
    let v70: u128;  // xmm2
    let v71: u64;  // [bp-0x198]

    std::sync::mpmc::channel(a1);
    memcpy(&v6, &v24, 16);
    memcpy(&v22, &v32, 16);
    v46 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v26 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0, 0);
    v10 = v71;
    v11 = v32;
    v12 = 0;
    v46 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0, 0, v56);
    v19 = v71;
    v20 = v32;
    v21 = 0;
    v13 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        vvar_668{stack -608} = struct32 OrderedDict({0: 𝜙@64b [((5427220, None), vvar_442{stack -608}), ((5426847, None), None)], 8: 𝜙@64b [((5427220, None), vvar_443{stack -600}), ((5426847, None), None)], 24: 𝜙@64b [((5427220, None), vvar_445{stack -584}), ((5426847, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1, &v13);
        if v2 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v58);
        memcpy(&v16, &v26 as u8, 16);
        alloc::vec::Vec<T,A>::push(a1, a2, rcx<8>);
        if v2 {
            *((v5 + 8) as &u64) = v3;
            *((v5 + 16) as &u64) = v4;
            *(v5 as &i64) = 3;
            return;
        }
        memcpy(&v26 as u8, &v16, 16);
        v32 = 0;
        v35 = 1;
        v37 = 0;
        v38 = v3;
        v40 = v4;
        v9 = alloc::vec::Vec<T,A>::push(&v26 as u8);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v24 = v1;
        v45 = *(&v54 as &i64);
        v44 = v53;
        memcpy(&v43, &v52, 16);
        v42 = v51;
        v59 = *(&v46.field_0 as &i128);
        v60 = *(&v46.field_16 as &i128);
        v41 = v50;
        v39 = *(&v49 as &i128);
        v36 = v60;
        v29 = v59;
        v7 = std::sync::mpmc::Sender<T>::send(&v24, rcx<8>, v58);
        core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
    }
    if v12 {
        do {
            v63 = <usize as core::iter::range::Step>::forward_unchecked(v61, v62);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v25 = v61;
            v45 = *(&v54 as &i64);
            v44 = v53;
            memcpy(&v43, &v52, 16);
            v42 = v51;
            v64 = *(&v46.field_0 as &i128);
            v65 = *(&v46.field_16 as &i128);
            v41 = v50;
            v39 = *(&v49 as &i128);
            v36 = v65;
            v30 = v64;
            v8 = std::sync::mpmc::Sender<T>::send(&v25, rcx<8>, v58);
            core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
            v61 = v63;
        } while (v63 < v12);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v57, v66);
    v23 = v22;
    v33 = v8.field_16;
    v37 = v12;
    memcpy(&v38, &v46, 160);
    v48 = 0x8000000000000000;
    v46 = 0;
    v1 = std::thread::Builder::spawn_unchecked(&v46, &v26 as u8);
    v1 = core::result::Result<T,E>::expect(a2);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v49 = 0;
    v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v67 = v2;
    if v2 != 3 {
        do {
            v18 = struct16 {
                field_0: v2
                field_8: v3
            };
            v69 = std::sync::mpmc::Receiver<T>::recv(&v18, v68, a2);
            if v69 {
                v27 = 1;
                v31 = 1;
                v32 = v69;
                v34 = alloc::boxed::Box<T>::new(&v27);
                v36 = 0;
                v28 = v18;
                v37 = v0;
                v23 = alloc::vec::Vec<T,A>::push(a2);
            }
            v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v2 != 3);
    }
    v48 = 0;
    memcpy(&v47, &v13, 16);
    v46 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v57, 1, v58);
    *((v5 + 48) as &u128) = v16;
    *((v5 + 64) as &u64) = v17;
    v70 = v33;
    *((v5 + 16) as &u128) = v23;
    *((v5 + 32) as &u128) = v70;
    *(v5 as &u128) = v8.field_0;
    *((v5 + 72) as &i64) = 0;
    return;
}
