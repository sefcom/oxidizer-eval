fn flealib::ftp::FTP::read_file_to_vec(a0: i64, a1: u32, a2: u32) -> int {
    let v0: struct4;  // [bp-0x24]
    let v1: Result<struct4, struct8>;  // [bp-0x20], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>
    let v2: u32;  // [bp-0x1c]
    let v3: struct24;  // [bp-0x18]
    let v7: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v1 = std::fs::File::open(a1, a2);
    match v1 {
        Err(_) => {
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v3
            };
        },
        Ok(v0) => {
            v1 = Vec::new();
            v7 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v1);
            match v7 {
                Ok(_) => {
                    return struct24 {
                        field_0: *(&v1.buf.inner.cap as &i128)
                        field_16: 0
                    };
                },
                Err(_) => {
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: *((&v7 as &char + 8) as &i64)
                    };
                },
            }
        },
    }
}
