fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: u128;  // [bp-0x308]
    let v1: u128;  // [bp-0x308]
    let v2: i64;  // [bp-0x2f8]
    let v3: u8;  // [bp-0x2e8]
    let v4: struct128;  // [bp-0x2e8]
    let v5: struct128;  // [bp-0x2e8]
    let v6: struct16;  // [bp-0x2d8]
    let v7: struct129;  // [bp-0x2d8]
    let v8: u64;  // [bp-0x2d0]
    let v9: void*;  // [bp-0x2c8]
    let v10: struct24;  // [bp-0x2c0], Other Possible Types: struct32
    let v11: struct24;  // [bp-0x2b8]
    let v12: struct24;  // [bp-0x2b0]
    let v13: i64;  // [bp-0x2a8]
    let v15: u8;  // [bp-0x298]
    let v16: struct24;  // [bp-0x288], Other Possible Types: u192
    let v17: struct24;  // [sp-0x288], Other Possible Types: struct16, struct32
    let v18: u64;  // [bp-0x278], Other Possible Types: void*, struct24
    let v19: u8;  // [bp-0x268], Other Possible Types: struct120
    let v20: u128;  // [bp-0x258]
    let v21: u128;  // [bp-0x248]
    let v22: u128;  // [bp-0x238]
    let v23: u128;  // [bp-0x228]
    let v24: u448;  // [bp-0x218]
    let v25: u8;  // [bp-0x1e0], Other Possible Types: struct147
    let v26: u64;  // [bp-0x1e0]
    let v27: u128;  // [bp-0x1e0], Other Possible Types: struct16
    let v28: struct24;  // [bp-0x1e0]
    let v29: u64;  // [bp-0x1e0]
    let v30: u128;  // [bp-0x1d8], Other Possible Types: struct120
    let v31: u128;  // [bp-0x1d8]
    let v32: struct24;  // [bp-0x1d0], Other Possible Types: u8, struct16
    let v33: struct145;  // [bp-0x1d0], Other Possible Types: struct16
    let v34: u64;  // [bp-0x1d0]
    let v35: u128;  // [bp-0x1d0]
    let v36: struct16;  // [bp-0x1c8], Other Possible Types: u64
    let v37: u128;  // [bp-0x1c8]
    let v38: u64;  // [bp-0x1c0]
    let v39: <anon>;  // [bp-0x1b8]
    let v40: <anon>;  // [bp-0x1b8]
    let v41: <anon>;  // [bp-0x1b8]
    let v42: u128;  // [bp-0x1a8], Other Possible Types: struct16
    let v43: u128;  // [bp-0x198]
    let v44: struct24;  // [bp-0x188]
    let v45: struct16;  // [bp-0x180]
    let v46: struct24;  // [bp-0x178]
    let v47: u128;  // [bp-0x178]
    let v48: struct56;  // [bp-0x170]
    let v49: u64;  // [bp-0x168]
    let v50: struct32;  // [bp-0x118], Other Possible Types: u64
    let v51: u128;  // [bp-0x118]
    let v52: struct24;  // [bp-0x110]
    let v53: struct24;  // [bp-0x108]
    let v54: u128;  // [bp-0x108]
    let v55: u128;  // [bp-0xf8]
    let v56: struct16;  // [bp-0xf0]
    let v57: u8;  // [bp-0xe0]
    let v58: u128;  // [bp-0xd8]
    let v59: struct56;  // [bp-0xc0]
    let v60: u64;  // [bp-0x88]
    let v61: u704;  // [bp-0x88]
    let v62: struct24;  // [bp-0x88]
    let v63: u64;  // [bp-0x80]
    let v64: u64;  // [bp-0x78]
    let v65: u128;  // [bp-0x70]
    let v66: u128;  // [bp-0x60]
    let v69: u32;  // ecx
    let v70: u128;  // xmm0
    let v72: u64;  // r8
    let v73: u128;  // xmm0
    let v74: u128;  // xmm0
    let v75: void*;  // rbp
    let v76: u64;  // rsi
    let v77: u64;  // r13
    let v78: u128;  // xmm0
    let v79: u64;  // rdx
    let v80: u64;  // rax
    let v81: u64;  // rsi
    let v82: u64;  // rax
    let v83: u128;  // xmm2
    let v84: struct129;  // [bp-0x1d8]

    v13 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v3, &v25, 16);
    memcpy(&v15, &v32, 16);
    v17 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    v28 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17.field_0, 0);
    v7 = v84;
    v8 = v32;
    v9 = 0;
    v17 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17.field_0, 0, v69);
    v10 = v84;
    v11 = v32;
    v12 = 0;
    v59 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v40 = v39;
        v34 = v32;
        vvar_752{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5429197, None), vvar_495{stack -136}), ((5428672, None), None)], 8: 𝜙@64b [((5429197, None), vvar_496{stack -128}), ((5428672, None), None)], 24: 𝜙@128b [((5429197, None), vvar_499{stack -112}), ((5428672, None), None)], 40: 𝜙@128b [((5429197, None), vvar_500{stack -96}), ((5428672, None), None)], 56: 𝜙@128b [((5429197, None), vvar_501{stack -80}), ((5428672, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v61, &v59);
        if v63 == 9223372036854775809 {
            break;
        }
        v58 = *((&v61 as &char + 72) as &i128);
        v70 = *((&v61 as &char + 8) as &i128);
        memcpy(&v56 as u8, &v61, 16);
        v55 = v66;
        v54 = v65;
        v51 = v70;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v72);
        v1 = *(&v28.field_0 as &i128);
        alloc::vec::Vec<T,A>::push(v34, v36, rcx<8>);
        v73 = *((&v51 as &char + 8) as &i128);
        if v50 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v73;
            *(v2 as &i64) = 3;
            return;
        }
        v44 = *((&v58 as &char + 8) as &i64);
        memcpy(&v43, &v57, 16);
        v42 = v56;
        memcpy(&v39, &v54, 16);
        v25 = struct40 {
            field_0: v1
            field_16: v50
            field_24: v73
        };
        v45 = 0;
        v46 = 1;
        v48 = 0;
        v6 = alloc::vec::Vec<T,A>::push(&v25);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v26 = v61;
        v49 = v24;
        v47 = v23;
        memcpy(&v44, &v22, 16);
        v43 = v21;
        v74 = *(&v17.field_0 as &i128);
        v42 = v20;
        memcpy(&v39, &v19, 16);
        v37 = *(&v18 as &i128);
        v30 = v74;
        v4 = std::sync::mpmc::Sender<T>::send(&v26, rcx<8>, v72);
        core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
        v32 = v33;
        v39 = v41;
    }
    v39 = v40;
    if v9 {
        do {
            v77 = <usize as core::iter::range::Step>::forward_unchecked(v75, v76);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v29 = v75;
            v49 = v24;
            v47 = v23;
            memcpy(&v44, &v22, 16);
            v43 = v21;
            v78 = v4.field_96;
            v42 = v20;
            memcpy(&v39, &v19, 16);
            v37 = *(&v18 as &i128);
            v31 = v78;
            v5 = std::sync::mpmc::Sender<T>::send(&v29, rcx<8>, v72);
            core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
            v75 = v77;
            v39 = v41;
        } while (v77 < v9);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v79);
    v27 = v15;
    v35 = v5.field_16;
    v38 = v9;
    memcpy(&v39, &v17, 160);
    v18 = 0x8000000000000000;
    v17 = 0;
    v62 = std::thread::Builder::spawn_unchecked(&v17, &v28);
    v62 = core::result::Result<T,E>::expect(a2);
    v50 = 0;
    v52 = 8;
    v53 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v19 = 0;
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v80 = v63;
    if v63 != 3 {
        do {
            v0 = struct16 {
                field_0: v63
                field_8: v64
            };
            v82 = std::sync::mpmc::Receiver<T>::recv(&v0, v81, a2);
            if v82 {
                v25 = 1;
                v30 = 1;
                v32 = v82;
                v33 = alloc::boxed::Box<T>::new(&v25);
                v36 = 0;
                v26 = v0;
                v38 = v60;
                v27 = alloc::vec::Vec<T,A>::push(a2);
            }
            v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v63 != 3);
    }
    v18 = 0;
    memcpy(&v16, &v50, 16);
    v17 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v72);
    *((v2 + 48) as &u128) = v59.field_0;
    *((v2 + 64) as &i64) = v59.field_16;
    v83 = v35;
    *((v2 + 16) as &u128) = v27;
    *((v2 + 32) as &u128) = v83;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
