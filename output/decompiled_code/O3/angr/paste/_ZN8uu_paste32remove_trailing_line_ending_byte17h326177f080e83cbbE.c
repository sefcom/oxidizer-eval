long long uu_paste::remove_trailing_line_ending_byte::h326177f080e83cbb(char a0, unsigned long long a1[3])
{
    unsigned long long v1;  // rax

    v1 = a1[2];
    if (v1 && *((char *)(a1[1] + v1 - 1)) == a0)
    {
        v1 -= 1;
        a1[2] = v1;
    }
    return v1;
}
