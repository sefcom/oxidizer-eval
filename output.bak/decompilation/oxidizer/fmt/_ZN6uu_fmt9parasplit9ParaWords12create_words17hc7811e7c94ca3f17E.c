fn uu_fmt::parasplit::ParaWords::create_words(a0: &struct32) -> u64 {
    let v0: i64;  // [sp-0x178]
    let v1: struct40;  // [sp-0x170]
    let v2: i8;  // [sp-0x120]
    let v3: i8;  // [sp-0xf0]
    let v4: struct16;  // [sp-0xe8]
    let v5: i8;  // [sp-0x9f]
    let v6: i8;  // [sp-0x5f]
    let v7: i328;  // [sp-0x58], Other Possible Types: struct41
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rbx
    let v12: i64;  // rcx
    let v13: i64;  // r14
    let v14: i64;  // r12
    let v15: i64;  // r15
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v19: i64;  // rdx
    let v20: i64;  // rbx

    v9 = *((a0 + 32) as &i64);
    if *((v9 + 104) as &i8) {
        v4 = struct16 {
            field_0: *((v9 + 8) as &i64)
            field_8: v4 + *((v9 + 16) as &i64) * 24
        };
        v5 = 2;
        v6 = 2;
        v10 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(a0, &v4);
        return v10;
    }
    v11 = *((a0 + 24) as &i64);
    if *((v11 + 72) as &i8) || *((v11 + 73) as &i8) {
        if *((v9 + 16) as &i64) {
            v12 = *((v9 + 8) as &i64);
            v13 = *((v9 + 80) as &i64);
            v14 = *((v12 + 8) as &i64);
            v15 = *((v12 + 16) as &i64);
            v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v14, v15);
            if !v16 {
                core::str::slice_error_fail(v14, v15, v13, v15, "src/uu/fmt/src/parasplit.rs"); /* do not return */
            }
        }
    } else {
        if *((v9 + 16) as &i64) {
            v17 = *((v9 + 8) as &i64);
            v13 = *((v9 + 96) as &i64);
            v14 = *((v17 + 8) as &i64);
            v15 = *((v17 + 16) as &i64);
            v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v13, v14, v15);
            if !v16 {
                core::str::slice_error_fail(v14, v15, v13, v15, "src/uu/fmt/src/parasplit.rs"); /* do not return */
            }
        }
    }
    v7 = uu_fmt::parasplit::WordSplit::new(v11, v16, v19);
    v20 = a0;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(v20, &v7);
    v10 = *((v20 + 32) as &i64);
    if *((v10 + 16) as &i64) > 1 {
        v0 = *((v10 + 96) as &i64);
        v1 = struct40 {
            field_0: *((v10 + 8) as &i64)
            field_8: v1 + v21 * 24
            field_16: 1
            field_24: *((v20 + 24) as &i64)
            field_32: &v0
        };
        v2 = 2;
        v3 = 2;
        v10 = <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(v20, &v1);
        return v10;
    }
    return v10;
}
