long long bat::input::InputReader::read_line(void* a0, struct_2 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    struct_1 *v6;  // rax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx

    v0 = v2;
    v3 = a2;
    if (a1->field_10)
    {
        v4 = a2.append_elements(a1->field_8, a1->field_10);
        a1->field_10 = 0;
        *((unsigned short *)a0) = 0x100;
        return v4;
    }
    v5 = a1->field_28;
    v6 = a1->field_20;
    if (v5 == 3)
    {
        return bat::input::read_utf16_line(a0, a1->field_18, v6, a2, 0, 10);
    }
    else if (v5 == 4)
    {
        return bat::input::read_utf16_line(a0, a1->field_18, v6, a2, 10, 0);
    }
    else
    {
        v7 = v6->field_70(a1->field_18, 10, a2);
        if (((char)v7 & 1))
        {
            *((unsigned long *)&a0[8]) = v8;
            *((char *)a0) = 1;
        }
        else
        {
            *((char *)&a0[1]) = v9;
            *((char *)a0) = 0;
        }
        return v7;
    }
}
