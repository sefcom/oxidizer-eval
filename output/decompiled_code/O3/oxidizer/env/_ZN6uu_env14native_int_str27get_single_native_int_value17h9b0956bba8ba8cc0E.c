fn uu_env::native_int_str::get_single_native_int_value(a0: &u32) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v1: struct4;  // [bp-0x4]
    let v3: u64;  // rax
    let v4: u64;  // rax

    v0 = v3;
    v1 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    v4 = core::char::methods::encode_utf8_raw(*(a0), &v1);
    return v4 | -0x100 | v4 == 1;
}
