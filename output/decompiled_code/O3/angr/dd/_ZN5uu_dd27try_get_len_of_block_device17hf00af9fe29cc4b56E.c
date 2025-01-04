long long uu_dd::try_get_len_of_block_device::hf00af9fe29cc4b56(unsigned long long a0[2], unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0x90]
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx

    std::fs::File::metadata::he899a18112e6f19e(&v0, a1);
    if (*((int *)&v0) == 2)
    {
        v4 = *((long long *)&v1);
        goto LABEL_4d8f86;
    }
    else
    {
        v4 = 0xf000 & *((int *)&v2);
        if ((unsigned int)v4 != 0x6000)
        {
            a0[0] = 0;
            return v4;
        }
        v4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a1, 1);
        if (v4)
        {
            a0[1] = v5;
        }
        else
        {
            v4 = std::io::Seek::rewind::h775fcf7d5bbb9e4d(a1);
            if (!v4)
            {
                a0[0] = 1;
                a0[1] = v6;
                return v4;
            }
LABEL_4d8f86:
            a0[1] = v4;
        }
        a0[0] = 2;
        return v4;
    }
}
