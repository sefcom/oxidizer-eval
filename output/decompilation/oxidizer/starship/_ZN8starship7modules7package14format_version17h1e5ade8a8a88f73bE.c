fn starship::modules::package::format_version(a1: &str, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u128;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: struct92;  // [bp-0x58]
    let v3: struct24;  // [bp-0x50]
    let v4: i64;  // [bp-0x48]
    let v5: u64;  // [bp-0x40]
    let v6: struct24;  // [bp-0x38]
    let v8: u64;  // rsi
    let v9: u32;  // rdx
    let v12: &str;  // rax:rdx

    v3 = alloc::str::<impl str>::replace(v8, v9, 34, 1, 0);
    v12 = core::str::<impl str>::trim_matches(v4, v5, v9);
    v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_start_matches(v12.data_ptr, v12.length), v9);
    v2 = v6.field_16;
    v0 = v6.field_0;
    starship::formatter::version::VersionFormatter::format_module_version(a0, "package", v1, v2, a2, a3);
    return;
}
