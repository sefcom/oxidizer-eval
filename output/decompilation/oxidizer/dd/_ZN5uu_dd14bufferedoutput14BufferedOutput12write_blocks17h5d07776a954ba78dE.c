fn uu_dd::bufferedoutput::BufferedOutput::write_blocks(a0: i64, a1: i64, a2: u32, a3: u32) -> long long {
    let v0: struct32;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: Result<struct32, struct8>;  // [bp-0x58]
    let v5: u64;  // [bp-0x50]
    let v6: u128;  // [bp-0x48]
    let v8: u64;  // rsi
    let v11: void*;  // rsi
    let v12: u64;  // rax
    let v13: u64;  // rax

    v8 = *((*((a1 + 40) as &i64) + 120) as &i64);
    v0 = core::slice::<impl [T]>::split_at_unchecked(a2, a3, v11);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, v0.field_0, v1 + v0.field_0);
    v4 = uu_dd::Output::write_blocks(a1 + 24, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    match v4 {
        Ok(_) => {
            *((a0 + 32) as &i128) = *(&v5 as &i128);
            *((a0 + 16) as &u128) = v6;
            *((a1 + 16) as &i64) = 0;
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(a1, v2, v3 + v2);
        },
        Err(_) => {
            v12 = 1;
            return struct16 {
                field_0: v13
                field_8: v5
            };
        },
    }
}
