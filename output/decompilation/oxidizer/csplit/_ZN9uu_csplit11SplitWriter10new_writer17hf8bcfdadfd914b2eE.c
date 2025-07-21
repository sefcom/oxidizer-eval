fn uu_csplit::SplitWriter::new_writer(a0: &struct49) -> long long {
    let v0: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x48], Other Possible Types: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>
    let v1: u64;  // [bp-0x40]
    let v2: u128;  // [bp-0x38]
    let v3: u8;  // [bp-0x28]
    let v5: u64;  // rdx
    let v6: u128;  // xmm0

    uu_csplit::split_name::SplitName::get(&v3, *((a0 + 32) as &i64), *((a0 + 40) as &i64));
    v0 = std::fs::File::create(&v3, v5);
    match v0 {
        Err(_) => {
            return v1;
        },
        Ok(_) => {
            v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
            v6 = *(&v0.buf.buf.cap as &i128);
            return struct64 {
                field_0: v6
                field_16: v2
                padding_32: <UNKNOWN>
                field_40: *((a0 + 40) as &i64) + 1
                field_48: 0
                field_56: 0
            };
        },
    }
}
