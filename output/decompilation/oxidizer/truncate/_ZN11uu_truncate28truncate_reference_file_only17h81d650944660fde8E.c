fn uu_truncate::truncate_reference_file_only(a0: u64, a1: u64, a2: u64, a3: u64, a4: u8) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xd8]
    let v2: void*;  // r12
    let v3: u64;  // rax

    v0 = std::fs::metadata(a0, a1);
    if v0 as i32 == 2 {
        return uu_truncate::truncate_reference_and_size::{{closure}}(a0, a1, *((&v0 as &char + 8) as &i64));
    } else if a3 {
        loop {
            v3 = uu_truncate::file_truncate(*((8 + a2 + v2 as &u8) as &i64), *((16 + a2 + v2 as &u8) as &i64), a4, *((&v0 as &char + 80) as &i64));
            if v3 {
                return v3;
            }
            v2 += 24;
            if a3 * 24 == v2 {
                return 0;
            }
        }
    } else {
        return 0;
    }
}
