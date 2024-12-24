fn uu_csplit::SplitWriter::finish_split(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Argument;  // [bp-0x40]
    let v1: Arguments;  // [bp-0x30]
    let v3: &u64;  // rax

    if a0->field_38 {
        return v3;
    }
    v3 = a0->field_20;
    if *((&v3[12] as &char + 2) as &i8) && !a0->field_30 {
        a0->field_28 = a0->field_28 - 1;
        return v3;
    }
    if !*((&v3[12] as &char + 1) as &i8) {
        v0 = Argument {
            value: a0 + 48
            formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
        };
        *(&v1.pieces as &Arguments) = Arguments {
            pieces: ["", "\n"]
            args: [&v0]
            fmt: 0
        };
        return std::io::stdio::_print(&v1);
    }
    return v3;
}
