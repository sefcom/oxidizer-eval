fn just::executor::Executor::command(a0: i64, a1: i64, a2: i64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u32, a8: u32) -> long long {
    let v0: struct224;  // [bp-0x110]
    let v1: struct157;  // [bp-0x110], Other Possible Types: struct16, struct17
    let v2: struct16;  // [bp-0x110]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: i64;  // r12
    let v6: u64;  // r12
    let v7: struct224;  // rbp
    let v8: struct224;  // rbp
    let v9: u64;  // rbp

    if *(a1 as &i64) {
        v3 = just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::set_execute_permission(a3, a4);
        if v3 {
            *((a0 + 8) as &i8) = 49;
            *((a0 + 16) as &u64) = a5;
            *((a0 + 24) as &u64) = a6;
            *((a0 + 32) as &u64) = v3;
        }
        v0 = just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::make_shebang_command(a1, a3, a4, a4, a7, a8);
        if v0.field_0 == 0x8000000000000000 {
            v4 = a6;
            return struct48 {
                field_0: 0x8000000000000000
                field_8: 14
                field_16: a5
                field_24: a6
                field_32: *(&(&v0)[1] as &i128)
            };
        }
    } else {
        v5 = *((a1 + 8) as &i64);
        v1 = std::process::Command::new(v5 + 24);
        if a7 {
            v1 = std::process::Command::current_dir(a7, a8);
        }
        if *((v5 + 16) as &i64) {
            do {
                v8 = v7;
                v1 = std::process::Command::arg(v6);
                v6 += 48;
                v9 = v8 - 48;
                v7 = v9;
            } while (v8 != 48);
        }
        v2 = std::process::Command::arg(a3, a4);
    }
    return memcpy(a0, &v0, 224);
}
