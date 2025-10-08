long long uu_od::prn_char::format_ascii_dump(struct_0 *a0, char *a1, unsigned long a2)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    char *v4;  // r13
    unsigned int v5;  // eax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v0.push(62);
    if (a2)
    {
        v4 = 0;
        do
        {
            v5 = *((char *)(a1 + v4));
            if ((v5 - 32 & 255) >= 95)
                v0.push(46);
            else
                v0.spec_extend(*((long long *)&(&_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E)[16 * v5]), *((long long *)&(&g_503010)[16 * v5]) + *((long long *)&(&_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E)[16 * v5]));
            v4 += 1;
        } while (a2 != v4);
    }
    v0.push(60);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
