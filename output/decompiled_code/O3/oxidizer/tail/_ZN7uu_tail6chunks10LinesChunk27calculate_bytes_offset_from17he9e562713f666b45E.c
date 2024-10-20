fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(a0: &struct_0, a1: u64) -> u64 {
    let v0: u64;  // [sp-0x8]
    let v2: u64;  // rdi
    let v3: &struct_0;  // rax
    let v4: u64;  // rax
    let v6: &struct_0;  // rax
    let v8: u64;  // r9
    let v9: u8;  // r9b
    let v11: u64;  // rsi

    v2 = a0->field_2000;
    if v2 >= 8193 {
        v0 = v4;
        core::slice::index::slice_end_index_len_fail(); /* do not return */
    } else if !a1 {
        return 0;
    } else if !v2 {
        return 0;
    } else {
        v6 = 0;
        do {
            v9 = *((a0 + v6) as &i8) == a0->field_2010;
            v8 = v8 | -0x100 | v9;
            v3 = &v6->padding_1 as &struct_0;
        } while (v2 - 1 != v6 && (v11 = a1 - (-0x100 | v9 as u64), a1 != (-0x100 | v9 as u64)));
        return v3;
    }
}
