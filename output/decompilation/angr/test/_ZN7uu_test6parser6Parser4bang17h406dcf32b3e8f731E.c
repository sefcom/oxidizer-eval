long long uu_test::parser::Parser::bang(void* a0, void* a1)
{
    int v0;  // [bp-0x128], Other Possible Types: unsigned long long
    int v1;  // [bp-0x128], Other Possible Types: unsigned long long
    int v2;  // [bp-0x118]
    int v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6[5];  // [bp-0xe0]
    unsigned int v7[21];  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    unsigned long long v9[3];  // [bp-0xb8]
    int v10;  // [bp-0xa8]
    int v11;  // [bp-0x98]
    unsigned long long v12;  // [bp-0x88]
    unsigned long long v13[1][5];  // [bp-0x80]
    char v14;  // [bp-0x58]
    int v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax

    v13.peek(a1);
    v18 = v13[0];
    if (!(v18 != 2 && (unsigned int)v18 != 4))
    {
        (char)v0.clone(a1 + 24);
        (char)v9.nth(&(char)v0);
        v6.new(&(char)v9);
        core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&(char)v0);
        if (((int)v6[0] | 2) == 6)
        {
            (char)v0.next_token(a1);
            v16.into_literal(&(char)v0);
            (char)v0.literal(a1, &v16);
            if ((int)v0 != 7)
                goto LABEL_457dfa;
            v0 = 1;
            a1.push(&v0, &g_4e0200);
LABEL_457dd1:
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
        }
        else
        {
            v0 = 1;
            (char)v9.into_literal(&v0);
            v14.literal(a1, &(char)v9);
            if (*((int *)&v14) == 7)
            {
                v0.maybe_boolop(a1);
                if ((int)v0 == 7)
                    goto LABEL_457dd1;
LABEL_457dfa:
                goto LABEL_457e21;
            }
            else
            {
LABEL_457e21:
            }
            a0[16] = v15;
            *(a0) = v1;
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v6);
            return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v13);
        }
    }
    else if ((unsigned int)v18 == 6)
    {
        v0 = 1;
        v9.into_literal(&v0);
        a1.push(&v9, &g_4e0218);
    }
    else
    {
        v9.clone(a1 + 24);
        v4 = v12;
        v3 = v11;
        v2 = v10;
        *((unsigned long long [3])&v0) = v9;
        v5 = 4;
        v6.collect(&v0);
        if (*((long long *)&v8) == 3 && v7[0] == 3 && v7[10] == 2 && v7[20] == 3)
        {
            v0.expr(a1);
            if ((int)v0 != 7)
            {
                a0[16] = v2;
                *(a0) = v0;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v6);
                return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v13);
            }
            v1 = 1;
            a1.push(&v1, &g_4e0230);
        }
        else
        {
            v0.term(a1);
            if ((int)v0 != 7)
            {
                a0[16] = v2;
                *(a0) = v0;
                core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v6);
                return core::ptr::drop_in_place<uu_test::parser::Symbol>(&v13);
            }
            v1 = 1;
            a1.push(&v1, &g_4e0248);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v6);
    }
    v19 = core::ptr::drop_in_place<uu_test::parser::Symbol>(&v13);
    *((unsigned long long *)a0) = 7;
    return v19;
}
