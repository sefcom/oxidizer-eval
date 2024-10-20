fn uu_dd::progress::ProgUpdate::write_io_lines(a0: &struct_0, a1: u64, a2: u64) -> u64 {
    let v0: u32;  // [sp-0x74]
    let v1: u64;  // [sp-0x70]
    let v2: u64;  // [sp-0x68]
    let v3: u64;  // [sp-0x60]
    let v4: u128;  // [sp-0x58]
    let v5: void*;  // [sp-0x50]
    let v6: u64;  // [sp-0x40]
    let v7: u64;  // [sp-0x38]
    let v8: u64;  // [sp-0x30]
    let v9: u64;  // [sp-0x28]
    let v11: void*;  // rax
    let v12: u64;  // rdx
    let v13: u32;  // eax

    v6 = &a0->padding_0[16];
    v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v8 = &a0->padding_0[24];
    v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v1 = &g_516da8;
    v2 = 3;
    v5 = 0;
    v3 = &v6;
    v4 = 2;
    v11 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1, a2);
    if v11 {
        return v11;
    }
    v6 = &a0[1].padding_0[20];
    v7 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v8 = &a0[1].padding_0[28];
    v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v1 = &g_516dd8;
    v2 = 3;
    v5 = 0;
    v3 = &v6;
    v4 = 2;
    v11 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1, v12);
    if v11 {
        return v11;
    }
    v13 = a0->field_28;
    if !v13 {
        return 0;
    }
    if v13 != 1 {
        v0 = v13;
        v6 = &v0;
        v7 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v1 = &g_516ba8;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
    } else {
        v1 = "1 truncated record\n";
        v2 = 1;
        v3 = 8;
        v4 = 0;
    }
    v11 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v1, v12);
    return v11;
}
