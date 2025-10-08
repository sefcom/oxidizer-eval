void starship::modules::rust::get_module_version(unsigned long a0, unsigned long long a1, unsigned long a2, unsigned long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    unsigned long long *v9;  // rax

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = v8;
    v9 = a4.get_rustup_rustc_version(a1);
    goto (long long)(g_52b070[*(v9)] + (char *)&g_52b070[0]);
}
