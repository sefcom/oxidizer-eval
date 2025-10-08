void fish::builtins::fish_indent::prettify(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char *v0;  // [bp-0x1c8]
    unsigned long long v1;  // [bp-0x1c0]
    unsigned long long v2;  // [bp-0x1b8]
    unsigned long long v3;  // [bp-0x1b0]
    char *v4;  // [bp-0x1a8]
    unsigned long long v5;  // [bp-0x1a0]
    void* v6;  // [bp-0x198]
    uint128_t v7;  // [bp-0x158]
    uint128_t v8;  // [bp-0x148]
    uint128_t v9;  // [bp-0x138]
    char v10;  // [bp-0x120]
    char v11;  // [bp-0x108]
    int v12;  // [bp-0xf0], Other Possible Types: char
    char v13;  // [bp-0xa8]

    if (_ZN4fish8builtins11fish_indent15DUMP_PARSE_TREE17hcd907db531caa211E.load())
    {
        fish::ast::parse(&v12, a2, a3, 42, 0);
        v10.dump(&v12, a2, a3);
        a1.appendln(&v10);
        v9 = 0;
        v8 = 0;
        v7 = 0;
        v7.visit(&v13, &g_14c2660);
        v0 = &v7;
        v1 = <fish::builtins::fish_indent::AstSizeMetrics as core::fmt::Display>::fmt;
        v2 = &g_549050;
        v3 = 1;
        v6 = 0;
        v4 = &v0;
        v5 = 1;
        v11.map_or_else(&v2);
        a1.appendln(&v11);
        core::ptr::drop_in_place<fish::ast::Ast>(&v12);
    }
    fish::ast::parse(&v2, a2, a3, 27, 0);
    v12.new(a2, a3, &v2, a4);
    a0.prettify(&v12);
    core::ptr::drop_in_place<fish::builtins::fish_indent::PrettyPrinter>(&v12);
    core::ptr::drop_in_place<fish::ast::Ast>(&v2);
    return;
}
