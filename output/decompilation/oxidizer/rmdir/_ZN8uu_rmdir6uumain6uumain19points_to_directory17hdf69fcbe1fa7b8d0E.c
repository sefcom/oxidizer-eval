fn uu_rmdir::uumain::uumain::points_to_directory(a1: i64, a2: i64) -> : struct9 {
    let a0: u64;  // rsi
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v2: i64;  // rdi
    let v3: u8;  // al

    v0 = std::fs::metadata(a0, a1);
    match v0 {
        Err(_) => {
            *((v2 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
            v3 = 1;
        },
        Ok(_) => {
            *((v2 + 1) as &u8) = ((0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000) as u8 as u8;
        },
    }
    *(v2 as &u8) = v3;
    return;
}
