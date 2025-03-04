fn uu_seq::numberparse::is_minus_zero_int(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: u128;  // [bp-0x48]
    let v1: u128;  // [sp-0x38]
    let v2: void*;  // [sp-0x28]
    let v4: u32;  // ebx

    v0 = 0;
    if core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(45, &v0), 1) as i8 {
        v1 = 0x10000000000000000;
        v0 = 0x80000000000000000;
        v2 = 0;
        return v4;
    }
    return 0;
}
