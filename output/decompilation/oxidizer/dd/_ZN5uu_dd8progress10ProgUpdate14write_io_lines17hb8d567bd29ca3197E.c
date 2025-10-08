fn uu_dd::progress::ProgUpdate::write_io_lines(a0: i64, a1: u64) -> long long {
    let v1: core::fmt::Arguments;  // [bp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: u128;  // [bp-0x38]
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u32;  // eax

    v9 = uu_dd::progress::ReadStat::report(a0 + 16, a1);
    if v9 {
        return v9;
    }
    v10 = uu_dd::progress::WriteStat::report(a0 + 48, a1);
    if v10 {
        return v10;
    }
    v11 = *((a0 + 40) as &i32);
    if !v11 {
        return 0;
    }
    if v11 != 1 {
        return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1);
    }
    v1 = "1 truncated record\n";
    v2 = 1;
    v3 = 8;
    v4 = 0;
    return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1);
}
