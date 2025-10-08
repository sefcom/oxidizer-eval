fn just::alias::Alias::is_private(a0: &u64) -> char {
    let v0: u32;  // [bp-0x1c]
    let v2: u64;  // rax
    let v3: u64;  // rdx
    let v5: &mut [u8];  // rax:rdx

    v2 = just::token::Token::lexeme(a0 + 4);
    v0 = 0;
    v5 = core::char::methods::encode_utf8_raw(95, &v0, v3);
    if core::slice::<impl [T]>::starts_with(v2, v3, v5.data_ptr, v5.length) {
        return 1;
    }
    just::attribute_set::AttributeSet::contains(a0, 15);
    return 1;
}
