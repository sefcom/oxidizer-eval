fn uu_ls::parse_width(a0: &Result<struct56, struct2>, a1: u32) -> u64 {
    let v0: i192;  // [sp-0x58], Other Possible Types: Option<struct24>, Result<struct32, struct2>
    let v3: Option<struct24>;  // [sp-0x20]
    let v8: i64;  // rax

    if !a1 {
        v3 = std::env::var_os("COLUMNS");
        match v3 {
            Some(_) => {
                v0 = v3;
                uu_ls::parse_width::{{closure}}(&v0);
            },
            None => {
                v8 = terminal_size::unix::terminal_size();
            },
        }
    } else {
        v0 = uu_ls::parse_width::{{closure}}(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
        if v0 != 7 {
            return Ok(struct56 {
                field_0: v5 as i8
                field_1: v6
                field_2: v7
                field_4: *((&v0 as &char + 4) as &i128)
                field_20: v0
                field_36: v1
                field_52: v2
            });
        }
    }
    return Err(struct2 {
        field_1: <UNKNOWN>
    });
}
