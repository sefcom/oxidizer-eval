long long uu_comm::open_file(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0xcc]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0x98]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if ((char)a1.equal(a2, "-comm-error-is-directory(uutils coreutils) 0.1.0comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 1))
    {
        v5 = std::io::stdio::stdin();
        a0->field_0 = 0;
        a0->field_8 = v5;
        a0->field_30 = a3;
        return a0;
    }
    std::fs::metadata(&v0, a1, a2);
    if (v0 != 2)
    {
        if ((0xf000 & *((int *)&v3)) == 0x4000)
        {
            uucore::mods::locale::get_message(&v0, "comm-error-is-directory(uutils coreutils) 0.1.0comm-aboutcomm-usagecomm-help-column-1comm-help-column-2comm-help-column-3comm-help-delimiterSTR\tcomm-help-zero-terminatedcomm-help-totalcomm-help-check-ordercomm-help-no-check-order", 23);
            v6 = 40._new(v0.new(), &g_572268);
            a0->field_0 = v6;
            a0->field_30 = 11;
            return a0;
        }
        v0.open(a1, a2);
        if (!(v0 & 1))
        {
            a0.with_capacity(0x2000, v1);
            a0->field_30 = a3;
            return a0;
        }
    }
    a0->field_0 = *((long long *)&v2);
    a0->field_30 = 11;
    return a0;
}
