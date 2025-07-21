fn uu_sort::merge::merge_without_limit(a0: i64, a1: i64, a2: i64) {
    let v0: u64;  // [bp-0x260]
    let v1: struct32;  // [bp-0x260], Other Possible Types: struct24
    let v2: struct88;  // [bp-0x258]
    let v3: u64;  // [bp-0x250]
    let v4: u64;  // [bp-0x248]
    let v5: i64;  // [bp-0x240]
    let v6: u128;  // [bp-0x230]
    let v7: struct128;  // [bp-0x230]
    let v8: struct128;  // [bp-0x230]
    let v9: struct16;  // [bp-0x220]
    let v10: u64;  // [bp-0x220]
    let v11: struct48;  // [bp-0x218]
    let v12: void*;  // [bp-0x210]
    let v13: void*;  // [bp-0x208], Other Possible Types: struct24
    let v14: u64;  // [bp-0x200]
    let v15: void*;  // [bp-0x1f8]
    let v16: u128;  // [bp-0x1f0]
    let v17: u64;  // [bp-0x1e0]
    let v18: struct16;  // [bp-0x1d8]
    let v19: struct32;  // [bp-0x1c8], Other Possible Types: u64
    let v20: struct48;  // [bp-0x1c0]
    let v21: void*;  // [bp-0x1b8]
    let v22: u128;  // [bp-0x1b0]
    let v23: struct24;  // [bp-0x1a0], Other Possible Types: char
    let v24: struct16;  // [sp-0x1a0], Other Possible Types: u64
    let v25: struct16;  // [bp-0x1a0], Other Possible Types: struct56
    let v26: u64;  // [bp-0x1a0]
    let v27: struct16;  // [bp-0x1a0]
    let v28: struct24;  // [bp-0x1a0]
    let v29: u128;  // [bp-0x198]
    let v30: u128;  // [bp-0x198]
    let v31: struct48;  // [bp-0x190]
    let v32: struct48;  // [bp-0x190], Other Possible Types: char, u128
    let v33: struct48;  // [bp-0x190]
    let v34: struct24;  // [bp-0x190]
    let v35: struct56;  // [bp-0x188], Other Possible Types: u128
    let v36: u64;  // [bp-0x188]
    let v37: struct24;  // [bp-0x188], Other Possible Types: u64
    let v38: struct40;  // [sp-0x180], Other Possible Types: u64
    let v39: u128;  // [bp-0x178]
    let v40: u64;  // [bp-0x178]
    let v41: u64;  // [bp-0x178]
    let v42: u128;  // [bp-0x168]
    let v43: u128;  // [bp-0x158]
    let v44: core::option::Option<&str>;  // [bp-0x148], Other Possible Types: u128
    let v45: u128;  // [bp-0x138]
    let v46: u64;  // [bp-0x128]
    let v47: void*;  // [sp-0xd8], Other Possible Types: struct32, struct24, u128
    let v48: u128;  // [bp-0xd8]
    let v49: u128;  // [bp-0xd8]
    let v50: <anon>;  // [bp-0xc8], Other Possible Types: u64
    let v51: void*;  // [bp-0xb8], Other Possible Types: u64
    let v52: u128;  // [bp-0xa8]
    let v53: u128;  // [bp-0x98]
    let v54: u128;  // [bp-0x88]
    let v55: u128;  // [bp-0x78]
    let v56: i8;  // [bp-0x68]
    let v58: u32;  // ecx
    let v59: u64;  // rcx
    let v60: u64;  // r8
    let v61: struct24;  // xmm1
    let v62: struct32;  // rbp
    let v63: u64;  // rsi
    let v64: u64;  // r13
    let v65: u128;  // xmm1
    let v66: u64;  // rdx
    let v67: struct88;  // rax
    let v68: u64;  // rsi
    let v69: u64;  // rax
    let v70: u128;  // xmm2
    let v71: u64;  // [bp-0x198]

    std::sync::mpmc::channel(a1);
    v6 = *(&v23 as &i128);
    v22 = *(&v32 as &i128);
    v47 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    v28 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v47.field_0, 0);
    v10 = v71;
    v11 = v33;
    v12 = 0;
    v47 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v47.field_0, 0, v58);
    v19 = v71;
    v20 = v33;
    v21 = 0;
    v13 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        v40 = v39;
        v36 = v35;
        v31 = v33;
        vvar_679{stack -608} = struct32 OrderedDict({0: 𝜙@64b [((5427220, None), vvar_442{stack -608}), ((5426847, None), None)], 8: 𝜙@64b [((5427220, None), vvar_443{stack -600}), ((5426847, None), None)], 24: 𝜙@64b [((5427220, None), vvar_445{stack -584}), ((5426847, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1, &v13);
        if v2 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v60);
        v16 = *(&v28.field_0 as &i128);
        alloc::vec::Vec<T,A>::push(v31, v36, rcx<8>);
        if v2 {
            *((v5 + 8) as &u64) = v3;
            *((v5 + 16) as &u64) = v4;
            *(v5 as &i64) = 3;
            return;
        }
        v25 = struct56 {
            field_0: v16
            field_16: 0
            field_24: 1
            field_32: 0
            field_40: v3
            field_48: v4
        };
        v9 = alloc::vec::Vec<T,A>::push(&v25);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v26 = v1.field_0;
        v46 = *(&v56 as &i64);
        v45 = v55;
        v44 = v54;
        v43 = v53;
        v61 = *(&v50 as &i128);
        v42 = v52;
        v41 = *(&v51 as &i128);
        v37 = v61;
        v29 = v48;
        v7 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v60);
        core::result::Result<T,E>::unwrap(&v48, "src/uu/sort/src/merge.rs");
        v33 = v32;
        v35 = v37;
        v39 = v41;
    }
    if v12 {
        do {
            v64 = <usize as core::iter::range::Step>::forward_unchecked(v62, v63);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v27 = v62;
            v46 = *(&v56 as &i64);
            v45 = v55;
            v44 = v54;
            v43 = v53;
            v65 = *(&v47.field_16 as &i128);
            v42 = v52;
            v39 = *(&v51 as &i128);
            v35 = v65;
            v30 = v48;
            v8 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v60);
            core::result::Result<T,E>::unwrap(&v48, "src/uu/sort/src/merge.rs");
            v62 = v64;
        } while (v64 < v12);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v59, v66);
    v24 = v22;
    v32 = v8.field_16;
    v38 = v12;
    memcpy(&v40, &v48, 160);
    v47 = 0;
    v47 = struct24 {
        field_0: v49 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v1 = std::thread::Builder::spawn_unchecked(&v47, &v24);
    v1 = core::result::Result<T,E>::expect(a2);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v51 = 0;
    v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v67 = v2;
    if v2 != 3 {
        do {
            v18 = struct16 {
                field_0: v2
                field_8: v3
            };
            v18 = struct16 {
                field_0: v2
                field_8: v3
            };
            v69 = std::sync::mpmc::Receiver<T>::recv(&v18, v68, a2);
            if v69 {
                v23 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v69
                };
                v34 = alloc::boxed::Box<T>::new(&v23);
                v35 = 0;
                *(&v25.field_0 as &i128) = *(&v18.field_0 as &i128);
                v38 = v0;
                v24 = alloc::vec::Vec<T,A>::push(a2);
            }
            v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v2 != 3);
    }
    v50 = 0;
    v47 = *(&v13 as &i128);
    v47 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v59, 0x1, v60);
    *((v5 + 48) as &u128) = v16;
    *((v5 + 64) as &u64) = v17;
    v70 = v32;
    *((v5 + 16) as &i128) = *(&v24 as &i128);
    *((v5 + 32) as &u128) = v70;
    *(v5 as &u128) = v8.field_0;
    *((v5 + 72) as &i64) = 0;
    return;
}
