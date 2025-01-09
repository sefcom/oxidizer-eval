fn uu_dd::bufferedoutput::BufferedOutput::new(a0: &struct48, a1: &struct24) -> int {
    let v0: Result<struct16, struct16>;  // [sp-0x38], Other Possible Types: i192
    let v2: i8;  // bpl
    let v3: i32;  // ebx
    let v4: i64;  // rdi
    let v5: i64;  // rax
    let v6: i128;  // xmm0

    v2 = *(a1 as &i8);
    v3 = *((a1 + 4) as &i32);
    v0 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(*((*((a1 + 16) as &i64) + 120) as &i64), 0);
    v4 = *((&v0 as &char + 8) as &i64);
    v5 = *((&v0 as &char + 16) as &i64);
    v6 = *((a1 + 8) as &i128);
    return struct48 {
        field_0: v4
        field_8: v5
        field_16: 0
        field_24: v2
        field_25: *((a1 + 1) as &i16)
        field_27: *((a1 + 3) as &i8)
        field_28: v3
        field_32: v6
    };
}
