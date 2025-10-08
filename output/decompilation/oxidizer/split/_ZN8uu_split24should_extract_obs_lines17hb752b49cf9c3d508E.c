fn uu_split::should_extract_obs_lines(a0: i32, a1: i32, a2: i32, a3: i8) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v1: u32;  // [bp-0x24]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: &mut [u8];  // rax:rdx

    v0 = v3;
    v1 = 0;
    v5 = core::char::methods::encode_utf8_raw(45, &v1, a2);
    if core::slice::<impl [T]>::starts_with(a0, a1) && !((a2 | a3 | core::slice::<impl [T]>::starts_with(a0, a1)) & 1) && !core::slice::<impl [T]>::starts_with(a0, a1) && !core::slice::<impl [T]>::starts_with(a0, a1) && !core::slice::<impl [T]>::starts_with(a0, a1) && !core::slice::<impl [T]>::starts_with(a0, a1) && !core::slice::<impl [T]>::starts_with(a0, a1) {
        v4 = core::slice::<impl [T]>::starts_with(a0, a1);
        return v4 & -0x100 | v4 ^ 1;
    }
    return 0;
}
