long long uu_join::Repr$LT$Sep$GT$::print_fields::hf5cf6ca92c033f61(void* a0, unsigned long a1, unsigned long long a2[3], struct_0 *a3, unsigned long long a4)
{
    unsigned long long v1;  // r15
    void* v2;  // rbx
    unsigned long long v3;  // 4096
    unsigned long v4;  // r13
    unsigned long long v6;  // rbp
    void* v7;  // rax
    void* v8;  // rax
    unsigned long long v9;  // r14
    unsigned long v10;  // rdx

    v1 = a3->field_10;
    if (!v1)
        return 0;
    v2 = 0;
    do
    {
        v4 = v3;
        if (a4 != v2)
        {
            v6 = a2[2];
            if (a2[0] - v6 > v4)
            {
                memcpy(a2[1] + v6, a0, v4);
                a2[2] = v6 + v4;
            }
            else
            {
                v7 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, a0, v4);
                if (v7)
                    return v7;
            }
            v8 = uu_join::Line::get_field::ha4bb61e8b997f700(a3, v2);
            if (!v8)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v9 = a2[2];
            if (a2[0] - v9 > v10)
            {
                memcpy(a2[1] + v9, v8, v10);
                a2[2] = v9 + v10;
            }
            else
            {
                v7 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::he8660be467852f1c(a2, v8, v10);
                if (v7)
                    return v7;
            }
        }
    } while ((v2 += 1, v1 != v2));
}
