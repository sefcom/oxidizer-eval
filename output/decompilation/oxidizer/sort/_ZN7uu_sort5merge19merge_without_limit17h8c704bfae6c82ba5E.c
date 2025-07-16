fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct32, a2: i64) {
    let v0: u64;  // [bp-0x2f0]
    let v1: u128;  // [bp-0x2f0]
    let v2: i64;  // [bp-0x2e0]
    let v3: u8;  // [bp-0x2d0]
    let v4: struct128;  // [bp-0x2d0]
    let v5: struct128;  // [bp-0x2d0]
    let v6: struct129;  // [bp-0x2c0]
    let v7: struct145;  // [bp-0x2b8]
    let v8: void*;  // [bp-0x2b0]
    let v9: struct32;  // [bp-0x2a8], Other Possible Types: struct24
    let v10: struct24;  // [bp-0x2a0]
    let v11: struct24;  // [bp-0x298]
    let v12: i64;  // [bp-0x290]
    let v14: u8;  // [bp-0x280]
    let v15: struct40;  // [bp-0x270]
    let v16: struct24;  // [bp-0x248], Other Possible Types: u192
    let v17: struct24;  // [sp-0x248], Other Possible Types: struct16, struct32
    let v18: void*;  // [bp-0x238], Other Possible Types: struct24, u64
    let v19: struct120;  // [bp-0x228], Other Possible Types: u8
    let v20: struct128;  // [bp-0x218]
    let v21: struct16;  // [bp-0x208]
    let v22: u128;  // [bp-0x1f8]
    let v23: u128;  // [bp-0x1e8]
    let v24: u448;  // [bp-0x1d8]
    let v25: struct16;  // [bp-0x1a0], Other Possible Types: struct147
    let v26: u128;  // [bp-0x1a0]
    let v27: u128;  // [bp-0x1a0], Other Possible Types: struct16
    let v28: u128;  // [bp-0x1a0]
    let v29: u64;  // [bp-0x1a0]
    let v30: struct16;  // [bp-0x1a0]
    let v31: u128;  // [bp-0x198], Other Possible Types: struct120
    let v32: u128;  // [bp-0x198]
    let v33: u8;  // [bp-0x190], Other Possible Types: struct16
    let v34: struct16;  // [bp-0x190]
    let v35: struct145;  // [bp-0x190]
    let v36: u128;  // [bp-0x190]
    let v37: u64;  // [bp-0x188], Other Possible Types: struct16
    let v38: u128;  // [bp-0x188]
    let v39: u128;  // [bp-0x188]
    let v40: u64;  // [bp-0x180]
    let v41: <anon>;  // [bp-0x178], Other Possible Types: struct16
    let v42: <anon>;  // [bp-0x178]
    let v43: <anon>;  // [bp-0x178], Other Possible Types: struct16
    let v44: struct128;  // [bp-0x168], Other Possible Types: struct16
    let v45: struct16;  // [bp-0x158], Other Possible Types: u8
    let v46: struct24;  // [bp-0x148]
    let v47: struct16;  // [bp-0x140]
    let v48: u64;  // [bp-0x138]
    let v49: u128;  // [bp-0x138]
    let v50: struct56;  // [bp-0x130]
    let v51: struct32;  // [bp-0x128], Other Possible Types: u64
    let v52: u64;  // [bp-0xd8], Other Possible Types: struct32
    let v53: u128;  // [bp-0xd8]
    let v54: u128;  // [bp-0xc8]
    let v55: u128;  // [bp-0xb8]
    let v56: struct16;  // [bp-0xb0]
    let v57: u8;  // [bp-0xa0]
    let v58: u128;  // [bp-0x98]
    let v59: u64;  // [bp-0x90]
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
    let v84: struct24;  // [bp-0x198]
    let v85: struct24;  // [bp-0xd0]
    let v86: struct24;  // [bp-0xc8]

    v12 = a1;
    std::sync::mpmc::channel(a1);
    memcpy(&v3, &v28, 16);
    memcpy(&v14, &v33, 16);
    v17 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17.field_0, 0, v69);
    v6 = v84;
    v7 = v35;
    v8 = 0;
    v17 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17.field_0, 0, v69);
    v9 = v84;
    v10 = v35;
    v11 = 0;
    v15 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v42 = v41;
        vvar_750{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5433183, None), vvar_495{stack -136}), ((5432656, None), None)], 8: 𝜙@64b [((5433183, None), vvar_496{stack -128}), ((5432656, None), None)], 24: 𝜙@128b [((5433183, None), vvar_499{stack -112}), ((5432656, None), None)], 40: 𝜙@128b [((5433183, None), vvar_500{stack -96}), ((5432656, None), None)], 56: 𝜙@128b [((5433183, None), vvar_501{stack -80}), ((5432656, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v61, &v15);
        if v63 == 9223372036854775809 {
            break;
        }
        v58 = *((&v61 as &char + 72) as &i128);
        v70 = *((&v61 as &char + 8) as &i128);
        memcpy(&v56 as u8, &v61, 16);
        v55 = v66;
        v54 = v65;
        v53 = v70;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v72);
        v1 = *(&v28 as &i128);
        alloc::vec::Vec<T,A>::push(v35, v37, rcx<8>);
        v73 = *((&v53 as &char + 8) as &i128);
        if v52 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v73;
            *(v2 as &i64) = 3;
            return;
        }
        v46 = v59;
        memcpy(&v45, &v57, 16);
        v44 = v56;
        memcpy(&v41, &v54, 16);
        v28 = *(&v0 as &i128);
        v35 = v52;
        v38 = v73;
        v47 = 0;
        v48 = 1;
        v50 = 0;
        v25 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v29 = v61;
        v51 = v24;
        v49 = v23;
        memcpy(&v46, &v22, 16);
        v45 = v21;
        v74 = *(&v17.field_0 as &i128);
        v44 = v20;
        memcpy(&v41, &v19, 16);
        v39 = *(&v18 as &i128);
        v31 = v74;
        v4 = std::sync::mpmc::Sender<T>::send(&v29, rcx<8>, v72);
        core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
        v41 = v43;
    }
    v41 = v42;
    if v8 {
        do {
            v77 = <usize as core::iter::range::Step>::forward_unchecked(v75, v76);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v30 = v75;
            v51 = v24 as i64;
            v49 = v23;
            memcpy(&v46, &v22, 16);
            v45 = v21;
            v78 = *(&v17.field_0 as &i128);
            v44 = v20;
            memcpy(&v41, &v19, 16);
            v38 = *(&v18 as &i128);
            v32 = v78;
            v5 = std::sync::mpmc::Sender<T>::send(&v30, rcx<8>, v72);
            core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
            v75 = v77;
            v41 = v43;
        } while (v77 < v8);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v79);
    v27 = v14;
    v36 = v5.field_16;
    v40 = v8;
    memcpy(&v41, &v17, 160);
    v18 = 0x8000000000000000;
    v17 = 0;
    v62 = std::thread::Builder::spawn_unchecked(&v17, &v27);
    v62 = core::result::Result<T,E>::expect(a2);
    v52 = 0;
    v85 = 8;
    v86 = 0;
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
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
                v31 = 1;
                v33 = v82;
                v34 = alloc::boxed::Box<T>::new(&v25);
                v37 = 0;
                v26 = v0;
                v40 = v60;
                v27 = alloc::vec::Vec<T,A>::push(a2);
            }
            v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v63 != 3);
    }
    v18 = 0;
    memcpy(&v16, &v52, 16);
    v17 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 1, v72);
    *((v2 + 48) as &u128) = v5.field_96;
    *((v2 + 64) as &i64) = v5.field_112;
    v83 = v36;
    *((v2 + 16) as &u128) = v27;
    *((v2 + 32) as &u128) = v83;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
