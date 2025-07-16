fn uu_sort::merge::merge_without_limit(a0: i64, a1: &struct16, a2: i64) {
    let v0: u128;  // [bp-0x2a0]
    let v1: i64;  // [bp-0x290]
    let v2: u128;  // [bp-0x280]
    let v3: struct16;  // [bp-0x270]
    let v4: u64;  // [bp-0x270]
    let v5: u64;  // [bp-0x268]
    let v6: void*;  // [bp-0x260]
    let v7: u128;  // [bp-0x258], Other Possible Types: struct24
    let v8: u64;  // [bp-0x248]
    let v9: u128;  // [bp-0x240]
    let v10: u64;  // [bp-0x230]
    let v11: struct16;  // [bp-0x230]
    let v12: u64;  // [bp-0x228]
    let v13: void*;  // [bp-0x220]
    let v14: u320;  // [bp-0x218]
    let v15: struct24;  // [bp-0x218]
    let v16: struct16;  // [bp-0x218]
    let v17: <anon>;  // [bp-0x210], Other Possible Types: u64
    let v18: void*;  // [bp-0x208]
    let v20: u64;  // [bp-0x1f0]
    let v21: u8;  // [bp-0x1e8]
    let v22: struct24;  // [bp-0x1d8], Other Possible Types: struct56, u64
    let v23: <anon>;  // [bp-0x1d0]
    let v24: u320;  // [bp-0x1c8]
    let v25: struct24;  // [bp-0x1a0]
    let v26: u64;  // [bp-0x1a0], Other Possible Types: struct32, struct24
    let v27: u704;  // [bp-0x1a0]
    let v28: u704;  // [bp-0x1a0]
    let v29: u320;  // [bp-0x1a0]
    let v30: struct32;  // [bp-0x1a0]
    let v31: u64;  // [bp-0x198]
    let v32: u64;  // [bp-0x190], Other Possible Types: struct16
    let v33: u64;  // [bp-0x190]
    let v34: Option<struct40>;  // [bp-0x190]
    let v35: u64;  // [bp-0x188]
    let v36: struct24;  // [bp-0x180]
    let v37: struct24;  // [bp-0x178]
    let v38: struct24;  // [bp-0x178]
    let v39: struct24;  // [bp-0x178]
    let v40: struct129;  // [bp-0x168]
    let v41: struct129;  // [bp-0x168]
    let v42: struct129;  // [bp-0x168]
    let v43: u8;  // [bp-0x148]
    let v44: struct129;  // [bp-0x138]
    let v45: u64;  // [bp-0x128], Other Possible Types: struct56
    let v46: struct128;  // [bp-0xd8], Other Possible Types: struct16, struct32, struct147, struct145
    let v47: struct120;  // [bp-0xd8]
    let v48: struct120;  // [bp-0xd8]
    let v49: u128;  // [bp-0xa8]
    let v50: u128;  // [bp-0x98]
    let v51: struct129;  // [bp-0x78]
    let v53: u64;  // rcx
    let v54: u64;  // rax
    let v55: u128;  // xmm0
    let v56: u64;  // rcx
    let v57: u128;  // xmm0
    let v58: u128;  // xmm1
    let v59: u128;  // xmm2
    let v60: struct56;  // rbp
    let v61: u64;  // rsi
    let v62: u64;  // r13
    let v63: u128;  // xmm0
    let v64: u128;  // xmm1
    let v66: u64;  // rax
    let v67: u64;  // rsi
    let v68: u64;  // rax
    let v69: u128;  // xmm2
    let v70: u128;  // [bp-0x2a0]
    let v72: u64;  // [bp-0x198]
    let v73: struct24;  // [bp-0xc8], Other Possible Types: void*
    let v74: void*;  // [bp-0xb8]
    let v75: u128;  // [bp-0x88]

    v20 = a1;
    v26 = std::sync::mpmc::channel();
    memcpy(&v2, &v26, 16);
    memcpy(&v21, &v26, 16);
    v46 = core::iter::traits::iterator::Iterator::size_hint();
    v26 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0 as i64, 0);
    v4 = v72;
    v5 = v34;
    v6 = 0;
    v46 = core::iter::traits::iterator::Iterator::size_hint();
    v25 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v46.field_0 as i64, 0);
    v10 = v72;
    v12 = v34;
    v13 = 0;
    v22 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        v41 = v40;
        v38 = v37;
        v32 = v34;
        vvar_725{stack -536} = struct40 OrderedDict({0: 𝜙@64b [((5425301, None), vvar_480{stack -536}), ((5424869, None), None)], 8: 𝜙@64b [((5425301, None), vvar_481{stack -528}), ((5424869, None), None)], 24: 𝜙@128b [((5425301, None), vvar_483{stack -512}), ((5424869, None), None)]})
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v14, &v22);
        if v17 == 9223372036854775809 {
            break;
        }
        memcpy(&v8, &v14, 16);
        v7 = *((&v14 as &char + 8) as &i128);
        v26 = std::sync::mpmc::sync_channel(0x2, a2, v53);
        v0 = *(&v26.field_0 as &i128);
        v11 = alloc::vec::Vec<T,A>::push(v32, v35);
        v54 = v7;
        v55 = *((&v7 as &char + 8) as &i128);
        if v54 == 0x8000000000000000 {
            *((v1 + 8) as &u128) = v55;
            *(v1 as &i64) = 3;
            return;
        }
        v56 = v9;
        v26 = struct72 {
            field_0: v0
            field_16: v54
            field_24: v55
            field_40: v56
            field_48: 0
            field_56: 1
            field_64: 0
        };
        v3 = alloc::vec::Vec<T,A>::push(&v26);
        v47 = uu_sort::chunks::RecycledChunk::new(0x2000);
        v45 = v47.field_88;
        v44 = v51;
        memcpy(&v43, &v47 as u128, 16);
        v57 = v47.field_0;
        v58 = *(&v47.field_16 as &i128);
        v59 = v47.field_24;
        v27 = struct88 {
            field_0: v14 as i64
            field_8: v57
            field_24: v58
            field_40: v59
            field_56: v49
            field_72: v50
        };
        v46 = std::sync::mpmc::Sender<T>::send(&v2, &v27, v53);
        core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
        v34 = v33;
        v37 = v39;
        v40 = v42;
    }
    if v6 {
        do {
            v62 = <usize as core::iter::range::Step>::forward_unchecked(v60, v61);
            v48 = uu_sort::chunks::RecycledChunk::new(0x2000);
            v45 = v48.field_88;
            v44 = v51;
            memcpy(&v43, &v75, 16);
            v63 = v48.field_0;
            v64 = *(&v48.field_16 as &i128);
            v28 = struct88 {
                field_0: v60
                field_8: v63
                field_24: v64
                field_40: v48.field_24
                field_56: v49
                field_72: v50
            };
            v46 = std::sync::mpmc::Sender<T>::send(&v2, &v28, v53);
            core::result::Result<T,E>::unwrap(&v46, "src/uu/sort/src/merge.rs");
            v60 = v62;
        } while (v62 < v6);
    }
    v46 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v29 = v21;
    v32.field_0 = v3.field_0;
    v36 = v6;
    memcpy(&v38, &v46, 160);
    v73 = 0x8000000000000000;
    v46 = 0;
    v22 = std::thread::Builder::spawn_unchecked(&v46, &v28);
    v7 = core::result::Result<T,E>::expect(&v22);
    v15 = 0;
    v17 = 8;
    v18 = 0;
    v46 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v74 = 0;
    v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v46);
    v66 = v23;
    if v23 != 3 {
        do {
            v70 = struct16 {
                field_0: v23
                field_8: v24 as i64
            };
            v68 = std::sync::mpmc::Receiver<T>::recv(&v70, v67, a2);
            if v68 {
                v26 = 1;
                v31 = 1;
                v32 = v68;
                v29 = struct40 {
                    field_0: v70
                    field_16: alloc::boxed::Box<T>::new(&v26)
                    field_24: 0
                    field_32: v22
                };
                v16 = alloc::vec::Vec<T,A>::push(&v29);
            }
            v22 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v46);
        } while (v23 != 3);
    }
    v73 = 0;
    memcpy(&v46, &v16, 16);
    v30 = binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v46, a2, 1);
    *((v1 + 48) as &i128) = *(&v7.field_0 as &i128);
    *((v1 + 64) as &u64) = v8;
    v69 = *(&v30.field_16 as &i128);
    *((v1 + 16) as &i128) = *(&v30.field_0 as &i128);
    *((v1 + 32) as &u128) = v69;
    *(v1 as &u128) = v2;
    *((v1 + 72) as &i64) = 0;
    return;
}
