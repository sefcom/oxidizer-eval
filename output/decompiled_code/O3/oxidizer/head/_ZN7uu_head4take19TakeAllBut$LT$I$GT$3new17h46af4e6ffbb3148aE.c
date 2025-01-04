fn uu_head::take::TakeAllBut<I>::new(a0: &struct49, a1: u64, a2: u64, a3: u64) -> int {
    let v0: i8;  // [bp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: i64;  // [sp-0x80]
    let v3: i128;  // [sp-0x78]
    let v4: i192;  // [sp-0x60], Other Possible Types: Option<Result<struct24, struct16>>, struct24
    let v5: i128;  // [sp-0x48]
    let v6: i64;  // [sp-0x38]
    let v8: i256;  // ymm0
    let v9: i256;  // ymm0
    let v10: i64;  // r13
    let v11: i128;  // xmm0

    v1 = 0;
    v2 = 8;
    v9 = v8 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v3 = 0;
    if a3 {
        v10 = 0;
        do {
            v10 = <usize as core::iter::range::Step>::forward_unchecked(v10);
            v4 = <uucore::features::lines::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v4 != 9223372036854775809 && (v6 = *((&v4 as &char + 16) as &i64), v11 = v4, v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v11 as u128 as u256, v5 = v11, v4 = uucore::features::ringbuffer::RingBuffer<T>::push_back(&v1, &v5), v10 < a3));
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
