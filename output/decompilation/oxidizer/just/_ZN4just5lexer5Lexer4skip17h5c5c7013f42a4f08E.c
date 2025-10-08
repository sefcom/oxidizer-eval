fn just::lexer::Lexer::skip(a0: i64, a1: i64) -> double {
    let v0: struct80;  // [bp-0x60], Other Possible Types: u640
    let v1: struct16;  // [bp-0x50]
    let v2: iNone;  // [bp-0x40]
    let v3: struct32;  // [bp-0x30]
    let v5: u64;  // xmm0lq

    v0 = just::lexer::Lexer::advance(a1);
    if &v0 as u8 == "%" {
        v0 = just::lexer::Lexer::advance(a1);
        if &v0 as u8 == "%" {
            v0 = just::lexer::Lexer::advance(a1);
            if &v0 as u8 == "%" {
                v0 = just::lexer::Lexer::advance(a1);
                if &v0 as u8 == "%" {
                    *((a0 + 72) as &i8) = 37;
                    return v5;
                }
            }
        }
    }
    return struct80 {
        field_0: v0 as i128
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: *((&v0 as &char + 64) as &i128)
    };
}
