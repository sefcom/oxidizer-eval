fn just::string_kind::StringKind::from_string_or_backtick(a0: u64, a1: void*) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: struct24;  // [bp-0x70]
    let v3: u64;  // rdx
    let v4: &mut [u8];  // rax

    v4 = just::string_kind::StringKind::from_token_start(just::token::Token::lexeme(a1), v3);
    if v4 as u8 != 2 {
        return struct24 {
            field_0: v4 as u8 & 1
            field_1: v3 as u8
            padding_2: <UNKNOWN>
            field_72: <UNKNOWN>
        };
    }
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("StringKind::from_token: Expected String or Backtick");
    v0 = 9223372036854775848;
    return just::token::Token::error(a0, a1, &v0);
}
