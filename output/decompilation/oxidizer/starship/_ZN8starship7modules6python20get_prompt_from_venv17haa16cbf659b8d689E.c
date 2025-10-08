fn starship::modules::python::get_prompt_from_venv(a0: i64, a1: void*, a2: u64) -> void {
    let v0: struct176;  // [bp-0x178]
    let v1: struct24;  // [bp-0x178], Other Possible Types: u64
    let v2: struct16;  // [bp-0xc8], Other Possible Types: u8
    let v3: u8;  // [bp-0xc0]
    let v5: struct24;  // rax
    let v6: u64;  // rdx
    let v8: &str;  // rax:rdx

    std::path::Path::join(&v2, a1, a2, "pyvenv.cfg");
    v0 = ini::Ini::load_from_file_opt(&v2, 1);
    if (((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    memcpy(&v3, &v0 as u8, 168);
    v2 = v0.field_0;
    v5 = ini::Properties::get(ini::Ini::general_section(&v2), "prompt");
    if !v5 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v8 = core::str::<impl str>::trim_matches(v5, v6, a2);
    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v8.data_ptr, a2);
    return struct24 {
        field_0: v1.field_0
        field_16: v1.field_16
    };
}
