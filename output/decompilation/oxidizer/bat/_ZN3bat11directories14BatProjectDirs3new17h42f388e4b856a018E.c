fn bat::directories::BatProjectDirs::new(a0: i64) -> void {
    let v0: Option<struct24>;  // [bp-0xa8], Other Possible Types: struct24, u128
    let v1: struct24;  // [bp-0xa8]
    let v2: u64;  // [bp-0xa0]
    let v3: u64;  // [bp-0x98]
    let v4: u128;  // [bp-0x90]
    let v5: u64;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: iNone;  // [bp-0x78]
    let v8: u64;  // [bp-0x78]
    let v9: u64;  // [bp-0x68]
    let v10: struct24;  // [bp-0x58], Other Possible Types: u128
    let v11: u64;  // [bp-0x48]
    let v12: u64;  // [bp-0x40]
    let v13: iNone;  // [bp-0x38]
    let v14: Result<struct40, struct16>;  // [bp-0x28], Other Possible Types: struct24
    let v15: Result<struct40, struct16>;  // [bp-0x18]

    v0 = etcetera::base_strategy::choose_native_strategy();
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v13 = *((&v0 as &char + 8) as &i128);
    v12 = v0 as i64;
    v0 = std::env::var_os("BAT_CACHE_PATH");
    if v0.field_0 != 0x8000000000000000 {
        v7 = *(&v0.field_0 as &i128);
        v9 = v3;
        if v8 == 0x8000000000000000 {
            goto LABEL_7ad45c;
        }
        v11 = v9;
        v10 = v7;
    } else {
LABEL_7ad45c:
        v0 = <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::cache_dir(&v12);
        v10 = std::path::Path::join(v2, v3, "bat");
    }
    v0 = std::env::var_os("BAT_CONFIG_DIR");
    if v0.field_0 != 0x8000000000000000 {
        v7 = *(&v0.field_0 as &i128);
        v9 = v3;
        if v8 == 0x8000000000000000 {
            goto LABEL_7ad4e4;
        }
        v15 = v9;
        v14 = v7;
    } else {
LABEL_7ad4e4:
        v1 = <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::config_dir(&v12);
        v14 = std::path::Path::join(v2, v3, "bat");
    }
    v3 = v11;
    v0 = v10;
    v6 = v15;
    *(&v4 as &Result<struct40, struct16>) = v14;
    return struct48 {
        field_0: v10
        field_16: v3
        field_24: v4 as i64
        field_32: v5
        field_40: v6
    };
}
