long long fish::input_common::InputEventQueuer::read_until_sequence_terminator(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v1;  // rax
    char v2;  // dl
    char v3;  // bpl
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    if (!((char)a0.try_readb(a1) & 1))
        return 0;
    do
    {
        if ((v2 == 92 & v3))
        {
            v4 = (v1 & 0xffffffffffffff00 | v2 == 92) & 0xffffffffffffff00 | 1;
            if (!a1->field_10)
                return v4;
            v5 = a1->field_10;
            a1->field_10 = v5 - 1;
            if (v5 != 1)
            {
                a1->field_10 = v5 - 2;
                return (v1 & 0xffffffffffffff00 | v2 == 92) & 0xffffffffffffff00 | 1;
            }
            return v4;
        }
        v3 = v2 == 27;
        v1 = a0.try_readb(a1);
    } while (((char)v1 & 1));
    return 0;
}
