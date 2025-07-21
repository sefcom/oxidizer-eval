fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: struct16;  // [bp-0x2a0], Other Possible Types: u64
    let v1: u128;  // [bp-0x2a0]
    let v2: i64;  // [bp-0x290]
    let v3: struct16;  // [bp-0x280]
    let v4: struct128;  // [bp-0x280]
    let v5: struct128;  // [bp-0x280]
    let v6: u64;  // [bp-0x270]
    let v7: struct16;  // [bp-0x268]
    let v8: void*;  // [bp-0x260]
    let v9: u128;  // [bp-0x258]
    let v10: u128;  // [bp-0x248]
    let v11: struct32;  // [bp-0x230], Other Possible Types: u64
    let v12: struct16;  // [bp-0x228]
    let v13: void*;  // [bp-0x220]
    let v14: <anon>;  // [bp-0x218], Other Possible Types: struct40
    let v15: u64;  // [bp-0x210]
    let v16: void*;  // [bp-0x208]
    let v17: u128;  // [bp-0x200]
    let v18: u64;  // [bp-0x1f0]
    let v19: u128;  // [bp-0x1e8]
    let v20: struct56;  // [bp-0x1d8], Other Possible Types: struct24, u64
    let v21: u64;  // [bp-0x1d0]
    let v22: u320;  // [bp-0x1c8]
    let v23: struct16;  // [bp-0x1a0], Other Possible Types: struct24
    let v24: struct16;  // [bp-0x1a0]
    let v25: struct16;  // [bp-0x1a0], Other Possible Types: u64
    let v26: i8;  // [bp-0x1a0], Other Possible Types: u64
    let v27: struct24;  // [bp-0x1a0]
    let v28: struct24;  // [bp-0x1a0]
    let v29: u128;  // [bp-0x198]
    let v30: u128;  // [bp-0x198]
    let v31: struct32;  // [bp-0x190]
    let v32: i8;  // [bp-0x190], Other Possible Types: u128
    let v33: struct16;  // [bp-0x190]
    let v34: struct128;  // [bp-0x188], Other Possible Types: u64
    let v35: u128;  // [bp-0x188]
    let v36: u128;  // [bp-0x188]
    let v37: struct16;  // [bp-0x180], Other Possible Types: struct24
    let v38: core::option::Option<&str>;  // [bp-0x178]
    let v39: u128;  // [bp-0x178]
    let v40: Option<struct40>;  // [bp-0x170]
    let v41: u64;  // [bp-0x168]
    let v42: u128;  // [bp-0x168]
    let v43: struct56;  // [bp-0x160]
    let v44: struct32;  // [bp-0x158], Other Possible Types: struct48
    let v45: struct24;  // [bp-0x148], Other Possible Types: struct96
    let v46: struct24;  // [bp-0x138], Other Possible Types: struct32
    let v47: struct24;  // [bp-0x128], Other Possible Types: struct40
    let v48: struct32;  // [bp-0xd8], Other Possible Types: struct16, struct24
    let v49: u128;  // [bp-0xd8]
    let v50: struct16;  // [bp-0xd8]
    let v51: struct128;  // [bp-0xc8], Other Possible Types: u64
    let v52: void*;  // [bp-0xb8], Other Possible Types: u64
    let v53: u128;  // [bp-0xa8]
    let v54: u128;  // [bp-0x98]
    let v55: u128;  // [bp-0x88]
    let v56: u128;  // [bp-0x78]
    let v57: i8;  // [bp-0x68]
    let v59: u32;  // ecx
    let v60: Result<struct24, struct16>;  // xmm0
    let v62: u64;  // r8
    let v63: u64;  // rax
    let v64: u128;  // xmm0
    let v65: u64;  // rcx
    let v66: u128;  // xmm1
    let v67: u128;  // xmm2
    let v68: struct17;  // rbp
    let v69: struct16;  // rsi
    let v70: struct24;  // r13
    let v71: u128;  // xmm1
    let v72: u128;  // xmm2
    let v73: u64;  // rdx
    let v74: u64;  // rax
    let v75: struct88;  // rsi
    let v76: u64;  // rax
    let v77: u128;  // xmm2
    let v80: u64;  // [bp-0x198]

    v18 = a1;
    std::sync::mpmc::channel(a1);
    v3 = *(&v26 as &i128);
    v19 = *(&v32 as &i128);
    v48 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(*(&v48.field_0 as &i64), 0, v59);
    v6 = v80;
    v7 = v33;
    v8 = 0;
    v48 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(*(&v48.field_0 as &i64), 0, v59);
    v11 = v80;
    v12 = v33;
    v13 = 0;
    v20 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_728{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5441125, None), vvar_480{stack -536}), ((5440693, None), None)], 8: 𝜙@64b [((5441125, None), vvar_481{stack -528}), ((5440693, None), None)], 24: 𝜙@128b [((5441125, None), vvar_483{stack -512}), ((5440693, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v20);
        if v15 == 9223372036854775809 {
            break;
        }
        v60 = v14.field_8;
        v10 = v17;
        *(&v9 as &Result<struct24, struct16>) = v60;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v62);
        v1 = *(&v26 as &i128);
        alloc::vec::Vec<T,A>::push(v33, v34, rcx<8>);
        v63 = v9;
        v64 = *((&v9 as &char + 8) as &i128);
        if v63 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v64;
            *(v2 as &i64) = 3;
            return;
        }
        v65 = *((&v10 as &char + 8) as &i64);
        *(&v26 as &i128) = *(&v0 as &i128);
        v33 = v63;
        v35 = v64;
        v38 = v65;
        v40 = 0;
        v41 = 1;
        v43 = 0;
        v23 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v27 = v14.field_0;
        v47 = *(&v57 as &i64);
        v46 = v56;
        v45 = v55;
        v44 = v54;
        v66 = *(&v51 as &i128);
        v67 = *(&v52 as &i128);
        v42 = v53;
        v39 = v67;
        v36 = v66;
        v29 = v49;
        v4 = std::sync::mpmc::Sender<T>::send(&v27, rcx<8>, v62);
        core::result::Result<T,E>::unwrap(&v49, "src/uu/sort/src/merge.rs");
    }
    if v8 {
        do {
            v70 = <usize as core::iter::range::Step>::forward_unchecked(v68, v69);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v28 = v68;
            v47 = *(&v57 as &i64);
            v46 = v56;
            v45 = v55;
            v44 = v54;
            v71 = *(&v51 as &i128);
            v72 = *(&v52 as &i128);
            v42 = v53;
            v39 = v72;
            v35 = v71;
            v30 = v49;
            v5 = std::sync::mpmc::Sender<T>::send(&v28, rcx<8>, v62);
            core::result::Result<T,E>::unwrap(&v49, "src/uu/sort/src/merge.rs");
            v68 = v70;
        } while (v70 < v8);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v73);
    v25 = v19;
    v32 = v5.field_16;
    v37 = v8;
    memcpy(&v38, &v49, 160);
    v48 = 0;
    v48 = struct24 {
        field_0: v50 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v20 = std::thread::Builder::spawn_unchecked(&v48, &v25);
    v20 = core::result::Result<T,E>::expect(a2);
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v11 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v52 = 0;
    v48 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v74 = v21;
    if v21 != 3 {
        do {
            v0 = struct16 {
                field_0: v21
                field_8: v22 as i64
            };
            v0 = struct16 {
                field_0: v21
                field_8: v22 as i64
            };
            v76 = std::sync::mpmc::Receiver<T>::recv(&v0, v75, a2);
            if v76 {
                v23 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v76
                };
                v31 = alloc::boxed::Box<T>::new(&v23);
                v34 = 0;
                *(&v24.field_0 as &i128) = *(&v0.field_0 as &i128);
                v37 = v20;
                v25 = alloc::vec::Vec<T,A>::push(a2);
            }
            v48 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v21 != 3);
    }
    v51 = 0;
    v48 = *((&v11.field_16 as &char + 8) as &i128);
    v48 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v62);
    *((v2 + 48) as &i128) = *((&v5.field_32 as &char + 8) as &i128);
    *((v2 + 64) as &i64) = *((&v5.field_48 as &char + 8) as &i64);
    v77 = v32;
    *((v2 + 16) as &i128) = *(&v25 as &i128);
    *((v2 + 32) as &u128) = v77;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
