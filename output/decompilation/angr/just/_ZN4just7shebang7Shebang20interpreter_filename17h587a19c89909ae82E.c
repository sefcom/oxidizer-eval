long long just::shebang::Shebang::interpreter_filename(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x60]
    void* v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned short v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r14
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax

    v6 = v8;
    v5 = v9;
    v4 = v10;
    v0.into_searcher(395136991279, a0, a1);
    v1 = 0;
    v2 = a1;
    v3 = 1;
    v12 = v0.next_back(a1, v11);
    if (!v12)
    {
        if (v12)
            return a0;
    }
    else
    {
        if (v12)
            return v12;
    }
    return v13;
}
