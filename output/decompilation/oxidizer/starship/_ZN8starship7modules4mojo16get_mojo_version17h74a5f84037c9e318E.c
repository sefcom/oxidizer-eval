fn starship::modules::mojo::get_mojo_version(a0: i64, a1: void*) -> int {
    let v0: Option<struct48>;  // [bp-0xf8], Other Possible Types: struct16, struct17, struct24
    let v1: struct24;  // [bp-0xf8], Other Possible Types: u64
    let v2: core::str::pattern::CharSearcher;  // [bp-0xf0]
    let v3: struct40;  // [bp-0xe8], Other Possible Types: u64
    let v4: struct24;  // [bp-0xe0]
    let v5: Option<struct48>;  // [bp-0xd8]
    let v6: struct40;  // [bp-0xc8], Other Possible Types: u128
    let v7: struct16;  // [bp-0xb8], Other Possible Types: u64
    let v8: iNone;  // [bp-0xa8]
    let v9: u128;  // [bp-0x98]
    let v10: u64;  // [bp-0x88]
    let v11: Result<struct16, struct1>;  // [bp-0x78]
    let v12: struct40;  // [bp-0x68]
    let v13: u8;  // [bp-0x60]
    let v14: u64;  // [bp-0x58]
    let v15: struct24;  // [bp-0x50]
    let v16: i64;  // [bp-0x48]
    let v17: core::iter::adapters::chain::Chain<core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>, core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>>;  // [bp-0x40]
    let v18: struct24;  // [bp-0x38]
    let v20: Result<struct24, struct16>;  // r15
    let v21: Option<struct48>;  // xmm0
    let v22: struct24;  // r14
    let v23: u32;  // rdx
    let v25: u64;  // cc_ndep
    let v26: struct32;  // r15
    let v27: struct40;  // r12
    let v28: u32;  // rdx
    let v32: &str;  // rax:rdx
    let v33: &str;  // rax:rdx
    let v34: &str;  // rax:rdx

    v20 = 0x8000000000000000;
    v0 = starship::context::Context::exec_cmd(a1, "mojo", "--version", 1);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v21 = v0 as i128;
    v8 = *((&v0 as &char + 32) as &i128);
    v7 = *((&v0 as &char + 16) as &i128);
    *(&v6 as &Option<struct48>) = v21;
    *(&v9 as &Option<struct48>) = v21;
    v10 = v7;
    v0 = struct17 {
        field_0: *((&v9 as &char + 8) as &i128)
        field_16: 0
    };
    core::iter::traits::iterator::Iterator::collect(&v13, &v0);
    v22 = v14;
    if v15 == 2 {
        v33 = core::str::<impl str>::trim_matches(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v23);
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33.data_ptr, v23);
        v12 = v3;
        v11 = v0.field_0;
    } else if !(_ccall(6, 8, v15, 2, v25) as char) {
        v26 = *((v22 + 32) as &i64);
        v27 = *((v22 + 40) as &i64);
        v32 = core::str::<impl str>::trim_matches(*((v22 + 16) as &i64), *((v22 + 24) as &i64), v28);
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v32.data_ptr, v28);
        v7 = v3;
        v6 = v0.field_0;
        v34 = core::str::<impl str>::trim_matches(v26, v27, v28);
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v34.data_ptr, v28);
        v20 = v1.field_0 as i64;
        v18 = *((&v1.field_0 as &char + 8) as &i128);
        v11 = v6;
        v12 = v7;
    } else {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 4 {
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
        v16 = &v9;
        v17 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = "Unexpected `mojo --version` output: ";
        v2 = 1;
        v5 = 0;
        v3 = &v16;
        v4 = 1;
        v6 = struct40 {
            field_0: "starship::modules::mojo"
            field_16: "starship::modules::mojo"
            field_32: log::__private_api::loc("src/modules/mojo.rs")
        };
        log::__private_api::log(&v0, 4, &v6);
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    return struct48 {
        field_0: v11
        field_16: v12
        field_24: v20
        field_32: v18
    };
}
