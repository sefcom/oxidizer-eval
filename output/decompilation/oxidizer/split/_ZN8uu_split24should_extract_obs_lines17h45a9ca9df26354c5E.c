fn uu_split::should_extract_obs_lines(a0: u32, a1: u32, a2: u8, a3: u8) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: struct1;  // [bp-0x24]
    let v3: u64;  // rax
    let v5: u64;  // rax

    v0 = v3;
    v1 = struct1 {
        field_0: 0
    };
    if core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(&v1), 1) as i8 {
        if core::slice::<impl [T]>::starts_with(a0, a1, "--") as i32 {
            return 0;
        } else if a2 {
            return 0;
        } else if a3 {
            return 0;
        } else if !core::slice::<impl [T]>::starts_with(a0, a1, "-a") as i8 && !core::slice::<impl [T]>::starts_with(a0, a1, "-b") as i8 && !core::slice::<impl [T]>::starts_with(a0, a1, "-C") as i8 && !core::slice::<impl [T]>::starts_with(a0, a1, "-l") as i8 && !core::slice::<impl [T]>::starts_with(a0, a1, "-n") as i8 {
            v5 = core::slice::<impl [T]>::starts_with(a0, a1, "-t");
            return v5 & -0x100 | v5 ^ 1;
        }
    }
    return 0;
}
