fn uu_sort::format_error_message(a0: u32, a1: &u64, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: &u8;  // [sp-0x88], Other Possible Types: u64
    let v1: u64;  // [sp-0x80]
    let v2: &u8;  // [sp-0x78]
    let v3: u64;  // [sp-0x70]
    let v4: void*;  // [sp-0x68]
    let v5: u64;  // [sp-0x60]
    let v6: u64;  // [sp-0x58]
    let v7: u8;  // [sp-0x50]
    let v8: u64;  // [sp-0x48]
    let v9: u64;  // [sp-0x40]
    let v10: &u8;  // [sp-0x38]
    let v11: u64;  // [sp-0x30]
    let v12: void*;  // [sp-0x28]
    let v13: u64;  // [sp-0x18]
    let v14: u64;  // [sp-0x10]
    let v16: u64;  // rax
    let v17: u64;  // rax

    v13 = a4;
    v14 = a5;
    v16 = *(a1);
    if !v16 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v17 = "invalid suffix in --";
        goto LABEL_524e0c;
    } else if v16 != 1 {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v8 = "--";
        v9 = 3;
    } else {
        v4 = 0;
        v5 = a2;
        v6 = a3;
        v7 = 1;
        v0 = &v13;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v4;
        v3 = <os_display::Quoted as core::fmt::Display>::fmt;
        v17 = "invalid --";
LABEL_524e0c:
        v8 = v17;
        v9 = 2;
    }
    v12 = 0;
    v10 = &v0;
    v11 = 2;
    core::option::Option<T>::map_or_else();
    return a0;
}
