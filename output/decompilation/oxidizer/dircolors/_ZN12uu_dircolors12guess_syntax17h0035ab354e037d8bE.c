fn uu_dircolors::guess_syntax() -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x30]
    let v2: u64;  // rsi
    let v3: u64;  // rbx
    let v4: u32;  // rdx
    let v5: u32;  // ebx

    v0 = std::env::var("SHELL");
    match v0 {
        Err(_) => {
            return v5 as u64;
        },
        Ok(_) => {
            v2 = *((&v0 as &char + 24) as &i64);
            if !v2 {
                return v5 as u64;
            }
            v3 = std::path::Path::file_name(*((&v0 as &char + 16) as &i64), v2);
            if !(v3 && (!(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "csh") as i8) || !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v4, "tcsh") as i8))) {
                return v5 as u64;
            }
            return v5 as u64;
        },
    }
}
