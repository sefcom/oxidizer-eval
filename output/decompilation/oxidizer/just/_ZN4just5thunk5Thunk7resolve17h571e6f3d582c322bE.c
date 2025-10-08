fn just::thunk::Thunk::resolve(a0: u64, a1: void*, a2: u64) -> int {
    let v0: struct24;  // [bp-0xf8], Other Possible Types: struct88
    let v1: struct80;  // [bp-0x78]
    let v2: iNone;  // [bp-0x68]
    let v3: iNone;  // [bp-0x58]
    let v4: struct832;  // [bp-0x48]
    let v6: u32;  // edx
    let v7: u64;  // rax
    let v8: u64;  // rdx

    v7 = just::function::get(just::token::Token::lexeme(a1), v6);
    v0 = struct24 {
        field_0: 9223372036854775874
        field_8: just::token::Token::lexeme(a1)
        field_16: v8
    };
    v1 = just::token::Token::error(a1, &v0);
    v0 = struct88 {
        field_0: 7
        field_8: *(&v1.field_0 as &i128)
        field_24: v2
        field_40: v3
        field_56: v4
        field_72: *((&v1.field_56 as &char + 8) as &i128)
    };
    core::option::Option<T>::map_or(a0, v7, v8, &v0, a2, a1);
    return;
}
