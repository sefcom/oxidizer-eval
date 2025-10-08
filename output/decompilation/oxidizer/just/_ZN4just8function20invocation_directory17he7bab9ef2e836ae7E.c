fn just::function::invocation_directory(a0: u64, a1: i64, a2: u64, a3: u32) -> long long {
    let v0: struct32;  // [bp-0x48]
    let v1: struct24;  // [bp-0x40]
    let v2: struct24;  // [bp-0x28]
    let v4: struct32;  // xmm0

    v0 = just::platform::unix::<impl just::platform_interface::PlatformInterface for just::platform::Platform>::convert_native_path(a1, a2, a3, *((*(*(a1 as &i64) as &i64) + 32) as &i64), *((*(*(a1 as &i64) as &i64) + 40) as &i64));
    if v0.field_0 as i32 != 1 {
        v4 = *(&v0.field_0 as &i128);
        return struct32 {
            field_0: v4
            field_16: v0.field_16
        };
    }
    v2 = v1;
    just::function::invocation_directory::{{closure}}(a0 + 8, &v2, a2);
    return struct8 {
        field_0: 1
    };
}
