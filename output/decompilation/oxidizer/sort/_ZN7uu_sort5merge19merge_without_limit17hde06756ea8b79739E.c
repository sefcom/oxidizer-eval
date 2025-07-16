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
    let v9: u64;  // [bp-0x220]
    let v10: u64;  // [bp-0x218]
    let v11: void*;  // [bp-0x210]
    let v12: void*;  // [bp-0x208], Other Possible Types: struct24
    let v13: u64;  // [bp-0x200]
    let v14: void*;  // [bp-0x1f8]
    let v15: u128;  // [bp-0x1f0]
    let v16: u64;  // [bp-0x1e0]
    let v17: u128;  // [bp-0x1d8]
    let v18: struct32;  // [bp-0x1c8], Other Possible Types: u64
    let v19: u64;  // [bp-0x1c0]
    let v20: void*;  // [bp-0x1b8]
    let v21: u128;  // [bp-0x1b0]
    let v22: u128;  // [sp-0x1a0], Other Possible Types: struct16
    let v23: u8;  // [bp-0x1a0]
    let v24: struct16;  // [bp-0x1a0], Other Possible Types: u64
    let v25: u64;  // [bp-0x1a0]
    let v26: struct8;  // [bp-0x1a0]
    let v27: u128;  // [bp-0x1a0]
    let v28: u128;  // [bp-0x198]
    let v29: u128;  // [bp-0x198]
    let v30: u64;  // [bp-0x198]
    let v31: u64;  // [bp-0x190], Other Possible Types: void*
    let v32: u8;  // [bp-0x190]
    let v33: struct32;  // [bp-0x190]
    let v34: u64;  // [bp-0x188]
    let v35: u128;  // [bp-0x188], Other Possible Types: struct16
    let v36: Option<struct40>;  // [sp-0x180], Other Possible Types: u64, void*
    let v37: u64;  // [bp-0x178]
    let v38: u128;  // [bp-0x178]
    let v39: u64;  // [bp-0x170]
    let v40: u128;  // [bp-0x168]
    let v41: u128;  // [bp-0x158]
    let v42: u8;  // [bp-0x148]
    let v43: u128;  // [bp-0x138]
    let v44: u64;  // [bp-0x128]
    let v45: struct24;  // [sp-0xd8], Other Possible Types: u192
    let v46: struct24;  // [bp-0xd8], Other Possible Types: struct32, void*
    let v47: u64;  // [bp-0xc8], Other Possible Types: struct129
    let v48: u64;  // [bp-0xb8], Other Possible Types: void*
    let v49: u128;  // [bp-0xa8]
    let v50: u128;  // [bp-0x98]
    let v51: u128;  // [bp-0x88]
    let v52: u128;  // [bp-0x78]
    let v53: i8;  // [bp-0x68]
    let v55: u32;  // ecx
    let v57: u64;  // r8
    let v58: u128;  // xmm0
    let v59: u128;  // xmm1
    let v60: struct8;  // rbp
    let v61: u64;  // rsi
    let v62: u64;  // r13
    let v63: u128;  // xmm0
    let v64: u128;  // xmm1
    let v65: u64;  // rdx
    let v66: u64;  // rax
    let v67: u64;  // rsi
    let v68: u64;  // rax
    let v69: u128;  // xmm2
    let v70: u64;  // [bp-0x198]

    std::sync::mpmc::channel(a1);
    memcpy(&v6, &v23, 16);
    memcpy(&v21, &v32, 16);
    v46 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0, 0, v55);
    v9 = v70;
    v10 = v31;
    v11 = 0;
    v46 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0, 0, v55);
    v18 = v70;
    v19 = v31;
    v20 = 0;
    v12 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        vvar_667{stack -608} = struct32 OrderedDict({0: 𝜙@64b [((5445092, None), vvar_442{stack -608}), ((5444719, None), None)], 8: 𝜙@64b [((5445092, None), vvar_443{stack -600}), ((5444719, None), None)], 24: 𝜙@64b [((5445092, None), vvar_445{stack -584}), ((5444719, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1, &v12);
        if v2 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v57);
        memcpy(&v15, &v23, 16);
        alloc::vec::Vec<T,A>::push(a1, a2, rcx<8>);
        if v2 {
            *((v5 + 8) as &u64) = v3;
            *((v5 + 16) as &u64) = v4;
            *(v5 as &i64) = 3;
            return;
        }
        memcpy(&v23, &v15, 16);
        v31 = 0;
        v34 = 1;
        v36 = 0;
        v37 = v3;
        v39 = v4;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v25 = v1;
        v44 = *(&v53 as &i64);
        v43 = v52;
        memcpy(&v42, &v51, 16);
        v41 = v50;
        v58 = *(&v46.field_0 as &i128);
        v59 = *(&v47 as &i128);
        v40 = v49;
        v38 = *(&v48 as &i128);
        v35 = v59;
        v28 = v58;
        v7 = std::sync::mpmc::Sender<T>::send(&v25, rcx<8>, v57);
        core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
    }
    if v11 {
        do {
            v62 = <usize as core::iter::range::Step>::forward_unchecked(v60, v61);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v26 = v60;
            v44 = *(&v53 as &i64);
            v43 = v52;
            memcpy(&v42, &v51, 16);
            v41 = v50;
            v63 = *(&v46.field_0 as &i128);
            v64 = *(&v46.field_16 as &i128);
            v40 = v49;
            v38 = *(&v48 as &i128);
            v35 = v64;
            v29 = v63;
            v8 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v57);
            core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
            v60 = v62;
        } while (v62 < v11);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v55, v65);
    v22 = v21;
    v32 = v8.field_16;
    v36 = v11;
    memcpy(&v37, &v46, 160);
    v47 = 0x8000000000000000;
    v46 = 0;
    v1 = std::thread::Builder::spawn_unchecked(&v46, &v23);
    v1 = core::result::Result<T,E>::expect(a2);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v48 = 0;
    v45 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v66 = v2;
    if v2 != 3 {
        do {
            v17 = struct16 {
                field_0: v2
                field_8: v3
            };
            v68 = std::sync::mpmc::Receiver<T>::recv(&v17, v67, a2);
            if v68 {
                v24 = 1;
                v30 = 1;
                v31 = v68;
                v33 = alloc::boxed::Box<T>::new(&v24);
                v35 = 0;
                v27 = v17;
                v36 = v0;
                v22 = alloc::vec::Vec<T,A>::push(a2);
            }
            v45 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v2 != 3);
    }
    v47 = 0;
    memcpy(&v45, &v12, 16);
    v46 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v55, 1, v57);
    *((v5 + 48) as &u128) = v15;
    *((v5 + 64) as &u64) = v16;
    v69 = v32;
    *((v5 + 16) as &u128) = v22;
    *((v5 + 32) as &u128) = v69;
    *(v5 as &u128) = v8.field_0;
    *((v5 + 72) as &i64) = 0;
    return;
}
