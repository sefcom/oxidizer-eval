fn uu_stat::quote_file_name(a0: u64, a1: u64, a2: u32, a3: u8) -> int {
    let v0: alloc::string::String;  // [bp-0x90], Other Possible Types: struct_1 *
    let v1: u64;  // [bp-0x88]
    let v2: u64;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: &mut [u8];  // [bp-0x70]
    let v5: i64;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: void*;  // [bp-0x58]
    let v8: struct16;  // [bp-0x48]
    let v9: u8;  // [bp-0x28]

    v8 = struct16 {
        field_0: a1
        field_8: a2
    };
    if a3 < 2 {
        alloc::str::<impl str>::replace(&v9, a1, a2);
        v0 = format!("'{}'", &v9);
        return struct24 {
            field_0: *(&v0.vec.buf.inner.cap as &i128)
            field_16: v2
        };
    }
    if a3 == 2 {
        v0 = &v8;
        v1 = <&T as core::fmt::Display>::fmt;
        v3 = "\"";
        v4 = 2;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        core::option::Option<T>::map_or_else(a0, &v3);
    } else {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, a1, a2);
    }
    return;
}
