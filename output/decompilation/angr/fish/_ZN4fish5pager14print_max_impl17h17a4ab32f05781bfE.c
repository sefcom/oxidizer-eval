long long fish::pager::print_max_impl(unsigned long long a0, unsigned long long a1, unsigned long a2, unsigned long long a3, void* a4, unsigned int a5, unsigned long long a6)
{
    unsigned long v0;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    void* v4;  // 4096
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    void* v10;  // r14
    unsigned int v12;  // eax
    void* v13;  // 4096
    unsigned long long v14;  // rax
    unsigned int v15;  // edx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbx
    void* v18;  // r14
    unsigned long long v19;  // rcx
    unsigned long long v23;  // rbx

    v1 = a1;
    v2 = a1 + a2 * 4;
    v3 = 0;
    if (a5)
    {
        v4 = a4;
        while (true)
        {
            v5 = v1.next();
            if (v6 == 0x110000)
                break;
            v7 = v5;
            v8 = fish::screen::wcwidth_rendered(v6);
            if (v8 < 0)
                continue;
            if (a4 < v8)
                break;
            v0 = v8;
            v9 = fish::common::get_ellipsis_char();
            v10 = a4;
            if (v10 != v0)
            {
                v12 = fish::pager::Pager::completion_print_item::{{closure}}(a3, v7);
                a6.append(v6, v12, 3, a0);
                a4 = v10 - v0;
            }
            else
            {
                v0 = a4;
                goto LABEL_13d922e;
            }
        }
        goto LABEL_13d922e;
    }
    else
    {
        v0 = a4;
        v13 = a4;
    }
    while (true)
    {
        do
        {
            v14 = v1.next();
            if (v15 == 0x110000)
            {
                v4 = v13;
                a4 = v0;
                if (v4 < a4)
                    core::option::unwrap_failed(&g_14dc740); /* do not return */
                return v4 - a4;
            }
            v7 = v14;
            v16 = fish::screen::wcwidth_rendered(v15);
        } while (v16 < 0);
        v17 = v16;
        v18 = v0;
        if (v18 >= v17)
        {
            v4 = v13;
            v9 = fish::common::get_ellipsis_char();
            if (v18 == v17)
            {
                v19 = v7;
                if ((char)_ccall(4, 24, v19 + 1, 0, (unsigned long long)(char)(v18 < v17)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dc710); /* do not return */
                if (v19 + 1 >= a2)
                    goto LABEL_13d91c2;
LABEL_13d922e:
                a6.append(v9, (unsigned int)fish::pager::Pager::completion_print_item::{{closure}}(a3, v7), 3, a0);
                v23 = fish::screen::wcwidth_rendered(v9);
                v23 >> 63.unwrap(&g_14dc728);
                a4 = v0 - v23;
                if (v0 < v23)
                    a4 = 0;
                break;
            }
            else
            {
LABEL_13d91c2:
                a6.append(v15, (unsigned int)fish::pager::Pager::completion_print_item::{{closure}}(a3, v7), 3, a0);
                v0 = v18 - v17;
                v13 = v4;
            }
        }
        else
        {
            a4 = v18;
            break;
        }
    }
    if (v4 < a4)
        core::option::unwrap_failed(&g_14dc740); /* do not return */
    return v4 - a4;
}
