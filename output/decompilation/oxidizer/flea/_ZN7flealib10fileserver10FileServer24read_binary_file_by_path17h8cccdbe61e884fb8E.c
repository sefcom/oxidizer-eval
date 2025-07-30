fn flealib::fileserver::FileServer::read_binary_file_by_path(a1: i64, a2: i64) -> Result<struct24, struct16> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0xe0], Other Possible Types: struct4
    let v1: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0xc8], Other Possible Types: Result<struct4, struct8>
    let v2: u32;  // [bp-0xc4]
    let v4: struct24;  // rax
    let v7: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(a2);
    v1 = std::fs::metadata(&v0, a2);
    if let Ok(_) = v1 {
        if *((&v1 as &char + 80) as &i64) > 0x1f400000 {
            v4 = std::io::error::Error::new(40, "File too large");
        } else {
            v1 = std::fs::File::open(a2);
            if let Ok(v0) = v1 {
                v1 = Vec::new();
                v7 = <std::fs::File as std::io::Read>::read_to_end(&v0, &v1);
                match v7 {
                    Ok(_) => {
                        return Ok(struct24 {
                            field_0: *(&v1.buf.inner.cap as &i128)
                            field_16: 0
                        });
                    },
                    Err(_) => {
                        return struct16 {
                            field_0: 0x8000000000000000
                            field_8: *((&v7 as &char + 8) as &i64)
                        };
                    },
                }
            }
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v4
    };
}
