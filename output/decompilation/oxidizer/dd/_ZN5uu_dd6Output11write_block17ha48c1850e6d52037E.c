fn uu_dd::Output::write_block(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x40]
    let v2: struct16;  // rbx
    let v3: u64;  // rdx

    v0 = a1;
    v2 = 0;
    loop {
        if !(<uu_dd::Dest as std::io::Write>::write(a0) as u8 & 1) {
            v2 += v3;
            if v2 >= a2 || !*((*((a0 + 16) as &i64) + 77) as &i8) {
                break;
            }
        } else if std::io::error::Error::kind(v3) as u8 != 35 {
            return 1;
        }
    }
    return 0;
}
