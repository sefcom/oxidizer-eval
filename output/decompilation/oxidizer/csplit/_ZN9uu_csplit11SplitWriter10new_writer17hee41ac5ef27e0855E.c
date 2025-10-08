fn uu_csplit::SplitWriter::new_writer(a0: i64) -> int {
    let v0: Result<struct4, struct8>;  // [bp-0x48], Other Possible Types: struct29
    let v1: u128;  // [bp-0x38]
    let v2: struct24;  // [bp-0x28]
    let v4: iNone;  // xmm0

    v2 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    v0 = std::fs::File::create(&v2);
    match v0 {
        Ok(_) => {
            v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(*((&v0 as &char + 4) as &i32) as u32 as u64);
            v4 = *(&v0.field_0 as &i128);
            return struct64 {
                field_0: v4
                field_16: v1
                padding_32: <UNKNOWN>
                field_40: *((a0 + 40) as &i64) + 1
                field_48: 0
                field_56: 0
            };
        },
        Err(_) => {
            return;
        },
    }
}
