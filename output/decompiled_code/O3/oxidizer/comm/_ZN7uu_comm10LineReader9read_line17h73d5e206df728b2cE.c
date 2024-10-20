fn uu_comm::LineReader::read_line(a0: void*, a1: void*, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct9;  // [bp-0x38], Other Possible Types: &struct_2, u8
    let v1: u8;  // [sp-0x30]
    let v4: u64;  // rax
    let v6: &struct_2;  // rdi

    if a0->field_0 {
        v4 = std::io::read_until(a0, a0->field_30 & 4294967295, a1, a3, a4, a5, *(&v0 as &i64));
    }
    *(&v0.field_0 as &struct9) = struct9 {
        field_0:         std::io::stdio::Stdin::lock(a0 + 8)
        field_8: v5 & 1
    };
    v4 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(&v0);
    v6 = v0;
    if !v1 && _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1 {
        v6 = v6;
        if !std::panicking::panic_count::is_zero_slow_path() as i8 {
            v6->field_4 = 1;
        }
    }
    v6->field_0 = 0;
    if BinaryOp CasCmpNE {
        goto LABEL_0x47e2c7;
    }
    if v6->field_0 == 2 {
        goto LABEL_0x47e311;
    }
}
