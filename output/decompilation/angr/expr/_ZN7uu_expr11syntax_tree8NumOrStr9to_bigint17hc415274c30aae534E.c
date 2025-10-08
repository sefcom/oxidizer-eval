long long uu_expr::syntax_tree::NumOrStr::to_bigint(struct_0 *a0, void* a1)
{
    void* v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax

    if (!((char)(((0 ^ *((long long *)a1)) & (0 ^ -(*((long long *)a1)))) >> 63)))
    {
        v1 = v3;
        v0 = 0;
        v4 = a0.clone((long long)a1[8], (long long)a1[16]);
        a0->field_18 = (char)a1[24];
        return v4;
    }
    return a0.from_str_radix((long long)a1[16], (long long)a1[24]);
}
