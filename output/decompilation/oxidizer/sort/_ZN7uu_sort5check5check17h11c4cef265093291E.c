fn uu_sort::check::check(a0: void*, a1: u64, a2: i64) -> long long {
    let v0: i64;  // [bp-0x298], Other Possible Types: void*
    let v1: u64;  // [bp-0x288]
    let v2: u64;  // [bp-0x280]
    let v3: struct24;  // [bp-0x278], Other Possible Types: u128
    let v4: u64;  // [bp-0x268]
    let v5: u64;  // [bp-0x258]
    let v6: u64;  // [bp-0x240]
    let v7: u64;  // [bp-0x238]
    let v8: u64;  // [bp-0x230]
    let v9: u64;  // [bp-0x228]
    let v10: i64;  // [bp-0x220]
    let v11: i64;  // [bp-0x218], Other Possible Types: u128
    let v12: u64;  // [bp-0x208]
    let v13: u64;  // [bp-0x200]
    let v14: u64;  // [bp-0x1f8]
    let v15: u64;  // [bp-0x1f0]
    let v16: u64;  // [bp-0x1e8]
    let v17: i64;  // [bp-0x1e0]
    let v18: Result<struct16, struct16>;  // [bp-0x1d8], Other Possible Types: struct144, struct24, struct32, u64
    let v19: struct144;  // [bp-0x1d8]
    let v20: struct120;  // [bp-0x1d8]
    let v21: u128;  // [bp-0x1d8]
    let v22: u64;  // [bp-0x1d0]
    let v23: u64;  // [bp-0x1c8]
    let v24: u128;  // [bp-0x1c0]
    let v25: u8;  // [bp-0x1b8]
    let v26: u64;  // [bp-0x1b0]
    let v27: void*;  // [bp-0x1a8]
    let v28: u8;  // [bp-0x1a0]
    let v29: u64;  // [bp-0x118]
    let v30: u64;  // [bp-0x110]
    let v31: u64;  // [bp-0x100]
    let v32: u64;  // [bp-0xf8]
    let v33: u64;  // [bp-0xf0]
    let v34: u64;  // [bp-0xe8]
    let v35: u64;  // [bp-0xe0]
    let v36: u64;  // [bp-0xd8]
    let v37: Option<struct144>;  // [bp-0xd0], Other Possible Types: struct154, struct24, struct_1 *
    let v38: struct24;  // [bp-0xd0], Other Possible Types: Option<struct144>
    let v39: u64;  // [bp-0xc8]
    let v40: u64;  // [bp-0xc0]
    let v41: u8;  // [bp-0xa8]
    let v43: u8;  // r12b
    let v44: u8;  // rbx
    let v46: void*;  // r15
    let v49: i64;  // rbx
    let v50: i64;  // r14
    let v51: u64;  // rdi
    let v52: i64;  // rbp
    let v53: void*;  // rax
    let v54: i64;  // rdx
    let v55: u8;  // al
    let v56: void*;  // rbx
    let v57: u8;  // al

    v43 = -(*((a2 + 132) as &i8));
    v18 = uu_sort::open(a0, a1);
    match v18 {
        Err(_) => {
            return v6;
        },
        Ok(_) => {
            v6 = v22;
            v7 = v23;
            v18 = std::sync::mpmc::sync_channel();
            v2 = v18.field_0;
            v13 = v2;
            v1 = v22;
            v14 = v1;
            v31 = v23;
            v32 = v24;
            v18 = std::sync::mpmc::sync_channel(0x2, a2, v1);
            v33 = v18.field_0;
            v34 = v22;
            v9 = v23;
            v35 = v9;
            v8 = v24;
            v36 = v8;
            v37 = <uu_sort::GlobalSettings as core::clone::Clone>::clone(a2);
            v29 = v6;
            v30 = v7;
            v18 = v31;
            v22 = v32;
            v23 = v33;
            v24 = v34;
            memcpy(&v25, &v37, 160);
            v40 = 0x8000000000000000;
            v37 = 0;
            v41 = 0;
            v3 = std::thread::Builder::spawn_unchecked(&v37, &v18);
            v38 = core::result::Result<T,E>::expect(&v3);
            v44 = (*((a2 + 104) as &i64) < 0x19000 ? *((a2 + 104) as &i64) : 0x19000);
            v18 = uu_sort::chunks::RecycledChunk::new(v44);
            v38 = std::sync::mpmc::Sender<T>::send(v2, v1, &v18);
            v19 = uu_sort::chunks::RecycledChunk::new(v44);
            v38 = std::sync::mpmc::Sender<T>::send(v2, v1, &v19);
            v0 = 0;
            v15 = v9;
            v16 = v8;
            v5 = "src/uu/sort/src/check.rs";
            loop {
                v49 = v50;
                v50 = <std::sync::mpsc::IntoIter<T> as core::iter::traits::iterator::Iterator>::next(v15, v16);
                if !v50 {
                    return v56;
                }
                v10 = v50;
                v17 = v49;
                v0 = 0;
                if v49 {
                    v11 = v49;
                    if !*((v49 + 40) as &i64) {
                        break;
                    }
                    v51 = *((v49 + 40) as &i64) * 24 + *((v49 + 32) as &i64);
                    if v51 == 24 || !*((v50 + 40) as &i64) {
                        break;
                    }
                    v52 = *((v50 + 32) as &i64);
                    if uu_sort::compare_by(v51 - 24, v52, a2, v49 + 48, v50 + 48) as u8 > v43 {
                        v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1);
                        v4 = v23;
                        v3 = v18.field_0;
                        v37 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v52 as &i64), *((v52 + 8) as &i64));
                        v26 = v40;
                        v24 = v37.field_0;
                        v57 = *((a2 + 134) as &i8);
                        v23 = v4;
                        v21 = v3;
                        v27 = v46;
                        v28 = v57;
                        alloc::boxed::Box<T>::new(&v18);
                        return v56;
                    }
                    v20 = uu_sort::chunks::Chunk::recycle(v49);
                    v37 = std::sync::mpmc::Sender<T>::send(v2, v1, &v20);
                }
                v37 = *((v50 + 32) as &i64);
                v39 = *((v50 + 32) as &i64) + *((v50 + 40) as &i64) * 24;
                v40 = 0;
                loop {
                    v53 = <itertools::tuple_impl::TupleWindows<I,T> as core::iter::traits::iterator::Iterator>::next(&v37);
                    if !v53 {
                        break;
                    }
                    if uu_sort::compare_by(v53, v54, a2, v50 + 48, v50 + 48) as u8 > v43 {
                        v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1);
                        v12 = v23;
                        v11 = v18.field_0;
                        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(*(v54 as &i64), *((v54 + 8) as &i64));
                        v26 = v4;
                        v24 = v3.field_0;
                        v55 = *((a2 + 134) as &i8);
                        v23 = v12;
                        v21 = v11;
                        v27 = v46;
                        v28 = v55;
                        alloc::boxed::Box<T>::new(&v18);
                        return v56;
                    }
                }
                v0 = v50;
                v15 = v9;
                v16 = v8;
            }
            core::option::unwrap_failed(); /* do not return */
        },
    }
}
