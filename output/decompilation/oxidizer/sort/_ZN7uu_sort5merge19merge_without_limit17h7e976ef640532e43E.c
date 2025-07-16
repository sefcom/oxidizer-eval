fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct40, a2: i64) {
    let v0: u256;  // [bp-0x280], Other Possible Types: struct24
    let v1: u64;  // [bp-0x278], Other Possible Types: struct24
    let v2: u64;  // [bp-0x270], Other Possible Types: struct24
    let v3: u64;  // [bp-0x268]
    let v4: i64;  // [bp-0x260]
    let v5: u8;  // [bp-0x250]
    let v6: struct128;  // [bp-0x250]
    let v7: struct128;  // [bp-0x250]
    let v8: u64;  // [bp-0x240]
    let v9: u64;  // [bp-0x238]
    let v10: void*;  // [bp-0x230]
    let v11: u128;  // [bp-0x228]
    let v12: u64;  // [bp-0x218]
    let v13: u128;  // [bp-0x210]
    let v14: u64;  // [bp-0x200], Other Possible Types: struct32
    let v15: u64;  // [bp-0x1f8]
    let v16: void*;  // [bp-0x1f0]
    let v17: struct24;  // [bp-0x1e8], Other Possible Types: struct48, u64
    let v18: struct24;  // [bp-0x1e0]
    let v19: u256;  // [bp-0x1d8]
    let v20: u64;  // [bp-0x1b8]
    let v21: u128;  // [bp-0x1b0]
    let v22: u8;  // [sp-0x1a0]
    let v23: u128;  // [sp-0x1a0], Other Possible Types: struct16
    let v24: struct24;  // [bp-0x1a0], Other Possible Types: struct16
    let v25: u64;  // [bp-0x1a0]
    let v26: u64;  // [bp-0x1a0]
    let v27: u128;  // [bp-0x1a0]
    let v28: struct16;  // [bp-0x198]
    let v29: struct8;  // [bp-0x198]
    let v30: struct32;  // [bp-0x198]
    let v31: struct24;  // [bp-0x190], Other Possible Types: u64, void*
    let v32: u8;  // [bp-0x190]
    let v33: struct16;  // [bp-0x190]
    let v34: u64;  // [bp-0x188]
    let v35: struct24;  // [bp-0x188], Other Possible Types: u128
    let v36: struct145;  // [sp-0x180], Other Possible Types: u64, void*
    let v37: u64;  // [bp-0x178], Other Possible Types: core::option::Option<&str>
    let v38: u128;  // [bp-0x178]
    let v39: u64;  // [bp-0x170]
    let v40: u128;  // [bp-0x168], Other Possible Types: Option<struct40>
    let v41: struct16;  // [bp-0x158]
    let v42: u8;  // [bp-0x148]
    let v43: u128;  // [bp-0x138]
    let v44: u64;  // [bp-0x128]
    let v45: struct16;  // [sp-0xd8], Other Possible Types: void*, struct32
    let v46: u192;  // [sp-0xd8], Other Possible Types: struct24
    let v47: core::option::Option<&str>;  // [bp-0xc8], Other Possible Types: u64, struct24
    let v48: u64;  // [bp-0xb8], Other Possible Types: struct128
    let v49: u128;  // [bp-0xa8]
    let v50: struct16;  // [bp-0x98]
    let v51: u128;  // [bp-0x88]
    let v52: u128;  // [bp-0x78]
    let v53: i8;  // [bp-0x68]
    let v55: u32;  // ecx
    let v57: u64;  // r8
    let v58: struct16;  // xmm0
    let v59: struct24;  // xmm1
    let v60: void*;  // rbp
    let v61: u64;  // rsi
    let v62: u64;  // r13
    let v63: struct8;  // xmm0
    let v64: u128;  // xmm1
    let v65: u64;  // rdx
    let v66: u64;  // rax
    let v67: u64;  // rsi
    let v68: u64;  // rax
    let v69: u128;  // xmm2
    let v70: u64;  // [bp-0x198]

    v20 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v5, &v22, 16);
    memcpy(&v21, &v32, 16);
    v45 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v45.field_0 as i64, 0, v55);
    v8 = v70;
    v9 = v31;
    v10 = 0;
    v45 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v45.field_0 as i64, 0, v55);
    v14 = v70;
    v15 = v31;
    v16 = 0;
    v17 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_697{stack -640} = struct32 OrderedDict({0: 𝜙@64b [((5431095, None), vvar_467{stack -640}), ((5430718, None), None)], 8: 𝜙@64b [((5431095, None), vvar_468{stack -632}), ((5430718, None), None)], 24: 𝜙@64b [((5431095, None), vvar_470{stack -616}), ((5430718, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v0, &v17);
        if v1 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v57);
        memcpy(&v11, &v22, 16);
        alloc::vec::Vec<T,A>::push(a1, a2, rcx<8>);
        if v1 {
            *((v4 + 8) as &u64) = v2;
            *((v4 + 16) as &u64) = v3;
            *(v4 as &i64) = 3;
            return;
        }
        memcpy(&v22, &v11, 16);
        v31 = 0;
        v34 = 1;
        v36 = 0;
        v37 = v2;
        v39 = v3;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v25 = v0;
        v44 = *(&v53 as &i64);
        v43 = v52;
        memcpy(&v42, &v51, 16);
        v41 = v50;
        v58 = v45.field_0;
        v59 = v47;
        v40 = v49;
        v38 = *(&v48 as &i128);
        v35 = v59;
        v28 = v58;
        v6 = std::sync::mpmc::Sender<T>::send(&v25, rcx<8>, v57);
        core::result::Result<T,E>::unwrap(&v45, "src/uu/sort/src/merge.rs");
    }
    if v10 {
        do {
            v62 = <usize as core::iter::range::Step>::forward_unchecked(v60, v61);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v26 = v60;
            v44 = *(&v53 as &i64);
            v43 = v52;
            memcpy(&v42, &v51, 16);
            v41 = v50;
            v63 = v45.field_0;
            v64 = v47;
            v40 = v49;
            v38 = *(&v48 as &i128);
            v35 = v64;
            v29 = v63;
            v7 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v57);
            core::result::Result<T,E>::unwrap(&v45, "src/uu/sort/src/merge.rs");
            v60 = v62;
        } while (v62 < v10);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v65);
    v23 = v21;
    v32 = v7.field_16;
    v36 = v10;
    memcpy(&v37, &v45, 160);
    v47 = 0x8000000000000000;
    v45 = 0;
    v17 = std::thread::Builder::spawn_unchecked(&v45, &v22);
    v17 = core::result::Result<T,E>::expect(a2);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v48 = 0;
    v46 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v66 = v18;
    if v18 != 3 {
        do {
            v13 = struct16 {
                field_0: v18
                field_8: v19 as i64
            };
            v68 = std::sync::mpmc::Receiver<T>::recv(&v13, v67, a2);
            if v68 {
                v24 = 1;
                v30 = 1;
                v31 = v68;
                v33 = alloc::boxed::Box<T>::new(&v24);
                v35 = 0;
                v27 = v13;
                v36 = v17;
                v23 = alloc::vec::Vec<T,A>::push(a2);
            }
            v46 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v18 != 3);
    }
    v47 = 0;
    memcpy(&v46, &v0, 16);
    v45 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v57);
    *((v4 + 48) as &u128) = v11;
    *((v4 + 64) as &u64) = v12;
    v69 = v32;
    *((v4 + 16) as &u128) = v23;
    *((v4 + 32) as &u128) = v69;
    *(v4 as &u128) = v7.field_0;
    *((v4 + 72) as &i64) = 0;
    return;
}
