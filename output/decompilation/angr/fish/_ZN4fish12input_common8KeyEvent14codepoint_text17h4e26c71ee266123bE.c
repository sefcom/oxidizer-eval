long long fish::input_common::KeyEvent::codepoint_text(struct_0 *a0)
{
    unsigned int v1;  // esi
    unsigned int v2;  // r8d
    unsigned int v3;  // r8d
    unsigned int v4;  // ecx
    unsigned int v5;  // esi
    unsigned int v7;  // ecx
    unsigned int v8;  // ecx

    v1 = a0->field_0;
    v2 = a0[1].field_0;
    if ((a0->field_6 & 1))
        v3 = v2;
    else
        v3 = v1;
    v4 = v3;
    if (!v2)
        v5 = v1;
    else
        v5 = v4;
    if (((!v2 & a0->field_6 | a0->field_5 | a0->field_4) & 1))
    {
        return 0x110000;
    }
    else if ((a0->field_7 & 1))
    {
        return 0x110000;
    }
    else if (v5 == 62734)
    {
        return 32;
    }
    else if (v5 == 62733)
    {
        return 9;
    }
    else if (v5 == 62723)
    {
        return 10;
    }
    else
    {
        if (v5 < 28)
            v7 = 0x110000;
        else
            v7 = v5;
        v8 = v7;
        if (v5 - 0xe000 >= 0x1900)
            return v8;
        return 0x110000;
    }
}
