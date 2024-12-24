fn uu_comm::LineReader::read_line(a0: &struct_0, a1: &u64) -> u64 {
    let v0: struct9;  // [bp-0x38], Other Possible Types: u8
    let v2: u64;  // r12
    let v3: u64;  // rax
    let v5: u64;  // rdi
    let v6: u64;  // rsi

    v2 = a0->field_30;
    if a0->field_0 {
        v3 = std::io::read_until() as i64;
    } else {
        *(&v0.field_0 as &struct9) = struct9 {
            field_0:             std::io::stdio::Stdin::lock(a0 + 8)
            field_8: v4 & 1
        };
        v3 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0);
    }
    v5 = a1[1];
    v6 = a1[2];
    v0 = v2;
    if !core::slice::<impl [T]>::ends_with(v5, v6, &v0, 1) as i8 {
        alloc::vec::Vec<T,A>::push(a1, v2 & 4294967295);
        return v3;
    }
    return v3;
}
