fn uu_comm::LineReader::read_line(a0: &struct8, a1: &u64) -> u64 {
    let v0: struct9;  // [bp-0x38], Other Possible Types: u8
    let v2: u64;  // r12
    let v3: u32;  // ebp
    let v4: u64;  // rax
    let v6: u64;  // rdi
    let v7: u64;  // rsi

    v2 = a0->field_30;
    v3 = v2;
    if a0->field_0 {
        v4 = std::io::read_until(a0, v3, a1);
    } else {
        v0 = struct9 {
            field_0:             std::io::stdio::Stdin::lock(a0 + 8)
            field_8: v5 & 1
        };
        v4 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0, v3, a1);
    }
    v6 = a1[1];
    v7 = a1[2];
    v0 = v2;
    if !core::slice::<impl [T]>::ends_with(v6, v7, &v0, 1) as i8 {
        alloc::vec::Vec<T,A>::push(a1, v3);
        return v4;
    }
    return v4;
}
