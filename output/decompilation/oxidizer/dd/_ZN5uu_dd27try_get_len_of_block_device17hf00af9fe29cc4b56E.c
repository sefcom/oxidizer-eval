fn uu_dd::try_get_len_of_block_device(a1: i64) -> : struct16 {
    let a0: u64;  // rsi
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v2: core::option::Option<&[usize]>;  // rax
    let v3: i64;  // rdi
    let v5: i64;  // rdi
    let v7: i64;  // rdi
    let v9: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v0 = std::fs::File::metadata(a0);
    if let Ok(_) = v0 {
        if (0xf000 & *((&v0 as &char + 56) as &i32)) == 0x6000 {
            v9 = <std::fs::File as std::io::Seek>::seek(a0);
            match v9 {
                Err(_) => {
                    *((v5 + 8) as &i64) = *((&v9 as &char + 8) as &i64);
                    *(v5 as &i64) = 2;
                    return;
                },
                Ok(_) => {
                    v2 = std::io::Seek::rewind(a0);
                    if let None = v2 {
                        *(v7 as &i64) = 1;
                        *((v7 + 8) as &i64) = *((&v9 as &char + 8) as &i64);
                        return;
                    }
                },
            }
        } else {
            *(v3 as &i64) = 0;
            return;
        }
    }
    *((v5 + 8) as &core::option::Option<&[usize]>) = v2;
    *(v5 as &i64) = 2;
    return;
}
