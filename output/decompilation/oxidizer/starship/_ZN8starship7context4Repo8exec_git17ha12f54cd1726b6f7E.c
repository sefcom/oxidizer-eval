fn starship::context::Repo::exec_git(a0: u64, a1: i64, a2: i64, a3: u64) -> int {
    let v0: i64;  // [bp-0x228]
    let v1: u64;  // [bp-0x220]
    let v2: struct40;  // [bp-0x218]
    let v3: struct32;  // [bp-0x1f0], Other Possible Types: struct96, u8
    let v4: u8;  // [bp-0x1e8]
    let v5: i64;  // [bp-0x1e0]
    let v6: u64;  // [bp-0x1d8]
    let v7: void*;  // [bp-0x1d0]
    let v8: struct16;  // [sp-0x110], Other Possible Types: u64
    let v9: u8;  // [bp-0x108]
    let v11: u8;  // bl
    let v12: u128;  // xmm1

    starship::utils::create_command(&v3, "git");
    if (((0 ^ v3) & (0 ^ -(v3))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    memcpy(&v9, &v4, 216);
    v8 = v3;
    v11 = *((a1 + 904) as &i8);
    std::process::Command::env(&v8);
    v12 = *((a1 + 792) as &i128);
    v3 = struct96 {
        field_0: "-C"
        field_16: *((a2 + 184) as &i128)
        field_32: "--git-dir"
        field_48: v12
        field_64: "-c"
        field_80: (v11 ? &g_53547c : &g_53546d)
        field_88: v11 as u64 * 4 + 15
    };
    v8 = std::process::Command::args(&v3);
    if *((a1 + 832) as &i64) != 0x8000000000000000 {
        v3 = struct32 {
            field_0: "--work-tree"
            field_16: *((a1 + 840) as &i128)
        };
        v8 = std::process::Command::args(&v3);
    }
    v8 = std::process::Command::args(a3);
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v0 = &v8;
        v1 = <std::process::Command as core::fmt::Debug>::fmt;
        v3 = "Executing git command: ";
        v4 = 1;
        v7 = 0;
        v5 = &v0;
        v6 = 1;
        v2 = struct40 {
            field_0: "starship::context"
            field_16: "starship::context"
            field_32: log::__private_api::loc("src/context.rs")
        };
        log::__private_api::log(&v3, 5, &v2);
    }
    starship::utils::exec_timeout(a0, &v8, (*((a2 + 472) as &i64) >> 3) / 125, (*((a2 + 472) as &i64) - (*((a2 + 472) as &i64) >> 3) / 125 * 1000) * 1000000);
    return;
}
