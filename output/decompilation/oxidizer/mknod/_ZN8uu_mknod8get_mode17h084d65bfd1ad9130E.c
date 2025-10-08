fn uu_mknod::get_mode(a1: i64) -> Result<struct24, struct12> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x68]
    let v1: struct24;  // [bp-0x68]
    let v2: u64;  // [bp-0x50]
    let v3: u32;  // [bp-0x48]
    let v4: u64;  // [bp-0x44]
    let v5: u32;  // [bp-0x3c]
    let v6: u64;  // [bp-0x38]
    let v7: u32;  // [bp-0x30]
    let v8: struct24;  // [bp-0x28]

    if !a1 {
        *((a0 + 8) as &i32) = 438;
    }
    v0 = uucore::features::mode::parse_mode(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v0.field_0 != 0x8000000000000000 {
        v8 = v1;
        uu_mknod::get_mode::{{closure}}(&v2, &v8);
        v7 = v5;
        v6 = v4;
        return struct32 {
            field_0: v2
            field_8: v3
            field_12: <UNKNOWN>
            field_20: <UNKNOWN>
        };
    } else if v0.field_8 > 511 {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, "mode must specify only file permission bits");
        return;
    } else {
        return struct16 {
            field_0: 0x8000000000000000
            field_8: v0.field_8
        };
    }
}
