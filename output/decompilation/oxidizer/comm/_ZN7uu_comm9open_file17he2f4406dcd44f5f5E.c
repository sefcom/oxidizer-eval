fn uu_comm::open_file(a0: &struct44, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x30]
    let v2: i64;  // rbp

    v2 = a3 as u64;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        *(a0 as &i64) = 0;
        *((a0 + 8) as &long long) = std::io::stdio::stdin();
    } else {
        v0 = std::fs::File::open(a1, a2);
        match v0 {
            Err(_) => {
                *(a0 as &i64) = v0 as i64;
                v2 = v2 & -0x100 | 11;
            },
            Ok(_) => {
                std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            },
        }
    }
    *((a0 + 48) as &u8) = v2 as u8;
    return a0;
}
