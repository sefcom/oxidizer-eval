fn uu_ptx::get_output_chunks(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i32;  // [bp-0x1c8]
    let v1: i64;  // [sp-0x1c0]
    let v2: Result<struct16, struct24>;  // [sp-0x1b8]
    let v3: i64;  // [sp-0x1b0]
    let v4: i64;  // [sp-0x1a8]
    let v5: i64;  // [sp-0x188], Other Possible Types: struct16
    let v6: i64;  // [sp-0x180]
    let v7: i64;  // [sp-0x178]
    let v8: i128;  // [sp-0x168], Other Possible Types: struct16
    let v9: i64;  // [sp-0x160]
    let v10: i64;  // [sp-0x158]
    let v11: i64;  // [sp-0x150]
    let v12: i64;  // [sp-0x148]
    let v13: i64;  // [sp-0x140]
    let v14: i64;  // [sp-0x138]
    let v15: i64;  // [sp-0x128], Other Possible Types: struct16
    let v16: i64;  // [sp-0x120]
    let v17: i64;  // [sp-0x118]
    let v18: i128;  // [sp-0x110], Other Possible Types: struct16
    let v19: i64;  // [sp-0x108]
    let v20: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xd8]
    let v23: i64;  // [sp-0xd0]
    let v24: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v25: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v26: struct24;  // [sp-0x90], Other Possible Types: i192
    let v27: i192;  // [sp-0x78], Other Possible Types: struct24
    let v28: i192;  // [sp-0x60]
    let v29: i192;  // [sp-0x48]
    let v30: i64;  // [bp+0x8]
    let v31: i64;  // rbx
    let v32: i64;  // r15
    let v33: i64;  // r13
    let v34: i64;  // rdx
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i64;  // rax
    let v38: i64;  // r15
    let v39: i64;  // rax
    let v40: i64;  // rax
    let v41: i64;  // rbx
    let v42: i64;  // r15
    let v43: i64;  // rax

    v31 = v30;
    v32 = *((v31 + 72) as &i64) >> 1;
    v14 = *((v31 + 80) as &i64);
    v1 = core::cmp::max_by(v32 - v14);
    v22 = *((v31 + 40) as &i64);
    v12 = core::cmp::max_by(~(v22 * 2 + a3) + v32);
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v32, 0);
    v8 = v3;
    v9 = v4;
    v10 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v32, 0);
    v5 = v3;
    v6 = v4;
    v7 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v32, 0);
    v15 = v3;
    v16 = v4;
    v17 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(v32, 0);
    v18 = v3;
    v19 = v4;
    v20 = 0;
    v33 = a1;
    uu_ptx::trim_idx(v33, a2, None, a2);
    v11 = uu_ptx::trim_idx(v33, a2, uu_ptx::trim_broken_word_left(v33, a2, core::cmp::max_by(v34 - v1), v34), v34);
    v35 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, v34, v33, a2, "src/uu/ptx/src/ptx.rs");
    v24 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v35, v35 + v34 * 4);
    v0 = v36 | -0x100 | 1;
    v5 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v24 as &char + 8) as &i64), *((&v24 as &char + 16) as &i64) + *((&v24 as &char + 8) as &i64)), v34);
    if v1 < v7 {
        core::panicking::panic(); /* do not return */
    }
    uu_ptx::trim_idx(a4, a5, None, uu_ptx::trim_broken_word_right(a4, a5, None, core::cmp::min_by(v12, a5)));
    v37 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v34, a4, a5, "src/uu/ptx/src/ptx.rs");
    v25 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v37, v37 + v34 * 4);
    v0 = v36 | -0x100 | 1;
    v13 = &v15;
    v15 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v25 as &char + 8) as &i64), *((&v25 as &char + 16) as &i64) + *((&v25 as &char + 8) as &i64)), v34);
    if v12 < v17 {
        core::panicking::panic(); /* do not return */
    }
    v38 = uu_ptx::trim_idx(a4, a5, v34, a5);
    v39 = uu_ptx::trim_idx(a4, a5, v38, uu_ptx::trim_broken_word_right(a4, a5, v38, core::cmp::min_by(a5, v38 + core::cmp::max_by(v1 - (v7 + v14)))));
    v40 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v39, v34, a4, a5, "src/uu/ptx/src/ptx.rs");
    v26 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v40, v40 + v34 * 4);
    v23 = v39;
    v0 = v34;
    v1 = v34;
    v18 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v26 as &char + 8) as &i64), *((&v26 as &char + 16) as &i64) + *((&v26 as &char + 8) as &i64)), v34);
    v41 = a1;
    uu_ptx::trim_idx(v41, a2, None, v11);
    v42 = uu_ptx::trim_idx(v41, a2, uu_ptx::trim_broken_word_left(v41, a2, core::cmp::max_by(v34 - core::cmp::max_by(v12 - (v14 + v17))), v34), v34);
    v43 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v42, v34, v41, a2, "src/uu/ptx/src/ptx.rs");
    v27 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v43, v43 + v34 * 4);
    v8 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v27 as &char + 8) as &i64), *((&v27 as &char + 16) as &i64) + *((&v27 as &char + 8) as &i64)), v34);
    if v1 != a5 && (v23 == v0 || (v13 = &v18, v0 != a5)) {
        alloc::vec::Vec<T,A>::append_elements(v13, core::slice::iter::Iter<T>::make_slice(*((v30 + 32) as &i64), v22 + *((v30 + 32) as &i64)), v34);
    }
    if v11 {
        if v42 == v34 {
            v28 = format!("{:?}{:?}", v44 + 24, &v5);
            v7 = *((&v28 as &char + 16) as &i64);
            v5 = v28;
        } else if v42 {
            v29 = format!("{:?}{:?}", v21, &v8);
            v10 = *((&v29 as &char + 16) as &i64);
            v8 = v29;
        }
    }
    *((a0 + 16) as &i64) = v20;
    *(a0 as &i128) = v18;
    *((a0 + 40) as &i64) = v7;
    *((a0 + 24) as &i128) = v5;
    *((a0 + 48) as &i128) = v15;
    *((a0 + 64) as &i64) = v17;
    *((a0 + 72) as &i128) = v8;
    *((a0 + 88) as &i64) = v10;
    v0 = 0;
    v0 = 0;
}
