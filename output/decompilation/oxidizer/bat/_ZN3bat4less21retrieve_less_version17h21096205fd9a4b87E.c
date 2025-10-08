fn bat::less::retrieve_less_version(a0: u64) -> long long {
    let v0: struct24;  // [bp-0x180]
    let v1: u128;  // [bp-0x178]
    let v2: u64;  // [bp-0x170]
    let v3: struct24;  // [bp-0x168]
    let v4: i64;  // [bp-0x160]
    let v5: u128;  // [bp-0x158]
    let v6: Result<struct52, struct16>;  // [bp-0x148], Other Possible Types: u128
    let v7: iNone;  // [bp-0x140]
    let v8: struct24;  // [bp-0x130]
    let v9: struct24;  // [bp-0x108]
    let v10: struct16;  // [bp-0xf0], Other Possible Types: struct224, struct8
    let v11: u64;  // [bp-0xe8]
    let v12: i8;  // [bp-0xe0]
    let v15: u32;  // rdx
    let v16: struct16;  // rax
    let v18: &std::ffi::os_str::OsStr;  // rax:rdx

    v18 = std::ffi::os_str::<impl core::convert::AsRef<std::ffi::os_str::OsStr> for alloc::string::String>::as_ref(a0);
    v10 = grep_cli::decompress::resolve_binary(v18.data_ptr, v15);
    if (v10.field_0 as i8 & 1) {
        return 2;
    }
    v6 = *(&v12 as &i128);
    if !((((0 ^ v11) & (0 ^ -(v11))) >> 63) as char) {
        v9 = struct24 {
            field_0: v11
            field_8: v6
        };
        v10 = std::process::Command::new(&v9);
        v10 = std::process::Command::arg("--version");
        v6 = std::process::Command::output(&v10);
        v16 = v6 as i64;
        if v16 != 0x8000000000000000 {
            v5 = *((&v6 as &char + 40) as &i128);
            v3 = v8;
            *(&v1 as void*) = v7;
            v0 = v16;
            return (!*((&v5 as &char + 8) as &i32) ? bat::less::parse_less_version(v1 as i64, v2) : bat::less::parse_less_version_busybox(v4, v5 as i64));
        }
    }
    return 2;
}
