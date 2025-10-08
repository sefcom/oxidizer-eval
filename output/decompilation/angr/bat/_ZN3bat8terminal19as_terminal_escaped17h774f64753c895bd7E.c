long long bat::terminal::as_terminal_escaped(unsigned long long a0, unsigned int a1, char a2, unsigned long long a3, unsigned long long a4, char a5, char a6, char a7, unsigned long a8)
{
    unsigned int v0;  // [bp-0x7c]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x47]
    char v7;  // [bp-0x45]
    unsigned int v8;  // [bp-0x44]
    char v9;  // [bp-0x40]
    unsigned int v10;  // [bp-0x3f]
    unsigned int v11;  // [bp-0x3b]
    unsigned int v12;  // r15d
    unsigned int v13;  // eax
    char v14;  // bl
    char v15;  // r13b

    if (!a4)
        return a0.to_vec(a3, 0);
    v12 = 21;
    v0 = a5;
    if (a6)
    {
        v13 = bat::terminal::to_ansi_color(a1, v0);
        v14 = a2 & 1;
        v15 = a2 >> 1 & 1;
        if (((char)a8 & 1))
            goto LABEL_843f93;
    }
    else
    {
        v13 = 21;
        if (((char)a8 & 1))
        {
LABEL_843f93:
            v12 = bat::terminal::to_ansi_color(a8 >> 8 & 4294967295, v0);
        }
    }
    v5 = v14;
    v6 = 0;
    v7 = v15;
    v8 = 0;
    v9 = 0;
    v10 = v13;
    v11 = v12;
    v1 = 0x8000000000000000;
    v2 = a3;
    v3 = a4;
    v4 = 9223372036854775810;
    a0.spec_to_string(&v1);
    return (unsigned long long)core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v1);
}
