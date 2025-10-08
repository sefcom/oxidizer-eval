fn uu_sort::merge::merge_without_limit(a0: i64, a1: i64, a2: u64) -> int {
    let v1: u64;  // [bp-0x2f0]
    let v2: u64;  // [bp-0x2e8]
    let v3: u64;  // [bp-0x2e0]
    let v4: u64;  // [bp-0x2d8], Other Possible Types: unsigned long
    let v5: void*;  // [bp-0x2d0]
    let v6: u64;  // [bp-0x2b8]
    let v7: struct16;  // [bp-0x2b8]
    let v8: u64;  // [bp-0x2b0]
    let v9: void*;  // [bp-0x2a8]
    let v10: u64;  // [bp-0x2a0]
    let v11: struct16;  // [bp-0x2a0]
    let v12: u64;  // [bp-0x298]
    let v13: void*;  // [bp-0x290]
    let v14: u64;  // [bp-0x288]
    let v15: u64;  // [bp-0x280]
    let v17: u64;  // [bp-0x270]
    let v18: u64;  // [bp-0x268]
    let v19: u64;  // [bp-0x260]
    let v20: u64;  // [bp-0x258]
    let v21: u64;  // [bp-0x250]
    let v23: struct16;  // [bp-0x248]
    let v24: u64;  // [bp-0x240]
    let v25: void*;  // [bp-0x238]
    let v26: u64;  // [bp-0x230]
    let v27: &mut [u8];  // [bp-0x228], Other Possible Types: struct32, struct24, u64
    let v28: struct24;  // [bp-0x228], Other Possible Types: u64
    let v29: struct40;  // [bp-0x228], Other Possible Types: u64
    let v30: struct32;  // [bp-0x228], Other Possible Types: u64
    let v31: u64;  // [bp-0x220]
    let v32: struct16;  // [bp-0x218], Other Possible Types: u64
    let v33: u64;  // [bp-0x218]
    let v34: u64;  // [bp-0x218]
    let v35: u64;  // [bp-0x218]
    let v36: u64;  // [bp-0x210]
    let v37: void*;  // [bp-0x208], Other Possible Types: u64
    let v38: iNone;  // [bp-0x200]
    let v39: iNone;  // [bp-0x1f0]
    let v40: iNone;  // [bp-0x1e0]
    let v41: u64;  // [bp-0x1d0]
    let v42: void*;  // [bp-0x1c8]
    let v43: u64;  // [bp-0x1c0]
    let v44: void*;  // [bp-0x1b8]
    let v45: struct24;  // [bp-0x160], Other Possible Types: u64
    let v46: struct88;  // [bp-0x160], Other Possible Types: struct24
    let v47: u64;  // [bp-0x158]
    let v48: u64;  // [bp-0x158]
    let v49: u64;  // [bp-0x150]
    let v50: u64;  // [bp-0x148]
    let v51: iNone;  // [bp-0x140]
    let v52: iNone;  // [bp-0x130]
    let v53: iNone;  // [bp-0x120]
    let v54: u64;  // [bp-0x110]
    let v55: struct56;  // [bp-0x108]
    let v56: struct24;  // [bp-0x108]
    let v57: struct144;  // [bp-0xd0], Other Possible Types: struct152
    let v58: u64;  // [bp-0xc0]
    let v59: void*;  // [bp-0xb0]
    let v60: u8;  // [bp-0xa8]
    let v62: u64;  // rdx
    let v63: core::fmt::Arguments;  // r14
    let v64: core::fmt::Arguments;  // r13
    let v65: u64;  // rcx
    let v66: &mut [u8];  // rbp
    let v67: core::result::Result<(), std::io::error::Error>;  // rbx
    let v68: u64;  // r14
    let v69: iNone;  // xmm1
    let v70: void*;  // [bp-0xd0], Other Possible Types: struct144, struct152, struct154, struct32

    v27 = std::sync::mpmc::channel();
    v2 = v27.field_0;
    v18 = v2;
    v1 = v31;
    v19 = v1;
    v15 = v32;
    v20 = v15;
    v14 = v36;
    v21 = v14;
    v27 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    v6 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v27.field_0, 8, 120, "src/uu/sort/src/merge.rs");
    v8 = v62;
    v9 = 0;
    v27 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::size_hint(*((a1 + 8) as &i64), *((a1 + 24) as &i64));
    v10 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v27.field_0, 8, 16, "src/uu/sort/src/merge.rs");
    v12 = v62;
    v13 = 0;
    v55 = core::iter::traits::iterator::Iterator::enumerate(a1);
    loop {
        vvar_621{stack -352} = struct88 OrderedDict([(0, 𝜙@64b [((5019316, None), vvar_417{stack -352}), ((5018878, None), None)]), (8, 𝜙@64b [((5019316, None), vvar_418{stack -344}), ((5018878, None), None)]), (24, 𝜙@64b [((5019316, None), vvar_421{stack -328}), ((5018878, None), None)])])
        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v46, &v55);
        if v47 == 9223372036854775809 {
            break;
        }
        v17 = v46.field_0;
        v64 = v63;
        std::sync::mpmc::sync_channel(v63, 2, a2, v65);
        v3 = v28;
        v4 = v31;
        v11 = alloc::vec::Vec<T,A>::push(v32, v36);
        if v47 == 0x8000000000000000 {
            *(&v5[8] as &u64) = v49;
            *(&v5[16] as &u64) = v50;
            *(v5 as &i64) = 3;
            return;
        }
        v41 = v54;
        v40 = v53;
        v39 = v52;
        v38 = v51;
        v27 = v3;
        v31 = v4;
        v32 = v47;
        v36 = v49;
        v37 = v50;
        v42 = 0;
        v43 = 1;
        v44 = 0;
        v63 = v64;
        v7 = alloc::vec::Vec<T,A>::push(v64);
        v70 = uu_sort::chunks::RecycledChunk::new(None);
        v28 = v17;
        memcpy(&v31, &v70, 144);
        v70 = std::sync::mpmc::Sender<T>::send(v2, v1, v63);
        core::result::Result<T,E>::unwrap(&v70, "src/uu/sort/src/merge.rs");
    }
    if v9 {
        do {
            v57 = uu_sort::chunks::RecycledChunk::new(None);
            v27 = v66;
            memcpy(&v31, &v57, 144);
            v57 = std::sync::mpmc::Sender<T>::send(v2, v1, &v27);
            core::result::Result<T,E>::unwrap(&v57, "src/uu/sort/src/merge.rs");
            v66 += 1;
        } while (v9 != v66);
    }
    v70 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v27 = v15;
    v31 = v14;
    *(&v32.field_0 as &i128) = *(&v7.field_0 as &i128);
    v37 = v9;
    memcpy(&v38, &v70, 160);
    v58 = 0x8000000000000000;
    v70 = 0;
    v60 = 0;
    v46 = std::thread::Builder::spawn_unchecked(&v70, &v27);
    v56 = core::result::Result<T,E>::expect(&v46);
    v23 as u64 = 0;
    v24 = 8;
    v25 = 0;
    v70 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
    v59 = 0;
    v46 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v70);
    if v47 != 3 {
        v28 = v27;
        v33 = v32;
        v48 = v47;
        do {
            v67 = v48;
            v68 = v49;
            v3 = v67;
            v4 = v68;
            v26 = std::sync::mpmc::Receiver<T>::recv(v67, v68);
            if v26 {
                v28 = struct24 {
                    field_0: 1
                    field_8: 1
                    field_16: v26
                };
                v29 = struct40 {
                    field_0: v67
                    field_8: v68
                    field_16: alloc::boxed::Box<T>::new(&v28) as u64
                    field_24: 0
                    field_32: v45
                };
                v23 = alloc::vec::Vec<T,A>::push(&v29);
                v28 = v30;
                v33 = v34;
            } else {
                v28 = v28;
                v33 = v33;
            }
            v35 = v33;
            v29 = v28;
            v45 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v70);
            v28 = v29;
            v33 = v35;
            v48 = v47;
        } while (v48 != 3);
    }
    vvar_622{stack -552} = struct32 OrderedDict([(0, 𝜙@64b [((5019746, None), vvar_558{stack -552}), ((5020043, None), vvar_487{stack -552})]), (16, 𝜙@64b [((5019746, None), vvar_415{stack -536}), ((5020043, None), vvar_490{stack -536})])])
    binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw(&v30, &v23 as u64, a2);
    *(&v5[64] as &u64) = v56.field_16;
    *(&v5[48] as &i128) = *(&v56.field_0 as &i128);
    v69 = *(&v30.field_16 as &i128);
    *(&v5[16] as &i128) = *(&v30.field_0 as &i128);
    v5[32] = v69;
    *(v5 as &u64) = v2;
    *(&v5[8] as &u64) = v1;
    *(&v5[72] as &i64) = 0;
    return;
}
