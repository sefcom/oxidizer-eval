fn uu_od::format_error_message(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: &u8;  // [sp-0x80], Other Possible Types: Argument
    let v1: u64;  // [sp-0x78]
    let v2: &u8;  // [bp-0x70], Other Possible Types: Argument
    let v3: u64;  // [sp-0x68]
    let v4: void*;  // [sp-0x60]
    let v5: u64;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u8;  // [sp-0x48]
    let v8: u320;  // [bp-0x40], Other Possible Types: Arguments
    let v9: u64;  // [sp-0x10]
    let v10: u64;  // [sp-0x8]
    let v12: u64;  // rax

    v9 = a4;
    v10 = a5;
    if !a1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = Argument {
            value: &v9
            formatter: <&T as core::fmt::Display>::fmt
        };
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = Argument {
            value: &v4
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v12 = "invalid suffix in --";
        goto LABEL_4c851b;
    } else if a1 != 1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v9;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = Arguments {
            pieces: ["--", " argument ", " too large"]
            args: [&v0, &v2]
            fmt: 0
        };
    } else {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v9;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v12 = "invalid --";
LABEL_4c851b:
        v8 = v12;
        v8 = 2;
    }
    return core::option::Option<T>::map_or_else(a0, &v8);
}
