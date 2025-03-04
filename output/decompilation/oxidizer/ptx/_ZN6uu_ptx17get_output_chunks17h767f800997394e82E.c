fn uu_ptx::get_output_chunks(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: &u64) -> u64 {
    let v0: i32;  // [bp-0x1c8], Other Possible Types: unsigned long
    let v1: i64;  // [sp-0x1c0]
    let v2: Result<struct16, struct16>;  // [sp-0x1b8]
    let v3: i64;  // [sp-0x1b0]
    let v4: i64;  // [sp-0x1a8]
    let v5: String;  // [sp-0x188], Other Possible Types: struct16, unsigned long
    let v6: i64;  // [sp-0x180]
    let v7: i64;  // [sp-0x178]
    let v8: struct16;  // [sp-0x168], Other Possible Types: String, unsigned long
    let v9: i64;  // [sp-0x160]
    let v10: i64;  // [sp-0x158]
    let v11: i64;  // [sp-0x150]
    let v12: i64;  // [sp-0x148]
    let v13: i64;  // [sp-0x140]
    let v14: i64;  // [sp-0x138]
    let v15: struct16;  // [sp-0x128], Other Possible Types: unsigned long
    let v16: i64;  // [sp-0x120]
    let v17: i64;  // [sp-0x118]
    let v18: i64;  // [sp-0x110], Other Possible Types: struct16
    let v19: i64;  // [sp-0x108]
    let v20: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xd8]
    let v23: i64;  // [sp-0xd0]
    let v24: struct24;  // [sp-0xc0]
    let v25: struct24;  // [sp-0xa8]
    let v26: struct24;  // [sp-0x90]
    let v27: struct24;  // [sp-0x78]
    let v28: String;  // [sp-0x60]
    let v29: String;  // [sp-0x48]
    let v30: i64;  // r15
    let v31: i64;  // r13
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // rcx
    let v35: i64;  // rax
    let v36: i64;  // r15
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // rbx
    let v40: i64;  // r15
    let v41: i64;  // rax

    v30 = *((a6 + 72) as &i64) >> 1;
    v14 = *((a6 + 80) as &i64);
    v1 = core::cmp::max_by(v30 - v14);
    v22 = *((a6 + 40) as &i64);
    v12 = core::cmp::max_by(~(v22 * 2 + a3) + v30);
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, 0);
    v8 = v3;
    v9 = v4;
    v10 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, 0);
    v5 = v3;
    v6 = v4;
    v7 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, 0);
    v15 = v3;
    v16 = v4;
    v17 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v30, 0);
    v18 = v3;
    v19 = v4;
    v20 = 0;
    v31 = a1;
    uu_ptx::trim_idx(v31, a2, 0, a2);
    v11 = uu_ptx::trim_idx(v31, a2, uu_ptx::trim_broken_word_left(v31, a2, core::cmp::max_by(v32 - v1), v32), v32);
    v33 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, v32, v31, a2, "src/uu/ptx/src/ptx.rs");
    v24 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v33, v33 + v32 * 4);
    *(&v0 as &u32) = (v34 & -0x100 | 1) as u32;
    v5 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v24.field_0 as &char + 8) as &i64), v24.field_16 + *((&v24.field_0 as &char + 8) as &i64)), a2);
    if v1 < v7 {
        core::panicking::panic("assertion failed: max_before_size >= before.len()", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    uu_ptx::trim_idx(a4, a5, 0, uu_ptx::trim_broken_word_right(a4, a5, 0, core::cmp::min_by(v12, a5)));
    v35 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v32, a4, a5, "src/uu/ptx/src/ptx.rs");
    v25 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v35, v35 + v32 * 4);
    *(&v0 as &u32) = (v34 & -0x100 | 1) as u32;
    v13 = &v15;
    v15 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v25.field_0 as &char + 8) as &i64), v25.field_16 + *((&v25.field_0 as &char + 8) as &i64)), a2);
    if v12 < v17 {
        core::panicking::panic("assertion failed: max_after_size >= after.len()", "src/uu/ptx/src/ptx.rs"); /* do not return */
    }
    v36 = uu_ptx::trim_idx(a4, a5, v32, a5);
    v37 = uu_ptx::trim_idx(a4, a5, v36, uu_ptx::trim_broken_word_right(a4, a5, v36, core::cmp::min_by(a5, v36 + core::cmp::max_by(v1 - (v7 + v14)))));
    v38 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v37, v32, a4, a5, "src/uu/ptx/src/ptx.rs");
    v26 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v38, v38 + v32 * 4);
    v23 = v37;
    v0 = v32;
    v1 = v32;
    v18 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v26.field_0 as &char + 8) as &i64), v26.field_16 + *((&v26.field_0 as &char + 8) as &i64)), a2);
    v39 = a1;
    uu_ptx::trim_idx(v39, a2, 0, v11);
    v40 = uu_ptx::trim_idx(v39, a2, uu_ptx::trim_broken_word_left(v39, a2, core::cmp::max_by(v32 - core::cmp::max_by(v12 - (v14 + v17))), v32), v32);
    v41 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v40, v32, v39, a2, "src/uu/ptx/src/ptx.rs");
    v27 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v41, v41 + v32 * 4);
    v8 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v27.field_0 as &char + 8) as &i64), v27.field_16 + *((&v27.field_0 as &char + 8) as &i64)), a2);
    if v1 != a5 && (v23 == v0 || (v13 = &v18, v0 != a5)) {
        alloc::vec::Vec<T,A>::append_elements(v13, core::slice::iter::Iter<T>::make_slice(*((a6 + 32) as &i64), v22 + *((a6 + 32) as &i64)), a2);
    }
    if !v11 {
        return;
    }
    if v40 == v32 {
        v28 = format!("{}{}", a6 + 24, &v5);
        v5 = v28;
    } else if v40 {
        v29 = format!("{}{}", v21, &v8);
        v8 = v29;
    }
}
