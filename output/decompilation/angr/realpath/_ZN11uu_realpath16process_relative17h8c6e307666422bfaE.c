long long uu_realpath::process_relative::h8c6e307666422bfa(struct_0 *a0, unsigned long long a1[3], unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v3;  // rbx
    struct_0 *v4;  // rdi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v3 = a5;
    if (!a2)
    {
        if (a4)
        {
            v1 = a1[2];
            *((int128_t *)&v0) = *((int128_t *)&a1[0]);
            v4 = a0;
            v5 = a4;
        }
        else
        {
            a0->field_10 = a1[2];
            a0->field_0 = *((int128_t *)&a1[0]);
            return v6;
        }
    }
    else
    {
        if ((char)std::path::Path::starts_with::heff55995860ce76c(a1[1], a1[2], a2, a3))
        {
            v1 = a1[2];
            *((int128_t *)&v0) = *((int128_t *)&a1[0]);
            v5 = a2;
            if (a4)
                v5 = a4;
            if (!a4)
                v3 = a3;
            v4 = a0;
        }
        else
        {
            v6 = a1[2];
            a0->field_10 = v6;
            a0->field_0 = *((int128_t *)&a1[0]);
            return v6;
        }
    }
    v6 = uucore::features::fs::make_path_relative_to::h09a4623272c797bd(v4, &v0, v5, v3);
    return v6;
}
