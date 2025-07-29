long long uu_od::prn_char::format_ascii_dump(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char *v6;  // rax
    unsigned int v7;  // eax

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v0.push(62);
    v3 = a1;
    v4 = a2 + a1;
    if (v3.next())
    {
        do
        {
            v7 = *(v6);
            if ((v7 - 32 & 255) >= 95)
                v0.push(46);
            else
                v0.append_elements(*((long long *)&(&_ZN5uu_od8prn_char7C_CHARS17hec0bd8f590159fd6E)[16 * v7]), *((long long *)&(&g_596ff8)[16 * v7]));
            v6 = v3.next();
        } while (v6);
    }
    v0.push(60);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
