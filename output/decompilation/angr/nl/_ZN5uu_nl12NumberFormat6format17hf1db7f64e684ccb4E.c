long long uu_nl::NumberFormat::format(unsigned long long a0, char *a1, unsigned long long a2, unsigned long long a3)
{
    char *v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    char *v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char *v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    unsigned long long v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x30]
    void* v14;  // [bp-0x28]
    unsigned long long v15;  // [bp-0x20]
    char v16;  // [bp-0x18]
    unsigned long long v17;  // [bp-0x10]
    unsigned int v19;  // eax
    unsigned long long v20;  // rax

    v10 = a2;
    v19 = *(a1);
    if (!v19)
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = 0;
        v3 = a3;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        v16 = 0;
        goto LABEL_597215;
    }
    if (v19 == 1)
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = 0;
        v3 = a3;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 32;
        goto LABEL_59720d;
    }
    else if (a2 >= 0)
    {
        v0 = &v10;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = 0;
        v3 = a3;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
LABEL_59720d:
        v16 = 1;
LABEL_597215:
        v20 = &g_480ea0;
    }
    else
    {
        v17 = -(a2);
        v0 = &v17;
        v1 = core::fmt::num::imp::<impl core::fmt::Display for isize>::fmt;
        v2 = 0;
        v3 = a3 - 1;
        v11 = 2;
        v12 = 1;
        v13 = 1;
        v14 = 0;
        v15 = 48;
        v16 = 1;
        v20 = &g_724268;
    }
    v4 = v20;
    v5 = 1;
    v8 = &v11;
    v9 = 1;
    v6 = &v0;
    v7 = 2;
    a0.map_or_else(&v4);
    return a0;
}
