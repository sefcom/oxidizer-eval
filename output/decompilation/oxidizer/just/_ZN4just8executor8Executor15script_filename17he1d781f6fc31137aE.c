fn just::executor::Executor::script_filename(a0: u64, a1: void*, a2: i64, a3: u64, a4: u64, a5: i64) -> long long {
    let v0: struct16;  // [bp-0x78]
    let v1: u64;  // [bp-0x68]
    let v2: i64;  // [bp-0x60]
    let v4: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // 4096
    let v5: i64;  // 4096
    let v6: i64;  // rdx

    v0 = struct16 {
        field_0: a2
        field_8: a3
    };
    v4 = a2;
    v5 = a5;
    if !a4 {
        a4 = just::executor::Executor::script_filename::{{closure}}(a1);
        v4 = v6;
        v5 = v6;
    }
    v1 = a4;
    v2 = v5;
    return format!("{}{}", &v0, &v1);
}
