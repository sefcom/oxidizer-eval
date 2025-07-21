fn uu_sort::check::check(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: i64;  // [bp-0x270]
    let v1: void*;  // [bp-0x270]
    let v2: i64;  // [bp-0x260]
    let v3: u64;  // [bp-0x258]
    let v4: u64;  // [bp-0x250]
    let v5: struct24;  // [bp-0x248], Other Possible Types: u128
    let v6: u64;  // [bp-0x238]
    let v7: i64;  // [bp-0x228], Other Possible Types: u128
    let v8: u64;  // [bp-0x228]
    let v9: u128;  // [bp-0x228]
    let v10: u64;  // [bp-0x218]
    let v11: u64;  // [bp-0x210]
    let v12: u64;  // [bp-0x208]
    let v13: u64;  // [bp-0x200]
    let v14: u64;  // [bp-0x1f8]
    let v17: u64;  // [bp-0x1d8]
    let v18: i8;  // [bp-0x1d0], Other Possible Types: u64
    let v19: struct24;  // [bp-0x1d0]
    let v20: struct24;  // [bp-0x1d0]
    let v21: struct32;  // [bp-0x1d0]
    let v22: u8;  // [bp-0x1cf]
    let v23: struct32;  // [bp-0x1c8], Other Possible Types: u64
    let v24: u64;  // [bp-0x1c0]
    let v25: u64;  // [bp-0x1b8]
    let v26: u8;  // [bp-0x1b0]
    let v27: u128;  // [bp-0x1a8]
    let v28: u64;  // [bp-0x198]
    let v29: u64;  // [bp-0x110]
    let v30: u64;  // [bp-0x108]
    let v31: u64;  // [bp-0x100]
    let v32: u64;  // [bp-0xf8]
    let v33: u64;  // [bp-0xf0]
    let v34: u64;  // [bp-0xe8]
    let v35: u64;  // [bp-0xe0]
    let v36: u64;  // [bp-0xd8]
    let v37: Option<struct120>;  // [bp-0xd0], Other Possible Types: struct147, struct24, struct_1 *
    let v38: Option<struct120>;  // [bp-0xd0], Other Possible Types: struct24
    let v39: u64;  // [bp-0xc8]
    let v40: u64;  // [bp-0xc0]
    let v42: core::option::Option<&str>;  // r15b
    let v43: u64;  // rcx
    let v44: u64;  // r8
    let v45: u32;  // r13d
    let v46: u64;  // rsi
    let v47: struct32;  // r12
    let v48: i64;  // rdi
    let v49: u64;  // rsi
    let v50: u64;  // rdx
    let v51: i64;  // rax
    let v52: i64;  // rbx
    let v53: void*;  // rax
    let v54: i64;  // rdx
    let v55: u8;  // al
    let v56: u8;  // al
    let v57: u64;  // r14

    v42 = -(*((a2 + 132) as &i8));
    uu_sort::open(a0, a1, v43);
    if *(&v18 as &i64) {
        return v23;
    }
    v11 = a1;
    v12 = v23;
    v13 = v24;
    v21 = std::sync::mpmc::sync_channel(0x2, v24, v43);
    v4 = a0;
    v14 = *(&v21.field_0 as &i128);
    v31 = v24;
    v32 = v25;
    std::sync::mpmc::sync_channel(0x2, a2, v43, v44);
    v33 = v21.field_0;
    v34 = v23;
    v3 = v24;
    v35 = v3;
    v17 = v25;
    v36 = v17;
    v37 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
    v29 = v12;
    v30 = v13;
    v18 = v24;
    v23 = v32;
    v24 = v33;
    v25 = v34;
    memcpy(&v26, &v37, 160);
    v40 = 0x8000000000000000;
    v37 = 0;
    v5 = std::thread::Builder::spawn_unchecked(&v37, &v21);
    v38 = core::result::Result<T,E>::expect(&v5);
    do {
        <i32 as core::iter::range::Step>::forward_unchecked(v45, v46);
        uu_sort::chunks::RecycledChunk::new((*((a2 + 104) as &i64) < 0x19000 ? *((a2 + 104) as &i64) : 0x19000), a2 as u8);
    } while ((v38 = std::sync::mpmc::Sender<T>::send(&v14, &v21, v43), v45 < 2));
    loop {
        v51 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(v48, v49, v50);
        if !v51 {
            return 0;
        }
        v2 = v51;
        v1 = 0;
        if v0 {
            v7 = v0;
            v9 = v8 & 0xffffffffffffffff0000000000000000 | v7 as u128;
            if !*((v7 + 40) as &i64) || !*((v51 + 40) as &i64) {
                break;
            }
            v52 = *((v51 + 32) as &i64);
            if uu_sort::compare_by(*((v7 + 32) as &i64) + *((v7 + 40) as &i64) * 24 - 24, v52, a2, v7 + 48, v51 + 48) as i8 > v42 {
                v20 = std::sys::os_str::bytes::Slice::to_owned();
                v6 = v24;
                v5 = *(&v20.field_0 as &i128);
                v37 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v52 as &i64), *((v52 + 8) as &i64));
                v28 = v40;
                v27 = *(&v37.field_0 as &i128);
                v56 = *((a2 + 134) as &i8);
                v26 = v6;
                v24 = v5;
                v23 = v47;
                v22 = v56;
                v18 = 0;
                alloc::boxed::Box<T>::new(&v18);
                return v57;
            }
            uu_sort::chunks::Chunk::recycle(v8, a2);
            v37 = std::sync::mpmc::Sender<T>::send(&v14, &v21, v43);
            v51 = v2;
        }
        v37 = *((v51 + 32) as &i64);
        v39 = *((v51 + 32) as &i64) + *((v51 + 40) as &i64) * 24;
        v40 = 0;
        loop {
            v53 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(&v37);
            if !v53 {
                break;
            }
            if uu_sort::compare_by(v53, v54, a2, v2 + 48, v2 + 48) as i8 > v42 {
                v19 = std::sys::os_str::bytes::Slice::to_owned();
                v10 = v24;
                v7 = *(&v19.field_0 as &i128);
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v54 as &i64), *((v54 + 8) as &i64));
                v28 = v6;
                v27 = *(&v5.field_0 as &i128);
                v55 = *((a2 + 134) as &i8);
                v26 = v10;
                v24 = v7;
                v23 = v47;
                v22 = v55;
                v18 = 0;
                alloc::boxed::Box<T>::new(&v18);
                return v57;
            }
        }
        v0 = v2;
    }
    core::option::unwrap_failed(); /* do not return */
}
