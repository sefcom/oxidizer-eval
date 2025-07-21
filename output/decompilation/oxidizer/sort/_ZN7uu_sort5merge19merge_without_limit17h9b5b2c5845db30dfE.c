fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct32, a2: i64) {
    let v0: u128;  // [bp-0x290]
    let v1: i64;  // [bp-0x280]
    let v2: u128;  // [bp-0x270]
    let v3: struct128;  // [bp-0x270]
    let v4: struct128;  // [bp-0x270]
    let v5: u64;  // [bp-0x260]
    let v6: struct24;  // [bp-0x258]
    let v7: void*;  // [bp-0x250]
    let v8: u128;  // [bp-0x248]
    let v9: u128;  // [bp-0x238]
    let v10: void*;  // [bp-0x220], Other Possible Types: struct40
    let v11: u64;  // [bp-0x218]
    let v12: void*;  // [bp-0x210]
    let v13: u64;  // [bp-0x1f8]
    let v14: struct40;  // [bp-0x1f8]
    let v15: struct24;  // [bp-0x1f8]
    let v16: struct24;  // [bp-0x1f0]
    let v17: u64;  // [bp-0x1e8]
    let v18: u128;  // [bp-0x1e0]
    let v19: struct32;  // [bp-0x1d0], Other Possible Types: u64
    let v20: struct24;  // [bp-0x1c8]
    let v21: void*;  // [bp-0x1c0]
    let v22: i64;  // [bp-0x1b8]
    let v23: u128;  // [bp-0x1b0]
    let v24: struct16;  // [bp-0x1a0]
    let v25: struct16;  // [bp-0x1a0], Other Possible Types: u64
    let v26: i8;  // [bp-0x1a0], Other Possible Types: u64
    let v27: <anon>;  // [bp-0x1a0]
    let v28: struct128;  // [bp-0x1a0]
    let v29: struct24;  // [bp-0x1a0]
    let v30: u128;  // [bp-0x198]
    let v31: u128;  // [bp-0x198]
    let v32: i8;  // [bp-0x190], Other Possible Types: u128
    let v33: struct24;  // [bp-0x190]
    let v34: struct16;  // [bp-0x190]
    let v35: struct128;  // [bp-0x188], Other Possible Types: u64
    let v36: u128;  // [bp-0x188]
    let v37: u128;  // [bp-0x188]
    let v38: struct24;  // [bp-0x180], Other Possible Types: struct32
    let v39: struct24;  // [bp-0x178], Other Possible Types: u64
    let v40: u128;  // [bp-0x178]
    let v41: struct56;  // [bp-0x170]
    let v42: struct40;  // [bp-0x168]
    let v43: u128;  // [bp-0x168]
    let v44: struct32;  // [bp-0x160]
    let v45: struct24;  // [bp-0x158]
    let v46: struct32;  // [bp-0x148]
    let v47: struct16;  // [bp-0x138]
    let v48: struct24;  // [bp-0x128], Other Possible Types: u64
    let v49: <anon>;  // [bp-0xd8], Other Possible Types: struct32, struct24, u128
    let v50: u128;  // [bp-0xd8]
    let v51: u128;  // [bp-0xd8]
    let v52: struct24;  // [bp-0xc8], Other Possible Types: u64
    let v53: struct16;  // [bp-0xb8], Other Possible Types: u64
    let v54: u128;  // [bp-0xa8]
    let v55: struct24;  // [bp-0x98]
    let v56: struct32;  // [bp-0x88]
    let v57: struct16;  // [bp-0x78]
    let v58: i8;  // [bp-0x68]
    let v60: u32;  // ecx
    let v61: u128;  // xmm0
    let v63: u64;  // r8
    let v64: u64;  // rax
    let v65: u128;  // xmm0
    let v66: u64;  // rcx
    let v67: u128;  // xmm1
    let v68: u128;  // xmm2
    let v69: struct25;  // rbp
    let v70: struct16;  // rsi
    let v71: u64;  // r13
    let v72: u128;  // xmm1
    let v73: u128;  // xmm2
    let v74: u64;  // rdx
    let v75: struct24;  // rax
    let v76: struct88;  // rsi
    let v77: u64;  // rax
    let v78: u128;  // xmm2
    let v79: struct16;  // [bp-0x290], Other Possible Types: u64
    let v82: u64;  // [bp-0x198]

    v22 = a1;
    std::sync::mpmc::channel(a1);
    v2 = *(&v26 as &i128);
    v23 = *(&v32 as &i128);
    v49 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49.field_0, 0, v60);
    v5 = v82;
    v6 = v33;
    v7 = 0;
    v49 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v49.field_0, 0, v60);
    v19 = v82;
    v20 = v33;
    v21 = 0;
    v10 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_733{stack -504} = struct40 OrderedDict({0: 𝜙@64b [((5439157, None), vvar_486{stack -504}), ((5438732, None), None)], 8: 𝜙@64b [((5439157, None), vvar_487{stack -496}), ((5438732, None), None)], 24: 𝜙@128b [((5439157, None), vvar_489{stack -480}), ((5438732, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v10);
        if v16 == 9223372036854775809 {
            break;
        }
        v61 = *((&v14.field_0 as &char + 8) as &i128);
        v9 = v18;
        v8 = v61;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v63);
        v0 = *(&v26 as &i128);
        alloc::vec::Vec<T,A>::push(v33, v35, rcx<8>);
        v64 = v8;
        v65 = *((&v8 as &char + 8) as &i128);
        if v64 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v65;
            *(v1 as &i64) = 3;
            return;
        }
        v66 = *((&v9 as &char + 8) as &i64);
        *(&v26 as &i128) = *(&v79 as &i128);
        v33 = v64;
        v36 = v65;
        v39 = v66;
        v41 = 0;
        v42 = 1;
        v44 = 0;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v27 = v14.field_0 as i64;
        v48 = *(&v58 as &i64);
        v47 = v57;
        v46 = v56;
        v45 = v55;
        v67 = *(&v52 as &i128);
        v68 = *(&v53 as &i128);
        v43 = v54;
        v40 = v68;
        v37 = v67;
        v30 = v50;
        v3 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v63);
        core::result::Result<T,E>::unwrap(&v50, "src/uu/sort/src/merge.rs");
    }
    if v7 {
        do {
            v71 = <usize as core::iter::range::Step>::forward_unchecked(v69, v70);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v28 = v69;
            v48 = *(&v58 as &i64);
            v47 = v57;
            v46 = v56;
            v45 = v55;
            v72 = *(&v49.field_16 as &i128);
            v73 = *(&v53 as &i128);
            v43 = v54;
            v40 = v73;
            v36 = v72;
            v31 = v50;
            v4 = std::sync::mpmc::Sender<T>::send(&v28, rcx<8>, v63);
            core::result::Result<T,E>::unwrap(&v50, "src/uu/sort/src/merge.rs");
            v69 = v71;
        } while (v71 < v7);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v74);
    v25 = v23;
    v32 = v4.field_16;
    v38 = v7;
    memcpy(&v39, &v50, 160);
    v49 = 0;
    v49 = struct24 {
        field_0: v51 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v15 = std::thread::Builder::spawn_unchecked(&v49, &v25);
    v15 = core::result::Result<T,E>::expect(a2);
    v10 = 0;
    v11 = 8;
    v12 = 0;
    v19 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v53 = 0;
    v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v75 = v16;
    if v16 != 3 {
        do {
            v79 = struct16 {
                field_0: v16
                field_8: v17
            };
            v79 = struct16 {
                field_0: v16
                field_8: v17
            };
            v77 = std::sync::mpmc::Receiver<T>::recv(&v79, v76, a2);
            if v77 {
                v29 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v77
                };
                v34 = alloc::boxed::Box<T>::new(&v29);
                v35 = 0;
                *(&v24.field_0 as &i128) = *(&v79.field_0 as &i128);
                v38 = v13;
                v25 = alloc::vec::Vec<T,A>::push(a2);
            }
            v49 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v16 != 3);
    }
    v52 = 0;
    v49 = *(&v10 as &i128);
    v49 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v63);
    *((v1 + 48) as &i128) = *((&v4.field_32 as &char + 8) as &i128);
    *((v1 + 64) as &i64) = *((&v4.field_48 as &char + 8) as &i64);
    v78 = v32;
    *((v1 + 16) as &i128) = *(&v25 as &i128);
    *((v1 + 32) as &u128) = v78;
    *(v1 as &u128) = v4.field_0;
    *((v1 + 72) as &i64) = 0;
    return;
}
