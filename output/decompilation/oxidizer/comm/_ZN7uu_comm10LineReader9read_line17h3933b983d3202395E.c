fn uu_comm::LineReader::read_line(a0: &struct8, a1: &u64) -> u64 {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [sp-0x30]
    let v3: u64;  // r12
    let v4: u32;  // ebp
    let v5: u64;  // r14
    let v6: u8;  // dl
    let v7: u64;  // rdi
    let v8: u64;  // rsi

    v3 = a0->field_30;
    v4 = v3;
    if !a0->field_0 {
        *(&v0 as &long long) = std::io::stdio::Stdin::lock(&a0->padding_8 as &struct_0);
        v1 = v6 & 1;
    } else {
        v5 = std::io::read_until(a0, v4, a1);
    }
    v7 = a1[1];
    v8 = a1[2];
    v0 = v3;
    if !core::slice::<impl [T]>::ends_with(v7, v8, &v0, 1) as i8 {
        alloc::vec::Vec<T,A>::push(a1, v4);
        return v5;
    }
    return v5;
}
