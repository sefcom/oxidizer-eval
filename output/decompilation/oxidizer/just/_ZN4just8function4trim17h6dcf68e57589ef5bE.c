fn just::function::trim(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct24;  // [bp-0x20]
    let v3: &str;  // rax:rdx

    v3 = core::str::<impl str>::trim_matches(a2, a3, a2);
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v3.data_ptr, a2);
    return struct32 {
        field_0: 0
        field_8: *(&v0.field_0 as &i128)
        field_24: v0.field_16
    };
}
