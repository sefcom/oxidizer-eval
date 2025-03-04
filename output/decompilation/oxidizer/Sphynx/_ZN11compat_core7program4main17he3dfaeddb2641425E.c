fn compat_core::program::main(a0: void*) -> u64 {
    let v0: i32;  // [sp-0x2ac]
    let v1: iNone;  // [sp-0x2a8]
    let v2: i64;  // [sp-0x298]
    let v3: i64;  // [sp-0x290]
    let v4: struct24;  // [bp-0x288], Other Possible Types: char
    let v5: i8;  // [bp-0x280]
    let v6: i64;  // [sp-0x268]
    let v7: i64;  // [sp-0x260]
    let v8: struct400;  // [sp-0x1c0], Other Possible Types: struct24
    let v9: i64;  // [sp-0x1a0]
    let v10: i64;  // [sp-0x198]
    let v17: i32;  // edx
    let v18: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // rax

    if *((a0 + 200) as &i32) != 1 {
        if *((a0 + 280) as &i8) {
            compat_log::use_console();
        } else {
            compat_fork::ignore_sighup();
            if !compat_kernel::core::fork::fork_entry() {
                compat_kernel::core::fork::fork(&v4);
                if *(&v4 as &i32) != 1 {
                    std::process::exit(0); /* do not return */
                }
                v1 = *(&v5 as &i128);
                if _ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE {
                    v2 = &v1;
                    v3 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v8 = struct24 {
                        field_0: "Could not fork process -> "
                        field_8: 1
                        field_16: 0
                    };
                    v9 = &v2;
                    v10 = 1;
                    log::__private_api_log(&v8, 1, "compat_core::program", 0);
                    if v1 as i8 >= 2 {
                        *(*(((&v1)[8] as i64 + 8) as &i64) as &i64)();
                    }
                } else if v1 as i8 >= 2 {
                    *(*(((&v1)[8] as i64 + 8) as &i64) as &i64)();
                }
            }
        }
        memcpy(&v4, a0, 200);
        v8 = compat_kernel::core::server::Server::build(0x4, 10, 16, &v4);
        if _ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3 {
            v4 = struct24 {
                field_0: "Compat: Auto"
                field_8: 1
                field_16: 0
            };
            v6 = &g_59a918;
            v7 = 0;
            log::__private_api_log(&v4, 3, "compat_core::program", 0);
        }
        if compat_core::unix::main(a0 + 208, &v8) as i32 {
            if !*((a0 + 200) as &i64) {
                return 1;
            } else if !*((a0 + 232) as &i64) {
                return 1;
            } else {
                v0 = v17;
                v18 = *((a0 + 248) as &i64);
                if !*((a0 + 240) as &i64) {
                    return 1;
                }
                return 1;
            }
        }
        compat_kernel::core::stats::Stats::render(&v8);
        if _ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3 {
            v4 = struct24 {
                field_0: "Exiting"
                field_8: 1
                field_16: 0
            };
            v6 = &g_59a918;
            v7 = 0;
            log::__private_api_log(&v4, 3, "compat_core::program", 0);
        }
        if !*((a0 + 200) as &i64) {
            goto LABEL_44181e;
        }
    } else {
        compat_log::use_console();
        compat_kernel::app::Context<A>::log_error();
        if !*((a0 + 200) as &i64) {
LABEL_44181e:
            return 0;
        }
    }
    if *((a0 + 232) as &i64) {
        v20 = *((a0 + 248) as &i64);
        v21 = *((a0 + 240) as &i64);
        if v21 && v21 * 24 {
            return 0;
        }
    }
    return 0;
}
