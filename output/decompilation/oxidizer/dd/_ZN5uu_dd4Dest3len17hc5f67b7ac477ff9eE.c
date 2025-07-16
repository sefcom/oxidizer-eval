fn uu_dd::Dest::len(a0: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb0]
    let v2: u64;  // rax

    if *(a0 as &i8) != 1 {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 4);
    return v2;
}
