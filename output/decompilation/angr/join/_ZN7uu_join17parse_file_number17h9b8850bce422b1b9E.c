long long uu_join::parse_file_number(void* a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    unsigned int v12;  // [bp-0x20]
    unsigned long long v14;  // rax

    v14 = a1.equal(a2, "12itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, re", 1);
    if ((char)v14)
    {
        *((char *)&a0[8]) = 0;
    }
    else
    {
        v14 = a1.equal(a2, "2itoenocheck-ordercheck-orderheaderz(uutils coreutils) 0.0.30For each pair of input lines with identical join fields, write a line to\nstandard output. The default join field is the first, delimited by blanks.\n\nWhen `FILE1` or `FILE2` (not both) is `-`, rea", 1);
        if (!(char)v14)
        {
            v2 = 0;
            v3 = a1;
            v4 = a2;
            v5 = 1;
            v0 = &v2;
            v1 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = &g_4fe5a8;
            v7 = 1;
            v10 = 0;
            v8 = &v0;
            v9 = 1;
            v11.map_or_else(&v6);
            v12 = 1;
            *((double *)a0) = v11.new();
            *((char **)&a0[8]) = &g_4fe360;
            return &g_4fe360;
        }
        *((char *)&a0[8]) = 1;
    }
    *((unsigned long long *)a0) = 0;
    return v14;
}
