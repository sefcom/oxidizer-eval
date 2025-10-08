fn ruff_python_formatter::comments::Comments::contains_comments(a0: i64, a1: u64) -> long long {
    let v0: struct16;  // [bp-0x20], Other Possible Types: struct9
    let v1: u8;  // [bp-0x18]
    let v3: u64;  // rax

    v0 = struct16 {
        field_0: 61
        field_8: a1
    };
    v3 = hashbrown::map::HashMap<K,V,S,A>::get_inner(*(a0 as &i64) + 64, &v0);
    if !v3 {
        v0 = struct9 {
            field_0: a0
            field_8: 0
        };
        ruff_python_ast::generated::AnyNodeRef::visit_source_order(a1, &v0);
        return v1;
    }
    return v3 & -0x100 | 1;
}
