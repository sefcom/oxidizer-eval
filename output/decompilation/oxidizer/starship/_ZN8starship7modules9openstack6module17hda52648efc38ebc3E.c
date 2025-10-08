fn starship::modules::openstack::module(a0: i64, a1: u64) -> void {
    let v0: u128;  // [bp-0x208]
    let v1: u64;  // [bp-0x1f8]
    let v2: Option<struct48>;  // [bp-0x1e8]
    let v3: struct24;  // [bp-0x1d8]
    let v4: struct32;  // [bp-0x1c8], Other Possible Types: struct72, u8
    let v5: Option<struct56>;  // [bp-0x1c0]
    let v6: Result<struct72, struct24>;  // [bp-0x1b8], Other Possible Types: u64
    let v7: struct24;  // [bp-0x1b0], Other Possible Types: char
    let v8: struct128;  // [bp-0x1a8]
    let v9: struct24;  // [bp-0x1a0]
    let v10: struct32;  // [bp-0x178]
    let v11: struct48;  // [bp-0x170]
    let v12: struct40;  // [bp-0x160]
    let v13: struct8;  // [bp-0x158]
    let v14: struct8;  // [bp-0x148]
    let v15: Result<struct72, struct24>;  // [bp-0x138], Other Possible Types: struct40
    let v16: u64;  // [bp-0x120]
    let v17: struct24;  // [bp-0x108]
    let v18: struct128;  // [bp-0xf8]
    let v19: Result<struct72, struct24>;  // [bp-0xf0]
    let v20: struct24;  // [bp-0xe8]
    let v21: struct48;  // [bp-0xe0]
    let v22: struct92;  // [bp-0xb0]
    let v23: struct24;  // [bp-0xb0]
    let v24: struct40;  // [bp-0xa0]
    let v25: u128;  // [bp-0x90]
    let v26: u128;  // [bp-0x80]
    let v27: struct40;  // [bp-0x70]
    let v28: u64;  // [bp-0x58]
    let v29: Result<struct57, struct49>;  // [bp-0x50]
    let v30: u64;  // [bp-0x48]
    let v31: u128;  // [bp-0x40]
    let v33: struct32;  // xmm0
    let v34: struct32;  // xmm1

    v22 = starship::context::Context::new_module(a1, "openstack");
    v29 = starship::config::ModuleConfig::try_load(v28);
    starship::modules::openstack::get_osp_cloud_and_project(&v4, a1);
    v1 = v6;
    v0 = *(&v4 as &i128);
    v3 = v9;
    v2 = *(&v7 as &i128);
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v15 = starship::formatter::string_formatter::StringFormatter::new(v29 as i64, v30);
    v21 = struct48 {
        field_0: v31
        field_16: &v29 as u8
        field_24: &v0
        field_32: &v2
        field_40: a1
    };
    match v15 {
        Err(_) => {
            v12 = v16;
            v11 = *((&v15 as &char + 8) as &i128);
        },
        Ok(_) => {
            v33 = v15 as i128;
            v34 = *((&v15 as &char + 16) as &i128);
            v4 = struct72 {
                field_0: v33
                field_16: v34
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: v17
                field_64: v18
            };
            v10 = starship::modules::openstack::module::{{closure}}(&v21, &v4);
            if v10.field_0 as i32 != 1 {
                v23 = starship::module::Module::set_segments(&v10 as u8);
                return struct96 {
                    field_0: v22.field_0
                    field_16: v24
                    field_32: v25
                    field_48: v26
                    field_64: v27
                    field_80: *(&v22.field_80 as &i128)
                };
            }
        },
    }
    v14 = v12;
    v13 = v11;
    if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v19 = &v13;
    v20 = <starship::formatter::string_formatter::StringFormatterError as core::fmt::Display>::fmt;
    v4 = "Error in module `openstack`: \n";
    v5 = 1;
    v8 = 0;
    v6 = &v19;
    v7 = 1;
    v15 = struct40 {
        field_0: "starship::modules::openstack"
        field_16: "starship::modules::openstack"
        field_32: log::__private_api::loc("src/modules/openstack.rs")
    };
    log::__private_api::log(&v4, 1, &v15);
    return struct8 {
        field_0: 0x8000000000000000
    };
}
