fn uu_whoami::platform::unix::get_username(a0: i64) -> long long {
    let v0: struct24;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: Result<struct128, struct16>;  // [bp-0x88]
    let v9: u64;  // rax
    let v10: u64;  // rcx
    let v11: u64;  // rcx
    let v12: u64;  // rax

    v3 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(uucore::features::process::geteuid());
    v0 = uucore::features::entries::uid2usr::{{closure}}(&v3);
    v9 = v0.field_0;
    v10 = v1;
    return struct24 {
        field_0: v12
        field_8: v11
        field_16: v2
    };
}
