fn uu_stty::apply_setting(a0: i64, a1: &mut [u8]) -> u64 {
    let v0: u32;  // [bp-0x2c]
    let v2: u64;  // rsi
    let v3: u64;  // rdx
    let v4: u64;  // rax
    let v6: core::option::Option<&str>;  // rax
    let v7: u64;  // r12
    let v8: u64;  // rbx
    let v9: u64;  // r15
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: &mut [u8];  // rax:rdx

    v4 = uu_stty::apply_baud_rate_flag(a0, v2, v3);
    if v4 != 2 {
        return v4 & -0x100 | 1;
    }
    v0 = 0;
    v14 = core::char::methods::encode_utf8_raw(&v0 as u32, v2, v3);
    v6 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v14.data_ptr, a1, v3) as u64;
    v7 = v6;
    match v6 {
        Some(_) => {
            v8 = v6;
        },
        None => {
            v8 = v2;
        },
    }
    v10 = uu_stty::apply_flag(a0, v8, v9, v6);
    if v10 != 2 {
        return v10;
    }
    v11 = uu_stty::apply_flag(a0, v8, v9, v7);
    if v11 != 2 {
        return v11;
    }
    v12 = uu_stty::apply_flag(a0, v8, v9, v7);
    if v12 != 2 {
        return v12;
    }
    v13 = uu_stty::apply_flag(a0, v8, v9, v7);
    return v13 & -0x100 | v13 & 1;
}
