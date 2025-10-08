fn starship::modules::pixi::get_pixi_version(a0: i64, a1: u64, a2: u32, a3: u64) -> int {
    let v0: core::option::Option<(&str, &str)>;  // [bp-0x88], Other Possible Types: struct24
    let v1: u64;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: struct40;  // [bp-0x68]
    let v4: u128;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: struct16;  // [bp-0x50]
    let v7: Option<struct48>;  // [bp-0x40]
    let v10: &str;  // rax:rdx

    v6 = struct16 {
        field_0: a2
        field_8: a3 * 16 + a2
    };
    v7 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find_map(&v6, a1);
    if (((0 ^ v7 as i64) & (0 ^ -(v7 as i64))) >> 63) as char {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    v0 = starship::utils::get_command_string_output(&v7);
    v4 = *((&v0.field_0 as &char + 8) as &i128);
    v3 = v0.field_0 as i64;
    v0 = core::str::<impl str>::split_once(v4 as i64, v5, 32);
    match v0 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v10 = core::str::<impl str>::trim_matches(v1, v2, a2);
            v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10.data_ptr, a2);
            return struct24 {
                field_0: v0.field_0
                field_16: v1
            };
        },
    }
}
