fn starship::modules::custom::shell_command(a0: i64, a1: u64, a2: u64, a3: i64, a4: i64) -> void {
    let v0: i64;  // [bp-0x3b0]
    let v1: struct16;  // [bp-0x3a8], Other Possible Types: struct_4 *
    let v2: u128;  // [bp-0x3a8]
    let v3: u64;  // [bp-0x3a0]
    let v4: u128;  // [bp-0x39c]
    let v5: struct32;  // [bp-0x388], Other Possible Types: struct_7 *
    let v6: u128;  // [bp-0x388]
    let v7: u64;  // [bp-0x380]
    let v8: iNone;  // [bp-0x37c]
    let v9: i64;  // [bp-0x360], Other Possible Types: u64
    let v10: u64;  // [bp-0x358]
    let v11: u128;  // [bp-0x338]
    let v12: i64;  // [bp-0x330]
    let v13: u64;  // [bp-0x328]
    let v14: u64;  // [bp-0x318]
    let v15: u64;  // [bp-0x310]
    let v16: void*;  // [bp-0x308], Other Possible Types: Result<(), &BOT>, struct16, struct40, u64
    let v17: struct161;  // [bp-0x300], Other Possible Types: struct40, u64
    let v18: Result<struct72, struct24>;  // [bp-0x2f8], Other Possible Types: struct24, struct_5 *, u64
    let v19: struct24;  // [bp-0x2f0], Other Possible Types: u32
    let v20: u64;  // [bp-0x2f0]
    let v21: struct24;  // [bp-0x2e8], Other Possible Types: void*
    let v22: void*;  // [bp-0x2d8]
    let v23: iNone;  // [bp-0x2c8]
    let v24: iNone;  // [bp-0x2bc]
    let v25: u8;  // [bp-0x2ac]
    let v26: u8;  // [bp-0x2ab]
    let v27: iNone;  // [bp-0x228]
    let v28: iNone;  // [bp-0x218]
    let v29: iNone;  // [bp-0x208]
    let v30: u64;  // [bp-0x1f8]
    let v31: struct64;  // [bp-0x1f0], Other Possible Types: struct40, u64
    let v32: u64;  // [bp-0x1e8]
    let v33: iNone;  // [bp-0x1c8]
    let v34: struct17;  // [bp-0x110], Other Possible Types: struct8, u64
    let v35: struct16;  // [bp-0x110], Other Possible Types: struct40
    let v36: u64;  // [bp-0x108]
    let v37: i64;  // [bp-0x100], Other Possible Types: u64
    let v38: u64;  // [bp-0xf8]
    let v39: u64;  // [bp-0xf8]
    let v40: u64;  // [bp-0xf0]
    let v41: void*;  // [bp-0xf0]
    let v43: u8;  // r13b
    let v44: struct24;  // xmm0
    let v45: struct24;  // rdx
    let v46: u32;  // ecx
    let v47: Option<struct24>;  // al

    v14 = a1;
    v15 = a2;
    v35 = starship::modules::custom::get_shell(*((a3 + 8) as &i64), *((a3 + 16) as &i64));
    v13 = v37;
    v11 = v35.field_0;
    starship::utils::create_command(&v31, v12, v13);
    if !((((0 ^ v31) & (0 ^ -(v31))) >> 63) as char) {
        memcpy(&v35, &v31, 224);
    } else if v40 {
        v1 = v32;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 4 {
            *(&v5 as &&struct16) = &v1;
            v7 = <std::io::error::Error as core::fmt::Display>::fmt;
            v34 = "Error creating command with STARSHIP_SHELL, falling back to fallback shell: ";
            v36 = 1;
            v41 = 0;
            v37 = &v5 as u8;
            v38 = 1;
            v16 = struct40 {
                field_0: "starship::modules::custom"
                field_16: "starship::modules::custom"
                field_32: log::__private_api::loc("src/modules/custom.rs")
            };
            log::__private_api::log(&v34, 4, &v16);
        }
        starship::utils::create_command(&v34, "/usr/bin/env");
        if v34 == 0x8000000000000000 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        memcpy(&v17, &v36, 216);
        v16 = v34;
        v16 = std::process::Command::arg("sh");
        memcpy(&v34, &v16, 224);
    } else {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v34 = std::process::Command::current_dir(a4 + 176);
    std::process::Command::args(&v34, v39, v40);
    v34 = std::process::Command::stdin(0x2);
    v34 = std::process::Command::stdout(0x2);
    v34 = std::process::Command::stderr(0x2);
    if v43 == 2 {
        if !starship::modules::custom::handle_shell(&v34, v12, v13, v40) {
            goto LABEL_b8ad96;
        }
    } else {
        if !(v43 & 1) {
LABEL_b8ad96:
            v35 = std::process::Command::arg(a1, a2);
        }
    }
    v5 = std::process::Command::spawn(&v34);
    if v5.field_0 == 1 {
        v9 = v5.field_4;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 4 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v1 = &v9;
        v3 = <std::io::error::Error as core::fmt::Display>::fmt;
        v16 = "Failed to run command with given shell or STARSHIP_SHELL env variable:: ";
        v17 = 1;
        v21 = 0;
        v18 = &v1;
        v19 = 1;
        v31 = struct40 {
            field_0: "starship::modules::custom"
            field_16: "starship::modules::custom"
            field_32: log::__private_api::loc("src/modules/custom.rs")
        };
        log::__private_api::log(&v16, 4, &v31);
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v44 = *(&(&v5.field_0)[1] as &i128);
        v4 = *((&v5.field_4 as &char + 8) as &i128);
        *(&v2 as &struct24) = v44;
        if true {
            if *((&v4 as &char + 4) as &i32) == -1 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v16 = std::io::Write::write_all(&v4, a1, a2);
            if let Ok(_) = v16 {
                goto LABEL_b8af32;
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else {
LABEL_b8af32:
            *(&v8 as &i128) = *((&v2 as &char + 12) as &i128);
            v6 = v2;
            if !*((a3 + 210) as &i8) {
                *(&v8 as &i128) = *((&v2 as &char + 12) as &i128);
                v6 = v2;
                v45 = (*((a4 + 472) as &i64) >> 3) / 125;
                v46 = (*((a4 + 472) as &i64) - v45 as u32 * 1000) * 1000000;
                v47 = 1;
            }
            v16 = 0;
            v18 = v45;
            v19 = v46;
            v21 = 0;
            v22 = 0;
            *(&v23 as &u128) = v6;
            v24 = *((&v6 as &char + 12) as &i128);
            v25 = 0;
            v26 = v47;
            v31 = <process_control::control::Buffer<P> as process_control::Control>::wait(&v16);
            if v31.field_0 as i64 == 9223372036854775809 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v30 = *((&v31.field_48 as &char + 8) as &i64);
            v29 = v33;
            v28 = *((&v31.field_16 as &char + 8) as &i128);
            v27 = *((&v31.field_0 as &char + 8) as &i128);
            if v31.field_0 as i64 != 0x8000000000000000 {
                *(v0 as &i64) = v31.field_0;
                *((v0 + 8) as void*) = v27;
                *((v0 + 24) as void*) = v28;
                *((v0 + 40) as void*) = v29;
                *((v0 + 56) as &u64) = v30;
            }
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                v9 = &v14;
                v10 = <&T as core::fmt::Debug>::fmt;
                v16 = "Executing custom command ";
                v17 = 2;
                v21 = 0;
                v18 = &v9;
                v20 = 1;
                v31 = struct40 {
                    field_0: "starship::modules::custom"
                    field_16: "starship::modules::custom"
                    field_32: log::__private_api::loc("src/modules/custom.rs")
                };
                log::__private_api::log(&v16, 2, &v31);
            }
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                v16 = "You can set command_timeout in your config to a higher value or set ignore_timeout to true for this module to allow longer-running commands to keep executing.";
                v17 = 1;
                v18 = 8;
                v19 = 0;
                v31 = struct40 {
                    field_0: "starship::modules::custom"
                    field_16: "starship::modules::custom"
                    field_32: log::__private_api::loc("src/modules/custom.rs")
                };
                log::__private_api::log(&v16, 2, &v31);
            }
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
}
