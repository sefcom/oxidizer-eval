fn uu_comm::open_file(a1: i64, a2: i64, a3: i64) -> : struct44 {
    let a0: void*;  // rsi
    let v0: Result<struct4, struct8>;  // [bp-0x30]
    let v1: u32;  // [bp-0x2c]
    let v3: std::io::stdio::Stdin;  // rax
    let v4: i64;  // rdi
    let v5: u8;  // bpl

    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a0, a1, "-") as i8 {
        v3 = std::io::stdio::stdin();
        *(v4 as &i64) = 0;
        *((v4 + 8) as &std::io::stdio::Stdin) = v3;
    } else {
        v0 = std::fs::File::open(a0, a1);
        match v0 {
            Err(_) => {
                *(v4 as &i64) = *((&v0 as &char + 8) as &i64);
                v5 = 11;
            },
            Ok(_) => {
                std::io::buffered::bufreader::BufReader<R>::with_capacity(v4, 0x2000, v1);
            },
        }
    }
    *((v4 + 48) as &u8) = v5;
    return;
}
