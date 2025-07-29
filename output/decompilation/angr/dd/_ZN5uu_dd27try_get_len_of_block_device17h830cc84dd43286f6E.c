long long uu_dd::try_get_len_of_block_device(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0x90]
    unsigned long long v4;  // rax
    unsigned long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long v7;  // rdx

    v0.metadata(a1);
    if (*((int *)&v0) == 2)
    {
        v4 = *((long long *)&v1);
        goto LABEL_4cff16;
    }
    else
    {
        v5 = 0xf000 & *((int *)&v2);
        if ((unsigned int)v5 != 0x6000)
        {
            a0->field_0 = 0;
            return v5;
        }
        v4 = a1.seek(1, 0);
        if (v4)
        {
            a0->field_8 = v6;
        }
        else
        {
            v4 = a1.rewind();
            if (!v4)
            {
                a0->field_0 = 1;
                a0->field_8 = v7;
                return v4;
            }
LABEL_4cff16:
            a0->field_8 = v4;
        }
        a0->field_0 = 2;
        return v4;
    }
}
