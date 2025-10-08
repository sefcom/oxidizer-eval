fn starship::modules::kubernetes::get_kube_ctx_components(a0: i64, a1: void*, a2: u64, a3: u64) -> int {
    let v0: struct16;  // [bp-0x88], Other Possible Types: u64
    let v1: struct8;  // [bp-0x78]
    let v2: struct72;  // [bp-0x78]
    let v3: struct16;  // [bp-0x70]
    let v4: &str;  // [bp-0x68], Other Possible Types: char
    let v5: iNone;  // [bp-0x58]
    let v6: struct24;  // [bp-0x48]
    let v8: struct24;  // rax
    let v9: struct72;  // rax
    let v10: struct16;  // xmm0

    v8 = <yaml_rust2::yaml::Yaml as starship::modules::kubernetes::DataValue>::get(a1, "contexts");
    if v8 {
        v1 = <yaml_rust2::yaml::Yaml as starship::modules::kubernetes::DataValue>::as_array(v8);
        if v1 != 0x8000000000000000 {
            v0 = struct16 {
                field_0: v3
                field_8: v0 + *(&v4 as &i64) * 8
            };
            v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(&v0, a2, a3);
            if !v9 {
                return struct8 {
                    field_0: 9223372036854775809
                };
            }
            v2 = starship::modules::kubernetes::get_kube_ctx_components::{{closure}}(*(v9 as &i64));
            v10 = *(&v2.field_0 as &i128);
            return struct72 {
                field_0: v10
                field_16: v4
                field_32: v5
                field_48: v6
                field_64: v2.field_64
            };
        }
    }
    return struct8 {
        field_0: 9223372036854775809
    };
}
