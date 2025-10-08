fn just::line::Line::is_continuation(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x18]
    let v1: struct24;  // [bp-0x14]
    let v2: u64;  // [bp-0x10]
    let v3: core::option::Option<&str>;  // [bp-0x8]
    let v5: u64;  // rsi
    let v6: i64;  // r14
    let v7: u64;  // rbx
    let v8: u64;  // rax
    let v9: &mut [u8];  // rax
    let v10: u64;  // rdx
    let v11: &mut [u8];  // rax:rdx

    if !a1 {
        return 0;
    }
    v5 = a1 * 128;
    if *((a0 + v5 - 128) as &i32) != 18 {
        return 0;
    }
    v3 = v6;
    v2 = v7;
    v0 = v8;
    v9 = just::token::Token::lexeme(a0 + v5 - 120);
    v1 = 0;
    v11 = core::char::methods::encode_utf8_raw(92, &v1, v10);
    return core::slice::<impl [T]>::ends_with(v9, v10, v11.data_ptr, v11.length);
}
