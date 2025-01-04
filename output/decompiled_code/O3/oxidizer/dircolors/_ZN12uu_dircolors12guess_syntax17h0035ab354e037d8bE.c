fn uu_dircolors::guess_syntax(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x30], Other Possible Types: i192
    let v1: i8;  // [bp-0x18]
    let v3: i64;  // rbx
    let v4: i32;  // ebx
    let v5: i64;  // rsi
    let v6: i64;  // rdx
    let v7: i64;  // rcx
    let v8: i64;  // rbx

    v0 = std::env::var("SHELL");
    v4 = v3 | -0x100 | 3;
    match v0 {
        Err(_) => {
            return v4 as u32 as u64;
        },
        Ok(_) => {
            v5 = v1;
            if !v5 {
                return v4 as u32 as u64;
            }
            v8 = std::path::Path::file_name(*((&v0 as &char + 16) as &i64), v5, v6, v7);
            if !(v8 && (!(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, "csh") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v6, "tcsh") as i8))) {
                return 0 as u32 as u64;
            }
            v4 = (v8 | -0x100 | 1) as i32;
            return v4 as u32 as u64;
        },
    }
}
