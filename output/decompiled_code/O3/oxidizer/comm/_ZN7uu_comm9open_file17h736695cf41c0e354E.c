fn uu_comm::open_file(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: Result<struct4, struct8>;  // [sp-0x30], Other Possible Types: u64
    let v1: i8;  // [bp-0x28]
    let v3: u64;  // rbp

    v3 = a3;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") as i8 {
        a0->field_0 = 0;
        *(&a0->field_8 as &long long) = std::io::stdio::stdin();
    } else {
        v0 = std::fs::File::open(a1, a2);
        match v0 {
            Err(_) => {
                *(&a0->field_0 as &i8) = v1;
                v3 = v3 | -0x100 | 11;
            },
            Ok(_) => {
                std::io::buffered::bufreader::BufReader<R>::with_capacity(a0, 0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            },
        }
    }
    *((&a0[1].field_8 as &char + 4) as &u8) = v3;
    return a0;
}
