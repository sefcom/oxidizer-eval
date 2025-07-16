fn uu_wc::Settings::number_enabled(a0: i64) -> long long {
    let v0: u168;  // [bp-0x18]
    let v2: iNone;  // xmm0

    v2 = BinaryOp InterleaveLOV;
    v0 = struct21 {
        field_0: 0
        field_8: 5
        field_16: *((a0 + 24) as &i8)
        field_17: (BinaryOp QNarrowBinV) as i32
    };
    return <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(&v0);
}
