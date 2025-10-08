long long just::executor::Executor::command(struct_0 *a0, struct_1 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    unsigned long v0;  // [bp-0x110]
    char v1;  // [bp-0x108]
    unsigned long long v2;  // rax
    unsigned long long v3[3];  // r12
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbp
    unsigned long long v6;  // rbp

    if (a1->field_0)
    {
        v2 = a3.set_execute_permission(a4);
        if (v2)
        {
            a0->field_8 = 49;
            a0->field_10 = a5;
            a0->field_18 = a6;
            a0->field_20 = v2;
        }
        else
        {
            (char)v0.make_shebang_command(a1, a3, a4, a4, a7, a8);
            if (v0 != 0x8000000000000000)
                return memcpy(a0, &(char)v0, 224);
            *((int128_t *)&a0->field_20) = *((int128_t *)&v1);
            a0->field_8 = 14;
            a0->field_10 = a5;
            v2 = a6;
            a0->field_18 = a6;
        }
        a0->field_0 = 0x8000000000000000;
        return v2;
    }
    else
    {
        v3 = a1->field_8;
        (char)v0.new(v3 + 1);
        if (a7)
            (char)v0.current_dir(a7, a8);
        if (v3[2])
        {
            v4 = v3[1];
            v5 = v3[2] * 48;
            do
            {
                v6 = v5;
                (char)v0.arg(v4);
                v4 += 48;
                v5 = v6 - 48;
            } while (v6 != 48);
        }
        (char)v0.arg(a3, a4);
        return memcpy(a0, &(char)v0, 224);
    }
}
