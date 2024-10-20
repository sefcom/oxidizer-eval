long long uu_join::Repr$LT$Sep$GT$::print_fields::hfc502a5f8bd26197(unsigned long long a0[3], struct_0 *a1, unsigned long a2)
{
    struct_0 *v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v2;  // rax
    unsigned long long v3;  // rbx
    void* v4;  // r13
    void* v5;  // rax
    void* v6;  // rax
    unsigned long long v7;  // r15
    unsigned long v8;  // rdx

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
            if (a0[0] == a0[2])
            {
                v5 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a0, 1, 0);
                if (v5)
                    return v5;
            }
            v6 = uu_join::Line::get_field::ha4bb61e8b997f700(v0, v4);
            if (!v6)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v7 = a0[2];
            if (a0[0] - v7 > v8)
            {
                memcpy(a0[1] + v7, v6, v8);
                a0[2] = v7 + v8;
            }
            else
            {
                v5 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a0, v6, v8);
                if (v5)
                    return v5;
            }
        }
    } while ((v4 += 1, v3 != v4));
}
