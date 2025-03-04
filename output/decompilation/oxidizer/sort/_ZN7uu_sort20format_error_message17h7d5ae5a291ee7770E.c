fn uu_sort::format_error_message(a0: &struct24, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: &u8;  // [sp-0x88], Other Possible Types: Argument
    let v1: u64;  // [sp-0x80]
    let v2: &u8;  // [bp-0x78], Other Possible Types: Argument
    let v3: u64;  // [sp-0x70]
    let v4: void*;  // [sp-0x68]
    let v5: u64;  // [sp-0x60]
    let v6: u64;  // [sp-0x58]
    let v7: u8;  // [sp-0x50]
    let v8: u64;  // [bp-0x48], Other Possible Types: Arguments
    let v9: u64;  // [sp-0x40]
    let v10: u64;  // [sp-0x18]
    let v11: u64;  // [sp-0x10]
    let v13: u64;  // rax
    let v14: u64;  // rax

    v10 = a4;
    v11 = a5;
    v13 = *(a1);
    if !v13 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v10;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v14 = "invalid suffix in --";
        goto LABEL_524e0c;
    } else if v13 != 1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = Argument {
            value: &v10
            formatter: <&T as core::fmt::Display>::fmt
        };
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = Arguments {
            pieces: ["--", " argument "]
            args: [&v0, &v2]
            fmt: 0
        };
        v9 = 3;
    } else {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v10;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = Argument {
            value: &v4
            formatter: <os_display::Quoted as core::fmt::Display>::fmt
        };
        v14 = "invalid --";
LABEL_524e0c:
        v8 = v14;
    }
    core::option::Option<T>::map_or_else(a0, &v8);
    return a0;
}
