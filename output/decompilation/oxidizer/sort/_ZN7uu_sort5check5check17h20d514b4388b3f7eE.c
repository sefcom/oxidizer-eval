fn uu_sort::check::check(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x270]
    let v1: i64;  // [sp-0x260]
    let v2: i64;  // [sp-0x258]
    let v3: struct24;  // [sp-0x248], Other Possible Types: i192
    let v4: i64;  // [sp-0x238]
    let v5: i192;  // [bp-0x228], Other Possible Types: struct24
    let v6: i64;  // [sp-0x218]
    let v7: i64;  // [sp-0x208]
    let v8: i64;  // [sp-0x200]
    let v9: i128;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1e8]
    let v11: i64;  // [sp-0x1e0]
    let v12: i64;  // [sp-0x1d8]
    let v13: i8;  // [sp-0x1d0], Other Possible Types: struct24, struct120, struct32
    let v14: i8;  // [sp-0x1cf]
    let v15: i64;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x1c0]
    let v17: i64;  // [sp-0x1b8]
    let v18: i8;  // [bp-0x1b0]
    let v19: struct24;  // [sp-0x1a8]
    let v20: i64;  // [sp-0x110]
    let v21: i64;  // [sp-0x108]
    let v22: i64;  // [sp-0x100]
    let v23: i64;  // [sp-0xf8]
    let v24: i64;  // [sp-0xf0]
    let v25: i64;  // [sp-0xe8]
    let v26: i64;  // [sp-0xe0]
    let v27: i64;  // [sp-0xd8]
    let v28: i1184;  // [sp-0xd0], Other Possible Types: struct24, Option<struct120>, struct147, struct8
    let v29: i64;  // [sp-0xc8]
    let v30: i64;  // [sp-0xc0]
    let v32: i64;  // rdx
    let v33: i8;  // r15b
    let v34: i64;  // r14
    let v35: i64;  // r14
    let v36: i64;  // rcx
    let v37: i64;  // rax
    let v38: i32;  // r13d
    let v39: i64;  // r12
    let v41: i64;  // 4096
    let v43: i64;  // rsi
    let v44: i64;  // rdx
    let v45: i64;  // rax
    let v46: i64;  // rcx
    let v47: i64;  // rax
    let v48: i64;  // rdx
    let v49: i64;  // rbx
    let v50: struct16;  // rax
    let v52: i8;  // al
    let v54: i8;  // al
    let v56: i64;  // r14

    v33 = -(*((v32 + 132) as &i8));
    v13 = uu_sort::open(a0, a1);
    v34 = v15;
    if v13 {
        return v35;
    }
    v7 = v34;
    v8 = v16;
    v13 = std::sync::mpmc::sync_channel(0x2, v8, v36);
    v9 = v13;
    v22 = v16;
    v23 = v17;
    v13 = std::sync::mpmc::sync_channel(0x2, v32, v36);
    v24 = v16;
    v25 = v17;
    v2 = v16;
    v26 = v2;
    v12 = v17;
    v27 = v12;
    v28 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(v32);
    v20 = v7;
    v21 = v8;
    v13 = v22;
    v15 = v23;
    v16 = v24;
    v17 = v25;
    memcpy(&v18, &v28, 160);
    v30 = 0x8000000000000000;
    v28 = struct8 {
        field_0: 0
    };
    v3 = std::thread::Builder::spawn_unchecked(&v28, &v13);
    v28 = core::result::Result<T,E>::expect(&v3);
    v37 = *((v32 + 104) as &i64);
    if v37 >= 0x19000 {
        v37 = 0x19000;
    }
    v38 = 0;
    do {
        v38 = <i32 as core::iter::range::Step>::forward_unchecked(v38) as i32;
        v13 = uu_sort::chunks::RecycledChunk::new(v37);
        v28 = std::sync::mpmc::Sender<T>::send(&v9, &v13, v36);
    } while (v38 < 2);
    v0 = 0;
    v10 = v2;
    v11 = v12;
    v39 = 0;
    v2 = "src/uu/sort/src/check.rs";
    loop {
        v45 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(&v10, v43, v44);
        if !v45 {
            return 0;
        }
        v1 = v45;
        v39 += 1;
        v46 = v0;
        v0 = 0;
        if v46 {
            v5 = v46;
            v48 = *((v46 + 40) as &i64);
            if !v48 {
                core::option::unwrap_failed(v2); /* do not return */
            }
            if !*((v45 + 40) as &i64) {
                v2 = "src/uu/sort/src/check.rs";
                core::option::unwrap_failed(v2); /* do not return */
            }
            v49 = *((v45 + 32) as &i64);
            if uu_sort::compare_by(*((v46 + 32) as &i64) + v48 * 24 - 24, v49, v32, v46 + 48, v45 + 48) as i8 > v33 {
                v13 = std::sys::os_str::bytes::Slice::to_owned(v41, a1);
                v28 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v49 as &i64), *((v49 + 8) as &i64));
                v19 = v28;
                v54 = *((v32 + 134) as &i8);
                v18 = v4;
                v16 = v3;
                v15 = v39;
                v14 = v54;
                v13 = 0;
                alloc::boxed::Box<T>::new(&v13);
                return v35;
            }
            v13 = uu_sort::chunks::Chunk::recycle(v5);
            v28 = std::sync::mpmc::Sender<T>::send(&v9, &v13, v36);
            v47 = v1;
        }
        v28 = *((v47 + 32) as &i64);
        v29 = v28 + *((v47 + 40) as &i64) * 24;
        v30 = 0;
        loop {
            v50 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next();
            if !v50 {
                break;
            }
            v39 += 1;
            if uu_sort::compare_by(v50, v32, v32, v1 + 48, v1 + 48) as i8 > v33 {
                v13 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                v5 = v13;
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v32 as &i64), *((v32 + 8) as &i64));
                v19 = v3;
                v52 = *((v32 + 134) as &i8);
                v18 = v6;
                v16 = v5;
                v15 = v39;
                v14 = v52;
                v13 = 0;
                alloc::boxed::Box<T>::new(&v13);
                v35 = v56;
                return v35;
            }
        }
        v0 = v1;
    }
}
