fn just::positional::Positional::override_from_value(a0: &struct48, a1: &str) -> u64 {
    let v0: Option<struct32>;  // [bp-0x98], Other Possible Types: u128
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: u128;  // [bp-0x80]
    let v4: alloc::string::String;  // [bp-0x78]
    let v5: struct24;  // [bp-0x70]
    let v6: struct24;  // [bp-0x60]
    let v7: u64;  // [bp-0x50]
    let v8: struct24;  // [bp-0x48]
    let v10: u64;  // rdx
    let v11: struct32;  // r14
    let v13: core::option::Option<&str>;  // rax
    let v14: struct72;  // rax

    if !(core::str::<impl str>::find(a1, v10) & 1) {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = core::str::<impl str>::split_at_checked(a1, v10);
    v11 = v0 as i64;
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, v2, *((&v0 as &char + 24) as &i64)) as u64;
    if just::lexer::Lexer::is_identifier(v11, v1) {
        v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11, v1);
        v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v13, v10);
        v5 = v8.field_16;
        v3 = *(&v8.field_0 as &i128);
        v2 = v7;
        v0 = *(&v6.field_0 as &i128);
        v14 = v3 as i64;
        return struct48 {
            field_0: *(&v6.field_0 as &i128)
            field_16: v2
            field_24: v14
            field_32: v4
            field_40: v5
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
