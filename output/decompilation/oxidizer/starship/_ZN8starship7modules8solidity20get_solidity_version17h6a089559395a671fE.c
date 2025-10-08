fn starship::modules::solidity::get_solidity_version(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: Option<struct48>;  // [bp-0x78]
    let v1: u128;  // [bp-0x70]
    let v2: struct24;  // [bp-0x68]
    let v3: struct16;  // [bp-0x60]
    let v4: struct24;  // [bp-0x50]
    let v5: u128;  // [bp-0x48]
    let v6: Option<struct48>;  // [bp-0x38]

    v3 = struct16 {
        field_0: a2
        field_8: a3 * 16 + a2
    };
    v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v3, a1);
    if !((((0 ^ v6 as i64) & (0 ^ -(v6 as i64))) >> 63) as char) {
        v4 = starship::utils::get_command_string_output(&v6);
        v1 = v5;
        v0 = v4.field_0 as i64;
        starship::modules::solidity::parse_solidity_version(a0, v1, v2);
        return;
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
