void starship::modules::aws::alias_name(unsigned long long a0, void* a1, unsigned long long a2)
{
    int v0;  // [bp-0x48], Other Possible Types: char
    unsigned long v1;  // [bp-0x38], Other Possible Types: unsigned long long
    char v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v6[5];  // rax

    if (!((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63)))
    {
        v6 = a2.get_inner(a1);
        if (!v6)
            goto LABEL_b84279;
        v0.to_vec(v6[3], v6[4]);
        v4 = v1;
        memcpy(&v2, &v0, 16);
    }
    else
    {
LABEL_b84279:
        v3 = 0x8000000000000000;
    }
    v1 = (long long)a1[16];
    *((int128_t *)&v0) = *((int128_t *)a1);
    a0.or(&v2, &v0);
    return;
}
