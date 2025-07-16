fn uu_env::native_int_str::get_single_native_int_value(a0: i64) -> char {
    let v0: u64;  // [bp-0x8]
    let v1: u32;  // [bp-0x4]
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v5: &mut [u8];  // rax:rdx

    v0 = v3;
    v1 = 0;
    v5 = core::char::methods::encode_utf8_raw(*(a0 as &i32), &v1, v4);
    return v5.data_ptr == 1;
}
