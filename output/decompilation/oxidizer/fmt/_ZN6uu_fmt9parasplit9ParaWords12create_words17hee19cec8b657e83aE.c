fn uu_fmt::parasplit::ParaWords::create_words(a0: &struct32) -> u64 {
    let v0: core::option::Option<(usize, char)>;  // [bp-0x178]
    let v1: struct40;  // [bp-0x170]
    let v2: core::fmt::Arguments;  // [bp-0x120]
    let v3: core::option::Option<&str>;  // [bp-0xf0]
    let v4: struct16;  // [bp-0xe8]
    let v5: u8;  // [bp-0x9f]
    let v6: u8;  // [bp-0x5f]
    let v7: struct41;  // [bp-0x58]
    let v9: i64;  // rax
    let v10: i64;  // r14
    let v11: core::option::Option<(usize, char)>;  // r15
    let v12: u64;  // r13
    let v13: u64;  // r12
    let v14: core::option::Option<&str>;  // rax
    let v15: u64;  // r15
    let v16: u64;  // r13
    let v17: u64;  // r12
    let v18: u64;  // rdx
    let v19: i64;  // rax

    v9 = *((a0 + 32) as &i64);
    if *((v9 + 104) as &i8) {
        v4 = struct16 {
            field_0: *((v9 + 8) as &i64)
            field_8: *((v9 + 8) as &i64) + *((v9 + 16) as &i64) * 24
        };
        v5 = 2;
        v6 = 2;
        return alloc::vec::Vec<T,A>::extend_desugared(a0, &v4);
    }
    v10 = *((a0 + 24) as &i64);
    if *((v10 + 72) as &i8) || *((v10 + 73) as &i8) == 1 {
        v15 = *((v9 + 80) as &i64);
        v16 = *((*((v9 + 8) as &i64) + 8) as &i64);
        v17 = *((*((v9 + 8) as &i64) + 16) as &i64);
        v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((v9 + 80) as &i64), *((*((v9 + 8) as &i64) + 8) as &i64), *((*((v9 + 8) as &i64) + 16) as &i64)) as u64;
    } else {
        v11 = *((v9 + 96) as &i64);
        v12 = *((*((v9 + 8) as &i64) + 8) as &i64);
        v13 = *((*((v9 + 8) as &i64) + 16) as &i64);
        v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((v9 + 96) as &i64), *((*((v9 + 8) as &i64) + 8) as &i64), *((*((v9 + 8) as &i64) + 16) as &i64)) as u64;
    }
    v7 = uu_fmt::parasplit::WordSplit::new(v10, v14, v18);
    alloc::vec::Vec<T,A>::extend_desugared(a0, &v7);
    v19 = *((a0 + 32) as &i64);
    if *((v19 + 16) as &i64) <= 1 {
        return v19;
    }
    v0 = *((v19 + 96) as &i64);
    v1 = struct40 {
        field_0: *((v19 + 8) as &i64)
        field_8: *((v19 + 8) as &i64) + *((v19 + 16) as &i64) * 24
        field_16: 1
        field_24: *((a0 + 24) as &i64)
        field_32: &v0
    };
    v2 = 2;
    v3 = 2;
    return alloc::vec::Vec<T,A>::extend_desugared(a0, &v1);
}
