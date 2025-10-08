fn starship::modules::helm::parse_helm_version(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x58]
    let v1: struct16;  // [bp-0x48]
    let v2: core::option::Option<(&str, &str)>;  // [bp-0x40]
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v7: &str;  // rax:rdx

    v2 = core::str::<impl str>::split_once(a1, a2, 43);
    v4 = core::option::Option<T>::map_or(&v2, a1);
    v7 = core::str::<impl str>::trim_matches(core::str::<impl str>::trim_start_matches(core::str::<impl str>::trim_start_matches(v4, v5, "Client: "), v5), v5, a2);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7.data_ptr, a2);
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
    };
}
