fn uu_dd::progress::ReadStat::report(a0: u32, a1: u32, a2: u64) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u64;  // [sp-0x38]
    let v4: u64;  // [sp-0x30]
    let v5: u64;  // [sp-0x28]
    let v6: &u8;  // [sp-0x20]
    let v7: u64;  // [sp-0x18]
    let v8: void*;  // [sp-0x10]

    v0 = a0;
    v1 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v2 = a0 + 8;
    v3 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v4 = &g_562500;
    v5 = 3;
    v8 = 0;
    v6 = &v0;
    v7 = 2;
    return <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v4, a2);
}
