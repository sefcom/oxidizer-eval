fn uu_cp::verify_target_type(a0: &struct8, a1: u32, a2: u32, a3: &struct1) -> u64 {
    let v0: &u8;  // [sp-0x80]
    let v1: u64;  // [sp-0x78]
    let v2: u64;  // [sp-0x70]
    let v3: u64;  // [sp-0x68]
    let v4: u64;  // [sp-0x60]
    let v5: u8;  // [sp-0x58]
    let v6: struct40;  // [bp-0x50]
    let v8: u8;  // al

    v8 = std::path::Path::is_dir(a1, a2) as i8;
    if !*(a3) {
        if !v8 {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        } else {
            *(a0) = 13;
            return struct8 {
                field_0: 4
            };
        }
    } else {
        if v8 {
            v2 = 1;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        } else {
            *(a0) = 13;
            return struct8 {
                field_0: 4
            };
        }
    }
    v6 = struct40 {
        field_0: v10
        field_8: 2
        field_16: &v0
        field_24: 1
        field_32: 0
    };
    core::option::Option<T>::map_or_else(a0 + 1, &v6);
    return struct8 {
        field_0: 4
    };
}
