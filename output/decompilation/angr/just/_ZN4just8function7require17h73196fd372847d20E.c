long long just::function::require(struct_0 *a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x60]
    char *v2;  // [bp-0x58], Other Possible Types: char
    unsigned long long v3;  // [bp-0x50]
    void* v4;  // [bp-0x48]
    int v5;  // [bp-0x38], Other Possible Types: char
    unsigned long long v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    char *v8;  // [bp-0x18]
    unsigned long long v9;  // [bp-0x10]
    unsigned long long v11;  // rax

    v6 = a2;
    v7 = a3;
    just::which::which(&v0, *(a1), a2, a3);
    memcpy(&v5, &v2, 16);
    if (*((int *)&v0) == 1)
    {
        *((void*)&a0->field_10) = v5;
        a0->field_8 = v1;
        goto LABEL_66bb3f;
    }
    else if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v8 = &v6;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_830000;
        v1 = 2;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        a0->field_8.map_or_else(0, a2, &v0);
LABEL_66bb3f:
        v11 = 1;
    }
    else
    {
        *((void*)&a0->field_10) = v5;
        a0->field_8 = v1;
        v11 = 0;
    }
    a0->field_0 = v11;
    return a0;
}
