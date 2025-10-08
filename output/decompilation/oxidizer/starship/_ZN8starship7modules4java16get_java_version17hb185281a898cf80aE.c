fn starship::modules::java::get_java_version(a0: u64, a1: void*) -> int {
    let v0: Option<struct24>;  // [bp-0xb0]
    let v1: u64;  // [bp-0xb0]
    let v3: struct48;  // [bp-0x98]
    let v4: struct24;  // [bp-0x98]
    let v5: struct24;  // [bp-0x98]
    let v6: iNone;  // [bp-0x88]
    let v8: iNone;  // [bp-0x78]
    let v9: struct16;  // [bp-0x68], Other Possible Types: struct24
    let v11: struct32;  // [bp-0x48]
    let v12: Option<struct24>;  // [bp-0x38]
    let v13: struct24;  // [bp-0x28]
    let v15: struct16;  // eax

    v0 = starship::context_env::Env::get_env("JAVA_HOME");
    if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
        v5 = v1;
        v0 = starship::modules::java::get_java_version::{{closure}}(&v5);
        if let Some(_) = v0 {
            goto LABEL_ba3940;
        }
    }
    v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("java");
LABEL_ba3940:
    vvar_167{stack -152} = struct48 OrderedDict([(0, 𝜙@64b [((12204330, None), vvar_121{stack -152}), ((12204332, None), vvar_142{stack -152})]), (16, 𝜙@128b [((12204330, None), vvar_120{stack -136}), ((12204332, None), None)])])
    v15 = starship::context::Context::exec_cmd(&v3, a1, &v9);
    if v3.field_0 as i64 != 0x8000000000000000 {
        v13 = v8;
        v12 = v6;
        v11 = v3.field_0;
        v4 = starship::utils::get_command_string_output(&v11);
        starship::modules::java::parse_java_version(a0, v4.field_8, *((&v4.field_8 as &char + 8) as &i64));
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
