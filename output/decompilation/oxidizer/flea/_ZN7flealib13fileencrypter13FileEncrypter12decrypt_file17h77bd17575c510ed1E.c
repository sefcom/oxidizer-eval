fn flealib::fileencrypter::FileEncrypter::decrypt_file(a0: u64, a1: u64, a2: u32) -> long long {
    let v0: struct4;  // [bp-0x80]
    let v1: std::fs::File;  // [bp-0x7c]
    let v2: Result<struct4, struct8>;  // [bp-0x78], Other Possible Types: struct24, u128
    let v3: struct4;  // [bp-0x74]
    let v4: u64;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: Result<struct24, struct24>;  // [bp-0x60]
    let v7: u64;  // [bp-0x50]
    let v8: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x48]
    let v9: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x30]
    let v10: std::fs::File;  // [bp-0x2c]
    let v14: Result<(), &BOT>;  // rbx
    let v15: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v2 = std::fs::File::open(a1, a2);
    match v2 {
        Err(_) => {
            return v4;
        },
        Ok(v0) => {
            v8 = Vec::new();
            v15 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v8);
            match v15 {
                Err(_) => {
                    return *((&v15 as &char + 8) as &i64);
                },
                Ok(_) => {
                    v2 = struct24 {
                        field_0: *(&v8.buf.inner.cap as &i128)
                        field_16: 0
                    };
                    v6 = flealib::fileencrypter::FileEncrypter::decrypt(a0, &v2);
                    if (((0 ^ v6 as i64) & (0 ^ -(v6 as i64))) >> 63) as char {
                        v14 = std::io::error::Error::new(40, "Failed to decrypt");
                        return v14;
                    }
                    v5 = v7;
                    v2 = v6 as i128 as u128;
                    v9 = std::fs::File::create(a1, a2);
                    if let Err(_) = v9 {
                        return v14;
                    }
                    v1 = v10;
                    v14 = std::io::Write::write_all(&v1, v4, v5);
                    return v14;
                },
            }
        },
    }
}
