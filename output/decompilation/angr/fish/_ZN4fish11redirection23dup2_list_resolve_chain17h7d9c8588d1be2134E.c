long long fish::redirection::dup2_list_resolve_chain(unsigned long a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    struct_0 *v3;  // [bp-0x38]
    unsigned long long v5;  // r12
    unsigned long long *v6;  // r13
    unsigned int v7;  // eax
    struct_3 *v8;  // rcx
    unsigned long long v9;  // rsi
    unsigned long v10;  // rdi
    unsigned int v11;  // eax

    v0 = 0;
    v1 = 4;
    v2 = 0;
    if (a1[2])
    {
        v5 = a1[1];
        v6 = 0;
        do
        {
            v7 = *((long long *)(*((long long *)(8 + v5 + (char *)v6)) + 40))(*((long long *)(v5 + (char *)v6)) + (*((long long *)(*((long long *)(8 + v5 + (char *)v6)) + 16)) - 1 & 0xfffffffffffffff0) + 16);
            v8 = *((long long *)(8 + v5 + (char *)v6));
            v9 = v8->field_10 - 1 & 0xfffffffffffffff0;
            v10 = *((long long *)(v5 + (char *)v6)) + (v8->field_10 - 1 & 0xfffffffffffffff0) + 16;
            if (v7 >= 0)
            {
                v11 = v8->field_28(v10, v9, *((long long *)(v5 + (char *)v6)), v8);
                v0.add_dup2(v11, *((long long *)(*((long long *)(8 + v5 + (char *)v6)) + 32))(*((long long *)(v5 + (char *)v6)) + (*((long long *)(*((long long *)(8 + v5 + (char *)v6)) + 16)) - 1 & 0xfffffffffffffff0) + 16));
            }
            else
            {
                v0.add_close(v8->field_20(v10, v9, *((long long *)(v5 + (char *)v6)), v8));
            }
            v6 += 2;
        } while (a1[2] * 16 != v6);
    }
    v3->field_10 = 0;
    v3->field_0 = v0;
    v3->field_8 = 4;
    return v3;
}
