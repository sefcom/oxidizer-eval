char fish::ast::Populator::visit_maybe_newlines(unsigned long a0, unsigned int a1[3])
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    char v3;  // al
    unsigned int v4;  // ebp
    unsigned int v5;  // edx
    unsigned int v6;  // r12d
    unsigned int v7;  // r15d
    unsigned int v8;  // edx
    unsigned int v9;  // r15d

    v0 = v2;
    v3 = a0.unsource_leaves();
    if (v3)
    {
        a1[0] = 0;
        return v3;
    }
    v4 = 0.new(0);
    if (*((char *)(a0.peek_token(0) + 13)) == 1)
    {
        do
        {
            v7 = a0.consume_token_type(10);
            if (!v6)
            {
                v4 = v7;
                v8 = v5;
            }
            else
            {
                v9 = v7 + v5;
                if ((char)__CFADD__(v7, v5))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c57a0); /* do not return */
                v8 = v9 - v4;
                if (v9 < v4)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14c57a0); /* do not return */
            }
            v6 = v8;
        } while (*((char *)(a0.peek_token(0) + 13)));
    }
    a1[0] = 1;
    a1[1] = v4;
    a1[2] = v6;
    return v2;
}
