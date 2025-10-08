fn uu_dd::Dest::len(a0: i64) -> long long {
    let v0: struct16;  // [bp-0xb0]
    let v3: core::result::Result<(), std::io::error::Error>;  // rax

    if *(a0 as &i8) != 1 {
        return 0;
    }
    v0 = std::fs::File::metadata(a0 + 4);
    return v3;
}
