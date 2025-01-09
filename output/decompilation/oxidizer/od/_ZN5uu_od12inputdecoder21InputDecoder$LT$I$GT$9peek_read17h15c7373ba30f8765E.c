fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a0: &struct25, a1: &struct16) -> u64 {
    let v0: i192;  // [sp-0x28], Other Possible Types: Result<struct16, struct8>
    let v3: i64;  // rdx

    v0 = <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(*((a1 + 24) as &i64), *((a1 + 8) as &i64), *((a1 + 16) as &i64), *((a1 + 32) as &i64));
    match v0 {
        Ok(_) => {
            v3 = *((&v0 as &char + 16) as &i64);
            *((a1 + 40) as &i64) = *((&v0 as &char + 8) as &i64);
            *((a1 + 48) as &i64) = v3;
            return struct25 {
                field_0: a1
                field_8: v2
                field_16: v3
                field_24: 3
            };
        },
        Err(a1) => {
        },
    }
}
