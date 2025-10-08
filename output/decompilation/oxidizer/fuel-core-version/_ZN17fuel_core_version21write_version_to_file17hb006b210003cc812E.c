fn fuel_core_version::write_version_to_file(a0: i64, a1: void*) -> long long {
    let v0: u64;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb0]
    let v2: u64;  // [bp-0xa8]
    let v3: alloc::string::String;  // [bp-0xa0]
    let v5: u64;  // rax

    v0 = *((a0 + 16) as &i64);
    v1 = *((a0 + 24) as &i64);
    v2 = *((a0 + 32) as &i64);
    v3 = format!("Version::new({}, {}, {})", &v0, &v1, &v2);
    v5 = std::fs::write(a1, v3);
    return (!v5 ? 0 : eyre::error::<impl eyre::Report>::from_std(v5, "scripts/fuel-core-version/src/main.rs"));
}
