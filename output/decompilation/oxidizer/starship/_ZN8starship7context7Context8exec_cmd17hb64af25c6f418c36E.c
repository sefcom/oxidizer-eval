fn starship::context::Context::exec_cmd(a0: u64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u32) -> int {
    let v0: u64;  // [bp-0x220]
    let v1: u64;  // [bp-0x210]
    let v2: i64;  // [bp-0x200]
    let v3: u64;  // [bp-0x1f8]
    let v4: i64;  // [bp-0x1f0]
    let v5: u64;  // [bp-0x1e8]
    let v6: struct16;  // [bp-0x1e0], Other Possible Types: struct17, struct40
    let v7: u64;  // [bp-0x1d8]
    let v8: struct224;  // [bp-0x100]
    let v9: u64;  // [bp-0x100]
    let v10: u64;  // [bp-0x100]
    let v11: u64;  // [bp-0xf8]
    let v12: i64;  // [bp-0xf0]
    let v13: u64;  // [bp-0xe8]
    let v14: &mut [u8];  // [bp-0xe0]
    let v16: u64;  // 4096

    v0 = a2;
    v1 = a4;
    v16 = a2;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v2 = &v0;
        v3 = <&T as core::fmt::Debug>::fmt;
        v4 = &v1;
        v5 = <&T as core::fmt::Debug>::fmt;
        v10 = "Executing command ";
        v11 = 3;
        v14 = 0;
        v12 = &v2;
        v13 = 2;
        v6 = struct40 {
            field_0: "starship::context"
            field_16: "starship::context"
            field_32: log::__private_api::loc("src/context.rs")
        };
        log::__private_api::log(&v10, 5, &v6);
        v16 = v0;
    }
    vvar_181{stack -256} = struct224 OrderedDict([(0, 𝜙@64b [((11986350, None), vvar_156{stack -256}), ((11986156, None), None)])])
    starship::utils::create_command(&v8, v16, a3);
    if !((((0 ^ v8.field_0) & (0 ^ -(v9))) >> 63) as char) {
        memcpy(&v7, &v8 as u64, 216);
        v6 = v8.field_0;
        std::process::Command::args(&v6, v1, a5);
        v6 = std::process::Command::current_dir(a1 + 176);
        starship::utils::exec_timeout(a0, &v6, (*((a1 + 472) as &i64) >> 3) / 125, (*((a1 + 472) as &i64) - (*((a1 + 472) as &i64) >> 3) / 125 * 1000) * 1000000);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
