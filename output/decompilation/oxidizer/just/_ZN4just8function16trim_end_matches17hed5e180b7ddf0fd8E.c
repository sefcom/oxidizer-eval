fn just::function::trim_end_matches(a0: i64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: struct24;  // [bp-0x20]

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_end_matches(a2, a3, a4, a5), a2);
    return struct32 {
        field_0: 0
        field_8: *(&v0.field_0 as &i128)
        field_24: v0.field_16
    };
}
