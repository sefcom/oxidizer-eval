fn uu_dd::bufferedoutput::BufferedOutput::new(a1: &struct24) -> : struct48 {
    let a0: i64;  // rsi
    let v0: struct24;  // [bp-0x38]
    let v1: u64;  // [bp-0x30]
    let v3: u32;  // ebx
    let v4: u64;  // rax
    let v5: i64;  // rdi

    v3 = *((a0 + 4) as &i32);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((*((a0 + 16) as &i64) + 120) as &i64), 0);
    v4 = v0.field_16;
    *((v5 + 24) as &i8) = *(a0 as &i8);
    *((v5 + 25) as &i16) = *((a0 + 1) as &i16);
    *((v5 + 27) as &i8) = *((a0 + 3) as &i8);
    *((v5 + 28) as &u32) = v3;
    *((v5 + 32) as &i128) = *((a0 + 8) as &i128);
    *(v5 as &u64) = v1;
    *((v5 + 8) as &u64) = v4;
    *((v5 + 16) as &i64) = 0;
    return;
}
