fn uu_dircolors::guess_syntax(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x38], Other Possible Types: i192
    let v1: i8;  // [bp-0x20]
    let v3: i64;  // rbp
    let v4: i64;  // rsi
    let v5: i64;  // rdx
    let v6: i64;  // rcx
    let v7: i64;  // rbx

    v0 = std::env::var("SHELL");
    v3 = vvar_21{reg 56} | -0x100 | 3;
    match v0 {
        Ok(_) => {
            v4 = v1;
            if v4 {
                v7 = std::path::Path::file_name(*((&v0 as &char + 16) as &i64), v4, v5, v6);
                if !v7 {
                    v3 = 0;
                } else {
                    v3 = v3 | -0x100 | 1;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v5, "csh") as i8 {
                        v3 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v5, "tcsh") as i32 as u32 as u64;
                    }
                }
            }
        },
        Err(_) => {
            return v3 & 4294967295;
        },
    }
}
