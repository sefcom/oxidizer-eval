fn uu_cat::write_end_of_line(a1: &struct24, a2: &[u8], a3: i8) -> Option<struct8> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: core::result::Result<(), std::io::error::Error>;  // rax
    let v4: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = v2;
    v3 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a1, a2);
    match v3 {
        Err(_) => {
            return Some(v3);
        },
        Ok(_) => {
            if !a3 {
                return struct8 {
                    field_0: 9223372036854775814
                };
            }
            v4 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
            if let Err(_) = v4 {
                return Some(v4);
            }
            return struct8 {
                field_0: 9223372036854775814
            };
        },
    }
}
