long long uu_split::number::Number::increment(unsigned long long a0[2])
{
    if (!((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63)))
        goto LABEL_0x4c7320;
    a0[1] = a0[1] + 1;
    return 0;
}
