long long fish::wgetopt::WGetopter::wgetopt_inner(struct_0 *a0, unsigned long long *a1)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long v6;  // r15
    unsigned long v7;  // r12
    unsigned long long v8;  // rax

    v0 = v3;
    if (!a0->field_84)
        a0.initialize();
    a0->field_58 = 0;
    if (!a0->field_50)
    {
        v4 = a0.next_argv();
        if (!(char)v4)
        {
            return 0x110000;
        }
        else if ((unsigned int)v4 == 1)
        {
            return 1;
        }
    }
    if (a0->field_40 && a0->field_68 < a0->field_20)
    {
        v5 = a0->field_68 * 16;
        v6 = *((long long *)(a0->field_18 + v5));
        v7 = *((long long *)(a0->field_18 + v5 + 8));
        if (!((int)v6.char_at(v7, 0) != 45 || (int)v6.char_at(v7, 1) != 45))
        {
LABEL_1425a0f:
            v8 = a0.handle_long_opt(a1);
            if ((unsigned int)v8 != 0x110000)
                return v8;
        }
        else if (!a0->field_85)
        {
            v1 = v6.char_at(v7, 1);
            if (!v1.slice_contains(a0->field_28, a0->field_30))
                goto LABEL_1425a0f;
        }
    }
    return a0.handle_short_opt();
}
