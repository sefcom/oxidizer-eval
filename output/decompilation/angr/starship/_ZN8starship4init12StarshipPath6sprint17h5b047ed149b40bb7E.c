long long starship::init::StarshipPath::sprint(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0[2];  // [bp-0x50]
    unsigned long v1;  // [bp-0x48], Other Possible Types: unsigned long long
    char v2;  // [bp-0x40], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    int v5;  // [bp-0x28], Other Possible Types: char
    unsigned long long v6;  // [bp-0x18]

    v0.str_path(a1, a2);
    if (!v0)
    {
        *((unsigned long *)&a0[8]) = v1;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v1;
    }
    shell_words::quote(&v2, v0, v1);
    if (v2 == 0x8000000000000000)
    {
        v5.to_vec(v3, v4);
    }
    else
    {
        v6 = v4;
        memcpy(&v5, &v2, 16);
    }
    *((unsigned long long *)&a0[16]) = v6;
    *(a0) = v5;
    return v6;
}
