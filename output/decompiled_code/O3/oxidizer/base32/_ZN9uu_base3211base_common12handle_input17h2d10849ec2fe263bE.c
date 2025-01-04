fn uu_base32::base_common::handle_input(a0: &struct16, a1: u32, a2: &struct48) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: u64;  // [sp-0x30]
    let v3: u64;  // r15
    let v4: u64;  // rsi
    let v5: u64;  // rdx

    v3 = uu_base32::base_common::get_supports_fast_decode_and_encode(a1);
    v1 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v1, v4, v5);
    return (!a2->field_28 ? uu_base32::base_common::fast_encode::fast_encode(a0, &v0, v3, v5, a2->field_0, a2->field_8) : uu_base32::base_common::fast_decode::fast_decode(a0, &v0, v3, v5, a2->field_29));
}
