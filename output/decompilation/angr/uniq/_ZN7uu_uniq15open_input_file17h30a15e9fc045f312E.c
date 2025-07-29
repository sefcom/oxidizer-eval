long long uu_uniq::open_input_file(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    unsigned int v6;  // edx

    if (!a1 || (char)a1.equal(a2, "-", 1))
    {
        v2 = std::io::stdio::stdin();
        v0 = v2.lock().new(v6 & 1);
        v5 = &g_58bed8;
        goto LABEL_4abe0f;
    }
    else
    {
        v2.open(a1, a2);
        v0.map_err_context(&v2, a1, a2);
        if (v0)
        {
            v4 = 1;
        }
        else
        {
            v2.with_capacity(0x2000, *((int *)&v1));
            v0 = v2.new();
            v5 = &g_58be50;
LABEL_4abe0f:
            v4 = 0;
        }
    }
    a0[1] = v0;
    a0[2] = v5;
    a0[0] = v4;
    return a0;
}
