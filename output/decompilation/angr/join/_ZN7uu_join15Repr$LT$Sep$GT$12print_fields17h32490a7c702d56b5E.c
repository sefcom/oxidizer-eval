long long uu_join::Repr<Sep>::print_fields(unsigned long a0, unsigned long long a1, struct_0 *a2, unsigned long a3)
{
    struct_0 *v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    void* v3;  // rbp
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v0 = v2;
    v0 = a2;
    if (!a2->field_10)
        return 0;
    v3 = 0;
    do
    {
        v4 = v3;
        v5 = v4.forward_unchecked();
        if (v4 != a3)
        {
            v6 = a1.write_all(a0 + 41.output_separator(), 1);
            if (v6)
                return v6;
            v7 = v0.get_field(v4);
            if (!v7)
                core::option::unwrap_failed(&g_593a78); /* do not return */
            v8 = a1.write_all(v7, a2);
            if (v8)
                return v8;
        }
        v3 = v5;
    } while (v3 < a2->field_10);
    return 0;
}
