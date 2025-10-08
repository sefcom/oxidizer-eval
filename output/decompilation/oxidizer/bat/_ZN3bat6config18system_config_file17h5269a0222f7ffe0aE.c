fn bat::config::system_config_file(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x28]
    let v1: struct16;  // [bp-0x28]

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/etc");
    v1 = std::path::PathBuf::push("bat");
    v1 = std::path::PathBuf::push("config");
    return struct24 {
        field_0: v1
        field_16: v0.field_16
    };
}
