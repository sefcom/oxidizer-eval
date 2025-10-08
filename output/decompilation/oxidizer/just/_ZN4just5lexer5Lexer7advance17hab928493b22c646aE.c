fn just::lexer::Lexer::advance(a0: i64, a1: i64) -> long long {
    let v0: struct192;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: struct192;  // rax
    let v5: u64;  // rcx
    let v6: u64;  // r14
    let v7: u64;  // rbx
    let v9: u32;  // edx
    let v10: core::option::Option<u32>;  // rax:rax

    v4 = *((a1 + 192) as &i32);
    if v4 as u32 == 0x110000 {
        return just::lexer::Lexer::internal_error(a0, a1, "Lexer advanced past end of text");
    }
    v2 = v6;
    v1 = v7;
    v0 = v4;
    *((a1 + 160) as &u64) = *((a1 + 160) as &i64) + v5;
    *((a1 + 144) as &u64) = *((a1 + 144) as &i64) + v5;
    if v4 as u32 == 10 {
        *((a1 + 144) as &i64) = 0;
        *((a1 + 152) as &i64) = *((a1 + 152) as &i64) + 1;
    }
    v10 = core::str::validations::next_code_point(a1 + 96) as u128;
    *((a1 + 192) as &i32) = ((v10 as i8 & 1) ? v9 : 0x110000);
    *((a0 + 72) as &i8) = 37;
    return ((v10 as i8 & 1) ? v9 : 0x110000);
}
