fn uu_head::take::TakeAllBut<I>::new(a0: u64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: u8;  // [bp-0xa8]
    let v1: u32;  // [sp-0xa4]
    let v2: Enum;  // [sp-0xa0], Other Possible Types: void*
    let v3: u64;  // [sp-0x98]
    let v4: void*;  // [sp-0x90]
    let v5: u64;  // [sp-0x78]
    let v6: u64;  // [bp-0x70], Other Possible Types: struct16
    let v7: u64;  // [sp-0x68]
    let v8: u128;  // [sp-0x60]
    let v9: struct24;  // [sp-0x48], Other Possible Types: u64
    let v11: u64;  // 4096
    let v16: u64;  // r12
    let v17: u256;  // ymm0

    v6 = struct16 {
        field_16: 0
        field_24: 8
    };
    v8 = 0;
    if a3 {
        v1 = v0;
        v5 = 0x8000000000000000;
        do {
            v2 = 0;
            v3 = 1;
            v4 = 0;
        } while (v9 != 9223372036854775809 && (v9 = struct24 {
    field_0: v14
    field_8: vvar_31{reg 56}
    field_16: v15
}, v2 = uucore::features::ringbuffer::RingBuffer<T>::push_back(&v6, &v9), v16 = v11 - 1, v11 != 1));
    }
    a0->field_20 = a3;
    a0->field_10 = v8;
    a0->field_0 = v6;
    a0->field_8 = v7;
    a0->field_28 = a1;
    a0->field_30 = a2;
    return Conv(256->64, (((vvar_75{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_185{stack -96})));
}
