fn starship::modules::pulumi::pulumi_home_dir() -> Option<struct24> {
    let a0: void*;  // rdi
    let v0: Option<struct24>;  // [bp-0x58]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u32;  // [bp-0x48]
    let v4: u8;  // [bp-0x40]
    let v5: struct24;  // [bp-0x28]

    v0 = starship::context_env::Env::get_env("PULUMI_HOME");
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
        return Some(struct24 {
            field_0: *(&v5.field_0 as &i128)
            field_16: v5.field_16
        });
    }
    starship::context::Context::get_home(&v4);
    if *(&v4 as &i64) != 0x8000000000000000 {
        starship::modules::pulumi::pulumi_home_dir::{{closure}}(a0, &v4);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
