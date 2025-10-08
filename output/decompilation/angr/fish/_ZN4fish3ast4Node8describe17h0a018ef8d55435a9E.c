long long fish::ast::Node::describe(struct_2 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [sp-0x60]
    struct_1 *v2;  // [bp-0x58], Other Possible Types: unsigned long long
    int v3;  // [bp-0x48], Other Possible Types: char
    unsigned long long v4;  // [bp-0x38]
    char v5;  // [bp-0x28]
    struct_1 *v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v0.kind(a1);
    v0.to_vec(fish::ast::ast_kind_to_string(&v0), v8);
    v4 = v2;
    memcpy(&v3, &v0, 16);
    v9 = a1.as_token();
    if (v9)
    {
        v0 = 1;
        v1 = v8->field_b0(v9).to_wstr();
        v2 = v8;
        fish_printf::printf_impl::sprintf_locale(&v5, &v3, " '%ls'src/ast.rsIs not an argumentIs not a redirection", 6, &v0, 1);
        v5.unwrap(&g_14c1c90);
    }
    else
    {
        v10 = a1.as_keyword();
        if (!v10)
        {
            a0->field_10 = v4;
            *((void*)&a0->field_0) = v3;
            return a0;
        }
        v0 = 1;
        v1 = v8->field_b0(v10).to_wstr();
        v2 = v8;
        fish_printf::printf_impl::sprintf_locale(&v5, &v3, " '%ls'src/ast.rsIs not an argumentIs not a redirection", 6, &v0, 1);
        v5.unwrap(&g_14c1ca8);
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    return a0;
}
