fn uu_head::take::TakeAllBut<I>::new(a0: &struct49, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i8;  // [bp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x80]
    let v3: iNone;  // [sp-0x78]
    let v4: struct24;  // [sp-0x60], Other Possible Types: Option<Result<struct24, struct8>>
    let v5: struct24;  // [bp-0x48]
    let v7: iNone;  // ymm0
    let v8: iNone;  // ymm0
    let v9: i64;  // r13

    v1 = 0;
    v2 = 8;
    v8 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v3 = 0;
    if a3 {
        v9 = 0;
        do {
            v9 = <usize as core::iter::range::Step>::forward_unchecked(v9);
            v4 = <uucore::features::lines::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v4 as i64 != 9223372036854775809 && (v8 = v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4 as i128 as u128 as u256, v5 = struct24 {
    field_0: v10
    field_16: *((&v4 as &char + 16) as &i64)
}, v4 = uucore::features::ringbuffer::RingBuffer<T>::push_back(&v1, &v5), v9 < a3));
    }
    return struct49 {
        field_0: v1
        field_8: v2
        field_16: v3
        field_32: a3
        field_40: a1
        field_48: a2
    };
}
