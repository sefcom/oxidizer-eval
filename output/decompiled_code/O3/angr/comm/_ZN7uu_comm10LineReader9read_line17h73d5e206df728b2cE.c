long long uu_comm::LineReader::read_line::h73d5e206df728b2c(struct_3 *a0, struct_1 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    struct_0 *v0;  // [bp-0x38], Other Possible Types: char
    char v1;  // [sp-0x30]
    unsigned long long v4;  // rax
    char v5;  // dl
    struct_0 *v6;  // rdi

    if (a0->field_0)
        v4 = std::io::read_until::h7bd822101ba9312b(a0, a0->field_30 & 4294967295, a1, a3, a4, a5, *((long long *)&v0));
    v0 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&a0->padding_8);
    v1 = v5 & 1;
    v4 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&v0);
    v6 = v0;
    if (!v1 && _ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17he17161e9b27d951aE << 1)
    {
        v6 = v6;
        if (!(char)std::panicking::panic_count::is_zero_slow_path::hac16595b1171622c())
            v6->field_4 = 1;
    }
    v6->field_0 = 0;
    if (CasCmpNE(v6->field_0, v6->field_0))
        goto LABEL_0x47e2c7;
    if (v6->field_0 == 2)
        goto LABEL_0x47e311;
}
