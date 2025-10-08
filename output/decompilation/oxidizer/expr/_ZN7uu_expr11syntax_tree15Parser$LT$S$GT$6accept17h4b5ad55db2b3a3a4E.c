fn uu_expr::syntax_tree::Parser<S>::accept(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: u64;  // r12
    let v4: u32;  // ebx
    let v5: u32;  // ebx
    let v6: u32;  // rdx
    let v7: u64;  // rax

    v0 = v2;
    v3 = *((a0 + 16) as &i64);
    v5 = v4 & -0x100 | 3;
    if v3 >= *((a0 + 8) as &i64) {
        return v5;
    }
    v7 = uu_expr::syntax_tree::Parser<S>::parse_op::{{closure}}(a1, <alloc::string::String as core::convert::AsRef<str>>::as_ref(*((*(a0 as &i64) + v3 * 24 + 8) as &i64), *((*(a0 as &i64) + v3 * 24 + 16) as &i64)), v6);
    if v7 == 3 {
        return v5;
    }
    *((a0 + 16) as &u64) = v3 + 1;
    return v7 & 4294967295;
}
