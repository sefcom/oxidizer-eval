long long fish::text_face::TextStyling::union_prefer_right(unsigned long a0, unsigned long a1)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rsi

    v1 = a0 >> 32;
    v2 = a1 >> 32;
    if ((char)v2 == 5)
        v3 = v1;
    else
        v3 = v2;
    v4 = (unsigned int)a1 & &g_1000000;
    if (((unsigned int)a0 & 0x1000000))
        v4 = "d\n\n# Save \\(gamake\\(gas output in a file:\nmake &>/log\n\n# Redirections stack and can be used with blocks:\nbegin\n    echo stdout\n    echo stderr >&2 # <\\- this goes to stderr!\nend >/dev/null # ignore stdout, so this prints \"stderr\"\n\n# print all lines that in";
    v5 = (unsigned int)a1 & 0x10000;
    if (((unsigned int)a0 & 0x10000))
        v5 = 0x10000;
    v6 = (unsigned int)a1 & 0x100;
    if (((unsigned short)a0 & 0x100))
        v6 = 0x100;
    v7 = (unsigned int)a1 & 1;
    if (((char)a0 & 1))
        v7 = 1;
    return v7 | v6 | v5 | v4 | v3 * 0x100000000;
}
