fn uu_csplit::SplitWriter::new_writer(a0: &struct49) -> u64 {
    let v0: i64;  // [sp-0x48], Other Possible Types: Result<struct4, struct8>, struct29
    let v1: i8;  // [bp-0x40]
    let v2: i128;  // [bp-0x38]
    let v3: i192;  // [sp-0x28], Other Possible Types: struct24
    let v6: i128;  // xmm0

    v3 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    v0 = std::fs::File::create(&v3) as u64;
    if v0 {
        return v1;
    }
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32));
    v6 = v0;
    *((a0 + 16) as &i128) = v2;
    *(a0 as &i128) = v6;
    *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + 1;
    *((a0 + 48) as &i64) = 0;
    *((a0 + 56) as &i8) = 0;
    return 0;
}
