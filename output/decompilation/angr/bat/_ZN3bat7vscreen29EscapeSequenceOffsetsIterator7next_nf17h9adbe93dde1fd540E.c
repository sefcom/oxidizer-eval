long long bat::vscreen::EscapeSequenceOffsetsIterator::next_nf(unsigned long long a0[4], struct_0 *a1, unsigned long a2)
{
    unsigned long long v0[3];  // [bp-0x48]
    char v1;  // [bp-0x38]
    unsigned long v3;  // r12
    unsigned long long v4;  // r15
    unsigned int v5;  // edx
    unsigned long long v6;  // rax
    unsigned long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned int v9;  // edx
    unsigned long long v10;  // rbp

    v3 = &a1->padding_0[16];
    v4 = a1->field_28;
    v5 = a1->field_30;
    a1->field_30 = 1114113;
    if (v5 == 1114113)
        v4 = v3.next();
    if (v5 == 0x110000)
        core::option::expect_failed("to not be finishedthis should not be reached: char ", 18, &g_aceea8); /* do not return */
    v6 = v0.chars_take_while(a1);
    if (!((char)v0[0] & 1))
    {
        a0[0] = 2;
        a0[1] = a2;
        a0[2] = v4;
        a0[3] = v4;
        return v6;
    }
    v7 = *((long long *)&v1);
    v8 = a1->field_28;
    v9 = a1->field_30;
    a1->field_30 = 1114113;
    if (v9 == 1114113)
        v8 = v3.next();
    if (v9 != 0x110000)
    {
        v10 = 1;
        if (v9 >= 128)
        {
            v10 = 2;
            if (v9 >= 0x800)
                v10 = 4 - (v9 < 0x10000);
        }
        v7 = v10 + v8;
    }
    a0[0] = 2;
    a0[1] = a2;
    a0[2] = v4;
    a0[3] = v7;
    return v8;
}
