long long bat::vscreen::EscapeSequenceOffsetsIterator::next_sequence(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long v3;  // r13
    unsigned long long v4;  // r14
    unsigned int v5;  // ebp
    unsigned int v6;  // edx
    unsigned long v7;  // r12
    unsigned long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rcx

    v0 = v2;
    v3 = &a1->padding_0[16];
    v4 = a1->field_28;
    v5 = a1->field_30;
    a1->field_30 = 1114113;
    if (v5 == 1114113)
    {
        v4 = v3.next();
        v5 = v6;
    }
    if (v5 == 0x110000)
        core::option::expect_failed("to not be finishedthis should not be reached: char ", 18, &g_acee38); /* do not return */
    v7 = &a1->field_28;
    v7.get_or_insert_with(v3);
    v8 = a1->field_30;
    if ((unsigned int)v8 == 91)
    {
        return a0.next_csi(a1, v4);
    }
    else if ((unsigned int)v8 == 93)
    {
        return a0.next_osc(a1, v4);
    }
    else if ((unsigned int)v8 == 0x110000)
    {
        v9 = 1;
        if (v5 >= 128)
        {
            v9 = 2;
            if (v5 >= 0x800)
                v9 = 4 - (v5 < 0x10000);
        }
        a0[0] = 1;
        a0[1] = v4;
        a0[2] = v9 + v4;
        return v9 + v4;
    }
    else if (((unsigned int)v8 & 0xfffffff0) == 32)
    {
        return a0.next_nf(a1, v4);
    }
    else
    {
        v10 = 1;
        if ((unsigned int)v8 >= 128)
        {
            v10 = 2;
            if ((unsigned int)v8 >= 0x800)
                v10 = 4 - ((unsigned int)v8 < 0x10000);
        }
        v11 = v10 + *((long long *)v7);
        a0[0] = 1;
        a0[1] = v4;
        a0[2] = v11;
        return v8;
    }
}
