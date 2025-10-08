fn uu_env::native_int_str::get_single_native_int_value(a0: i64) -> char {
    let v0: u64;  // [bp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v4: &mut [u8];  // rax:rdx

    v0 = v2;
    v4 = core::char::methods::encode_utf8_raw(*(a0 as &i32), &v0, v3);
    return v4.length == 1;
}
