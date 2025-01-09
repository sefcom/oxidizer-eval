fn uu_sort::check::check(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x270]
    let v1: i64;  // [sp-0x260]
    let v2: i64;  // [sp-0x258]
    let v3: struct24;  // [sp-0x248], Other Possible Types: i128
    let v4: i64;  // [sp-0x238]
    let v5: i192;  // [bp-0x228], Other Possible Types: struct24
    let v6: i64;  // [sp-0x218]
    let v7: i64;  // [sp-0x208]
    let v8: i64;  // [sp-0x200]
    let v9: i128;  // [sp-0x1f8]
    let v10: i64;  // [sp-0x1e8]
    let v11: i64;  // [sp-0x1e0]
    let v12: i64;  // [sp-0x1d8]
    let v13: i192;  // [sp-0x1d0], Other Possible Types: struct24, struct32, struct2, struct120
    let v14: i64;  // [sp-0x1c8]
    let v15: i128;  // [sp-0x1c0]
    let v16: i64;  // [sp-0x1b8]
    let v17: i64;  // [bp-0x1b0]
    let v18: struct24;  // [sp-0x1a8]
    let v19: i64;  // [sp-0x110]
    let v20: i64;  // [sp-0x108]
    let v21: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xf8]
    let v23: i64;  // [sp-0xf0]
    let v24: i64;  // [sp-0xe8]
    let v25: i64;  // [sp-0xe0]
    let v26: i64;  // [sp-0xd8]
    let v27: struct24;  // [sp-0xd0], Other Possible Types: Option<struct120>, i1176, struct147, struct8
    let v28: i64;  // [sp-0xc8]
    let v29: i64;  // [sp-0xc0]
    let v31: i64;  // rdx
    let v32: i8;  // r15b
    let v33: i64;  // r14
    let v34: i64;  // rcx
    let v35: i64;  // rax
    let v36: i32;  // r13d
    let v37: i64;  // r12
    let v39: i64;  // 4096
    let v41: i64;  // rsi
    let v42: i64;  // rdx
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v45: i64;  // rax
    let v46: i64;  // rdx
    let v47: i64;  // rbx
    let v48: struct16;  // rax

    v32 = -(*((v31 + 132) as &i8));
    v13 = uu_sort::open(a0, a1);
    v33 = v14;
    if v13 {
        return v33;
    }
    v7 = v33;
    v8 = v15;
    v13 = std::sync::mpmc::sync_channel(0x2, v8, v34);
    v9 = v13;
    v21 = v15;
    v22 = v16;
    v13 = std::sync::mpmc::sync_channel(0x2, v31, v34);
    v23 = v15;
    v24 = v16;
    v2 = v15;
    v25 = v2;
    v12 = v16;
    v26 = v12;
    v27 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(v31);
    v19 = v7;
    v20 = v8;
    v13 = v21;
    v14 = v22;
    v15 = v23;
    v16 = v24;
    memcpy(&v17, &v27, 160);
    v29 = 0x8000000000000000;
    v27 = struct8 {
        field_0: 0
    };
    v3 = std::thread::Builder::spawn_unchecked(&v27, &v13);
    v27 = core::result::Result<T,E>::expect(&v3);
    v35 = *((v31 + 104) as &i64);
    if v35 >= 0x19000 {
        v35 = 0x19000;
    }
    v36 = 0;
    do {
        v36 = <i32 as core::iter::range::Step>::forward_unchecked(v36) as i32;
        v13 = uu_sort::chunks::RecycledChunk::new(v35);
        v27 = std::sync::mpmc::Sender<T>::send(&v9, &v13, v34);
    } while (v36 < 2);
    v0 = 0;
    v10 = v2;
    v11 = v12;
    v37 = 0;
    v2 = "src/uu/sort/src/check.rs";
    loop {
        v43 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(&v10, v41, v42);
        if !v43 {
            return 0;
        }
        v1 = v43;
        v37 += 1;
        v44 = v0;
        v0 = 0;
        if v44 {
            v5 = v44;
            v46 = *((v44 + 40) as &i64);
            if !v46 {
                core::option::unwrap_failed(v2); /* do not return */
            }
            if !*((v43 + 40) as &i64) {
                v2 = "src/uu/sort/src/check.rs";
                core::option::unwrap_failed(v2); /* do not return */
            }
            v47 = *((v43 + 32) as &i64);
            if uu_sort::compare_by(*((v44 + 32) as &i64) + v46 * 24 - 24, v47, v31, v44 + 48, v43 + 48) as i8 > v32 {
                v13 = std::sys::os_str::bytes::Slice::to_owned(v39, a1);
                v27 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v47 as &i64), *((v47 + 8) as &i64));
                v18 = v27;
                v17 = v4;
                v15 = v3;
                v14 = v37;
                v13 = struct2 {
                    field_0: 0
                    field_1: v51
                };
                v33 = alloc::boxed::Box<T>::new(&v13);
                return v33;
            }
            v13 = uu_sort::chunks::Chunk::recycle(v5);
            v27 = std::sync::mpmc::Sender<T>::send(&v9, &v13, v34);
            v45 = v1;
        }
        v27 = *((v45 + 32) as &i64);
        v28 = v27 + *((v45 + 40) as &i64) * 24;
        v29 = 0;
        loop {
            v48 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next();
            if !v48 {
                break;
            }
            v37 += 1;
            if uu_sort::compare_by(v48, v31, v31, v1 + 48, v1 + 48) as i8 > v32 {
                v13 = std::sys::os_str::bytes::Slice::to_owned(a0, a1);
                v5 = v13;
                v3 = <T as alloc::slice::hack::ConvertVec>::to_vec(*(v31 as &i64), *((v31 + 8) as &i64));
                v18 = v3;
                v17 = v6;
                v15 = v5;
                v14 = v37;
                v13 = struct2 {
                    field_0: 0
                    field_1: v50
                };
                v33 = alloc::boxed::Box<T>::new(&v13);
                return v33;
            }
        }
        v0 = v1;
    }
}
