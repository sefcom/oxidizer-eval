fn uu_wc::utf8::Incomplete::try_complete_offsets(a0: &struct_0, a1: u64, a2: u64) -> u64 {
    let v0: u128;  // [sp-0x48], Other Possible Types: Result<struct16, struct10>
    let v1: u8;  // [bp-0x38]
    let v2: u8;  // [bp-0x37]
    let v4: u64;  // r15
    let v5: u64;  // r13
    let v6: u64;  // r14
    let v7: u64;  // rdx
    let v9: u64;  // r14
    let v10: u64;  // r14
    let v11: u64;  // r12

    v4 = a0->field_4;
    if v4 > 4 {
        core::slice::index::slice_start_index_len_fail(); /* do not return */
    }
    v5 = 4 - v4;
    v6 = core::cmp::min_by(v5, a2);
    core::slice::<impl [T]>::copy_from_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(v6, &a0->padding_0[v4] as &struct_0, v5, "src/uu/wc/src/utf8/mod.rs"), v7, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6, a1, a2, "src/uu/wc/src/utf8/mod.rs"), v7, "src/uu/wc/src/utf8/mod.rs");
    v0 = core::str::converts::from_utf8(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v6 + v4, a0, 4, "src/uu/wc/src/utf8/mod.rs"), v7);
    if !v0 as i64 {
        a0->field_4 = v11;
        return v6;
    }
    if v9 {
        v10 = *((&v0 as &char + 8) as &i64);
        v6 = v10 - v4;
        if v10 < v4 {
            core::option::unwrap_failed(); /* do not return */
        }
        v11 = v10 & 4294967295;
    } else if v1 {
        v11 = v2;
        if (v11 & 255) < (v4 & 255) {
            core::option::unwrap_failed(); /* do not return */
        }
        v6 = (v11 & 4294967295) - v4;
    }
}
