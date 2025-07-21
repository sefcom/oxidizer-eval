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
    let v9: u64;  // [bp-0x220]
    let v10: u64;  // [bp-0x218]
    let v11: void*;  // [bp-0x210]
    let v12: void*;  // [bp-0x208], Other Possible Types: struct24
    let v13: u64;  // [bp-0x200]
    let v14: void*;  // [bp-0x1f8]
    let v15: u128;  // [bp-0x1f0]
    let v16: u64;  // [bp-0x1e0]
    let v17: struct16;  // [bp-0x1d8]
    let v18: struct32;  // [bp-0x1c8], Other Possible Types: u64
    let v19: u64;  // [bp-0x1c0]
    let v20: void*;  // [bp-0x1b8]
    let v21: u128;  // [bp-0x1b0]
    let v22: i8;  // [bp-0x1a0], Other Possible Types: u64
    let v23: struct16;  // [sp-0x1a0], Other Possible Types: u64
    let v24: struct16;  // [bp-0x1a0], Other Possible Types: struct24
    let v25: u64;  // [bp-0x1a0]
    let v26: struct16;  // [bp-0x1a0]
    let v27: struct16;  // [bp-0x1a0]
    let v28: u128;  // [bp-0x198]
    let v29: u128;  // [bp-0x198]
    let v30: i8;  // [bp-0x190], Other Possible Types: u128
    let v31: void*;  // [bp-0x190]
    let v32: struct24;  // [bp-0x190]
    let v33: u64;  // [bp-0x188]
    let v34: struct24;  // [bp-0x188], Other Possible Types: struct56, u128
    let v35: void*;  // [sp-0x180], Other Possible Types: struct40, u64
    let v36: u64;  // [bp-0x178]
    let v37: u128;  // [bp-0x178]
    let v38: u64;  // [bp-0x170]
    let v39: u128;  // [bp-0x168]
    let v40: u128;  // [bp-0x158]
    let v41: core::option::Option<&str>;  // [bp-0x148], Other Possible Types: u128
    let v42: u128;  // [bp-0x138]
    let v43: u64;  // [bp-0x128]
    let v44: void*;  // [sp-0xd8], Other Possible Types: struct32, struct24, u128
    let v45: u128;  // [bp-0xd8]
    let v46: u128;  // [bp-0xd8]
    let v47: <anon>;  // [bp-0xc8], Other Possible Types: u64
    let v48: void*;  // [bp-0xb8], Other Possible Types: u64
    let v49: u128;  // [bp-0xa8]
    let v50: u128;  // [bp-0x98]
    let v51: u128;  // [bp-0x88]
    let v52: u128;  // [bp-0x78]
    let v53: i8;  // [bp-0x68]
    let v55: u32;  // ecx
    let v56: u64;  // rcx
    let v57: u64;  // r8
    let v58: struct24;  // xmm1
    let v59: struct32;  // rbp
    let v60: u64;  // rsi
    let v61: u64;  // r13
    let v62: u128;  // xmm1
    let v63: u64;  // rdx
    let v64: struct88;  // rax
    let v65: u64;  // rsi
    let v66: u64;  // rax
    let v67: u128;  // xmm2
    let v68: u64;  // [bp-0x198]

    std::sync::mpmc::channel(a1);
    v6 = *(&v22 as &i128);
    v21 = *(&v30 as &i128);
    v44 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v44.field_0, 0, v55);
    v9 = v68;
    v10 = v31;
    v11 = 0;
    v44 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(a1, a2);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v44.field_0, 0, v55);
    v18 = v68;
    v19 = v31;
    v20 = 0;
    v12 = core::iter::traits::iterator::Iterator::enumerate(a1, a2);
    loop {
        vvar_678{stack -608} = struct32 OrderedDict({0: 𝜙@64b [((5445092, None), vvar_442{stack -608}), ((5444719, None), None)], 8: 𝜙@64b [((5445092, None), vvar_443{stack -600}), ((5444719, None), None)], 24: 𝜙@64b [((5445092, None), vvar_445{stack -584}), ((5444719, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v1, &v12);
        if v2 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v57);
        v15 = *(&v22 as &i128);
        alloc::vec::Vec<T,A>::push(v31, v33, rcx<8>);
        if v2 {
            *((v5 + 8) as &u64) = v3;
            *((v5 + 16) as &u64) = v4;
            *(v5 as &i64) = 3;
            return;
        }
        v22 = v15;
        v31 = 0;
        v33 = 1;
        v35 = 0;
        v36 = v3;
        v38 = v4;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v25 = v1.field_0;
        v43 = *(&v53 as &i64);
        v42 = v52;
        v41 = v51;
        v40 = v50;
        v58 = *(&v47 as &i128);
        v39 = v49;
        v37 = *(&v48 as &i128);
        v34 = v58;
        v28 = v45;
        v7 = std::sync::mpmc::Sender<T>::send(&v25, rcx<8>, v57);
        core::result::Result<T,E>::unwrap(&v45, "src/uu/sort/src/merge.rs");
    }
    if v11 {
        do {
            v61 = <usize as core::iter::range::Step>::forward_unchecked(v59, v60);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v26 = v59;
            v43 = *(&v53 as &i64);
            v42 = v52;
            v41 = v51;
            v40 = v50;
            v62 = *(&v47 as &i128);
            v39 = v49;
            v37 = *(&v48 as &i128);
            v34 = v62;
            v29 = v45;
            v8 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v57);
            core::result::Result<T,E>::unwrap(&v45, "src/uu/sort/src/merge.rs");
            v59 = v61;
        } while (v61 < v11);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(v56, v63);
    v23 = v21;
    v30 = v8.field_16;
    v35 = v11;
    memcpy(&v36, &v45, 160);
    v44 = 0;
    v44 = struct24 {
        field_0: v46 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v1 = std::thread::Builder::spawn_unchecked(&v44, &v23);
    v1 = core::result::Result<T,E>::expect(a2);
    v12 = 0;
    v13 = 8;
    v14 = 0;
    v18 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v48 = 0;
    v44 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v64 = v2;
    if v2 != 3 {
        do {
            v17 = struct16 {
                field_0: v2
                field_8: v3
            };
            v17 = struct16 {
                field_0: v2
                field_8: v3
            };
            v66 = std::sync::mpmc::Receiver<T>::recv(&v17, v65, a2);
            if v66 {
                v24 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v66
                };
                v32 = alloc::boxed::Box<T>::new(&v24);
                v34 = 0;
                *(&v27.field_0 as &i128) = *(&v17.field_0 as &i128);
                v35 = v0;
                v23 = alloc::vec::Vec<T,A>::push(a2);
            }
            v44 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v2 != 3);
    }
    v47 = 0;
    v44 = *(&v12 as &i128);
    v44 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(v56, 0x1, v57);
    *((v5 + 48) as &u128) = v15;
    *((v5 + 64) as &u64) = v16;
    v67 = v30;
    *((v5 + 16) as &i128) = *(&v23 as &i128);
    *((v5 + 32) as &u128) = v67;
    *(v5 as &u128) = v8.field_0;
    *((v5 + 72) as &i64) = 0;
    return;
}
