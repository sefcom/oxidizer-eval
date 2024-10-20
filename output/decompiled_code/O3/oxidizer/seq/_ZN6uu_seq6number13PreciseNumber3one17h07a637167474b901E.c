fn uu_seq::number::PreciseNumber::one(a0: u64) -> int {
    let v0: i192;  // [sp-0x28], Other Possible Types: Enum
    let v1: i64;  // [sp-0x18]
    let v3: i256;  // ymm0

    v1 = 0;
    v0 = 0x80000000000000000;
    v0 = alloc::raw_vec::RawVec<T,A>::grow_one();
    *(*((&v0 as &char + 8) as &i64) as &i64) = 1;
    v1 = 1;
    *(a0 as &i128) = v0;
    *((a0 + 16) as &i64) = 1;
    *((a0 + 24) as &i8) = 2;
    *((a0 + 25) as &i32) = 0;
    *((a0 + 28) as &i32) = 0;
    *((a0 + 32) as &i64) = 0;
    *((a0 + 40) as &i64) = 1;
    *((a0 + 48) as &i64) = 0;
    return Conv(256->64, ((((vvar_13{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x80000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_33{stack -40})));
}
