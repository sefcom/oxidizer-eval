long long ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter(unsigned long long a0, struct_0 *a1, void* a2)
{
    struct_1 *v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x38]
    unsigned long v8;  // rbx
    unsigned long v9;  // rbp
    unsigned long v10;  // 4117
    unsigned long v11;  // rdx
    uint128_t *v12;  // rax

    v1 = a2 + 24;
    while (true)
    {
        v8 = (long long)a2[8];
        v9 = (long long)a2[16];
        v10 = *((char *)a2) & 1;
        *((unsigned long long *)a2) = 0;
        if (!(char)v10)
        {
            v8 = v1.next();
            v9 = v11;
        }
        if (!v8)
        {
            a1->padding_0[32].finish(a1);
            return a0.run_action_queue(a1);
        }
        v12 = a2.get_or_insert_with(v1);
        v4 = v8;
        v6 = a1->field_90;
        *((uint128_t *)&v5) = *(v12);
        if (v9 >> 32)
        {
            1.unwrap(&g_97cc48);
        }
        else
        {
            0.unwrap(&g_97cc48);
            v9 = (unsigned int)v9 + 1;
        }
        0.unwrap(&g_97cc48);
        a1->field_90 = a1->field_90 + (unsigned int)v9;
        v2.add_one(a1, &v4);
        if ((int)v2 != 4)
        {
            v0->field_10 = v3;
            *((void*)&v0->field_0) = v2;
            return v3;
        }
    }
}
