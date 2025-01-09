fn uu_od::byteorder_io::ByteOrder::read_f64(a0: u64, a1: u64, a2: u64) -> int {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rax
    let v3: u64;  // rax
    let v4: u256;  // ymm0

    v0 = v2;
    if !a0 || a0 != 1 {
        v3 = <byteorder::LittleEndian as byteorder::ByteOrder>::read_u64(a1, a2);
    } else {
        v3 = <byteorder::BigEndian as byteorder::ByteOrder>::read_u64(a1, a2);
    }
    return v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v3;
}
