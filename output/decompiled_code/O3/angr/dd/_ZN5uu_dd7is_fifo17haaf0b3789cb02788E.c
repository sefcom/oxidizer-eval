long long uu_dd::is_fifo::haaf0b3789cb02788(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x160], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x158]
    char v2;  // [bp-0x128]
    char v3;  // [bp-0xb0]
    char v4;  // [bp-0xa8]
    unsigned long v6;  // rax

    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v3, a0, a1);
    if (*((int *)&v3) == 2)
    {
        v1 = *((long long *)&v4);
        v0 = 2;
    }
    else
    {
        memcpy(&v0, &v3, 176);
        if (v0 != 2)
        {
            v6 = 0xf000 & *((int *)&v2);
            if ((unsigned int)v6 != 0x1000)
                return 0;
            return v6 | -0x100 | 1;
        }
    }
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v1);
    return 0;
}
