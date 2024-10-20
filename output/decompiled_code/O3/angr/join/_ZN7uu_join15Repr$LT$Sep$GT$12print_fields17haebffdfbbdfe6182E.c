long long uu_join::Repr$LT$Sep$GT$::print_fields::haebffdfbbdfe6182(struct_3 *a0, struct_1 *a1, struct_0 *a2, unsigned long a3)
{
    char v0;  // [sp-0x41]
    unsigned long long v1;  // [sp-0x40]
    unsigned long long v3;  // r13
    void* v4;  // rbp
    char *v5;  // rax
    void* v6;  // rax
    void* v7;  // rax
    char *v8;  // r15
    unsigned long v9;  // rdx

    v3 = a2->field_10;
    if (!v3)
        return 0;
    v0 = a0->field_29;
    v1 = &a0->field_29;
    v4 = 0;
    do
    {
        if (a3 != v4)
        {
            v5 = a1->field_10;
            if (a1->field_0 - v5 >= 2)
            {
                v5[a1->field_8] = v0;
                a1->field_10 = &v5[1];
            }
            else
            {
                v6 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v1, 1);
                if (v6)
                    return v6;
            }
            v7 = uu_join::Line::get_field::ha4bb61e8b997f700(a2, v4);
            if (!v7)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v8 = a1->field_10;
            if (a1->field_0 - v8 > v9)
            {
                memcpy(&v8[a1->field_8], v7, v9);
                a1->field_10 = &v8[v9];
            }
            else
            {
                v6 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a1, v7, v9);
                if (v6)
                    return v6;
            }
        }
    } while ((v4 += 1, v3 != v4));
}
