fn uu_dd::make_linux_iflags(a0: i64) -> u64 {
    let v1: core::fmt::Arguments;  // eax

    v1 = *((a0 + 1) as &i8) * 0x4000;
    return v1;
}
