char just::parser::Parser::next_are(unsigned long long a0[12], char *a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rdx
    char *v6;  // rax
    char *v7;  // r13

    a0[7].insert(*(a1));
    v0 = a0.rest();
    v1 = v5;
    v6 = 0;
    while (true)
    {
        v7 = v6;
        if (a2 == v6)
            break;
        v2.try_fold(&v0);
        if (v3 == 37)
            break;
        v6 = v7 + 1;
        if (v3 != *((char *)(a1 + v7)))
            break;
    }
    return a2 == v7;
}
