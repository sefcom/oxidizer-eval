fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a0: i64, a1: i64) -> long long {
    let v0: u8;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: i8;  // [bp-0x18]
    let v4: i64;  // r14
    let v5: u64;  // rax
    let v9: u64;  // rdx
    let v10: u64;  // rax
    let v11: u64;  // r14
    let v12: u8;  // al

    v4 = a1;
    v5 = <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(&v0, *((a1 + 24) as &i64), *((a1 + 8) as &i64), *((a1 + 16) as &i64), *((a1 + 32) as &i64));
    v9 = *(&v2 as &i64);
    *((a1 + 40) as &u64) = v1;
    *((a1 + 48) as &u64) = v9;
    v10 = *((a1 + 56) as &i8);
    return struct32 {
        field_0: v11
        field_8: v1
        field_16: v9
        field_24: v12
    };
}
