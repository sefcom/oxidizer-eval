fn uu_od::inputdecoder::InputDecoder<I>::peek_read(a0: void*, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: u128;  // [sp-0x28], Other Possible Types: Result<struct16, struct8>
    let v1: i8;  // [bp-0x18]
    let v3: u64;  // rcx
    let v4: u64;  // rdx

    v0 = <uu_od::peekreader::PeekReader<R> as uu_od::peekreader::PeekRead>::peek_read(a1->field_18, a1->field_8, a1->field_10, a1->field_20, a5);
    match v0 {
        Err(_) => {
            a1 = *((&v0 as &char + 8) as &i64);
        },
        Ok(_) => {
            v3 = *((&v0 as &char + 8) as &i64);
            v4 = v1;
            a1->field_28 = v3;
            a1->field_30 = v4;
            a0->field_8 = v3;
            a0->field_10 = v4;
        },
    }
    return struct9 {
        field_0: a1
        field_24: <UNKNOWN>
    };
}
