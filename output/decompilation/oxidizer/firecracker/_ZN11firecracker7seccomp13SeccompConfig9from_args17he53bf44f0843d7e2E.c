fn firecracker::seccomp::SeccompConfig::from_args(a0: i64, a1: u32, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x18]
    let v1: u32;  // [bp-0x14]
    let v2: u64;  // [bp-0x10]
    let v4: u64;  // rbx

    if a1 {
        return struct8 {
            field_0: 21
            padding_1: <UNKNOWN>
            field_4: 0
        };
    } else if a2 {
        v0 = struct24 {
            field_0: std::fs::File::open(a2)
            field_16: v4
        };
        match v0 {
            Ok(_) => {
                return struct12 {
                    field_0: 21
                    padding_1: <UNKNOWN>
                    field_4: 2
                    field_8: v1
                };
            },
            Err(_) => {
                return struct16 {
                    field_0: 20
                    padding_1: <UNKNOWN>
                    field_8: v2
                };
            },
        }
    } else {
        return struct8 {
            field_0: 21
            padding_1: <UNKNOWN>
            field_4: 1
        };
    }
}
