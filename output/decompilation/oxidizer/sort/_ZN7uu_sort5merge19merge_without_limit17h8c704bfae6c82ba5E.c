fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct32, a2: i64) {
    let v0: struct16;  // [bp-0x2f0], Other Possible Types: u64
    let v1: u128;  // [bp-0x2f0]
    let v2: i64;  // [bp-0x2e0]
    let v3: struct56;  // [bp-0x2d0]
    let v4: struct128;  // [bp-0x2d0]
    let v5: struct128;  // [bp-0x2d0]
    let v6: <anon>;  // [bp-0x2c0]
    let v7: struct56;  // [bp-0x2b8]
    let v8: void*;  // [bp-0x2b0]
    let v9: struct24;  // [bp-0x2a8], Other Possible Types: struct32
    let v10: struct24;  // [bp-0x2a0]
    let v11: struct24;  // [bp-0x298]
    let v12: Option<struct40>;  // [bp-0x290]
    let v14: struct129;  // [bp-0x280]
    let v15: struct40;  // [bp-0x270]
    let v16: struct32;  // [bp-0x248], Other Possible Types: struct24
    let v17: u128;  // [bp-0x248]
    let v18: struct16;  // [bp-0x248]
    let v19: struct128;  // [bp-0x238], Other Possible Types: u64
    let v20: struct24;  // [bp-0x228], Other Possible Types: u64
    let v21: struct32;  // [bp-0x218]
    let v22: struct16;  // [bp-0x208]
    let v23: u128;  // [bp-0x1f8]
    let v24: u128;  // [bp-0x1e8]
    let v25: u448;  // [bp-0x1d8]
    let v26: struct16;  // [bp-0x1a0], Other Possible Types: struct24
    let v27: struct16;  // [bp-0x1a0]
    let v28: struct16;  // [bp-0x1a0], Other Possible Types: struct129
    let v29: i8;  // [bp-0x1a0], Other Possible Types: u64
    let v30: u64;  // [bp-0x1a0]
    let v31: struct128;  // [bp-0x1a0]
    let v32: u128;  // [bp-0x198]
    let v33: u64;  // [bp-0x198]
    let v34: u128;  // [bp-0x198]
    let v35: struct16;  // [bp-0x190]
    let v36: i8;  // [bp-0x190], Other Possible Types: u128
    let v37: struct56;  // [bp-0x190]
    let v38: struct24;  // [bp-0x188], Other Possible Types: u64
    let v39: u128;  // [bp-0x188]
    let v40: u128;  // [bp-0x188]
    let v41: struct16;  // [bp-0x180], Other Possible Types: struct24
    let v42: struct16;  // [bp-0x178], Other Possible Types: struct32
    let v43: struct16;  // [bp-0x168], Other Possible Types: struct32
    let v44: struct16;  // [bp-0x158]
    let v45: struct24;  // [bp-0x148]
    let v46: u128;  // [bp-0x148]
    let v47: struct24;  // [bp-0x140]
    let v48: struct48;  // [bp-0x138]
    let v49: u128;  // [bp-0x138]
    let v50: <anon>;  // [bp-0x130]
    let v51: struct16;  // [bp-0x128], Other Possible Types: u64
    let v52: struct24;  // [bp-0xd8], Other Possible Types: u64
    let v53: u128;  // [bp-0xd8]
    let v54: struct24;  // [bp-0xd0]
    let v55: struct16;  // [bp-0xc8]
    let v56: struct32;  // [bp-0xc8]
    let v57: struct16;  // [bp-0xb8]
    let v58: struct16;  // [bp-0xa8]
    let v59: u128;  // [bp-0x98]
    let v60: u64;  // [bp-0x90]
    let v61: struct24;  // [bp-0x88]
    let v62: u64;  // [bp-0x88]
    let v63: struct88;  // [bp-0x88]
    let v64: u64;  // [bp-0x80]
    let v65: u64;  // [bp-0x78]
    let v66: struct32;  // [bp-0x70]
    let v67: struct16;  // [bp-0x60]
    let v68: struct16;  // [bp-0x50]
    let v70: u32;  // ecx
    let v71: u128;  // xmm0
    let v73: u64;  // r8
    let v74: u128;  // xmm0
    let v75: void*;  // rbp
    let v76: struct16;  // rsi
    let v77: u64;  // r13
    let v78: u64;  // rdx
    let v79: u64;  // rax
    let v80: struct88;  // rsi
    let v81: u64;  // rax
    let v82: u128;  // xmm2

    v12 = a1;
    std::sync::mpmc::channel(a1);
    v3 = *(&v29 as &i128);
    v14 = *(&v36 as &i128);
    v16 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0, 0, v70);
    v6 = v33;
    v7 = v37;
    v8 = 0;
    v16 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0, 0, v70);
    v9 = v33;
    v10 = v37;
    v11 = 0;
    v15 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_763{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5433183, None), vvar_495{stack -136}), ((5432656, None), None)], 8: 𝜙@64b [((5433183, None), vvar_496{stack -128}), ((5432656, None), None)], 24: 𝜙@128b [((5433183, None), vvar_499{stack -112}), ((5432656, None), None)], 40: 𝜙@128b [((5433183, None), vvar_500{stack -96}), ((5432656, None), None)], 56: 𝜙@128b [((5433183, None), vvar_501{stack -80}), ((5432656, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v63, &v15);
        if v64 == 9223372036854775809 {
            break;
        }
        v59 = v63.field_72;
        v71 = v63.field_8;
        v58 = v68;
        v57 = v67;
        v56 = v66;
        v53 = v71;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v73);
        v1 = *(&v29 as &i128);
        alloc::vec::Vec<T,A>::push(v37, v38, rcx<8>);
        v74 = *((&v53 as &char + 8) as &i128);
        if v52 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v74;
            *(v2 as &i64) = 3;
            return;
        }
        v45 = v60;
        v44 = *(&v58.field_8 as &i128);
        v43 = *(&v57.field_8 as &i128);
        v42 = v56.field_8;
        *(&v29 as &i128) = *(&v0 as &i128);
        v37 = v52;
        v39 = v74;
        v47 = 0;
        v48 = 1;
        v50 = 0;
        v26 = alloc::vec::Vec<T,A>::push(a2);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v30 = v63.field_0;
        v51 = v25;
        v49 = v24;
        v46 = v23;
        v44 = v22;
        v43 = v21;
        v42 = *(&v20 as &i128);
        v40 = *(&v19 as &i128);
        v32 = v17;
        v4 = std::sync::mpmc::Sender<T>::send(&v30, rcx<8>, v73);
        core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
    }
    if v8 {
        do {
            v77 = <usize as core::iter::range::Step>::forward_unchecked(v75, v76);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v31 = v75;
            v51 = v25 as i64;
            v49 = v24;
            v46 = v23;
            v44 = v22;
            v43 = v21;
            v42 = *(&v20 as &i128);
            v39 = *(&v19 as &i128);
            v34 = v17;
            v5 = std::sync::mpmc::Sender<T>::send(&v31, rcx<8>, v73);
            core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
            v75 = v77;
        } while (v77 < v8);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v78);
    v28 = v14;
    v36 = v5.field_16;
    v41 = v8;
    memcpy(&v42, &v17, 160);
    v16 = 0;
    v16 = struct24 {
        field_0: v18 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v61 = std::thread::Builder::spawn_unchecked(&v16, &v28 as u8);
    v61 = core::result::Result<T,E>::expect(a2);
    v52 = 0;
    v54 = 8;
    v55 = 0;
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v20 = 0;
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v79 = v64;
    if v64 != 3 {
        do {
            v0 = struct16 {
                field_0: v64
                field_8: v65
            };
            v0 = struct16 {
                field_0: v64
                field_8: v65
            };
            v81 = std::sync::mpmc::Receiver<T>::recv(&v0, v80, a2);
            if v81 {
                v26 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v81
                };
                v35 = alloc::boxed::Box<T>::new(&v26);
                v38 = 0;
                *(&v27.field_0 as &i128) = *(&v0.field_0 as &i128);
                v41 = v62;
                v28 = alloc::vec::Vec<T,A>::push(a2);
            }
            v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v64 != 3);
    }
    v19 = 0;
    v16 = *(&v52.field_0 as &i128);
    v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v73);
    *((v2 + 48) as &u128) = v5.field_96;
    *((v2 + 64) as &i64) = v5.field_112;
    v82 = v36;
    *((v2 + 16) as &u128) = v28.field_0;
    *((v2 + 32) as &u128) = v82;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
