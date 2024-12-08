fn uu_uniq::should_extract_obs_skip_fields(a0: u32, a1: u32, a2: u8, a3: u8) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: struct4;  // [bp-0x24]
    let v3: u64;  // rax
    let v4: u64;  // rdx
    let v6: u64;  // rax

    v0 = v3;
    v1 = struct4 {
        field_0: 0
        field_1: 0
        field_2: <UNKNOWN>
        field_3: <UNKNOWN>
    };
    if core::slice::<impl [T]>::starts_with(a0, a1, core::char::methods::encode_utf8_raw(45, &v1), v4) as i8 {
        if core::slice::<impl [T]>::starts_with(a0, a1, "--") as i32 {
            return 0;
        } else if a2 {
            return 0;
        } else if a3 {
            return 0;
        } else if !core::slice::<impl [T]>::starts_with(a0, a1, "-s") as i8 && !core::slice::<impl [T]>::starts_with(a0, a1, "-f") as i8 {
            v6 = core::slice::<impl [T]>::starts_with(a0, a1, "-w");
            return v6 | -0x100 | v6 ^ 1;
        }
    }
    return 0;
}
