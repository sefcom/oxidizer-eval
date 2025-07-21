fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: u128;  // [bp-0x2a0]
    let v1: i64;  // [bp-0x290]
    let v2: u128;  // [bp-0x280]
    let v3: struct128;  // [bp-0x280]
    let v4: struct128;  // [bp-0x280]
    let v5: u64;  // [bp-0x270]
    let v6: struct24;  // [bp-0x268]
    let v7: void*;  // [bp-0x260]
    let v8: u128;  // [bp-0x258]
    let v9: u128;  // [bp-0x248]
    let v10: struct32;  // [bp-0x230], Other Possible Types: u64
    let v11: struct24;  // [bp-0x228]
    let v12: void*;  // [bp-0x220]
    let v13: void*;  // [bp-0x218], Other Possible Types: struct40
    let v14: u64;  // [bp-0x210]
    let v15: void*;  // [bp-0x208]
    let v16: u128;  // [bp-0x200]
    let v17: i64;  // [bp-0x1f0]
    let v18: u128;  // [bp-0x1e8]
    let v19: struct56;  // [bp-0x1d8], Other Possible Types: struct24, u64
    let v20: u64;  // [bp-0x1d0]
    let v21: u320;  // [bp-0x1c8]
    let v22: struct16;  // [bp-0x1a0], Other Possible Types: struct24
    let v23: struct16;  // [bp-0x1a0]
    let v24: struct16;  // [bp-0x1a0], Other Possible Types: u64
    let v25: i8;  // [bp-0x1a0], Other Possible Types: u64
    let v26: <anon>;  // [bp-0x1a0]
    let v27: struct24;  // [bp-0x1a0]
    let v28: u128;  // [bp-0x198]
    let v29: u128;  // [bp-0x198]
    let v30: struct128;  // [bp-0x190]
    let v31: i8;  // [bp-0x190], Other Possible Types: u128
    let v32: struct24;  // [bp-0x190]
    let v33: struct24;  // [bp-0x188], Other Possible Types: u64
    let v34: u128;  // [bp-0x188]
    let v35: u128;  // [bp-0x188]
    let v36: struct16;  // [bp-0x180], Other Possible Types: struct24
    let v37: struct24;  // [bp-0x178], Other Possible Types: u64
    let v38: u128;  // [bp-0x178]
    let v39: struct56;  // [bp-0x170]
    let v40: u64;  // [bp-0x168]
    let v41: u128;  // [bp-0x168]
    let v42: struct32;  // [bp-0x160]
    let v43: struct16;  // [bp-0x158]
    let v44: struct24;  // [bp-0x148]
    let v45: struct32;  // [bp-0x138]
    let v46: struct16;  // [bp-0x128], Other Possible Types: u64
    let v47: <anon>;  // [bp-0xd8], Other Possible Types: struct32, struct24, u128
    let v48: u128;  // [bp-0xd8]
    let v49: u128;  // [bp-0xd8]
    let v50: void*;  // [bp-0xc8], Other Possible Types: u64
    let v51: struct16;  // [bp-0xb8], Other Possible Types: u64
    let v52: u128;  // [bp-0xa8]
    let v53: struct16;  // [bp-0x98]
    let v54: struct24;  // [bp-0x88]
    let v55: struct32;  // [bp-0x78]
    let v56: i8;  // [bp-0x68]
    let v58: u32;  // ecx
    let v59: u128;  // xmm0
    let v61: u64;  // r8
    let v62: u64;  // rax
    let v63: u128;  // xmm0
    let v64: u64;  // rcx
    let v65: u128;  // xmm1
    let v66: u128;  // xmm2
    let v67: struct25;  // rbp
    let v68: struct16;  // rsi
    let v69: u64;  // r13
    let v70: u128;  // xmm1
    let v71: u128;  // xmm2
    let v72: u64;  // rdx
    let v73: struct24;  // rax
    let v74: struct88;  // rsi
    let v75: u64;  // rax
    let v76: u128;  // xmm2
    let v77: struct16;  // [bp-0x2a0], Other Possible Types: u64
    let v80: u64;  // [bp-0x198]

    v17 = a1;
    std::sync::mpmc::channel(a1);
    v2 = *(&v25 as &i128);
    v18 = *(&v31 as &i128);
    v47 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v47.field_0, 0, v58);
    v5 = v80;
    v6 = v32;
    v7 = 0;
    v47 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v47.field_0, 0, v58);
    v10 = v80;
    v11 = v32;
    v12 = 0;
    v19 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_734{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5446981, None), vvar_486{stack -536}), ((5446556, None), None)], 8: 𝜙@64b [((5446981, None), vvar_487{stack -528}), ((5446556, None), None)], 24: 𝜙@128b [((5446981, None), vvar_489{stack -512}), ((5446556, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v13, &v19);
        if v14 == 9223372036854775809 {
            break;
        }
        v59 = v13.field_8;
        v9 = v16;
        v8 = v59;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v61);
        v0 = *(&v25 as &i128);
        alloc::vec::Vec<T,A>::push(v32, v33, rcx<8>);
        v62 = v8;
        v63 = *((&v8 as &char + 8) as &i128);
        if v62 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v63;
            *(v1 as &i64) = 3;
            return;
        }
        v64 = *((&v9 as &char + 8) as &i64);
        *(&v25 as &i128) = *(&v77 as &i128);
        v32 = v62;
        v34 = v63;
        v37 = v64;
        v39 = 0;
        v40 = 1;
        v42 = 0;
        v22 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v26 = v13.field_0;
        v46 = *(&v56 as &i64);
        v45 = v55;
        v44 = v54;
        v43 = v53;
        v65 = *(&v50 as &i128);
        v66 = *(&v51 as &i128);
        v41 = v52;
        v38 = v66;
        v35 = v65;
        v28 = v48;
        v3 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v61);
        core::result::Result<T,E>::unwrap(&v48, "src/uu/sort/src/merge.rs");
    }
    if v7 {
        do {
            v69 = <usize as core::iter::range::Step>::forward_unchecked(v67, v68);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v27 = v67;
            v46 = *(&v56 as &i64);
            v45 = v55;
            v44 = v54;
            v43 = v53;
            v70 = *(&v47.field_16 as &i128);
            v71 = *(&v51 as &i128);
            v41 = v52;
            v38 = v71;
            v34 = v70;
            v29 = v48;
            v4 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v61);
            core::result::Result<T,E>::unwrap(&v48, "src/uu/sort/src/merge.rs");
            v67 = v69;
        } while (v69 < v7);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v72);
    v24 = v18;
    v31 = v4.field_16;
    v36 = v7;
    memcpy(&v37, &v48, 160);
    v47 = 0;
    v47 = struct24 {
        field_0: v49 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v19 = std::thread::Builder::spawn_unchecked(&v47, &v24);
    v19 = core::result::Result<T,E>::expect(a2);
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v51 = 0;
    v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v73 = v20;
    if v20 != 3 {
        do {
            v77 = struct16 {
                field_0: v20
                field_8: v21 as i64
            };
            v77 = struct16 {
                field_0: v20
                field_8: v21 as i64
            };
            v75 = std::sync::mpmc::Receiver<T>::recv(&v77, v74, a2);
            if v75 {
                v22 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v75
                };
                v30 = alloc::boxed::Box<T>::new(&v22);
                v33 = 0;
                *(&v23.field_0 as &i128) = *(&v77.field_0 as &i128);
                v36 = v19;
                v24 = alloc::vec::Vec<T,A>::push(a2);
            }
            v47 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v20 != 3);
    }
    v50 = 0;
    v47 = *(&v10.field_24 as &i128);
    v47 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v61);
    *((v1 + 48) as &i128) = *((&v4.field_32 as &char + 8) as &i128);
    *((v1 + 64) as &i64) = *((&v4.field_48 as &char + 8) as &i64);
    v76 = v31;
    *((v1 + 16) as &i128) = *(&v24 as &i128);
    *((v1 + 32) as &u128) = v76;
    *(v1 as &u128) = v2;
    *((v1 + 72) as &i64) = 0;
    return;
}
