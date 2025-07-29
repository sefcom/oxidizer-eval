long long uu_ls::match_quoting_style_name(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char v4;  // bpl
    unsigned int v5;  // 4096
    unsigned int v6;  // r12d
    unsigned short v7;  // r13w
    unsigned int v8;  // edx
    unsigned int v9;  // ecx
    unsigned int v10;  // ecx
    unsigned int v12;  // ecx

    v0 = v2;
    v3 = a0.equal(a1, "literalshellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 7);
    if ((char)v3)
    {
        v4 = 3;
        v5 = a2;
        goto LABEL_522a0e;
    }
    v6 = v3;
    if ((char)a0.equal(a1, "shellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 5))
        goto LABEL_522a38;
    v7 = 1;
    if ((char)a0.equal(a1, "shell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 12))
        goto LABEL_522a5f;
    v4 = 1;
    if ((char)a0.equal(a1, "shell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 12))
    {
LABEL_522a38:
LABEL_522a5f:
        v8 = v7 | a2 * 0x100;
    }
    else
    {
        if (!(!(char)a0.equal(a1, "shell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap", 19)))
            goto LABEL_522a5f;
        v10 = v9 & 0xffff0000 | 2;
        v4 = 2;
        if ((char)a0.equal(a1, "cescapeinternal error: entered unreachable code: Should have been caught by Clap", 1))
        {
            v3 = v6;
            v5 = v10;
            goto LABEL_522a0e;
        }
        else if ((char)a0.equal(a1, "escapeinternal error: entered unreachable code: Should have been caught by Clap", 6))
        {
            v3 = v6;
            v5 = 0;
LABEL_522a0e:
            v12 = v5;
            if (!(char)v3)
                v8 = v12;
            else
                v8 = a2;
        }
        else
        {
            v4 = 4;
        }
    }
    return v4 | v8 * 0x100;
}
