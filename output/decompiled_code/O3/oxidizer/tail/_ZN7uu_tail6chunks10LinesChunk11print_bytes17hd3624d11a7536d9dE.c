fn uu_tail::chunks::LinesChunk::print_bytes(a0: &struct_0, a1: &u64, a2: u64, a3: u64, a4: u64, a5: u64) -> u64 {
    let v0: u64;  // [sp-0x38]
    let v1: i8;  // [bp-0x28]
    let v2: u64;  // [sp-0x20]
    let v4: u64;  // r14
    let v5: u64;  // r14
    let v6: u64;  // rsi
    let v7: u64;  // r15
    let v8: u64;  // rax
    let v9: &u64;  // rax
    let v10: u128;  // xmm0

    v4 = a0->field_2000;
    v5 = v4 - a2;
    if v4 < a2 {
        core::slice::index::slice_index_order_fail(); /* do not return */
    } else if v4 > 0x2000 {
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    } else {
        v6 = &a0->padding_0[a2];
        v7 = a1[2];
        if *(a1) - v7 > v5 {
            memcpy(a1[1] + v7, v6, v5);
            a1[2] = v7 + v5;
        } else {
            v8 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, v6, v5, a3, a4, a5);
            if v8 {
                v0 = 0x8000000000000000;
                v2 = v8;
                v9 = __rust_alloc(32, 8);
                v10 = *(&v0 as &i128);
                *(&v9[2] as &i8) = v1;
                *(v9) = v10;
                return v9;
            }
        }
        return 0;
    }
}
