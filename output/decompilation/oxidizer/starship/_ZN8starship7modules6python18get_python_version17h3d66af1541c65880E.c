fn starship::modules::python::get_python_version(a0: i64, a1: u64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x78]
    let v1: u192;  // [bp-0x78]
    let v2: struct16;  // [bp-0x70]
    let v3: struct16;  // [bp-0x60]
    let v4: struct24;  // [bp-0x50]
    let v5: Option<struct48>;  // [bp-0x38]

    v3 = struct16 {
        field_0: a2
        field_8: a2 + a3 * 24
    };
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v3, a1);
    if !((((0 ^ v5 as i64) & (0 ^ -(v5 as i64))) >> 63) as char) {
        v0 = starship::utils::get_command_string_output(&v5);
        v4 = v1;
        starship::modules::python::get_python_version::{{closure}}(&v0, &v4);
        return struct24 {
            field_0: v0.field_0 as i64
            field_8: v2
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
