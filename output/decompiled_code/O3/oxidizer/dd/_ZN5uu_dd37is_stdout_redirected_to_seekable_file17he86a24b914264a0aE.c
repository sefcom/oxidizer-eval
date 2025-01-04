fn uu_dd::is_stdout_redirected_to_seekable_file() -> u64 {
    let v0: i32;  // [bp-0x4c]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i64;  // [sp-0x38], Other Possible Types: Result<struct4, struct8>
    let v4: struct24;  // [sp-0x28], Other Possible Types: i192
    let v6: i32;  // ebx
    let v7: i64;  // rdx

    v4 = uu_dd::stdout_canonicalized();
    v3 = std::fs::File::open(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    if v3 {
        return 0;
    }
    v0 = *((&v3 as &char + 4) as &i32);
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 2);
    v2 = v7;
    if v1 {
        goto LABEL_4d8eb0;
    } else {
        v1 = <std::fs::File as std::io::Seek>::seek(&v0, 1);
        v2 = v7;
        if !v1 {
            v1 = std::io::Seek::rewind(&v0);
            v6 = v1 | -0x100 | !v1;
        } else {
LABEL_4d8eb0:
            v6 = 0;
        }
    }
    return v6;
}
