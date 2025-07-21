fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct40, a2: i64) {
    let v0: struct24;  // [bp-0x280], Other Possible Types: struct32
    let v1: struct24;  // [bp-0x278], Other Possible Types: u64
    let v2: struct24;  // [bp-0x270], Other Possible Types: u64
    let v3: u64;  // [bp-0x268]
    let v4: i64;  // [bp-0x260]
    let v5: u128;  // [bp-0x250]
    let v6: struct128;  // [bp-0x250]
    let v7: struct128;  // [bp-0x250]
    let v8: u64;  // [bp-0x240]
    let v9: u64;  // [bp-0x238]
    let v10: void*;  // [bp-0x230]
    let v11: u128;  // [bp-0x228]
    let v12: u64;  // [bp-0x218]
    let v13: struct16;  // [bp-0x210]
    let v14: struct32;  // [bp-0x200], Other Possible Types: u64
    let v15: struct24;  // [bp-0x1f8]
    let v16: void*;  // [bp-0x1f0]
    let v17: struct48;  // [bp-0x1e8], Other Possible Types: struct24, u64
    let v18: struct24;  // [bp-0x1e0]
    let v19: u256;  // [bp-0x1d8]
    let v20: u64;  // [bp-0x1b8]
    let v21: u128;  // [bp-0x1b0]
    let v22: struct24;  // [sp-0x1a0], Other Possible Types: char, u64
    let v23: struct16;  // [sp-0x1a0], Other Possible Types: u64
    let v24: struct16;  // [bp-0x1a0]
    let v25: u64;  // [bp-0x1a0]
    let v26: Option<struct40>;  // [bp-0x1a0]
    let v27: u128;  // [bp-0x198]
    let v28: u128;  // [bp-0x198]
    let v29: i8;  // [bp-0x190], Other Possible Types: u128
    let v30: void*;  // [bp-0x190]
    let v31: struct16;  // [bp-0x190]
    let v32: u64;  // [bp-0x188]
    let v33: struct32;  // [bp-0x188], Other Possible Types: u128
    let v34: void*;  // [sp-0x180], Other Possible Types: <anon>, struct56
    let v35: u64;  // [bp-0x178]
    let v36: u128;  // [bp-0x178]
    let v37: u64;  // [bp-0x170]
    let v38: struct24;  // [bp-0x168]
    let v39: struct24;  // [bp-0x158]
    let v40: struct129;  // [bp-0x148]
    let v41: struct56;  // [bp-0x138]
    let v42: struct24;  // [bp-0x128], Other Possible Types: u64
    let v43: void*;  // [bp-0xd8], Other Possible Types: struct32, struct16, struct24, u128
    let v44: u128;  // [bp-0xd8]
    let v45: u128;  // [bp-0xd8]
    let v46: void*;  // [bp-0xc8], Other Possible Types: u64
    let v47: struct32;  // [bp-0xb8], Other Possible Types: u64
    let v48: struct24;  // [bp-0xa8]
    let v49: struct24;  // [bp-0x98]
    let v50: struct129;  // [bp-0x88]
    let v51: struct56;  // [bp-0x78]
    let v52: i8;  // [bp-0x68]
    let v54: u32;  // ecx
    let v56: u64;  // r8
    let v57: u128;  // xmm1
    let v58: void*;  // rbp
    let v59: u64;  // rsi
    let v60: u64;  // r13
    let v61: u128;  // xmm1
    let v62: u64;  // rdx
    let v63: u64;  // rax
    let v64: u64;  // rsi
    let v65: u64;  // rax
    let v66: u128;  // xmm2
    let v67: u64;  // [bp-0x198]

    v20 = a1;
    std::sync::mpmc::channel(a1);
    v5 = *(&v22 as &i128);
    v21 = *(&v29 as &i128);
    v43 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43.field_0 as i64, 0, v54);
    v8 = v67;
    v9 = v30;
    v10 = 0;
    v43 = core::iter::traits::iterator::Iterator::size_hint();
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43.field_0 as i64, 0, v54);
    v14 = v67;
    v15 = v30;
    v16 = 0;
    v17 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_708{stack -640} = struct32 OrderedDict({0: 𝜙@64b [((5437159, None), vvar_467{stack -640}), ((5436782, None), None)], 8: 𝜙@64b [((5437159, None), vvar_468{stack -632}), ((5436782, None), None)], 24: 𝜙@64b [((5437159, None), vvar_470{stack -616}), ((5436782, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v0, &v17);
        if v1 == 2 {
            break;
        }
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v56);
        v11 = *(&v22 as &i128);
        alloc::vec::Vec<T,A>::push(v30, v32, rcx<8>);
        if v1 {
            *((v4 + 8) as &u64) = v2;
            *((v4 + 16) as &u64) = v3;
            *(v4 as &i64) = 3;
            return;
        }
        v22 = v11;
        v30 = 0;
        v32 = 1;
        v34 = 0;
        v35 = v2;
        v37 = v3;
        v24 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v25 = v0.field_0;
        v42 = *(&v52 as &i64);
        v41 = v51;
        v40 = v50;
        v39 = v49;
        v57 = *(&v46 as &i128);
        v38 = v48;
        v36 = *(&v47 as &i128);
        v33 = v57;
        v27 = v44;
        v6 = std::sync::mpmc::Sender<T>::send(&v25, rcx<8>, v56);
        core::result::Result<T,E>::unwrap(&v44, "src/uu/sort/src/merge.rs");
    }
    if v10 {
        do {
            v60 = <usize as core::iter::range::Step>::forward_unchecked(v58, v59);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v26 = v58;
            v42 = *(&v52 as &i64);
            v41 = v51;
            v40 = v50;
            v39 = v49;
            v61 = *(&v46 as &i128);
            v38 = v48;
            v36 = *(&v47 as &i128);
            v33 = v61;
            v28 = v44;
            v7 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v56);
            core::result::Result<T,E>::unwrap(&v44, "src/uu/sort/src/merge.rs");
            v58 = v60;
        } while (v60 < v10);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v62);
    v23 = v21;
    v29 = v7.field_16;
    v34 = v10;
    memcpy(&v35, &v44, 160);
    v43 = 0;
    v43 = struct24 {
        field_0: v45 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v17 = std::thread::Builder::spawn_unchecked(&v43, &v23);
    v17 = core::result::Result<T,E>::expect(a2);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v14 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v47 = 0;
    v43 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v63 = v18;
    if v18 != 3 {
        do {
            v13 = struct16 {
                field_0: v18
                field_8: v19 as i64
            };
            v13 = struct16 {
                field_0: v18
                field_8: v19 as i64
            };
            v65 = std::sync::mpmc::Receiver<T>::recv(&v13, v64, a2);
            if v65 {
                v22 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v65
                };
                v31 = alloc::boxed::Box<T>::new(&v22);
                v33 = 0;
                v24.field_0 = v13.field_0;
                v34 = v17;
                v23 = alloc::vec::Vec<T,A>::push(a2);
            }
            v43 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v18 != 3);
    }
    v46 = 0;
    v43 = *(&v0.field_0 as &i128);
    v43 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v56);
    *((v4 + 48) as &u128) = v11;
    *((v4 + 64) as &u64) = v12;
    v66 = v29;
    *((v4 + 16) as &i128) = *(&v23 as &i128);
    *((v4 + 32) as &u128) = v66;
    *(v4 as &u128) = v7.field_0;
    *((v4 + 72) as &i64) = 0;
    return;
}
