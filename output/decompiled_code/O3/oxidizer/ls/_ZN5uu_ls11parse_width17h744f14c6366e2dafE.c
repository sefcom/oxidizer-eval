fn uu_ls::parse_width(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x58], Other Possible Types: Result<struct32, struct2>
    let v3: i192;  // [sp-0x20], Other Possible Types: Option<struct24>
    let v5: i64;  // rax
    let v6: i8;  // cl
    let v7: i16;  // dx
    let v8: i64;  // rdi
    let v9: i64;  // rsi
    let v10: i64;  // rdx
    let v11: i64;  // rcx
    let v12: i64;  // r8
    let v13: i64;  // r9
    let v14: i64;  // rax

    if !a1 {
        v3 = std::env::var_os("COLUMNS");
        match v3 {
            Some(_) => {
                v0 = v3;
                v5 = uu_ls::parse_width::{{closure}}(&v0);
            },
            None => {
                v14 = terminal_size::unix::terminal_size(v8, v9, v10, v11, v12, v13);
                if !v14 as i16 {
                    v5 = 80;
                } else {
                    v5 = (v14 as i32 >> 16) as u32 as u64;
                }
            },
        }
    } else {
        v0 = uu_ls::parse_width::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        v5 = v0;
        if v5 != 7 {
            v6 = *((&v0 as &char + 1) as &i8);
            v7 = *((&v0 as &char + 2) as &i16);
            return struct56 {
                field_0: v5 as i8
                field_1: v6
                field_2: v7
                field_4: *((&v0 as &char + 4) as &i128)
                field_20: v0
                field_36: v1
                field_52: v2
            };
        }
        v5 = *((&v0 as &char + 2) as &i16);
    }
    return struct3 {
        field_0: 7
        field_2: <UNKNOWN>
    };
}
