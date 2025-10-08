long long bat::vscreen::EscapeSequenceOffsetsIterator::next_osc(unsigned long long a0[5], struct_0 *a1, unsigned long a2)
{
    unsigned long v2;  // [bp-0x80]
    char v3;  // [bp-0x70]
    unsigned long v11;  // r13
    unsigned long v12;  // rax
    unsigned int v13;  // ebp
    unsigned int v14;  // edx
    char *v15;  // rdi

    v11 = &a1->padding_10;
    v12 = a1->field_28;
    v13 = a1->field_30;
    a1->field_30 = 1114113;
    if (v13 == 1114113)
    {
        v12 = v11.next();
        v13 = v14;
    }
    if (v13 == 0x110000)
        core::option::expect_failed("to not be finishedthis should not be reached: char ", 18, &g_acee60); /* do not return */
    v2 = v12;
    v15 = &v3;
}
