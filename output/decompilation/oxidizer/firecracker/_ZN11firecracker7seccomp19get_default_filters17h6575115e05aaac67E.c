fn firecracker::seccomp::get_default_filters(a0: u64) -> int {
    let v0: struct9;  // [bp-0xa8]
    let v1: iNone;  // [bp-0x98]
    let v2: Result<struct48, struct40>;  // [bp-0x88]
    let v3: u128;  // [bp-0x80]
    let v4: iNone;  // [bp-0x70]
    let v5: struct32;  // [bp-0x60]
    let v6: struct48;  // [bp-0x58]

    v2 = vmm::seccomp::deserialize_binary();
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
