fn uu_split::platform::unix::WithEnvVarSet::new(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x50]
    let v1: u128;  // [bp-0x40]
    let v2: struct24;  // [bp-0x30]
    let v4: u64;  // rax

    v0 = std::env::var("FILE");
    std::env::set_var(a1, a2);
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("FILE");
    v4 = v2.field_16;
    return struct56 {
        field_0: v0 as i128
        field_16: v1
        field_32: *(&v2.field_0 as &i128)
        field_48: v4
    };
}
