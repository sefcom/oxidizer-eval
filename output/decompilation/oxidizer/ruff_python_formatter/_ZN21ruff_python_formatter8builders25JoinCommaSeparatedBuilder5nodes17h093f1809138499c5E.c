fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::nodes(a0: void*, a1: u64, a2: u32) -> long long {
    let v0: struct16;  // [bp-0x40]
    let v1: struct9;  // [bp-0x30]
    let v3: u64;  // rdx
    let v4: u64;  // rax

    v0 = struct16 {
        field_0: <I as core::iter::traits::collect::IntoIterator>::into_iter(a1, a2)
        field_8: v3
    };
    v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if !v4 {
        return a0;
    }
    do {
        v1 = struct9 {
            field_0: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::nodes::Alias>>::from(v4)
            field_8: 0
        };
        ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(a0, v4, &v1);
        v4 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    } while (v4);
    return a0;
}
