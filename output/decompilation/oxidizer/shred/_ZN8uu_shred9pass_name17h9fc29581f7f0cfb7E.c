fn uu_shred::pass_name(a0: u64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x78]
    let v1: struct48;  // [bp-0x70], Other Possible Types: struct_2 *
    let v2: u64;  // [bp-0x68]
    let v3: i64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: i64;  // [bp-0x50]
    let v6: u64;  // [bp-0x48]
    let v7: u64;  // [bp-0x40]
    let v8: u64;  // [bp-0x38]
    let v9: struct48;  // [bp-0x30], Other Possible Types: struct_1 *
    let v10: u64;  // [bp-0x28]

    if *(a1 as &i8) == 2 {
        return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "random");
    } else if (*(a1 as &i8) & 1) {
        v7 = v0;
        v8 = a1 + 2;
        v0 = a1 + 3;
        v1 = &v7;
        v2 = <&T as core::fmt::LowerHex>::fmt;
        v3 = &v8;
        v4 = <&T as core::fmt::LowerHex>::fmt;
        v5 = &v0;
        v6 = <&T as core::fmt::LowerHex>::fmt;
        v9 = struct48 {
            field_0: "\x01\x00\x00"
            field_16: &v1
            field_24: 3
            field_32: "\x02\x00\x00"
        };
        return core::option::Option<T>::map_or_else(a0, &v9);
    } else {
        v0 = v7;
        v9 = &v0;
        v10 = <&T as core::fmt::LowerHex>::fmt;
        v1 = struct48 {
            field_0: "\x01\x00\x00"
            field_16: &v9
            field_24: 1
            field_32: "\x02\x00\x00"
        };
        return core::option::Option<T>::map_or_else(a0, &v1);
    }
}
