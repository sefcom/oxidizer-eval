fn just::signals::Signals::new() -> : struct104 {
    let a0: i64;  // rdi
    let v0: struct8;  // [bp-0x208], Other Possible Types: u64
    let v1: u32;  // [bp-0x204]
    let v2: struct32;  // [bp-0x168]
    let v3: core::fmt::Arguments;  // [bp-0x158]
    let v4: core::fmt::rt::Argument;  // [bp-0x148]
    let v5: core::fmt::rt::Argument;  // [bp-0x138]
    let v6: struct16;  // [bp-0x128]
    let v7: core::fmt::rt::Argument;  // [bp-0x118]
    let v8: struct32;  // [bp-0x108]
    let v9: iNone;  // [bp-0xf8]
    let v10: u128;  // [bp-0xe8]
    let v11: core::fmt::rt::Argument;  // [bp-0xd8]
    let v12: u128;  // [bp-0xc8]
    let v13: u64;  // [bp-0xb8]
    let v14: struct140;  // [bp-0xb0]
    let v16: core::option::Option<&str>;  // rbx
    let v17: Result<struct8, struct4>;  // rax

    v16 = nix::unistd::pipe();
    if v16 as u32 == -1 {
        return struct24 {
            field_0: 45
            padding_1: <UNKNOWN>
            field_4: <UNKNOWN>
            field_12: <UNKNOWN>
        };
    } else if !core::sync::atomic::atomic_compare_exchange(v16 >> 32) {
        nix::sys::signal::SigSet::empty(&v0);
        v14 = nix::sys::signal::SigAction::new(&v0);
        v0 = nix::sys::signal::sigaction(0x1, &v14);
        if v0.field_0 != 1 {
            v0 = nix::sys::signal::sigaction(0x2, &v14);
            if !(v0.field_0 as i8 & 1) {
                v0 = nix::sys::signal::sigaction(0x3, &v14);
                if !(v0.field_0 as i8 & 1) {
                    v0 = nix::sys::signal::sigaction(0xf, &v14);
                    if !(v0.field_0 as i8 & 1) {
                        return struct8 {
                            field_0: 56
                            padding_1: <UNKNOWN>
                            field_4: v16 as u32
                        };
                    }
                }
            }
        }
        v2 = v8;
        v3 = v9;
        v4 = v10;
        v5 = v11;
        v6 = v12;
        v7 = v13;
        return struct104 {
            field_0: v17
            field_8: v1 as u64 * 0x100000000 | 2
            field_16: v8
            field_32: v9
            field_48: v10
            field_64: v11
            field_80: v12
            field_96: v13
        };
    } else {
        panic!("signal iterator cannot be initialized twice");
    }
}
