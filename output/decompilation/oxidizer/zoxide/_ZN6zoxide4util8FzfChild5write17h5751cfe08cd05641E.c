fn zoxide::util::FzfChild::write(a0: u64, a1: i64, a2: u64, a3: u64) -> int {
    let v0: u64;  // [bp-0x80]
    let v1: struct16;  // [bp-0x78], Other Possible Types: u64
    let v2: Result<struct24, struct16>;  // [bp-0x78], Other Possible Types: core::fmt::Arguments
    let v3: u64;  // [bp-0x68]
    let v4: core::fmt::rt::Argument;  // [bp-0x48]
    let v5: u128;  // [bp-0x48]
    let v6: u64;  // [bp-0x38]
    let v7: u64;  // [bp-0x30]
    let v8: u64;  // [bp-0x28]
    let v9: u32;  // [bp-0x20]
    let v11: u64;  // rax
    let v12: u64;  // r15

    if *((a1 + 16) as &i32) == -1 {
        core::option::unwrap_failed(); /* do not return */
    }
    v6 = 1;
    v7 = a3;
    v8 = a2;
    v9 = 9;
    v4 = core::fmt::rt::Argument {
        ty: &v6
    };
    v2 = core::fmt::Arguments {
        pieces: [&g_5348e0, "\x00"]
        args: [v5]
        fmt: 0
    };
    v11 = std::io::Write::write_fmt(a1 + 16, &v2);
    if !v11 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v12 = v11;
    if std::io::error::Error::kind(v11) as u8 != 11 {
        anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a0, &v1 as u64);
        return;
    }
    v0 = v12;
    v2 = zoxide::util::FzfChild::wait(a1);
    if !((((0 ^ v2 as i64) & (0 ^ -(v1))) >> 63) as char) {
        return struct24 {
            field_0: v2 as i128
            field_16: v3
        };
    }
    return struct16 {
        field_0: 9223372036854775809
        field_8: 2
    };
}
