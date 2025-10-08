fn bat::assets::assets_metadata::AssetsMetadata::new(a0: i64, a1: i64, a2: i64) -> double {
    let v0: struct24;  // [bp-0x20]
    let v2: u64;  // rax
    let v3: u32;  // edx

    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
    v2 = std::time::SystemTime::now();
    return struct40 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v0.field_16
        field_24: v2
        field_32: v3
    };
}
