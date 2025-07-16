fn uu_dd::make_linux_iflags(a0: i64) -> long long {
    let v1: u32;  // eax

    v1 = *((a0 + 1) as &i8) * 0x4000;
    return v1;
}
