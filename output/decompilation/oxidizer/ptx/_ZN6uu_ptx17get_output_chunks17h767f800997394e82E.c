fn uu_ptx::get_output_chunks(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64) -> int {
    let v0: Result<struct122, struct24>;  // [bp-0x1c0], Other Possible Types: u64
    let v1: struct64;  // [bp-0x1b8], Other Possible Types: struct24, u64
    let v2: struct48;  // [bp-0x1b0], Other Possible Types: u64
    let v3: i64;  // [bp-0x1a8], Other Possible Types: u64
    let v4: u64;  // [bp-0x1a0]
    let v5: void*;  // [bp-0x198]
    let v6: struct8;  // [bp-0x188], Other Possible Types: u128
    let v7: struct8;  // [bp-0x188]
    let v8: alloc::string::String;  // [bp-0x180]
    let v9: alloc::string::String;  // [bp-0x178]
    let v10: struct8;  // [bp-0x168], Other Possible Types: u128
    let v11: u64;  // [bp-0x168]
    let v12: u64;  // [bp-0x160]
    let v13: u64;  // [bp-0x158]
    let v14: u64;  // [bp-0x150]
    let v15: u64;  // [bp-0x148]
    let v16: struct24;  // [bp-0x140]
    let v17: u64;  // [bp-0x138]
    let v18: struct2;  // [bp-0x128], Other Possible Types: struct8
    let v19: struct2;  // [bp-0x120]
    let v20: struct94;  // [bp-0x118]
    let v21: struct8;  // [bp-0x110], Other Possible Types: u64
    let v22: u64;  // [bp-0x108]
    let v23: void*;  // [bp-0x100]
    let v24: u64;  // [bp-0xf8]
    let v25: core::fmt::Arguments;  // [bp-0xf0], Other Possible Types: u64
    let v26: core::fmt::rt::Argument;  // [bp-0xe8], Other Possible Types: struct_0 *
    let v27: struct48;  // [bp-0xe0], Other Possible Types: u64
    let v28: u64;  // [bp-0xd8]
    let v29: struct64;  // [bp-0xd0]
    let v30: i64;  // [bp-0xc8]
    let v31: struct24;  // [bp-0xc0]
    let v32: u64;  // [bp-0xb8]
    let v33: struct24;  // [bp-0xa8]
    let v34: u64;  // [bp-0xa0]
    let v35: struct24;  // [bp-0x90]
    let v36: u64;  // [bp-0x88]
    let v37: struct24;  // [bp-0x78]
    let v38: u64;  // [bp-0x70]
    let v39: u128;  // [bp-0x60]
    let v40: alloc::string::String;  // [bp-0x50]
    let v41: u128;  // [bp-0x48]
    let v42: i8;  // [bp-0x38]
    let v43: u64;  // r15
    let v44: u64;  // r13
    let v45: u64;  // rdx
    let v46: u64;  // rax
    let v48: u64;  // rax
    let v49: u64;  // r15
    let v50: u64;  // rax
    let v51: u64;  // rax
    let v52: u64;  // rax
    let v53: u64;  // rbx
    let v54: u64;  // r15
    let v55: u64;  // rax
    let v56: &[u8];  // rax:rdx
    let v57: &[u8];  // rax:rdx
    let v58: &[u8];  // rax:rdx
    let v59: &[u8];  // rax:rdx
    let v60: &[u8];  // rax:rdx

    v43 = *((a6 + 72) as &i64) >> 1;
    v17 = *((a6 + 80) as &i64);
    v0 = core::cmp::max_by(v43 - *((a6 + 80) as &i64));
    v28 = *((a6 + 40) as &i64);
    v15 = core::cmp::max_by(~(*((a6 + 40) as &i64) * 2 + a3) + v43);
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43, 0);
    v11 = v2;
    v12 = v3;
    v13 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43, 0);
    v6 = v2;
    v8 = v3;
    v9 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43, 0);
    v18 = v2;
    v19 = v3;
    v20 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v43, 0);
    v21 = v2;
    v22 = v3;
    v23 = 0;
    v44 = a1;
    uu_ptx::trim_idx(v44, a2, 0, a2);
    v14 = uu_ptx::trim_idx(v44, a2, uu_ptx::trim_broken_word_left(v44, a2, core::cmp::max_by(v45 - v0), v45), v45);
    v46 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v14, v45, v44, a2, "src/uu/ptx/src/ptx.rs");
    v31 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v46, v46 + v45 * 4);
    v57 = core::slice::iter::Iter<T>::make_slice(v32);
    v7 = alloc::vec::Vec<T,A>::append_elements();
    if v0 < v9 {
        core::panicking::panic("assertion failed: max_before_size >= before.len()"); /* do not return */
    }
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, core::cmp::min_by(v15, a5)));
    v48 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v45, a4, a5, "src/uu/ptx/src/ptx.rs");
    v33 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v48, v48 + v45 * 4);
    v56 = core::slice::iter::Iter<T>::make_slice(v34);
    v16 = &v18;
    v18 = alloc::vec::Vec<T,A>::append_elements();
    if v15 < v20 {
        core::panicking::panic("assertion failed: max_after_size >= after.len()"); /* do not return */
    }
    v49 = uu_ptx::trim_idx(a4, a5, v45, a5);
    v50 = core::cmp::min_by(a5, v49 + core::cmp::max_by(v0 - (v9 + v17)));
    v51 = uu_ptx::trim_idx(a4, a5, v49, uu_ptx::trim_broken_word_right(a4, a5, v49, v50));
    v52 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v51, v45, a4, a5, "src/uu/ptx/src/ptx.rs");
    v35 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v52, v52 + v45 * 4);
    v29 = v51;
    v0 = v45;
    v59 = core::slice::iter::Iter<T>::make_slice(v36);
    v21 = alloc::vec::Vec<T,A>::append_elements();
    v53 = a1;
    uu_ptx::trim_idx(v53, a2, 0, v14);
    v54 = uu_ptx::trim_idx(v53, a2, uu_ptx::trim_broken_word_left(v53, a2, core::cmp::max_by(v45 - core::cmp::max_by(v15 - (v17 + v20))), v45), v45);
    v55 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v54, v45, v53, a2, "src/uu/ptx/src/ptx.rs");
    v37 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v55, v55 + v45 * 4);
    v60 = core::slice::iter::Iter<T>::make_slice(v38);
    v10 = alloc::vec::Vec<T,A>::append_elements();
    if v0 != a5 && (v29 == v45 || (v16 = &v21, v45 != a5)) {
        v58 = core::slice::iter::Iter<T>::make_slice(*((a6 + 32) as &i64));
        alloc::vec::Vec<T,A>::append_elements(v16);
    }
    if v14 {
        if v54 == v45 {
            v24 = a6 + 24;
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            v26 = &v7;
            v27 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = &g_4562c0.field_0;
            v2 = 2;
            v5 = 0;
            v3 = &v24;
            v4 = 2;
            v1 = core::option::Option<T>::map_or_else(a2);
            v9 = v40;
            v6 = v39;
        } else if v54 {
            v25 = <alloc::string::String as core::fmt::Display>::fmt;
            v26 = &v10;
            v27 = <alloc::string::String as core::fmt::Display>::fmt;
            v1 = &g_4562c0.field_0;
            v2 = 2;
            v5 = 0;
            v3 = &v24;
            v4 = 2;
            v1 = core::option::Option<T>::map_or_else(a2);
            v13 = *(&v42 as &i64);
            v10 = v41;
        }
    }
    *((v30 + 16) as &i64) = 0;
    *(v30 as &i128) = *(&v21 as &i128);
    *((v30 + 40) as &alloc::string::String) = v9;
    *((v30 + 24) as &u128) = v6;
    *((v30 + 48) as &i128) = *(&v18 as &i128);
    *((v30 + 64) as &struct94) = v20;
    *((v30 + 72) as &u128) = v10;
    *((v30 + 88) as &u64) = v13;
    return;
}
