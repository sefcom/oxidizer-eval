fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct48, a2: i64) {
    let v0: u128;  // [bp-0x2a0]
    let v1: i64;  // [bp-0x290]
    let v2: struct16;  // [bp-0x280]
    let v3: struct16;  // [bp-0x270]
    let v4: u64;  // [bp-0x270]
    let v5: u64;  // [bp-0x268]
    let v6: void*;  // [bp-0x260]
    let v7: u128;  // [bp-0x258]
    let v8: struct24;  // [bp-0x258]
    let v9: u128;  // [bp-0x248]
    let v10: u64;  // [bp-0x230]
    let v11: struct16;  // [bp-0x230]
    let v12: u64;  // [bp-0x228]
    let v13: void*;  // [bp-0x220]
    let v14: <anon>;  // [bp-0x218], Other Possible Types: struct40
    let v15: struct16;  // [bp-0x218]
    let v16: u64;  // [bp-0x210]
    let v17: void*;  // [bp-0x208]
    let v18: u128;  // [bp-0x200]
    let v19: u64;  // [bp-0x1f0]
    let v20: u128;  // [bp-0x1e8]
    let v21: struct56;  // [bp-0x1d8], Other Possible Types: struct24, u64
    let v22: u64;  // [bp-0x1d0]
    let v23: u320;  // [bp-0x1c8]
    let v24: struct24;  // [bp-0x1a0]
    let v25: struct32;  // [bp-0x1a0]
    let v26: struct32;  // [bp-0x1a0], Other Possible Types: struct72, struct24
    let v27: struct128;  // [bp-0x1a0]
    let v28: struct128;  // [bp-0x1a0]
    let v29: struct40;  // [bp-0x1a0], Other Possible Types: u128
    let v30: struct32;  // [bp-0x1a0]
    let v31: struct16;  // [bp-0x190], Other Possible Types: u64
    let v32: struct16;  // [bp-0x190]
    let v33: u64;  // [bp-0x190]
    let v34: u64;  // [bp-0x188]
    let v35: struct32;  // [bp-0x180]
    let v36: u64;  // [bp-0x178]
    let v37: core::option::Option<&str>;  // [bp-0x178]
    let v38: u64;  // [bp-0x178]
    let v39: u64;  // [bp-0x168]
    let v40: u64;  // [bp-0x168]
    let v41: struct24;  // [bp-0x168]
    let v42: struct147;  // [bp-0xd8], Other Possible Types: struct32, struct128, struct16, struct24
    let v43: struct120;  // [bp-0xd8], Other Possible Types: struct96
    let v44: struct120;  // [bp-0xd8]
    let v45: u128;  // [bp-0xa8]
    let v46: u128;  // [bp-0x98]
    let v47: u128;  // [bp-0x88]
    let v48: u128;  // [bp-0x78]
    let v50: Result<struct24, struct16>;  // xmm0
    let v51: u64;  // rcx
    let v52: u64;  // rax
    let v53: u128;  // xmm0
    let v54: u64;  // rcx
    let v55: u128;  // xmm1
    let v56: u128;  // xmm2
    let v57: struct17;  // rbp
    let v58: struct16;  // rsi
    let v59: struct24;  // r13
    let v60: u128;  // xmm1
    let v61: u128;  // xmm2
    let v62: u64;  // rax
    let v63: struct88;  // rsi
    let v64: u64;  // rax
    let v65: u128;  // xmm2
    let v66: struct16;  // [bp-0x2a0]
    let v69: u64;  // [bp-0x198]
    let v71: void*;  // [bp-0xb8]

    v19 = a1;
    v25 = std::sync::mpmc::channel();
    v2 = *(&v25.field_0 as &i128);
    v20 = *(&v25.field_16 as &i128);
    v42 = core::iter::traits::iterator::Iterator::size_hint();
    v26 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*(&v42.field_0 as &i64), 0);
    v4 = v69;
    v5 = v33;
    v6 = 0;
    v42 = core::iter::traits::iterator::Iterator::size_hint();
    v24 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*(&v42.field_0 as &i64), 0);
    v10 = v69;
    v12 = v33;
    v13 = 0;
    v21 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v40 = v39;
        v37 = v36;
        v31 = v33;
        vvar_736{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5425301, None), vvar_480{stack -536}), ((5424869, None), None)], 8: 𝜙@64b [((5425301, None), vvar_481{stack -528}), ((5424869, None), None)], 24: 𝜙@128b [((5425301, None), vvar_483{stack -512}), ((5424869, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v21);
        if v16 == 9223372036854775809 {
            break;
        }
        v50 = v14.field_8;
        v9 = v18;
        *(&v7 as &Result<struct24, struct16>) = v50;
        v26 = std::sync::mpmc::sync_channel(0x2, a2, v51);
        v0 = *(&v26.field_0 as &i128);
        v11 = alloc::vec::Vec<T,A>::push(v31, v34);
        v52 = v7;
        v53 = *((&v7 as &char + 8) as &i128);
        if v52 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v53;
            *(v1 as &i64) = 3;
            return;
        }
        v54 = *((&v9 as &char + 8) as &i64);
        v26 = struct72 {
            field_0: v0
            field_16: v52
            field_24: v53
            field_40: v54
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v3 = alloc::vec::Vec<T,A>::push(&v26);
        v43 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v55 = *(&v43.field_16 as &i128);
        v56 = *((&v43.field_24 as &char + 8) as &i128);
        v27 = struct128 {
            field_0: v14.field_0
            field_8: v43.field_0
            field_24: v55
            field_40: v56
            field_56: v45
            field_72: v46
            field_88: v47
            field_104: v48
            field_120: v43.field_112
        };
        v42 = std::sync::mpmc::Sender<T>::send(&v2, &v27, v51);
        core::result::Result<T,E>::unwrap(&v42, "src/uu/sort/src/merge.rs");
        v33 = v32;
        v36 = v38;
        v39 = v41;
    }
    if v6 {
        do {
            v59 = <usize as core::iter::range::Step>::forward_unchecked(v57, v58);
            v44 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v60 = *(&v44.field_16 as &i128);
            v61 = *((&v44.field_24 as &char + 8) as &i128);
            v28 = struct128 {
                field_0: v57
                field_8: v44.field_0
                field_24: v60
                field_40: v61
                field_56: v45
                field_72: v46
                field_88: v47
                field_104: v48
                field_120: v44.field_112
            };
            v42 = std::sync::mpmc::Sender<T>::send(&v2, &v28, v51);
            core::result::Result<T,E>::unwrap(&v42, "src/uu/sort/src/merge.rs");
            v57 = v59;
        } while (v59 < v6);
    }
    v42 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v29 = v20;
    *(&v31.field_0 as &i128) = *(&v3.field_0 as &i128);
    v35 = v6;
    memcpy(&v37, &v42, 160);
    v43 = 0;
    v42 = struct24 {
        field_0: v42.field_0 & 0xffffffffffffffff0000000000000000
        field_16: 0x8000000000000000
    };
    v21 = std::thread::Builder::spawn_unchecked(&v42, &v28);
    v8 = core::result::Result<T,E>::expect(&v21);
    v14 = 0;
    v16 = 8;
    v17 = 0;
    v42 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v11);
    v71 = 0;
    v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v42);
    v62 = v22;
    if v22 != 3 {
        do {
            v66 = struct16 {
                field_0: v22
                field_8: v23 as i64
            };
            v66 = struct16 {
                field_0: v22
                field_8: v23 as i64
            };
            v64 = std::sync::mpmc::Receiver<T>::recv(&v66, v63, a2);
            if v64 {
                v26 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v64
                };
                v29 = struct40 {
                    field_0: *(&v66.field_0 as &i128)
                    field_16: alloc::boxed::Box<T>::new(&v26)
                    field_24: 0
                    field_32: v21
                };
                v15 = alloc::vec::Vec<T,A>::push(&v29);
            }
            v21 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v42);
        } while (v22 != 3);
    }
    v42 = struct24 {
        field_0: *(&v15.field_0 as &i128)
        field_16: 0
    };
    v30 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v42, a2, 1);
    *((v1 + 48) as &i128) = *(&v8.field_0 as &i128);
    *((v1 + 64) as &u64) = v8.field_16;
    v65 = *(&v30.field_16 as &i128);
    *((v1 + 16) as &i128) = *(&v30.field_0 as &i128);
    *((v1 + 32) as &u128) = v65;
    *(v1 as &struct16) = v2;
    *((v1 + 72) as &i64) = 0;
    return;
}
