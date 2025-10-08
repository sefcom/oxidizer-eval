long long bat::vscreen::EscapeSequenceOffsetsIterator::chars_take_while(unsigned long long a0[3], struct_0 *a1)
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v2;  // r15
    unsigned long v3;  // r12
    unsigned long long v4;  // rax
    unsigned long v5;  // r13
    unsigned long v6;  // rcx
    unsigned int v7;  // ebp
    unsigned long v8;  // rcx
    unsigned long long v9;  // r13
    unsigned long v10;  // rbx

    v2 = &a1->padding_0[16];
    v3 = &a1->field_28;
    v3.get_or_insert_with(v2);
    if (a1->field_30 == 0x110000)
    {
        v4 = 0;
    }
    else
    {
        v3.get_or_insert_with(v2);
        if (a1->field_30 == 0x110000)
            core::option::unwrap_failed(&g_acee20); /* do not return */
        v5 = a1->field_28;
        v3.get_or_insert_with(v2);
        v6 = v5;
        v7 = a1->field_30;
        if (v7 != 0x110000)
        {
            v0 = v6;
            v8 = v0;
            v5 = v8;
            v6 = v8;
            if (bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v7))
            {
                a0[0] = a0;
                do
                {
                    v9 = 1;
                    if (v7 >= 128)
                    {
                        v9 = 2;
                        if (v7 >= 0x800)
                            v9 = 4 - (v7 < 0x10000);
                    }
                    v10 = *((long long *)v3);
                    a1->field_30 = 1114113;
                    v3.get_or_insert_with(v2);
                    v7 = a1->field_30;
                } while (v7 != 0x110000 && bat::vscreen::EscapeSequenceOffsetsIterator::next_nf::{{closure}}(v7));
                v5 = v9 + v10;
                v6 = v0;
            }
        }
        a0[1] = v6;
        a0[2] = v5;
        v4 = 1;
    }
    a0[0] = v4;
    return v4;
}
