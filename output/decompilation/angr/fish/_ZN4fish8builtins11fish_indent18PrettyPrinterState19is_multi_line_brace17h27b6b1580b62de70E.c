long long fish::builtins::fish_indent::PrettyPrinterState::is_multi_line_brace(unsigned long long a0[15], unsigned long long a1, struct_2 **a2)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x24]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    struct_1 *v5;  // rdx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rbx
    void* v8;  // rdi
    unsigned long long v9;  // rax

    v4 = a0.parent(a2(a1), a2);
    v5->field_40(&(char)v0, v4);
    if (*((int *)&v0) != 16)
        return 0;
    v6 = a0[13];
    v7 = a0[14];
    (char)v0.try_source_range(*((long long *)&v2));
    v8 = 0;
    if (v0)
        v8 = v1;
    v0 = v8.start();
    v9 = core::slice::<impl [T]>::binary_search_by(v6, v7, &(char)v0);
    return v9 & 0xffffffffffffff00 | !v9;
}
