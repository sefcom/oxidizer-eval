void uu_csplit::SplitWriter::writeln::panic_cold_display(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    char *v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    void* v6;  // [bp-0x10]

    v0 = a0;
    v1 = <alloc::string::String as core::fmt::Display>::fmt;
    v2 = &g_481f20;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    core::panicking::panic_fmt(&v2, &g_72fd10); /* do not return */
}
