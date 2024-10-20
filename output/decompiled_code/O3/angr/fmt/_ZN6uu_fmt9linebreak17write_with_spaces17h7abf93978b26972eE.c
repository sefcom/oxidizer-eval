long long uu_fmt::linebreak::write_with_spaces::h7abf93978b26972e(void* a0, unsigned long a1, unsigned long a2, struct_0 *a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    struct_0 *v3;  // 4096
    struct_0 *v4;  // rax
    unsigned long long v5;  // rcx
    struct_0 *v6;  // rax
    struct_0 *v7;  // rcx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdx
    void* v11;  // rax
    struct_0 *v13;  // r12

    v0 = v2;
    if (a2 != 1)
    {
        if (!(a2 == 2))
            goto LABEL_48cf0c;
        v6 = *((long long *)&a3[1].field_0);
        v5 = *((long long *)&a3->field_0) - (char *)v6;
        if (v5 <= 2)
        {
            v9 = "   ";
            v10 = 2;
            goto LABEL_48cf76;
        }
        else
        {
            v7 = a3->field_8;
            *((short *)(v7 + v6)) = 8224;
            v8 = &v6->padding_1[1];
        }
    }
    else
    {
        v4 = *((long long *)&a3[1].field_0);
        v5 = *((long long *)&a3->field_0) - (char *)v4;
        if (v5 > 1)
        {
            v7 = a3->field_8;
            *((char *)(v7 + v4)) = 32;
            v8 = &v4->padding_1;
        }
        else
        {
            v9 = " ";
            v10 = 1;
LABEL_48cf76:
            v11 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h365a0fe6a29bdb0b(a3, v9, v10, v5, a4, a5);
            if (v11)
                return v11;
LABEL_48cf0c:
            v13 = *((long long *)&a3[1].field_0);
            if (*((long long *)&a3->field_0) - (char *)v13 > a1)
            {
                memcpy(a3->field_8 + v13, a0, a1);
                *((struct_0 **)&a3[1].field_0) = &(&v13->field_0)[a1];
                return 0;
            }
            return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h365a0fe6a29bdb0b(a3, a0, a1, v3, a4, a5);
        }
    }
    *((unsigned long long *)&a3[1].field_0) = v8;
    goto LABEL_48cf0c;
}
