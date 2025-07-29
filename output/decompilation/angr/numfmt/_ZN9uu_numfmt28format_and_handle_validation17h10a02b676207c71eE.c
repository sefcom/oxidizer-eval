long long uu_numfmt::format_and_handle_validation(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]

    v4 = a0;
    v5 = a1;
    uu_numfmt::format::format_and_print(&v0, a0, a1, a2);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        return 0;
    v3 = *((long long *)&v1);
    memcpy(&v2, &v0, 16);
    goto (long long)(*((int *)(4287404 + 4 * a2->field_c9)) + (char *)&g_416bac[0]);
}
