long long starship::init::StarshipPath::init(unsigned long long a0[3])
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]

    which::which(&v3);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        std::env::current_exe(&v0);
        if (v0 == 0x8000000000000000)
        {
            a0[1] = v1;
            a0[0] = 0x8000000000000000;
            return v1;
        }
    }
    else
    {
        v2 = *((long long *)&v4);
        memcpy(&v0, &v3, 16);
    }
    a0[0] = v0;
    a0[1] = v1;
    a0[2] = v2;
    return v0;
}
