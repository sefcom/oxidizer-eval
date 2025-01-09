fn uu_cp::verify_target_type(a0: &struct8, a1: u32, a2: u32, a3: &struct1) -> u64 {
    let v0: &u8;  // [sp-0x80], Other Possible Types: u64
    let v1: u64;  // [sp-0x78]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: u64;  // [sp-0x60]
    let v5: u8;  // [sp-0x58]
    let v6: u64;  // [sp-0x50]
    let v7: u64;  // [sp-0x48]
    let v8: &u8;  // [sp-0x40]
    let v9: u64;  // [sp-0x38]
    let v10: void*;  // [sp-0x30]
    let v12: u8;  // al
    let v14: u64;  // rax

    v12 = std::path::Path::is_dir(a1, a2) as i8;
    if !*(a3) {
        if !v12 {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v14 = "target: ";
        } else {
            return struct8 {
                field_0: v13
            };
        }
    } else {
        if v12 {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v14 = "cannot overwrite directory ";
        } else {
            return struct8 {
                field_0: v13
            };
        }
    }
    v6 = v14;
    v7 = 2;
    v10 = 0;
    v8 = &v0;
    v9 = 1;
    core::option::Option<T>::map_or_else();
    return struct8 {
        field_0: v13
    };
}
