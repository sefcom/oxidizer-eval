fn uu_dd::is_stdout_redirected_to_seekable_file() -> u64 {
    let v0: i32;  // [sp-0x54]
    let v1: i192;  // [sp-0x50], Other Possible Types: struct24
    let v2: i64;  // [bp-0x48]
    let v3: i16;  // [sp-0x44]
    let v4: i64;  // [sp-0x38], Other Possible Types: Enum
    let v6: i64;  // r14
    let v7: i64;  // r15
    let v8: i32;  // ebp
    let v9: i64;  // rdx
    let v11: i64;  // rax

    v4 = std::sys::pal::unix::fs::canonicalize(&g_41f63d, 11);
    if v4 != 0x8000000000000000 {
        v6 = *((&v4 as &char + 8) as &i64);
        v7 = *((&v4 as &char + 16) as &i64);
    } else {
        v1 = std::sys::os_str::bytes::Slice::to_owned(&g_41f63d, 11);
        v6 = *((&v1 as &char + 8) as &i64);
        v7 = *((&v1 as &char + 16) as &i64);
    }
    v1 = 0x1b600000000;
    v2 = 0;
    v3 = 0;
    v2 = 1;
    v4 = std::fs::OpenOptions::_open(&v1, v6, v7);
    if v4 {
        return 0;
    }
    v0 = *((&v4 as &char + 4) as &i32);
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 2);
    v2 = v9;
    if v1 {
        goto LABEL_49cc3e;
    } else {
        v1 = <std::fs::File as std::io::Seek>::seek(&v0, 1);
        v2 = v9;
        if !v1 {
            v1 = v11;
            v8 = vvar_55{reg 56} | -0x100 | !v1;
        } else {
LABEL_49cc3e:
            v8 = 0;
        }
    }
    return v8;
}
