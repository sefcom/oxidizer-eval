fn starship::modules::gcloud::GcloudContext::new(a0: i64, a1: void*, a2: u32, a3: void*, a4: u32) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v1: core::fmt::Arguments;  // [bp-0x38]
    let v2: struct24;  // [bp-0x30]

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a3, a4);
    return struct80 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
        field_24: *(&v2.field_0 as &i128)
        field_40: v2.field_16
        padding_48: <UNKNOWN>
        field_224: <UNKNOWN>
    };
}
