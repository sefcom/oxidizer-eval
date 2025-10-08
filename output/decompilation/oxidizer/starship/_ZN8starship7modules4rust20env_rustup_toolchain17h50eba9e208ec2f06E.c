fn starship::modules::rust::env_rustup_toolchain(a0: i64) -> int {
    let v0: struct40;  // [bp-0x68], Other Possible Types: u128
    let v1: struct72;  // [bp-0x60]
    let v2: struct24;  // [bp-0x58]
    let v3: struct24;  // [bp-0x38]
    let v4: Option<struct24>;  // [bp-0x38]
    let v5: struct40;  // [bp-0x30]
    let v6: struct16;  // [bp-0x28]
    let v7: struct24;  // [bp-0x20]
    let v9: u32;  // rdx
    let v11: &str;  // rax:rdx

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v3 = "Searching for rustup toolchain in environment.";
        v5 = 1;
        v6 = 8;
        v7 = 0;
        v0 = struct40 {
            field_0: "starship::modules::rust"
            field_16: "starship::modules::rust"
            field_32: log::__private_api::loc("src/modules/rust.rs")
        };
        log::__private_api::log(&v3, 5, &v0);
    }
    v4 = starship::context_env::Env::get_env("RUSTUP_TOOLCHAIN");
    if !((((0 ^ v4 as i64) & (0 ^ -(v3))) >> 63) as char) {
        v2 = v6;
        v0 = v4 as i128;
        v11 = core::str::<impl str>::trim_matches(v1, v6, v9);
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v11.data_ptr, v9);
        return struct24 {
            field_0: v3.field_48
            field_16: v6
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
