fn firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: struct32;  // [bp-0x20]
    let v1: u64;  // [bp-0x10]
    let v3: u64;  // rbx

    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a0, a1, a2 + a1);
    }
    v0 = struct32 {
        field_0: <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2)
        field_24: v3
    };
    return struct24 {
        field_0: v0.field_0
        field_16: v1
    };
}
