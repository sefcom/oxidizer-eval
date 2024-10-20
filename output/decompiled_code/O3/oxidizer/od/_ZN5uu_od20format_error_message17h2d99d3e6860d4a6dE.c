fn uu_od::format_error_message(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u64;  // [bp-0x80], Other Possible Types: Argument
    let v1: u64;  // [sp-0x78], Other Possible Types: Argument
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: void*;  // [sp-0x60]
    let v5: u64;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u8;  // [sp-0x48]
    let v8: Arguments;  // [bp-0x40], Other Possible Types: u64
    let v9: u64;  // [sp-0x38]
    let v10: u64;  // [sp-0x10]
    let v11: u64;  // [sp-0x8]
    let v13: u64;  // rax

    v10 = a4;
    v11 = a5;
    if !a1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = Argument {
            value: &v10
            formatter: <&T as core::fmt::Display>::fmt
        };
        v1 = <&T as core::fmt::Display>::fmt;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = "invalid suffix in --";
        goto LABEL_49813b;
    } else if a1 != 1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v10;
        v1 = Argument {
            value: <&T as core::fmt::Display>::fmt
            formatter: &v4
        };
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = Arguments {
            pieces: ["--", " argument ", " too large"]
            args: [&v0, &v1]
            fmt: None
        };
    } else {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v10;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v13 = "invalid --";
LABEL_49813b:
        v8 = v13;
        v9 = 2;
    }
    return alloc::fmt::format::format_inner(a0, &v8);
}
