fn uu_dd::Source::len(a0: i64) -> long long {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xb0]

    if *(a0 as &i32) {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 4);
    match v0 {
        Ok(_) => {
            return 0;
        },
        Err(_) => {
            return 1;
        },
    }
}
