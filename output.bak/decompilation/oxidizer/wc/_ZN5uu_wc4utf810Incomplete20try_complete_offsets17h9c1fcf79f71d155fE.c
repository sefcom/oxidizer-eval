fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: &struct1, a1: u32, a2: u32) -> u64 {
    let v0: Result<struct16, struct10>;  // [sp-0x48], Other Possible Types: i136
    let v1: i8;  // [bp-0x37]
    let v3: i64;  // r15
    let v4: i64;  // r13
    let v5: i64;  // r14
    let v6: i64;  // rdx
    let v8: i64;  // r14
    let v9: i64;  // r14
    let v10: i64;  // r12

    v3 = *((a0 + 4) as &i8);
    if v3 > 4 {
        core::slice::index::slice_start_index_len_fail(v3, 4, "src/uu/wc/src/utf8/mod.rs"); /* do not return */
    }
    v4 = 4 - v3;
    v5 = core::cmp::min_by(v4, a2);
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v5, a0 + v3, v4, "src/uu/wc/src/utf8/mod.rs"), v6, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5, a1, a2, "src/uu/wc/src/utf8/mod.rs"), v6, "src/uu/wc/src/utf8/mod.rs");
    v0 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v5 + v3, a0, 4, "src/uu/wc/src/utf8/mod.rs"), v6);
    if !v0 {
        *((a0 + 4) as &i8) = v10;
        return v5;
    }
    if v8 {
        v9 = *((&v0 as &char + 8) as &i64);
        v5 = v9 - v3;
        if v9 < v3 {
            core::option::unwrap_failed("src/uu/wc/src/utf8/mod.rs"); /* do not return */
        }
        v10 = v9 & 4294967295;
    } else if (*((&v0 as &char + 16) as &i8) & 1) {
        v10 = v1;
        if (v10 & 255) < (v3 & 255) {
            core::option::unwrap_failed("src/uu/wc/src/utf8/mod.rs"); /* do not return */
        }
        v5 = (v10 & 4294967295) - v3;
    }
}
