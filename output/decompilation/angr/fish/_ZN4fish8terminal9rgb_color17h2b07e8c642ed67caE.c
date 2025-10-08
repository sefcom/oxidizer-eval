long long fish::terminal::rgb_color(unsigned long long a0, char a1, unsigned long a2)
{
    unsigned short v0;  // [bp-0x78]
    char v1;  // [bp-0x76]
    unsigned int v2;  // [bp-0x74]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    void* v7;  // [bp-0x50]
    char *v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    char *v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    char *v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    char *v14;  // [bp-0x10]
    unsigned long long v15;  // [bp-0x8]
    unsigned int v17;  // eax

    v0 = a2;
    v1 = (unsigned int)a2 >> 16;
    if (!a1)
    {
        v17 = 38;
    }
    else if (a1 == 1)
    {
        v17 = 48;
    }
    else
    {
        v8 = &(char)v0;
        v9 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v10 = &(char)v0;
        v11 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v12 = &v1;
        v13 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
        v3 = &g_14e2940;
        v4 = 4;
        v7 = 0;
        v5 = &v8;
        v6 = 3;
        return fish::common::do_write_to_output(a0, &v3);
    }
    v2 = v17;
    v8 = &v2;
    v9 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
    v10 = &(char)v0;
    v11 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v12 = &(char)v0;
    v13 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v14 = &v1;
    v15 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
    v3 = &g_14e2980;
    v4 = 5;
    v7 = 0;
    v5 = &v8;
    v6 = 4;
    return fish::common::do_write_to_output(a0, &v3);
}
