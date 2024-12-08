fn uu_wc::Settings::number_enabled(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: void*;  // [sp-0x18]
    let v1: u64;  // [sp-0x10]
    let v2: u8;  // [sp-0x8]
    let v3: u32;  // [sp-0x7]
    let v5: u128;  // xmm0
    let v6: u256;  // ymm0

    v2 = a0->field_18;
    v5 = *(&(&a0->field_18)[1] as &i32);
    v3 = v6 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp InterleaveLOV | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (BinaryOp InterleaveLOV >> 64 CONCAT BinaryOp InterleaveLOV >> 32 CONCAT BinaryOp InterleaveLOV >> 48 CONCAT BinaryOp InterleaveLOV >> 16 CONCAT BinaryOp InterleaveLOV) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | BinaryOp QNarrowBinV;
    v0 = 0;
    v1 = 5;
    return <core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::fold(a1, a2);
}
