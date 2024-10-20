fn uu_env::apply_removal_of_all_env_vars(a0: void*) -> u64 {
    let v0: i64;  // [sp-0xe8]
    let v1: i8;  // [bp-0xe0]
    let v2: i8;  // [bp-0xd8]
    let v3: i8;  // [bp-0xd0]
    let v4: i8;  // [bp-0xc8]
    let v5: i64;  // [sp-0xc0]
    let v6: i64;  // [sp-0xb8]
    let v7: i64;  // [sp-0xb0]
    let v8: i64;  // [sp-0xa8]
    let v9: i64;  // [sp-0xa0]
    let v10: i64;  // [sp-0x98]
    let v11: i384;  // [sp-0x90], Other Possible Types: Enum
    let v12: struct40;  // [sp-0x60], Other Possible Types: i64
    let v13: i64;  // [sp-0x58]
    let v14: i64;  // [sp-0x50]
    let v15: i64;  // [sp-0x48]
    let v16: i64;  // [sp-0x40]
    let v18: i64;  // rax
    let v19: i64;  // r14
    let v20: i64;  // rcx
    let v22: i64;  // r14
    let v23: i64;  // rbx
    let v25: i64;  // rax

    if !*((a0 + 152) as &i8) {
        return v25;
    }
    std::env::vars_os(&v1);
    loop {
        v11 = <std::env::VarsOs as core::iter::traits::iterator::Iterator>::next(&v1);
        if v11 == 0x8000000000000000 {
            break;
        }
        v5 = *((&v11 as &char + 8) as &i64);
        v6 = *((&v11 as &char + 16) as &i64);
        v18 = std::sys::pal::unix::os::unsetenv(v5, v6);
        if v18 {
            v0 = v18;
            v7 = &v5;
            v8 = <&T as core::fmt::Debug>::fmt;
            v9 = &v0;
            v10 = <std::io::error::Error as core::fmt::Display>::fmt;
            v12 = "failed to remove environment variable `";
            v13 = 2;
            v16 = 0;
            v14 = &v7;
            v15 = 2;
            v12 = core::panicking::panic_fmt();
        }
    }
    v19 = v2;
    v20 = v4;
    if v20 != v19 {
        v22 = v19 + 32;
        do {
            v23 = (v20 - v19) / 48;
            v22 += 48;
        } while (v23 != 1);
    }
    v25 = v3;
    return v25;
}
