long long uu_dircolors::generate_dircolors_config(unsigned long a0)
{
    unsigned long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    struct struct_0 v2[8];  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    char *v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    char *v9;  // [bp-0x78]
    unsigned long long v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    char *v13;  // [bp-0x58]
    unsigned long long v14;  // [bp-0x50]
    void* v15;  // [bp-0x48]
    struct_1 *v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax

    v3 = 0;
    v4 = 1;
    v5 = 0;
    v3.append_elements("# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n", 484, &g_589d88);
    v3.append_elements("COLORTERM ?*\n# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as p", 13, &g_589d88);
    v0 = _ZN6uucore8features6colors5TERMS17hac6d9db0eb1c9f17E;
    v1 = g_58b7c0 * 16 + _ZN6uucore8features6colors5TERMS17hac6d9db0eb1c9f17E;
    if (v0.next())
    {
        do
        {
            v2 = v18;
            v7 = &v2;
            v8 = <&T as core::fmt::Display>::fmt;
            v11 = &g_58a020;
            v12 = 2;
            v15 = 0;
            v13 = &v7;
            v14 = 1;
            v3.spec_write_fmt(&v11);
            v18 = v0.next();
        } while (v18);
    }
    v3.append_elements("# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\nTERM ", 622, &g_589d88);
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E;
    v1 = g_58bb30 * 48 + _ZN6uucore8features6colors10FILE_TYPES17h68d78252f17229b3E;
    if (v0.next())
    {
        do
        {
            v6 = v19;
            *((unsigned long long *)&v2[0]) = v19 + 32;
            v7 = &v6;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v2[0].field_0;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = &g_58a040;
            v12 = 3;
            v15 = 0;
            v13 = &v7;
            v14 = 2;
            v3.spec_write_fmt(&v11);
            v19 = v0.next();
        } while (v19);
    }
    v3.append_elements("# List any file extensions like '.gz' or '.tar' that you would like ls\n # to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.", 71, &g_589d88);
    v3.append_elements("# to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.", 73, &g_589d88);
    v0 = _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
    v1 = g_58cb80 * 32 + _ZN6uucore8features6colors11FILE_COLORS17h1d992387421d4282E;
    if (v0.next())
    {
        do
        {
            v6 = v20;
            *((unsigned long long *)&v2[0]) = v20 + 16;
            v7 = &v6;
            v8 = <&T as core::fmt::Display>::fmt;
            v9 = &v2[0].field_0;
            v10 = <&T as core::fmt::Display>::fmt;
            v11 = &g_58a040;
            v12 = 3;
            v15 = 0;
            v13 = &v7;
            v14 = 2;
            v3.spec_write_fmt(&v11);
            v20 = v0.next();
        } while (v20);
    }
    v3.append_elements("# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.", 70, &g_589d88);
    v3.append_elements("# config specific to those matching environment variables.", 58, &g_589d88);
    v16->field_10 = 0;
    v16->field_0 = *((int128_t *)&v3);
    return v16;
}
