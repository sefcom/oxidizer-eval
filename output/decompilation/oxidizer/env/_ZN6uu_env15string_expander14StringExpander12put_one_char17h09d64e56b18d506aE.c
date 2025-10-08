fn uu_env::string_expander::StringExpander::put_one_char(a1: i32) -> : struct8 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0x2c]
    let v1: struct24;  // [bp-0x28]
    let v3: u32;  // rdx
    let v5: &mut [u8];  // rax:rdx

    v0 = 0;
    v5 = core::char::methods::encode_utf8_raw(a1, &v0, v3);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v5.data_ptr, v3);
    uu_env::string_expander::StringExpander::put_string(a0, &v1);
    return;
}
