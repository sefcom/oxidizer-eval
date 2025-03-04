fn uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0: &Result<struct32, struct8>, a1: &struct8, a2: u32, a3: u32) -> u64 {
    let v0: struct32;  // [sp-0x98]
    let v1: iNone;  // [sp-0x80]
    let v2: iNone;  // [sp-0x78]
    let v3: iNone;  // [sp-0x68]
    let v4: Result<struct32, struct8>;  // [sp-0x58]
    let v6: i64;  // rsi
    let v7: i64;  // rax
    let v8: i64;  // rdx
    let v9: i64;  // rax
    let v10: i64;  // r12
    let v11: i64;  // r13

    v6 = *((*((a1 + 40) as &i64) + 120) as &i64);
    v7 = *((a1 + 16) as &i64) + a3;
    if (v7 | v6) >> 32 {
        v8 = ((0 CONCAT v7) % v6 as u128 CONCAT (0 CONCAT v7) / v6 as u128) >> 64;
    } else {
        v8 = (((0 CONCAT v7 as u32) % (v6 & 4294967295)) as u32 CONCAT ((0 CONCAT v7 as u32) / (v6 & 4294967295)) as u32) >> 32 & 4294967295;
    }
    v9 = (v8 <= a3 ? a3 - v8 : 0);
    v0 = core::slice::<impl [T]>::split_at_unchecked(a2, a3, v9);
    v10 = v0.field_16;
    v11 = v0.field_24;
    alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v0.field_0, v0.field_8 + v0.field_0), a2);
    v4 = uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v4 {
        Err(_) => {
            *((a0 + 8) as &i64) = *((&v4 as &char + 8) as &i64);
        },
        Ok(v1) => {
            *((a1 + 16) as &i64) = 0;
            alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v10, v11 + v10), a2);
            *((a0 + 32) as void*) = v3;
            *((a0 + 16) as void*) = v2;
        },
    }
    return struct8 {
        field_0: v12
    };
}
