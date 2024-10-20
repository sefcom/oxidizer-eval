fn uu_tail::paths::Input::resolve(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x68], Other Possible Types: struct24, Enum
    let v1: i64;  // [sp-0x50]
    let v2: i192;  // [sp-0x48], Other Possible Types: struct24
    let v5: i64;  // r12
    let v6: i64;  // r13
    let v7: i64;  // r8
    let v8: i64;  // r9
    let v9: i64;  // r14
    let v10: i64;  // r12
    let v11: i64;  // r15
    let v12: i64;  // rbp

    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned(&g_423366, 10);
        v5 = *((a1 + 32) as &i64);
        v6 = *((a1 + 40) as &i64);
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v5, v6, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), v7, v8) as i8 {
            v0 = std::sys::pal::unix::fs::canonicalize(v5, v6);
            if v0 != 0x8000000000000000 {
                *((a0 + 16) as &i64) = *((&v0 as &char + 16) as &i64);
                *(a0 as &i192) = v0;
                return a0;
            }
            *(a0 as &i64) = 0x8000000000000000;
            return a0;
        }
    }
    v2 = std::sys::os_str::bytes::Slice::to_owned(&g_423366, 10);
    v9 = *((&v2 as &char + 8) as &i64);
    v0 = std::sys::pal::unix::fs::canonicalize(v9, *((&v2 as &char + 16) as &i64));
    v10 = v0;
    v11 = *((&v0 as &char + 8) as &i64);
    if v10 == 0x8000000000000000 {
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v1 = v9;
        v12 = *((&v0 as &char + 16) as &i64);
        v0 = std::sys::os_str::bytes::Slice::to_owned(&g_423370, 9);
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v11, v12, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), v7, v8) as i8 {
            *(a0 as &i64) = v10;
            *((a0 + 8) as &i64) = v11;
            *((a0 + 16) as &i64) = v12;
        } else {
            *(a0 as &i64) = 0x8000000000000000;
        }
    }
    if v2 {
        return a0;
    }
    return a0;
}
