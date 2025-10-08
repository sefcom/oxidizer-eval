fn uu_split::custom_write_all(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: u64;  // [bp-0x20]
    let v2: core::result::Result<(), std::io::error::Error>;  // rax
    let v3: u64;  // r15

    v2 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, a1, a2);
    match v2 {
        Ok(_) => {
            return struct2 {
                field_0: 0x100
            };
        },
        Err(_) => {
            v3 = v2;
            if !uu_split::ignorable_io_error(v2, a4) as u64 as u8 {
                return struct16 {
                    field_0: 1
                    padding_1: <UNKNOWN>
                    field_8: v3
                };
            }
            v0 = v3;
            return struct2 {
                field_0: 0
            };
        },
    }
}
