fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: struct16;  // [bp-0x308]
    let v1: u128;  // [bp-0x308]
    let v2: i64;  // [bp-0x2f8]
    let v3: struct56;  // [bp-0x2e8]
    let v4: struct128;  // [bp-0x2e8]
    let v5: struct128;  // [bp-0x2e8]
    let v6: struct16;  // [bp-0x2d8]
    let v7: <anon>;  // [bp-0x2d8]
    let v8: u64;  // [bp-0x2d0]
    let v9: void*;  // [bp-0x2c8]
    let v10: struct24;  // [bp-0x2c0], Other Possible Types: struct32
    let v11: struct24;  // [bp-0x2b8]
    let v12: struct24;  // [bp-0x2b0]
    let v13: Option<struct40>;  // [bp-0x2a8]
    let v15: struct129;  // [bp-0x298]
    let v16: struct32;  // [bp-0x288], Other Possible Types: struct24
    let v17: u128;  // [bp-0x288]
    let v18: struct16;  // [bp-0x288]
    let v19: struct128;  // [bp-0x278], Other Possible Types: u64
    let v20: struct24;  // [bp-0x268], Other Possible Types: u64
    let v21: u128;  // [bp-0x258]
    let v22: u128;  // [bp-0x248]
    let v23: u128;  // [bp-0x238]
    let v24: u128;  // [bp-0x228]
    let v25: u448;  // [bp-0x218]
    let v26: struct120;  // [bp-0x1e0], Other Possible Types: struct24
    let v27: struct16;  // [bp-0x1e0]
    let v28: struct16;  // [bp-0x1e0], Other Possible Types: struct129
    let v29: i8;  // [bp-0x1e0]
    let v30: u64;  // [bp-0x1e0]
    let v31: struct24;  // [bp-0x1e0]
    let v32: u64;  // [bp-0x1e0]
    let v33: u128;  // [bp-0x1d8]
    let v34: u128;  // [bp-0x1d8]
    let v35: struct48;  // [bp-0x1d0]
    let v36: struct16;  // [bp-0x1d0], Other Possible Types: struct56
    let v37: u64;  // [bp-0x1d0]
    let v38: i8;  // [bp-0x1d0], Other Possible Types: u128
    let v39: struct24;  // [bp-0x1c8], Other Possible Types: u64
    let v40: u128;  // [bp-0x1c8]
    let v41: struct16;  // [bp-0x1c0], Other Possible Types: u64
    let v42: u128;  // [bp-0x1b8]
    let v43: u128;  // [bp-0x1a8]
    let v44: u128;  // [bp-0x198]
    let v45: u128;  // [bp-0x188]
    let v46: u64;  // [bp-0x188]
    let v47: struct24;  // [bp-0x188], Other Possible Types: u128
    let v48: struct32;  // [bp-0x178], Other Possible Types: u128
    let v49: struct32;  // [bp-0x178]
    let v50: u128;  // [bp-0x178]
    let v51: u64;  // [bp-0x168]
    let v52: struct24;  // [bp-0x118], Other Possible Types: u64
    let v53: u128;  // [bp-0x118]
    let v54: u128;  // [bp-0x108]
    let v55: u128;  // [bp-0xf8]
    let v56: u128;  // [bp-0xe8]
    let v57: u128;  // [bp-0xd8]
    let v58: struct56;  // [bp-0xc0]
    let v59: u64;  // [bp-0x88]
    let v60: struct88;  // [bp-0x88]
    let v61: struct24;  // [bp-0x88]
    let v62: u64;  // [bp-0x80]
    let v63: u64;  // [bp-0x78]
    let v64: u128;  // [bp-0x70]
    let v65: u128;  // [bp-0x60]
    let v66: u128;  // [bp-0x50]
    let v68: u32;  // ecx
    let v69: u128;  // xmm0
    let v71: u64;  // r8
    let v72: u128;  // xmm0
    let v73: void*;  // rbp
    let v74: struct16;  // rsi
    let v75: u64;  // r13
    let v76: u64;  // rdx
    let v77: u64;  // rax
    let v78: struct88;  // rsi
    let v79: u64;  // rax
    let v80: u128;  // xmm2
    let v81: u64;  // [bp-0x1d8]
    let v82: struct24;  // [bp-0x110]
    let v83: struct16;  // [bp-0x108]

    v13 = a1;
    std::sync::mpmc::channel(a1);
    v3 = *(&v29 as &i128);
    v15 = *(&v38 as &i128);
    v16 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    v31 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0, 0);
    v7 = v81;
    v8 = v35;
    v9 = 0;
    v16 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v16.field_0, 0, v68);
    v10 = v81;
    v11 = v35;
    v12 = 0;
    v58 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v49 = v48;
        v46 = v45;
        v37 = v35;
        vvar_764{stack -136} = struct88 OrderedDict({0: 𝜙@64b [((5429197, None), vvar_495{stack -136}), ((5428672, None), None)], 8: 𝜙@64b [((5429197, None), vvar_496{stack -128}), ((5428672, None), None)], 24: 𝜙@128b [((5429197, None), vvar_499{stack -112}), ((5428672, None), None)], 40: 𝜙@128b [((5429197, None), vvar_500{stack -96}), ((5428672, None), None)], 56: 𝜙@128b [((5429197, None), vvar_501{stack -80}), ((5428672, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v60, &v58);
        if v62 == 9223372036854775809 {
            break;
        }
        v57 = v60.field_72;
        v69 = v60.field_8;
        v56 = v66;
        v55 = v65;
        v54 = v64;
        v53 = v69;
        std::sync::mpmc::sync_channel(0x2, a2, rcx<8>, v71);
        v1 = *(&v31.field_0 as &i128);
        alloc::vec::Vec<T,A>::push(v37, v39, rcx<8>);
        v72 = *((&v53 as &char + 8) as &i128);
        if v52 == 0x8000000000000000 {
            *((v2 + 8) as &u128) = v72;
            *(v2 as &i64) = 3;
            return;
        }
        v26 = struct120 {
            field_0: v1
            field_16: v52
            field_24: v72
            field_40: *((&v54 as &char + 8) as &i128)
            field_56: *((&v55 as &char + 8) as &i128)
            field_72: *((&v56 as &char + 8) as &i128)
            field_88: *((&v57 as &char + 8) as &i64)
            field_96: 0
            field_104: 1
            field_112: 0
        };
        v6 = alloc::vec::Vec<T,A>::push(&v26);
        uu_sort::chunks::RecycledChunk::new(0x2000, a2);
        v30 = v60.field_0;
        v51 = v25;
        v50 = v24;
        v47 = v23;
        v44 = v22;
        v43 = v21;
        v42 = *(&v20 as &i128);
        v40 = *(&v19 as &i128);
        v33 = v17;
        v4 = std::sync::mpmc::Sender<T>::send(&v30, rcx<8>, v71);
        core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
        v35 = v36;
        v45 = v47;
        v48 = v50;
    }
    if v9 {
        do {
            v75 = <usize as core::iter::range::Step>::forward_unchecked(v73, v74);
            uu_sort::chunks::RecycledChunk::new(0x2000, a2);
            v32 = v73;
            v51 = v25;
            v48 = v24;
            v45 = v23;
            v44 = v22;
            v43 = v21;
            v42 = *(&v20 as &i128);
            v40 = *(&v19 as &i128);
            v34 = v17;
            v5 = std::sync::mpmc::Sender<T>::send(&v32, rcx<8>, v71);
            core::result::Result<T,E>::unwrap(&v17, "src/uu/sort/src/merge.rs");
            v73 = v75;
        } while (v75 < v9);
    }
    <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2, v76);
    v28 = v15;
    v38 = v5.field_16;
    v41 = v9;
    memcpy(&v42, &v17, 160);
    v16 = 0;
    v16 = struct24 {
        field_0: v18 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v61 = std::thread::Builder::spawn_unchecked(&v16, &v28 as u8);
    v61 = core::result::Result<T,E>::expect(a2);
    v52 = 0;
    v82 = 8;
    v83 = 0;
    v10 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    v20 = 0;
    v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
    v77 = v62;
    if v62 != 3 {
        do {
            v0 = struct16 {
                field_0: v62
                field_8: v63
            };
            v0 = struct16 {
                field_0: v62
                field_8: v63
            };
            v79 = std::sync::mpmc::Receiver<T>::recv(&v0, v78, a2);
            if v79 {
                v26 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v79
                };
                v36 = alloc::boxed::Box<T>::new(&v26);
                v39 = 0;
                *(&v27.field_0 as &i128) = *(&v0.field_0 as &i128);
                v41 = v59;
                v28 = alloc::vec::Vec<T,A>::push(a2);
            }
            v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(a2);
        } while (v62 != 3);
    }
    v19 = 0;
    v16 = *(&v52.field_0 as &i128);
    v16 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(a2, 0x1, v71);
    *((v2 + 48) as &u128) = v58.field_0;
    *((v2 + 64) as &u64) = v58.field_16;
    v80 = v38;
    *((v2 + 16) as &u128) = v28.field_0;
    *((v2 + 32) as &u128) = v80;
    *(v2 as &u128) = v5.field_0;
    *((v2 + 72) as &i64) = 0;
    return;
}
