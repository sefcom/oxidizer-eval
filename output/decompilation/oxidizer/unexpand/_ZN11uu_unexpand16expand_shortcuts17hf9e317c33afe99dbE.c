fn uu_unexpand::expand_shortcuts(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xd8]
    let v1: u32;  // [bp-0xd4]
    let v2: struct16;  // [bp-0xd0], Other Possible Types: struct24
    let v3: struct16;  // [bp-0xd0]
    let v4: u64;  // [bp-0xd0]
    let v5: alloc::string::String;  // [bp-0xb8], Other Possible Types: struct24, struct64
    let v6: struct16;  // [bp-0xb8], Other Possible Types: struct64
    let v7: u32;  // [bp-0xb8]
    let v8: struct64;  // [bp-0xb8], Other Possible Types: u64
    let v9: u64;  // [bp-0xa8]
    let v10: iNone;  // [bp-0x98]
    let v11: u64;  // [bp-0x88]
    let v12: struct16;  // [bp-0x78]
    let v13: u16;  // [bp-0x38]
    let v15: u64;  // r12
    let v16: struct32;  // 4096
    let v17: u64;  // rdx
    let v18: u64;  // rdx
    let v19: u64;  // r12
    let v20: i64;  // r14
    let v21: u64;  // r15
    let v22: u64;  // rbx
    let v24: u64;  // rcx
    let v25: core::option::Option<&str>;  // rax
    let v26: u64;  // rax
    let v27: u64;  // rdx
    let v29: core::fmt::rt::Argument;  // r12
    let v30: &mut [u8];  // rax:rdx

    v2 = struct24 {
        field_0: alloc::raw_vec::RawVecInner<A>::with_capacity_in(a2, 8, 24, "src/uu/unexpand/src/unexpand.rs")
        padding_8: <UNKNOWN>
        field_16: 0
    };
    if a2 {
        v15 = a2 * 24;
        v1 = 0;
        v0 = 0;
        v16 = a1;
        v18 = v17;
        do {
            v19 = v15;
            v20 = v16;
            v21 = *((v20 + 8) as &i64);
            v22 = *((v20 + 16) as &i64);
            v7 = 0;
            v30 = core::char::methods::encode_utf8_raw(45, &v7, v27);
            v5 = v8;
            if core::slice::<impl [T]>::starts_with(v21, v22, v30.data_ptr, v24) {
                v25 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v21, v22, a2) as u64;
                v6 = struct16 {
                    field_0: v25
                    field_8: v25 + v17
                };
                v5 = v8;
                if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v6), a1) {
                    v12 = struct16 {
                        field_0: 0
                        field_8: v17
                    };
                    v13 = 1;
                    v0 = <char as core::str::pattern::Pattern>::into_searcher(v5.field_0, v17, v24) & -0x100 | 1;
                    core::iter::traits::iterator::Iterator::fold(&v12, &v2);
                }
            }
            v6 = v5;
            v5 = <alloc::string::String as core::clone::Clone>::clone(v20);
            v3 = alloc::vec::Vec<T,A>::push(&v5, "src/uu/unexpand/src/unexpand.rs");
            v26 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "--all");
            if !v26 {
                v26 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, "-a");
            }
            v29 = v19 - 24;
            v16 = v20 + 24;
            v15 = v29;
        } while (v19 != 24);
        if !((~(v0) | v1) & 1) {
            v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("--first-only");
            v11 = v9;
            v10 = *(&v5.field_0 as &i128);
            v2 = alloc::vec::Vec<T,A>::push(&v10, "src/uu/unexpand/src/unexpand.rs");
        }
    }
    *((a0 + 16) as &i64) = 0;
    *(a0 as &u64) = v4;
    *((a0 + 8) as &u64) = v17;
    return;
}
