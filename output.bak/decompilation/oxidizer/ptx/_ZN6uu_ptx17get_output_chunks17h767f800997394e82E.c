fn uu_ptx::get_output_chunks(a0: &struct96, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [bp-0x1c8]
    let v1: i64;  // [sp-0x1c0]
    let v2: Result<struct16, struct16>;  // [sp-0x1b8], Other Possible Types: i64
    let v3: i64;  // [sp-0x1b0]
    let v4: i64;  // [sp-0x1a8]
    let v5: i64;  // [sp-0x1a0]
    let v6: i64;  // [sp-0x198]
    let v7: i128;  // [sp-0x188], Other Possible Types: struct16
    let v8: i64;  // [sp-0x180]
    let v9: i64;  // [sp-0x178]
    let v10: i64;  // [sp-0x168], Other Possible Types: struct16
    let v11: i64;  // [sp-0x160]
    let v12: i64;  // [sp-0x158]
    let v13: i64;  // [sp-0x150]
    let v14: i64;  // [sp-0x148]
    let v15: i64;  // [sp-0x140]
    let v16: i64;  // [sp-0x138]
    let v17: i128;  // [sp-0x128], Other Possible Types: struct16
    let v18: i64;  // [sp-0x120]
    let v19: i64;  // [sp-0x118]
    let v20: i128;  // [sp-0x110], Other Possible Types: struct16
    let v21: i64;  // [sp-0x108]
    let v22: i64;  // [sp-0x100]
    let v23: i64;  // [sp-0xf8]
    let v24: i64;  // [sp-0xf0]
    let v25: i64;  // [sp-0xe8]
    let v26: i64;  // [sp-0xe0]
    let v27: i64;  // [sp-0xd8]
    let v28: i64;  // [sp-0xd0]
    let v29: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v30: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v31: i192;  // [sp-0x90], Other Possible Types: struct24
    let v32: struct24;  // [sp-0x78], Other Possible Types: i192
    let v33: i8;  // [bp-0x60]
    let v34: i8;  // [bp-0x50]
    let v35: i8;  // [bp-0x48]
    let v36: i8;  // [bp-0x38]
    let v37: i64;  // [bp+0x8]
    let v38: i64;  // rbx
    let v39: i64;  // r15
    let v40: i64;  // r13
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // rcx
    let v44: i64;  // rax
    let v45: i64;  // r15
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i64;  // rbx
    let v49: i64;  // r15
    let v50: i64;  // rax
    let v51: i64;  // r13

    v38 = v37;
    v39 = *((v38 + 72) as &i64) >> 1;
    v16 = *((v38 + 80) as &i64);
    v1 = core::cmp::max_by(v39 - v16);
    v27 = *((v38 + 40) as &i64);
    v14 = core::cmp::max_by(~(v27 * 2 + a3) + v39);
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v39, 0);
    v10 = v3;
    v11 = v4;
    v12 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v39, 0);
    v7 = v3;
    v8 = v4;
    v9 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v39, 0);
    v17 = v3;
    v18 = v4;
    v19 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v39, 0);
    v20 = v3;
    v21 = v4;
    v22 = 0;
    v40 = a1;
    uu_ptx::trim_idx(v40, a2, 0, a2);
    v13 = uu_ptx::trim_idx(v40, a2, uu_ptx::trim_broken_word_left(v40, a2, core::cmp::max_by(v41 - v1), v41), v41);
    v42 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v13, v41, v40, a2, "src/uu/ptx/src/ptx.rs");
    v29 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v42, v42 + v41 * 4);
    v0 = v43 | -0x100 | 1;
    v7 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v29 as &char + 8) as &i64), *((&v29 as &char + 16) as &i64) + *((&v29 as &char + 8) as &i64)), v41);
    if v1 < v9 {
        core::panicking::panic("assertion failed: max_before_size >= before.len()", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, core::cmp::min_by(v14, a5)));
    v44 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v41, a4, a5, "src/uu/ptx/src/ptx.rs");
    v30 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v44, v44 + v41 * 4);
    v0 = v43 | -0x100 | 1;
    v15 = &v17;
    v17 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v30 as &char + 8) as &i64), *((&v30 as &char + 16) as &i64) + *((&v30 as &char + 8) as &i64)), v41);
    if v14 < v19 {
        core::panicking::panic("assertion failed: max_after_size >= after.len()", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    v45 = uu_ptx::trim_idx(a4, a5, v41, a5);
    v46 = uu_ptx::trim_idx(a4, a5, v45, uu_ptx::trim_broken_word_right(a4, a5, v45, core::cmp::min_by(a5, v45 + core::cmp::max_by(v1 - (v9 + v16)))));
    v47 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v46, v41, a4, a5, "src/uu/ptx/src/ptx.rs");
    v31 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v47, v47 + v41 * 4);
    v28 = v46;
    v0 = v41;
    v1 = v41;
    v20 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v31 as &char + 8) as &i64), *((&v31 as &char + 16) as &i64) + *((&v31 as &char + 8) as &i64)), v41);
    v48 = a1;
    uu_ptx::trim_idx(v48, a2, 0, v13);
    v49 = uu_ptx::trim_idx(v48, a2, uu_ptx::trim_broken_word_left(v48, a2, core::cmp::max_by(v41 - core::cmp::max_by(v14 - (v16 + v19))), v41), v41);
    v50 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v49, v41, v48, a2, "src/uu/ptx/src/ptx.rs");
    v32 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v50, v50 + v41 * 4);
    v10 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v32 as &char + 8) as &i64), *((&v32 as &char + 16) as &i64) + *((&v32 as &char + 8) as &i64)), v41);
    v51 = v37;
    if v1 != a5 && (v28 == v0 || (v15 = &v20, v0 != a5)) {
        alloc::vec::Vec<T,A>::append_elements(v15, core::slice::iter::Iter<T>::make_slice(*((v51 + 32) as &i64), v27 + *((v51 + 32) as &i64)), v41);
    }
    if !v13 {
        *((a0 + 16) as &i64) = v22;
        *(a0 as &i128) = v20;
        *((a0 + 40) as &i64) = v9;
        *((a0 + 24) as &i128) = v7;
        *((a0 + 48) as &i128) = v17;
        *((a0 + 64) as &i64) = v19;
        *((a0 + 72) as &i128) = v10;
        *((a0 + 88) as &i64) = v12;
        v0 = 0;
        v0 = 0;
        return;
    }
    if v49 == v41 {
        v23 = v51 + 24;
        v24 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = &v7;
        v26 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        core::option::Option<T>::map_or_else();
        v9 = v34;
        v7 = v33;
    } else if v49 {
        v23 = v23;
        v24 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = &v10;
        v26 = <alloc::string::String as core::fmt::Display>::fmt;
        v2 = &g_4562c0;
        v3 = 2;
        v6 = 0;
        v4 = &v23;
        v5 = 2;
        core::option::Option<T>::map_or_else();
        v12 = v36;
        v10 = v35;
    }
}
