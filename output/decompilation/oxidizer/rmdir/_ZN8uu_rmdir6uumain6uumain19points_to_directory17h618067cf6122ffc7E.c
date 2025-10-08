fn uu_rmdir::uumain::uumain::points_to_directory(a1: &std::path::Path) -> : struct9 {
    let a0: i64;  // rdi
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb8]
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v4: u8;  // al
    let v5: u8;  // al

    v0 = std::fs::metadata(v2, v3);
    match v0 {
        Ok(_) => {
            return struct2 {
                field_0: v5
                field_1: ((0xf000 & *((&v0 as &char + 56) as &i32)) == 0x4000) as u8 as u8
            };
        },
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v0 as &char + 8) as &i64);
            v4 = 1;
        },
    }
}
