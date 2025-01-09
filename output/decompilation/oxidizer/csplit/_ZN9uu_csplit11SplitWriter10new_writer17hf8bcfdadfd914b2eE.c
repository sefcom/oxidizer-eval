fn uu_csplit::SplitWriter::new_writer(a0: &struct49) -> u64 {
    let v0: i96;  // [sp-0x48], Other Possible Types: struct29, Result<struct4, struct8>
    let v1: i128;  // [bp-0x38]
    let v2: struct24;  // [sp-0x28], Other Possible Types: i192
    let v4: i64;  // rax
    let v5: i128;  // xmm0

    v2 = uu_csplit::split_name::SplitName::get(*((a0 + 32) as &i64), *((a0 + 40) as &i64));
    v0 = std::fs::File::create(&v2);
    match v0 {
        Err(v4) => {
            return v0;
        },
        Ok(_) => {
            v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, *((&v0 as &char + 4) as &i32) as u32 as u64);
            v5 = v0;
            *((a0 + 16) as &i128) = v1;
            *(a0 as &i128) = v5;
            *((a0 + 40) as &i64) = *((a0 + 40) as &i64) + 1;
            *((a0 + 48) as &i64) = 0;
            *((a0 + 56) as &i8) = 0;
            return 0;
        },
    }
}
