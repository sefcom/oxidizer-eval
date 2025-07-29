long long uu_join::Repr<Sep>::print_fields(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long a4)
{
    void* v1;  // rbx
    unsigned long long v2;  // rbx
    unsigned long long v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    if (!a3->field_10)
        return 0;
    v1 = 0;
    do
    {
        v2 = v1;
        v3 = v2.forward_unchecked();
        if (v2 != a4)
        {
            v4 = a2.write_all(a0.output_separator(a1), a2);
            if (v4)
                return v4;
            v5 = a3.get_field(v2);
            if (!v5)
                core::option::unwrap_failed(&g_593a78); /* do not return */
            v6 = a2.write_all(v5, a2);
            if (v6)
                return v6;
        }
        v1 = v3;
    } while (v1 < a3->field_10);
    return 0;
}
