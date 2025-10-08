long long uu_uniq::open_output_file(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    char v1;  // [bp-0x48]
    char v2;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx

    if (!a1 || (char)a1.equal(a2, "-Could not open ", 1))
    {
        v2 = std::io::stdio::stdout();
        v0 = v2.lock().new();
        v5 = &g_4f5ad8;
        goto LABEL_4688a9;
    }
    else
    {
        v2.create(a1, a2);
        v0.map_err_context(&v2, a1, a2);
        if (v0)
        {
            v4 = 1;
        }
        else
        {
            v2.with_capacity(*((int *)&v1));
            v0 = v2.new();
            v5 = &g_4f5a88;
LABEL_4688a9:
            v4 = 0;
        }
    }
    a0[1] = v0;
    a0[2] = v5;
    a0[0] = v4;
    return a0;
}
