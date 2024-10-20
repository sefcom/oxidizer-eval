long long uu_join::Repr$LT$Sep$GT$::print_fields::h146957d526fdc953(struct_1 *a0, struct_0 *a1, unsigned long a2)
{
    struct_0 *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v2;  // rax
    unsigned long long v3;  // rbx
    void* v4;  // rbp
    char *v5;  // rax
    void* v6;  // rax
    void* v7;  // rax
    char *v8;  // r15
    unsigned long v9;  // rdx

    v0 = v2;
    v0 = a1;
    v3 = a1->field_10;
    if (!v3)
        return 0;
    v4 = 0;
    do
    {
        if (a2 != v4)
        {
            v5 = a0->field_10;
            if (a0->field_0 - v5 >= 2)
            {
                v5[a0->field_8] = 32;
                a0->field_10 = &v5[1];
            }
            else
            {
                v6 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a0, " USimpleError", 1);
                if (v6)
                    return v6;
            }
            v7 = uu_join::Line::get_field::ha4bb61e8b997f700(v0, v4);
            if (!v7)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v8 = a0->field_10;
            if (a0->field_0 - v8 > v9)
            {
                memcpy(&v8[a0->field_8], v7, v9);
                a0->field_10 = &v8[v9];
            }
            else
            {
                v6 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a0, v7, v9);
                if (v6)
                    return v6;
            }
        }
    } while ((v4 += 1, v3 != v4));
}
