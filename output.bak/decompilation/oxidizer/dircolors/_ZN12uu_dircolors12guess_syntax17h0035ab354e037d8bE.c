fn uu_dircolors::guess_syntax() -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x30], Other Possible Types: i200
    let v2: i64;  // rbx
    let v3: i32;  // ebx
    let v4: i64;  // rsi
    let v5: i64;  // rbx
    let v6: i64;  // rdx

    v0 = std::env::var("SHELL");
    v3 = v2 | -0x100 | 3;
    match v0 {
        Err(_) => {
            return v3 as u32 as u64;
        },
        Ok(_) => {
            v4 = v0;
            if !v4 {
                return v3 as u32 as u64;
            }
            v5 = std::path::Path::file_name(*((&v0 as &char + 16) as &i64), v4);
            if !(v5 && (!(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "csh") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v5, v6, "tcsh") as i8))) {
                return 0 as u32 as u64;
            }
            v3 = (v5 | -0x100 | 1) as i32;
            return v3 as u32 as u64;
        },
    }
}
