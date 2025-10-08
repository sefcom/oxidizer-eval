fn bat::invoke_bugreport(a0: u64, a1: u64, a2: u64) -> void {
    let v0: Option<struct24>;  // [bp-0x1a8], Other Possible Types: Result<struct40, struct16>, struct24, struct72, u128
    let v1: u64;  // [bp-0x1a8]
    let v2: u128;  // [bp-0x198]
    let v3: u128;  // [bp-0x188]
    let v4: u128;  // [bp-0x178]
    let v5: u64;  // [bp-0x168]
    let v6: struct72;  // [bp-0x158]
    let v7: struct48;  // [bp-0x158], Other Possible Types: struct72, struct40
    let v8: struct16;  // [bp-0x158]
    let v9: u128;  // [bp-0x148]
    let v10: u128;  // [bp-0x138]
    let v11: u128;  // [bp-0x128]
    let v12: u64;  // [bp-0x118]
    let v13: iNone;  // [bp-0x108], Other Possible Types: struct24, struct72
    let v15: u64;  // [bp-0xf8]
    let v16: struct24;  // [bp-0xb8]
    let v19: std::path::PathBuf;  // [bp-0x98], Other Possible Types: struct16
    let v20: u64;  // [bp-0x88]
    let v21: struct32;  // [bp-0x80]
    let v22: struct64;  // [bp-0x60]
    let v24: i64;  // rax
    let v25: void*;  // rsi
    let v26: std::io::stdio::Stdout;  // rdx

    v0 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "pager");
    v24 = clap_builder::parser::error::MatchesError::unwrap("pager", &v0);
    v0 = bat::config::get_pager_executable(v25, v26);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v16 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("less");
    }
    v19 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
    v19 = std::path::PathBuf::push("metadata.yaml");
    v0 = struct72 {
        field_0: 0
        field_8: ""
        field_24: "bat"
        field_40: "0.25.0"
        field_56: "v0.25.0-285-g2c87b948"
    };
    v6 = 0x8000000000000000;
    v13 = bugreport::BugReport::info(&v0, &v6 as u128);
    v0 = bugreport::BugReport::info(&v13);
    v13 = bugreport::BugReport::info(&v0);
    bugreport::collector::EnvironmentVariables::list(&v6 as u128);
    v0 = bugreport::BugReport::info(&v13, &v6 as u128);
    v13 = bat::config::system_config_file();
    v7 = bugreport::collector::FileContent::new("System Config file", &v13);
    v13 = bugreport::BugReport::info(&v0, &v7);
    v0 = bat::config::config_file();
    v7 = bugreport::collector::FileContent::new("Config file", &v0);
    v0 = bugreport::BugReport::info(&v13, &v7);
    v15 = v20;
    v13 = v19;
    v7 = bugreport::collector::FileContent::new("Custom assets metadata", &v13);
    v13 = bugreport::BugReport::info(&v0, &v7);
    v7 = bugreport::collector::directory_entries::DirectoryEntries::new(a1, a2);
    v0 = bugreport::BugReport::info(&v13, &v7);
    v7 = bugreport::BugReport::info(&v0);
    v21 = grep_cli::decompress::resolve_binary(&v16);
    if !v21.field_0 {
        v5 = v12;
        v4 = v11;
        v3 = v10;
        v2 = v9;
        v0 = *(&v7.field_0 as &i128);
        v22 = bugreport::collector::CommandOutput::new(&v21 as u8);
        v13 = bugreport::BugReport::info(&v0, &v22);
    }
    bugreport::BugReport::print(&v8);
    return;
}
