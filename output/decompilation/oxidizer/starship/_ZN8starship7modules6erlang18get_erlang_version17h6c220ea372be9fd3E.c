fn starship::modules::erlang::get_erlang_version(a0: i64, a1: void*) -> int {
    let v0: Option<struct48>;  // [bp-0x68]
    let v1: struct24;  // [bp-0x68]
    let v2: u128;  // [bp-0x58]
    let v3: u128;  // [bp-0x48]
    let v4: u128;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v6: struct40;  // [bp-0x28]
    let v7: struct40;  // [bp-0x18]
    let v9: u32;  // rdx
    let v11: &str;  // rax:rdx

    v0 = starship::context::Context::exec_cmd(a1, "erl", "-noshell", 3);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        v7 = v3;
        v6 = v2;
        v4 = v0 as i128;
        v11 = core::str::<impl str>::trim_matches(v5, v6.field_0, v9);
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11.data_ptr, v9);
        return struct24 {
            field_0: *(&v1.field_0 as &i128)
            field_16: v1.field_16
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
