long long fish::wutil::gettext::LocalizableString::localize(unsigned long long a0[3])
{
    void* v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // rax

    v4 = a0[2];
    if ((char)(((0 ^ a0[0]) & (0 ^ -(a0[0]))) >> 63))
    {
        if (v4)
        {
            v1 = a0[1];
            v2 = v4;
            v0 = 0;
            return fish::wutil::gettext::gettext(&v0);
        }
        return 4;
    }
    else
    {
        if (v4)
        {
            v1 = a0[1];
            v2 = v4;
            v0 = 1;
            return fish::wutil::gettext::gettext(&v0);
        }
        return 4;
    }
}
