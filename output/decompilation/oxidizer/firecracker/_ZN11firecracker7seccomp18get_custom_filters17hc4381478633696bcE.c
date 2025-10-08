fn firecracker::seccomp::get_custom_filters(a0: u64, a1: u32) -> int {
    let v0: struct24;  // [bp-0xe8]
    let v1: iNone;  // [bp-0xd8]
    let v2: Result<struct48, struct40>;  // [bp-0xc8]
    let v3: u128;  // [bp-0xc0]
    let v4: iNone;  // [bp-0xb0]
    let v5: u64;  // [bp-0xa0]
    let v6: struct48;  // [bp-0x98]
    let v7: struct44;  // [bp-0x40]

    v7 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a1);
    v2 = vmm::seccomp::deserialize_binary(&v7);
    v0 = v3;
    v1 = v4;
    match v2 {
        Err(_) => {
            return struct40 {
                field_0: 0
                field_8: v0
                field_24: v1
            };
        },
        Ok(_) => {
            v6 = struct48 {
                field_0: v2 as i64
                field_8: v0
                field_24: v1
                field_40: v5
            };
            firecracker::seccomp::filter_thread_categories(a0, &v6);
            return;
        },
    }
}
