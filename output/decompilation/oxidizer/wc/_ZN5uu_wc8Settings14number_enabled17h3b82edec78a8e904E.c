fn uu_wc::Settings::number_enabled(a0: &struct30) -> u64 {
    let v0: struct24;  // [bp-0x18]
    let v1: i32;  // [bp-0x7]
    let v3: iNone;  // xmm0
    let v4: u64;  // rsi

    v0 = struct24 {
        field_0: 0
        field_8: 5
        field_16: *((a0 + 24) as &i8)
    };
    v3 = BinaryOp InterleaveLOV;
    v1 = BinaryOp QNarrowBinV;
    return <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v0, v4);
}
