long long uu_test::parser::Parser::bang(struct_0 *a0, void* a1)
{
    unsigned long long v0;  // [bp-0x148]
    unsigned long long v1;  // [bp-0x148]
    int v2;  // [bp-0x138]
    int v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x118]
    char v5;  // [bp-0x110]
    unsigned int v6[21];  // [bp-0x108]
    char v7;  // [bp-0x100]
    char v8;  // [bp-0xe8]
    char v9;  // [bp-0xc0]
    char v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    char v12;  // [bp-0x78]
    int v13;  // [bp-0x68]
    int v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rax
    int v20;  // xmm0
    unsigned long long v21;  // rax
    int v22;  // xmm0

    v8.peek(a1);
    v19 = *((long long *)&v8);
    if (!(v19 != 2 && (unsigned int)v19 != 4))
    {
        (char)v0.clone(a1 + 24);
        v5.nth(&(char)v0);
        v9.new(&v5);
        ::0x49aae0::core::ptr::drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>(&(char)v0);
        if ((*((int *)&v9) | 2) == 6)
        {
            (char)v0.next_token(a1);
            v17.into_literal(&(char)v0);
            (char)v0.literal(a1, &v17);
            if (!((int)v0 == 7))
                goto LABEL_49c3ca;
            v0 = 1;
            a1.push(&v0, &g_56ecc0);
LABEL_49c3a1:
            ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v9);
        }
        else
        {
            v1 = 1;
            v5.into_literal(&v1);
            v10.literal(a1, &v5);
            if (*((int *)&v10) == 7)
            {
                v1.maybe_boolop(a1);
                if ((int)v1 == 7)
                    goto LABEL_49c3a1;
LABEL_49c3ca:
                v22 = *((int128_t *)&v1);
                goto LABEL_49c3f1;
            }
            else
            {
LABEL_49c3f1:
            }
            *((void*)&a0->field_10) = v11;
            *((void*)&a0->field_0) = v22;
            ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v9);
            return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
        }
    }
    else if ((unsigned int)v19 == 6)
    {
        v0 = 1;
        v5.into_literal(&v0);
        a1.push(&v5, &g_56ecd8);
    }
    else
    {
        (char)v0.clone(a1 + 24);
        v15 = v4;
        v14 = v3;
        v13 = v2;
        memcpy(&v12, &v0, 16);
        v16 = 4;
        v5.from_iter(&v12, &g_56eca8);
        if (*((long long *)&v7) == 3 && v6[0] == 3 && v6[10] == 2 && v6[20] == 3)
        {
            (char)v0.expr(a1);
            if ((int)v0 != 7)
            {
                v20 = *((int128_t *)&v0);
                *((void*)&a0->field_10) = v2;
                *((void*)&a0->field_0) = v20;
                ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v5);
                return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
            }
            v0 = 1;
            a1.push(&v0, &g_56ecf0);
        }
        else
        {
            (char)v0.term(a1);
            if ((int)v0 != 7)
            {
                v20 = *((int128_t *)&v0);
                *((void*)&a0->field_10) = v2;
                *((void*)&a0->field_0) = v20;
                ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v5);
                return ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
            }
            v0 = 1;
            a1.push(&v0, &g_56ed08);
        }
        ::0x49ac90::core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(&v5);
    }
    v21 = ::0x49ab70::core::ptr::drop_in_place<uu_test::parser::Symbol>(&v8);
    *((unsigned long long *)&a0->field_0) = 7;
    return v21;
}
