fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct16, a2: i64) {
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
    let v11: struct32;  // [bp-0x230], Other Possible Types: u64
    let v12: u64;  // [bp-0x228]
    let v13: void*;  // [bp-0x220]
    let v14: u320;  // [bp-0x218]
    let v15: u64;  // [bp-0x210], Other Possible Types: <anon>
    let v16: void*;  // [bp-0x208]
    let v18: u64;  // [bp-0x1f0]
    let v19: u8;  // [bp-0x1e8]
    let v20: struct24;  // [bp-0x1d8], Other Possible Types: u64, struct56
    let v21: <anon>;  // [bp-0x1d0]
    let v22: u320;  // [bp-0x1c8]
    let v23: u128;  // [bp-0x1a0]
    let v24: u128;  // [bp-0x1a0], Other Possible Types: struct16
    let v25: struct16;  // [bp-0x1a0], Other Possible Types: struct24
    let v26: Option<struct40>;  // [bp-0x1a0]
    let v27: struct24;  // [bp-0x1a0]
    let v28: struct16;  // [bp-0x198], Other Possible Types: struct24
    let v29: struct16;  // [bp-0x198]
    let v30: u8;  // [bp-0x190]
    let v31: u64;  // [bp-0x190]
    let v32: struct32;  // [bp-0x190]
    let v33: struct16;  // [bp-0x190]
    let v34: struct32;  // [bp-0x188], Other Possible Types: u64
    let v35: u128;  // [bp-0x188]
    let v36: u128;  // [bp-0x188]
    let v37: struct24;  // [bp-0x180], Other Possible Types: struct16
    let v38: u64;  // [bp-0x178]
    let v39: u128;  // [bp-0x178]
    let v40: void*;  // [bp-0x170]
    let v41: u64;  // [bp-0x168]
    let v42: u128;  // [bp-0x168]
    let v43: struct32;  // [bp-0x160]
    let v44: struct16;  // [bp-0x158]
    let v45: u8;  // [bp-0x148]
    let v46: struct24;  // [bp-0x138], Other Possible Types: struct129
    let v47: struct128;  // [bp-0x128], Other Possible Types: struct56
    let v48: u192;  // [bp-0xd8], Other Possible Types: struct24
    let v49: struct16;  // [sp-0xd8], Other Possible Types: struct32, struct145
    let v50: void*;  // [bp-0xc8], Other Possible Types: u64, struct24
    let v51: void*;  // [bp-0xb8], Other Possible Types: u64
    let v52: u128;  // [bp-0xa8]
    let v53: struct16;  // [bp-0x98]
    let v54: u128;  // [bp-0x88]
    let v55: u128;  // [bp-0x78]
    let v56: i8;  // [bp-0x68]
    let v58: u32;  // ecx
    let v60: u64;  // r8
    let v61: u64;  // rax
    let v62: u128;  // xmm0
    let v63: u64;  // rcx
    let v64: struct16;  // xmm0
    let v65: u128;  // xmm1
    let v66: u128;  // xmm2
    let v67: struct56;  // rbp
    let v68: u64;  // rsi
    let v69: u64;  // r13
    let v70: struct16;  // xmm0
    let v71: u128;  // xmm1
    let v72: u128;  // xmm2
    let v73: u64;  // rdx
    let v74: u64;  // rax
    let v75: u64;  // rsi
    let v76: u64;  // rax
    let v77: u128;  // xmm2
    let v78: u128;  // [bp-0x2a0]
    let v80: u64;  // [bp-0x198]

    v18 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v2, &v23, 16);
    memcpy(&v19, &v30, 16);
    v49 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49.field_0 as i64, 0, v58);
    v5 = v80;
    v6 = v31;
    v7 = 0;
    v49 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49.field_0 as i64, 0, v58);
    v11 = v80;
    v12 = v31;
    v13 = 0;
    v20 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_717{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5441125, None), vvar_480{stack -536}), ((5440693, None), None)], 8: 𝜙@64b [((5441125, None), vvar_481{stack -528}), ((5440693, None), None)], 24: 𝜙@128b [((5441125, None), vvar_483{stack -512}), ((5440693, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v20);
        if v15 == 9223372036854775809 {
            break;
        }
        memcpy(&v9, &v14, 16);
        v8 = *((&v14 as &char + 8) as &i128);
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v60);
        v0 = *(&v23 as &i128);
        alloc::vec::Vec<T,A>::push(v31, v34, rcx<8>);
        v61 = v8;
        v62 = *((&v8 as &char + 8) as &i128);
        if v61 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v62;
            *(v1 as &i64) = 3;
            return;
        }
        v63 = v10;
        v23 = *(&v78 as &i128);
        v31 = v61;
        v35 = v62;
        v38 = v63;
        v40 = 0;
        v41 = 1;
        v43 = 0;
        v25 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v26 = v14 as i64;
        v47 = *(&v56 as &i64);
        v46 = v55;
        memcpy(&v45, &v54, 16);
        v44 = v53;
        v64 = v49.field_0;
        v65 = *(&v50 as &i128);
        v66 = *(&v51 as &i128);
        v42 = v52;
        v39 = v66;
        v36 = v65;
        v28 = v64;
        v3 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v60);
        core::result::Result<T,E>::unwrap(&v49, "src/uu/sort/src/merge.rs");
    }
    if v7 {
        do {
            v69 = <usize as core::iter::range::Step>::forward_unchecked(v67, v68);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v27 = v67;
            v47 = *(&v56 as &i64);
            v46 = v55;
            memcpy(&v45, &v54, 16);
            v44 = v53;
            v70 = v49.field_0;
            v71 = *(&v50 as &i128);
            v72 = *(&v51 as &i128);
            v42 = v52;
            v39 = v72;
            v35 = v71;
            v29 = v70;
            v4 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v60);
            core::result::Result<T,E>::unwrap(&v49, "src/uu/sort/src/merge.rs");
            v67 = v69;
        } while (v69 < v7);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v73);
    v24 = v19;
    v30 = v4.field_16;
    v37 = v7;
    memcpy(&v38, &v49, 160);
    v50 = 0x8000000000000000;
    v49 = 0;
    v20 = std::thread::Builder::spawn_unchecked(&v49, &v24);
    v20 = core::result::Result<T,E>::expect(a2);
    v11 as u64 = 0;
    v15 = 8;
    v16 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v51 = 0;
    v48 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v74 = v21;
    if v21 != 3 {
        do {
            v78 = struct16 {
                field_0: v21
                field_8: v22 as i64
            };
            v76 = std::sync::mpmc::Receiver<T>::recv(&v78, v75, a2);
            if v76 {
                v25 = 1;
                v28 = 1;
                v32 = v76;
                v33 = alloc::boxed::Box<T>::new(&v25);
                v34 = 0;
                v23 = v78;
                v37 = v20;
                v24 = alloc::vec::Vec<T,A>::push(a2);
            }
            v48 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v21 != 3);
    }
    v50 = 0;
    memcpy(&v48, &v11 as u64, 16);
    v49 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v60);
    *((v1 + 48) as &i128) = *((&v4.field_32 as &char + 8) as &i128);
    *((v1 + 64) as &u64) = v9;
    v77 = v30;
    *((v1 + 16) as &u128) = v24;
    *((v1 + 32) as &u128) = v77;
    *(v1 as &u128) = v4.field_0;
    *((v1 + 72) as &i64) = 0;
    return;
}
