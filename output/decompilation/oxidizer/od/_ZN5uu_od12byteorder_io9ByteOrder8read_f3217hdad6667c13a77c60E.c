fn uu_od::byteorder_io::ByteOrder::read_f32(a0: i8, a1: i32, a2: i64) -> long long {
    let v1: u64;  // rax

    if a0 && a0 == 1 {
        <byteorder::BigEndian as byteorder::ByteOrder>::read_u32(a1, a2);
        return v1;
    }
    <byteorder::LittleEndian as byteorder::ByteOrder>::read_u32(a1, a2);
    return v1;
}
