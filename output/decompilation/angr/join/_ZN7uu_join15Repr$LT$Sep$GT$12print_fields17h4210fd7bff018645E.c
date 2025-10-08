long long uu_join::Repr<Sep>::print_fields(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v0 = v2;
    v0 = a1;
    if (!a3->field_10)
        return 0;
    v3 = 0;
    do
    {
        if (a4 != v3)
        {
            v4 = a2.write_all(a0.as_ref(v0), a2);
            if (v4)
                return v4;
            v5 = a3.get_field(v3);
            if (!v5)
                core::option::unwrap_failed(&g_4fd2c8); /* do not return */
            v6 = a2.write_all(v5, a2);
            if (v6)
                return v6;
        }
        v3 += 1;
    } while (a3->field_10 != v3);
    return 0;
}
