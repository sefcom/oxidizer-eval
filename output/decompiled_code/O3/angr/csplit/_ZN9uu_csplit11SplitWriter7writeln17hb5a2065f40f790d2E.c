long long uu_csplit::SplitWriter::writeln::hb5a2065f40f790d2(struct_0 *a0, void* a1, unsigned long a2, unsigned long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    int v3;  // [sp-0x30]
    unsigned long long v5;  // rax
    char *v6;  // r15
    void* v7;  // rax
    char *v8;  // r15
    unsigned long long v9;  // rcx
    unsigned long long v10;  // r8
    unsigned long long v11;  // r9

    if (a0->field_38)
        return 0;
    v5 = a0->field_0;
    if (v5 == 0x8000000000000000)
    {
        v0 = &g_675ba8;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
    }
    v6 = a0->field_10;
    if (v5 - v6 > a2)
    {
        memcpy(&v6[a0->field_8], a1, a2);
        v8 = &v6[a2];
        a0->field_10 = v8;
    }
    else
    {
        v7 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h76fa2f47f73dfce0(a0, a1, a2, 0x8000000000000000, a4, a5);
        if (v7)
            return v7;
        v8 = a0->field_10;
    }
    if (a0->field_0 - v8 > 1)
    {
        v8[a0->field_8] = 10;
        a0->field_10 = &v8[1];
    }
    else
    {
        v7 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h76fa2f47f73dfce0(a0, "\nFailed to elide splitsrc/uu/csplit/src/csplit.rstrying to write to a split that was not created", 1, v9, v10, v11);
        if (v7)
            return v7;
    }
    a0->field_30 = a0->field_30 + a2 + 1;
}
