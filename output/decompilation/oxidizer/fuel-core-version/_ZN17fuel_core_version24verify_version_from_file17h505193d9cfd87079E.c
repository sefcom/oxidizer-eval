fn fuel_core_version::verify_version_from_file(a0: &u64) -> long long {
    let v0: struct40;  // [bp-0xa8]
    let v1: u128;  // [bp-0x78]
    let v2: u128;  // [bp-0x68]
    let v3: void*;  // [bp-0x58]
    let v4: alloc::string::String;  // [bp-0x28]
    let v6: void*;  // r14

    v0 = struct40 {
        field_0: 340282366920938463463374607431768211455
        field_16: 0x2e0000000000000000
        field_32: 0
    };
    if <semver::Version as core::cmp::PartialEq>::eq(a0, &v0) {
        println!("fuel_core versions in versions.rs and Cargo.toml match ({})", a0);
    } else {
        v2 = 0x2e0000000000000000;
        v1 = 340282366920938463463374607431768211455;
        v3 = 0;
        v4 = format!("fuel_core version in version.rs ({}) doesn't match one in Cargo.toml ({})", &v1 as u8, a0);
        v6 = eyre::error::<impl eyre::Report>::from_adhoc(&v4);
    }
    return v6;
}
