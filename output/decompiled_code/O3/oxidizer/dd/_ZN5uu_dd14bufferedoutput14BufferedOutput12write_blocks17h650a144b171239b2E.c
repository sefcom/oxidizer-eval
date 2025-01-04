fn uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0: &Result<struct32, struct8>, a1: &struct8, a2: u32, a3: u32) -> u64 {
    let v0: u256;  // [sp-0x98], Other Possible Types: struct32
    let v1: u256;  // [bp-0x80]
    let v2: u128;  // [sp-0x78]
    let v3: u128;  // [sp-0x68]
    let v4: Result<struct32, struct8>;  // [sp-0x58], Other Possible Types: u256
    let v6: u64;  // rsi
    let v7: u64;  // rax
    let v8: u64;  // rdx
    let v9: void*;  // rsi
    let v10: u64;  // r12
    let v11: u64;  // r13
    let v12: u64;  // rdx
    let v13: u64;  // rax

    v6 = *((a1[5] + 120) as &i64);
    if !v6 {
        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
    }
    v7 = a1[2] + a3;
    v8 = (!(v7 | v6) >> 32 ? ((0 CONCAT v7) % (v6 & 4294967295) CONCAT (0 CONCAT v7) / (v6 & 4294967295)) >> 32 & 4294967295 : ((0 CONCAT v7) % v6 CONCAT (0 CONCAT v7) / v6) >> 64);
    v9 = a3 - v8;
    if v8 > a3 {
        v9 = 0;
    }
    v0 = core::slice::<impl [T]>::split_at_unchecked(a2, a3, v9);
    v10 = *((&v0 as &char + 16) as &i64);
    v11 = *((&v0 as &char + 24) as &i64);
    alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v0 as i64, *((&v0 as &char + 8) as &i64) + v0 as i64), v12);
    v4 = uu_dd::Output::write_blocks(a1 + 3, a1[1], a1[2]);
    match v4 {
        Err(_) => {
            a0->field_8 = *((&v4 as &char + 8) as &i64) as u64;
            v13 = 1;
        },
        Ok(v1) => {
            a1[2] = 0 as u64;
            alloc::vec::Vec<T,A>::append_elements(a1, core::slice::iter::Iter<T>::make_slice(v10, v11 + v10), v12);
            a0->field_20 = v3;
            a0->field_10 = v2;
            v13 = 0;
        },
    }
    return struct8 {
        field_0: v13
    };
}
