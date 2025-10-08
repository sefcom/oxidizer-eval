fn starship::modules::python::get_pyenv_version(a0: i64, a1: void*) -> int {
    let v0: Option<struct24>;  // [bp-0xb8]
    let v5: struct24;  // [bp-0x78]
    let v6: Option<struct48>;  // [bp-0x78]
    let v7: u128;  // [bp-0x68]
    let v8: iNone;  // [bp-0x58]
    let v9: u128;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: core::option::Option<&str>;  // [bp-0x38]
    let v12: Result<struct72, struct24>;  // [bp-0x28]
    let v14: u32;  // rdx
    let v16: &str;  // rax:rdx

    v0 = starship::context_env::Env::get_env("PYENV_VERSION");
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        v6 = starship::context::Context::exec_cmd(a1, "pyenv", "version-name", 1);
        match v6 {
            None => {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            },
            Some(_) => {
                v12 = v8;
                v11 = v7;
                v9 = v6 as i128 as u128;
                v16 = core::str::<impl str>::trim_matches(v10, v11 as i64, v14);
                v5 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16.data_ptr, v14);
            },
        }
    }
    return v0;
}
