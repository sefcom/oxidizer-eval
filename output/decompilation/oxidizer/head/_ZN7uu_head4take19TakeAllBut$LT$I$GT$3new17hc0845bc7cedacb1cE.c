fn uu_head::take::TakeAllBut<I>::new(a1: i64, a2: i8, a3: i64) -> : struct49 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x98]
    let v1: struct24;  // [bp-0x88]
    let v2: void*;  // [bp-0x88]
    let v3: u64;  // [bp-0x80]
    let v4: core::option::Option<(usize, char)>;  // [bp-0x78]
    let v5: u64;  // [bp-0x68]
    let v6: u192;  // [bp-0x60]
    let v7: u64;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: u64;  // [bp-0x38]
    let v11: void*;  // r13
    let v12: i64;  // rdi

    v0 = a0;
    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = a2;
    if a2 {
        do {
            vvar_136{stack -96} = struct24 OrderedDict({0: 𝜙@128b [((4998505, None), vvar_114{stack -96}), ((4998397, None), None)], 16: 𝜙@64b [((4998505, None), vvar_116{stack -80}), ((4998397, None), None)]})
            v11 = <usize as core::iter::range::Step>::forward_unchecked(v11, a0);
            <uucore::features::lines::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v6, &v0);
        } while (v6 as i64 != 9223372036854775809 && (v9 = v7, v8 = v6 as i128, v1 = uucore::features::ringbuffer::RingBuffer<T>::push_back(&v8, a2), v11 < a2 as u64));
    }
    *((v12 + 32) as &u64) = v5;
    *((v12 + 16) as &i128) = 0;
    *(v12 as &void*) = v2;
    *((v12 + 8) as &i64) = 8;
    *((v12 + 40) as &u64) = v0;
    *((v12 + 48) as &u8) = a1;
    return;
}
