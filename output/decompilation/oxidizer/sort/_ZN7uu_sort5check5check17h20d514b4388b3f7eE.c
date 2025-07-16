fn uu_sort::check::check(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::option::Option<&str>;  // [bp-0x270]
    let v1: void*;  // [bp-0x270]
    let v2: i64;  // [bp-0x260]
    let v3: u64;  // [bp-0x258]
    let v4: u64;  // [bp-0x250]
    let v5: struct24;  // [bp-0x248]
    let v6: u64;  // [bp-0x238]
    let v7: i64;  // [bp-0x228]
    let v8: u64;  // [bp-0x218]
    let v9: u64;  // [bp-0x210]
    let v10: u64;  // [bp-0x208]
    let v11: u64;  // [bp-0x200]
    let v12: u8;  // [bp-0x1f8]
    let v15: u64;  // [bp-0x1d8]
    let v16: u8;  // [bp-0x1d0], Other Possible Types: char
    let v17: struct24;  // [bp-0x1d0]
    let v18: struct24;  // [bp-0x1d0]
    let v19: struct32;  // [bp-0x1d0]
    let v20: u8;  // [bp-0x1cf]
    let v21: u64;  // [bp-0x1c8]
    let v22: u64;  // [bp-0x1c0]
    let v23: u64;  // [bp-0x1b8]
    let v24: u64;  // [bp-0x1b0]
    let v25: u128;  // [bp-0x1a8]
    let v26: u64;  // [bp-0x198]
    let v27: u64;  // [bp-0x110]
    let v28: u64;  // [bp-0x108]
    let v29: u64;  // [bp-0x100]
    let v30: u64;  // [bp-0xf8]
    let v31: u64;  // [bp-0xf0]
    let v32: u64;  // [bp-0xe8]
    let v33: u64;  // [bp-0xe0]
    let v34: u64;  // [bp-0xd8]
    let v35: struct147;  // [bp-0xd0], Other Possible Types: Option<struct120>, struct_3 *, struct24
    let v36: struct24;  // [bp-0xd0], Other Possible Types: Option<struct120>
    let v37: u64;  // [bp-0xc8]
    let v38: u64;  // [bp-0xc0]
    let v40: core::option::Option<&str>;  // r15b
    let v41: u64;  // rcx
    let v42: u64;  // r8
    let v43: u32;  // r13d
    let v44: u64;  // rsi
    let v45: void*;  // r12
    let v46: i64;  // rdi
    let v47: u64;  // rsi
    let v48: u64;  // rdx
    let v49: i64;  // rax
    let v50: i64;  // rbx
    let v51: void*;  // rax
    let v52: i64;  // rdx
    let v53: u8;  // al
    let v54: u8;  // al
    let v55: u64;  // r14

    v40 = -(*((a2 + 132) as &i8));
    uu_sort::open(a0, a1, v41);
    if *(&v16 as &i64) {
        return v21;
    }
    v9 = a1;
    v10 = v21;
    v11 = v22;
    v19 = std::sync::mpmc::sync_channel(0x2, v22, v41);
    v4 = a0;
    memcpy(&v12, &v19, 16);
    v29 = v22;
    v30 = v23;
    std::sync::mpmc::sync_channel(0x2, a2, v41, v42);
    v31 = v19.field_0;
    v32 = v21;
    v3 = v22;
    v33 = v3;
    v15 = v23;
    v34 = v15;
    v35 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v27 = v10;
    v28 = v11;
    v16 = v22;
    v21 = v30;
    v22 = v31;
    v23 = v32;
    memcpy(&v24, &v35, 160);
    v38 = 0x8000000000000000;
    v35 = 0;
    v5 = std::thread::Builder::spawn_unchecked(&v35, &v19);
    v36 = core::result::Result<T,E>::expect(&v5);
    do {
        <i32 as core::iter::range::Step>::forward_unchecked(v43, v44);
        uu_sort::chunks::RecycledChunk::new((*((a2 + 104) as &i64) < 0x19000 ? *((a2 + 104) as &i64) : 0x19000), a2 as u8);
    } while ((v36 = std::sync::mpmc::Sender<T>::send(&v12, &v19, v41), v43 < 2));
    loop {
        v49 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(v46, v47, v48);
        if !v49 {
            return 0;
        }
        v2 = v49;
        v1 = 0;
        if let Some(_) = v0 {
            v7 = v0;
            if !*((v7 + 40) as &i64) || !*((v49 + 40) as &i64) {
                break;
            }
            v50 = *((v49 + 32) as &i64);
            if uu_sort::compare_by(*((v7 + 32) as &i64) + *((v7 + 40) as &i64) * 24 - 24, v50, a2, v7 + 48, v49 + 48) as i8 > v40 {
                v18 = std::sys::os_str::bytes::Slice::to_owned();
                v6 = v22;
                memcpy(&v5, &v18, 16);
                v35 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v50 as &i64), *((v50 + 8) as &i64));
                v26 = v38;
                memcpy(&v25, &v35, 16);
                v54 = *((a2 + 134) as &i8);
                v24 = v6;
                v22 = *(&v5.field_0 as &i128) as u128;
                v21 = v45;
                v20 = v54;
                v16 = 0;
                alloc::boxed::Box<T>::new(&v16);
                return v55;
            }
            uu_sort::chunks::Chunk::recycle(v7, a2);
            v35 = std::sync::mpmc::Sender<T>::send(&v12, &v19, v41);
            v49 = v2;
        }
        v35 = *((v49 + 32) as &i64);
        v37 = *((v49 + 32) as &i64) + *((v49 + 40) as &i64) * 24;
        v38 = 0;
        loop {
            v51 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(&v35);
            if !v51 {
                break;
            }
            if uu_sort::compare_by(v51, v52, a2, v2 + 48, v2 + 48) as i8 > v40 {
                v17 = std::sys::os_str::bytes::Slice::to_owned();
                v8 = v22;
                memcpy(&v7, &v17, 16);
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v52 as &i64), *((v52 + 8) as &i64));
                v26 = v6;
                memcpy(stack_base + -424, stack_base + -584, 16);
                v53 = *((a2 + 134) as &i8);
                v24 = v8;
                v22 = *(&v7 as &i128);
                v21 = v45;
                v20 = v53;
                v16 = 0;
                alloc::boxed::Box<T>::new(&v16);
                return v55;
            }
        }
        v0 = v2;
    }
    core::option::unwrap_failed(); /* do not return */
}
