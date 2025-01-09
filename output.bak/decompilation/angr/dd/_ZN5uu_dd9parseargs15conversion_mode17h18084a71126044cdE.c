long long uu_dd::parseargs::conversion_mode::h18084a71126044cd(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rax
    unsigned long v3;  // rax
    unsigned long v4;  // rax
    unsigned long v5;  // rax

    if (a1)
    {
        if (!a2)
        {
            if (a4)
                a0->field_0 = 4;
            else
                a0->field_0 = 3;
            a0->field_1 = a5;
        }
        else
        {
            if (a2 != 1)
            {
                a0->field_0 = 0;
                a0->field_8 = a1;
                return v2;
            }
            if (!a4)
                a0->field_0 = 5;
            else
                a0->field_0 = 6;
        }
        a0->field_8 = a3;
        a0->field_10 = a1;
        return v5;
    }
    else if (!a2)
    {
        a0->field_0 = 1;
        a0->field_1 = a5;
        a0->field_8 = a3;
        return v1;
    }
    else if (a2 == 1)
    {
        a0->field_0 = 2;
        a0->field_8 = a3;
        return v3;
    }
    else
    {
        a0->field_0 = 7;
        return v4;
    }
}
