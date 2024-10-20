long long uu_env::string_parser::StringParser::substring::h86b54ee2f2203128(unsigned long long a0[2], unsigned long long a1[2])
{
    unsigned long v0;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x28]
    unsigned long long v2;  // [sp-0x20]
    int v3;  // [sp-0x18]
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax

    v5 = a0[1];
    v6 = a1[0];
    if (v5 < v6)
    {
        v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    else if (a1[1] - v6 <= v5 - v6)
    {
        return v6 + a0[0];
    }
    else
    {
        v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
}
