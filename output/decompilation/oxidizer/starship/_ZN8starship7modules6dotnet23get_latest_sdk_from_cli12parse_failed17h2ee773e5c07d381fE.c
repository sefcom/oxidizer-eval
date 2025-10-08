fn starship::modules::dotnet::get_latest_sdk_from_cli::parse_failed() -> : struct8 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x60]
    let v1: struct40;  // [bp-0x38]

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
        v1 = struct40 {
            field_0: "Unable to parse the output from `dotnet --list-sdks`."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v0 = struct40 {
            field_0: "starship::modules::dotnet"
            field_16: "starship::modules::dotnet"
            field_32: log::__private_api::loc("src/modules/dotnet.rs")
        };
        log::__private_api::log(&v1, 2, &v0);
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
