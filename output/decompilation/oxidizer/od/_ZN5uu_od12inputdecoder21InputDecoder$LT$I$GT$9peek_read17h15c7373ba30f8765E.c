fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a0: &struct25, a1: &struct16) -> u64 {
    let v0: Result<struct16, struct8>;  // [sp-0x28]
    let v2: i64;  // r14
    let v4: i64;  // rdx

    v2 = a1;
    v0 = <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(*((a1 + 24) as &i64), *((a1 + 8) as &i64), *((a1 + 16) as &i64), *((a1 + 32) as &i64));
    match v0 {
        Ok(_) => {
            v4 = *((&v0 as &char + 16) as &i64);
            *((a1 + 40) as &i64) = *((&v0 as &char + 8) as &i64);
            *((a1 + 48) as &unsigned long) = v4;
            return struct25 {
                field_0: v2
                field_8: v3
                field_16: v4
                field_24: 3
            };
        },
        Err(v2) => {
        },
    }
}
