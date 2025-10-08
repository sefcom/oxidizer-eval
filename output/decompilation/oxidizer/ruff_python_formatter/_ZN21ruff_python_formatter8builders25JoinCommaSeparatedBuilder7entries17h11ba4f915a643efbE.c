fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entries(a0: void*, a1: u64, a2: u32) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v1: u64;  // [bp-0x30]
    let v2: u64;  // [bp-0x28]
    let v4: u64;  // rdx
    let v5: u64;  // rax
    let v6: u64;  // rdx

    v0 = struct16 {
        field_0: <I as core::iter::traits::collect::IntoIterator>::into_iter(a1, a2)
        field_8: v4
    };
    v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v5 {
        return a0;
    }
    do {
        v1 = v5;
        v2 = v6;
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(a0, &v1, &v2);
        v5 = <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v5);
    return a0;
}
