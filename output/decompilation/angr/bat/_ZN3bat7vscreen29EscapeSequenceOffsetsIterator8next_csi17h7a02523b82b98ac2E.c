long long bat::vscreen::EscapeSequenceOffsetsIterator::next_csi(unsigned long long a0[6], struct_0 *a1, unsigned long a2)
{
    unsigned long long v0[3];  // [bp-0x48]
    char v1;  // [bp-0x38]
    unsigned long v3;  // r15
    unsigned long long v4;  // rax
    unsigned int v5;  // edx
    unsigned long long v6;  // r13
    unsigned long long v7;  // r13
    unsigned long long v8;  // r13
    unsigned long long v10;  // r14
    unsigned long long v11;  // r14
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned int v15;  // edx
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rcx

    v3 = &a1->padding_0[16];
    v4 = a1->field_28;
    v5 = a1->field_30;
    a1->field_30 = 1114113;
    if (v5 == 1114113)
        v4 = v3.next();
    if (v5 == 0x110000)
        core::option::expect_failed("to not be finishedthis should not be reached: char ", 18, &g_acee90); /* do not return */
    v6 = 1;
    if (v5 >= 128)
    {
        v6 = 2;
        if (v5 >= 0x800)
            v6 = 4 - (v5 < 0x10000);
    }
    v7 = v6 + v4;
    v0.chars_take_while(a1);
    v8 = v7;
    if ((char)v0[0])
        v8 = *((long long *)&v1);
    v10 = v8;
    v0.chars_take_while(a1);
    v11 = v10;
    if ((char)v0[0])
        v11 = *((long long *)&v1);
    v13 = v11;
    v14 = a1->field_28;
    v15 = a1->field_30;
    a1->field_30 = 1114113;
    if (v15 == 1114113)
        v14 = v3.next();
    v16 = v13;
    if (v15 != 0x110000)
    {
        v17 = 1;
        if (v15 >= 128)
        {
            v17 = 2;
            if (v15 >= 0x800)
                v17 = 4 - (v15 < 0x10000);
        }
        v16 = v17 + v14;
    }
    a0[0] = 4;
    a0[1] = a2;
    a0[2] = v7;
    a0[3] = v10;
    a0[4] = v13;
    a0[5] = v16;
    return a2;
}
