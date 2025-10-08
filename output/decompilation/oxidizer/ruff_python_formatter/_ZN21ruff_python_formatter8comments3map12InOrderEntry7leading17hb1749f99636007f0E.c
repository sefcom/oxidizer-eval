fn ruff_python_formatter::comments::map::InOrderEntry::leading(a1: i64, a2: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v1: u32;  // eax

    v1 = ruff_python_formatter::comments::map::PartIndex::from_len(a1);
    return struct16 {
        field_0: v1
        field_4: ruff_python_formatter::comments::map::PartIndex::from_len(a2) as u32
        field_8: 0
    };
}
