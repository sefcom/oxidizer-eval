fn ruff_python_formatter::comments::map::InOrderEntry::trailing(a1: i64, a2: i64) -> : struct16 {
    let a0: i64;  // rdi
    let v1: u32;  // ebp

    v1 = ruff_python_formatter::comments::map::PartIndex::from_len(a1);
    return struct16 {
        field_0: v1
        field_4: v1
        field_8: v1
        field_12: ruff_python_formatter::comments::map::PartIndex::from_len(a2) as u32
    };
}
