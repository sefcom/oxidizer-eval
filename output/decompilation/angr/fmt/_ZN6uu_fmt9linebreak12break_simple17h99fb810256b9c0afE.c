long long uu_fmt::linebreak::break_simple::h99fb810256b9c0af(unsigned long a0, unsigned long a1, struct_2 *a2)
{
    unsigned long v0;  // [sp-0x28]
    unsigned long long v1;  // [sp-0x20]
    char v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    struct_0 *v6;  // rdi
    char *v7;  // rax

    v0 = a0;
    v1 = a1;
    core::iter::traits::iterator::Iterator::try_fold::h73fbe5cd754a894b(&v2, &v0, a2->field_20, a2);
    if (v3 == 2)
        return *((long long *)&v2);
    v6 = a2->field_18;
    v7 = v6->field_10;
    if (v6->field_0 - v7 > 1)
    {
        v7[v6->field_8] = 10;
        v6->field_10 = &v7[1];
        return 0;
    }
    return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha7722a1d537a2c8a(v6, "\n", 1);
}
