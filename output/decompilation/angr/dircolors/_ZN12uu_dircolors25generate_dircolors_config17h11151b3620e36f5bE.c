long long uu_dircolors::generate_dircolors_config(unsigned long a0)
{
    unsigned long long v0;  // [bp-0xb0], Other Possible Types: unsigned long
    char *v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    char *v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x90]
    unsigned long v5;  // [bp-0x88]
    unsigned long long v6;  // [bp-0x80]
    unsigned long long v7;  // [bp-0x78]
    char *v8;  // [bp-0x70]
    unsigned long long v9;  // [bp-0x68]
    void* v10;  // [bp-0x60]
    void* v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    void* v13;  // [bp-0x40]
    struct_0 *v14;  // [bp-0x38]
    void* v16;  // r12
    unsigned long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // r12
    unsigned long v20;  // r12

    v11 = 0;
    v12 = 1;
    v13 = 0;
    v11.spec_extend("# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n", "COLORTERM ?*\n# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as p");
    v11.spec_extend("COLORTERM ?*\n# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as p", "# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n");
    v16 = 0;
    do
    {
        v0 = _ZN6uucore8features6colors5TERMS17ha2c08363bc802d0aE + v16;
        v1 = &v0;
        v2 = <&T as core::fmt::Display>::fmt;
        v6 = &g_4f5f10;
        v7 = 2;
        v10 = 0;
        v8 = &v1;
        v9 = 1;
        v11.spec_write_fmt(&v6);
        v16 += 16;
    } while (v16 != 432);
    v11.spec_extend("# Below are the color init strings for the basic file types.\n# One can use codes for 256 or more colors supported by modern terminals.\n# The default color codes use the capabilities of an 8 color terminal\n# with some additional attributes as per the following codes:\n# Attribute codes:\n# 00=none 01=bold 04=underscore 05=blink 07=reverse 08=concealed\n# Text color codes:\n# 30=black 31=red 32=green 33=yellow 34=blue 35=magenta 36=cyan 37=white\n# Background color codes:\n# 40=black 41=red 42=green 43=yellow 44=blue 45=magenta 46=cyan 47=white\n#NORMAL 00 # no color code at all\n#FILE 00 # regular file: use no color at all\n", "TERM # List any file extensions like '.gz' or '.tar' that you would like ls\n # to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching ");
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 32;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 48;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 80;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 96;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 128;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 144;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 176;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 192;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 224;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 240;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 272;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 288;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 320;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 336;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 368;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 384;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 416;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 432;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 464;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 480;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 0x200;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 528;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 560;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 576;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 608;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 624;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 656;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 672;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 704;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 720;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 752;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 0x300;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 800;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v5 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 816;
    v0 = _ZN6uucore8features6colors10FILE_TYPES17h9917bb83e012dc61E + 848;
    v1 = &v5;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = &v0;
    v4 = <&T as core::fmt::Display>::fmt;
    v6 = &g_4f5f30;
    v7 = 3;
    v10 = 0;
    v8 = &v1;
    v9 = 2;
    v11.spec_write_fmt(&v6);
    v11.spec_extend("# List any file extensions like '.gz' or '.tar' that you would like ls\n # to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching envir", " # to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.");
    v11.spec_extend("# to color below. Put the extension, a space, and the color init string.\n# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.", "# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.");
    v17 = _ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE;
    v18 = 4160;
    do
    {
        v19 = v18;
        v5 = v17;
        v0 = v17 + 16;
        v1 = &v5;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v0;
        v4 = <&T as core::fmt::Display>::fmt;
        v6 = &g_4f5f30;
        v7 = 3;
        v10 = 0;
        v8 = &v1;
        v9 = 2;
        v11.spec_write_fmt(&v6);
        v17 += 32;
        v20 = v19 - 32;
        v18 = v20;
    } while (v19 != 32);
    v11.spec_extend("# Subsequent TERM or COLORTERM entries, can be used to add / override\n# config specific to those matching environment variables.", "# config specific to those matching environment variables.");
    v11.spec_extend("# config specific to those matching environment variables.", &g_41cb82);
    v14->field_10 = 0;
    v14->field_0 = *((int128_t *)&v11);
    return v14;
}
