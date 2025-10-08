fn starship::modules::rust::format_toolchain(a0: &struct24, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: struct24;  // [bp-0x20]
    let v3: u64;  // rax

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::option::Option<T>::map_or(a3, a4, a1, a2, a1, a2), a2);
    v3 = v0.field_16;
    return struct24 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v3
    };
}
