fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a1: &struct16) -> : struct25 {
    let a0: i64;  // rdi
    let v0: Result<struct16, struct8>;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v3: i64;  // r14
    let v6: u64;  // rdx
    let v7: u64;  // r14
    let v8: u8;  // al

    v3 = a1;
    v0 = <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(*((a1 + 24) as &i64), *((a1 + 8) as &i64), *((a1 + 16) as &i64), *((a1 + 32) as &i64));
    v6 = *((&v0 as &char + 16) as &i64);
    *((a1 + 40) as &u64) = v1;
    *((a1 + 48) as &u64) = v6;
    return struct25 {
        field_0: v7
        field_8: v1
        field_16: v6
        field_24: v8
    };
}
