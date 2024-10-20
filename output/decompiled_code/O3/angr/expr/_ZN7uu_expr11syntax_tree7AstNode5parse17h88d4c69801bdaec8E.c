long long uu_expr::syntax_tree::AstNode::parse::h88d4c69801bdaec8(struct_0 *a0, unsigned long long *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0xa8], Other Possible Types: void*
    unsigned long long v1;  // [sp-0xa0]
    int v2;  // [bp-0x98], Other Possible Types: void*
    char v3;  // [bp-0x80]
    void* v4;  // [sp-0x70]
    int v5;  // [sp-0x68]
    int v6;  // [sp-0x58]
    void* v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x40]
    void* v9;  // [sp-0x38]
    char v10;  // [bp-0x30]
    unsigned long long v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x20]
    unsigned long long v13;  // [sp-0x18]
    char v14;  // [sp-0x10]
    int v16;  // xmm1
    int v17;  // xmm0
    unsigned long long v18;  // rax

    v4 = 0;
    if (!a2)
    {
        a0->field_8 = 3;
    }
    else
    {
        uu_expr::syntax_tree::Parser::parse_precedence::h598ccb7df8d164e5(&v7, &v3, 0);
        v16 = *((int128_t *)&v10);
        *((int128_t *)&v0) = *((int128_t *)&v8);
        v2 = v16;
        if (vvar_131)
        {
            v17 = (int128_t)v0;
            *((int128_t *)((char *)&a0->field_10 + 8)) = (int128_t)v2;
            *((void*)&a0->field_8) = v17;
        }
        else
        {
            *((int128_t *)&v6) = (int128_t)v2;
            *((int128_t *)&v5) = (int128_t)v0;
            v18 = v4;
            if (v18 >= a2)
            {
                *((void*)((char *)&a0->field_10 + 8)) = v6;
                *((void*)&a0->field_8) = v5;
                a0->field_0 = 0;
                return a0;
            }
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v13 = 32;
            v14 = 3;
            v7 = 0;
            v9 = 0;
            v11 = &v0;
            v12 = &g_56a8b8;
            if (!(char)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee9ab008bf888ff(a1[2 * v18], a1[1 + 2 * v18], &v7))
            {
                *((void* *)&a0->field_18) = v2;
                a0->field_10 = *((int128_t *)&v0);
                a0->field_8 = 0;
                a0->field_0 = 1;
                core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h4f1c311c01fd48b5(&v5);
                return a0;
            }
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        }
    }
    a0->field_0 = 1;
    return a0;
}
