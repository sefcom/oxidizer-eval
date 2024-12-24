long long uu_fmt::linebreak::write_with_spaces::hefcd2792f0a5737a(void* a0, unsigned long a1, unsigned long a2, struct_0 *a3)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    char *v3;  // rax
    char *v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdx
    void* v8;  // rax
    char *v9;  // r12

    v0 = v2;
    if (a2 == 1)
    {
        v3 = a3->field_10;
        if (a3->field_0 - v3 <= 1)
        {
            v6 = " /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/util/flat_map.rsMismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs";
            v7 = 1;
            goto LABEL_4bdf16;
        }
        else
        {
            v3[a3->field_8] = 32;
            v5 = v3 + 1;
        }
    }
    else
    {
        if (!(a2 == 2))
            goto LABEL_4bdeac;
        v4 = a3->field_10;
        if (a3->field_0 - v4 > 2)
        {
            *((short *)&v4[a3->field_8]) = 8224;
            v5 = v4 + 2;
        }
        else
        {
            v6 = "  ";
            v7 = 2;
LABEL_4bdf16:
            v8 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hfe77b2db296571d1(a3, v6, v7);
            if (v8)
                return v8;
LABEL_4bdeac:
            v9 = a3->field_10;
            if (a3->field_0 - v9 > a1)
            {
                memcpy(&v9[a3->field_8], a0, a1);
                a3->field_10 = &v9[a1];
                return 0;
            }
            return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hfe77b2db296571d1(a3, a0, a1);
        }
    }
    a3->field_10 = v5;
    goto LABEL_4bdeac;
}
