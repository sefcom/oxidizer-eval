long long just::analyzer::Analyzer::analyze_set(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long long v5;  // rdx
    struct_1 *v6;  // rax

    v6 = a1.get(a2, a3 + 80.lexeme(), v5);
    if (!v6)
    {
        a0->field_48 = 37;
        return v6;
    }
    v1 = v6->padding_0[80].lexeme();
    v2 = v5;
    v3 = v6->field_80;
    v0 = 9223372036854775837;
    return a0.error(a3 + 80, &v0);
}
