long long starship::modules::pulumi::parse_version(unsigned long long a0, char *a1)
{
    unsigned int v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    void* v2;  // [bp-0x28]
    char *v4;  // rdx
    unsigned long long v5;  // rax
    char *v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rax
    unsigned int v10;  // ebp
    char *v11;  // rdx
    unsigned long long v12;  // rax

    v0 = 0;
    v5 = ::0xa7eb90::core::char::methods::encode_utf8_raw(118, &v0, 4).strip_prefix_of(v4, a0, a1);
    if (v5)
    {
        v6 = v4;
        if (!v5)
            goto LABEL_bb3ae3;
LABEL_bb3ae2:
        v7 = v5;
    }
    else
    {
        v6 = a1;
        if (v5)
            goto LABEL_bb3ae2;
LABEL_bb3ae3:
        v7 = a0;
    }
    v8 = core::str::<impl str>::trim_end_matches(v7, v6);
    v0 = v8;
    v1 = &v4[v8];
    v2 = 0;
    v9 = v0.next();
    if (!v4)
        return v8;
    v10 = 0;
    while (true)
    {
        if (*(v11) == 46)
        {
            if (v10 == 2)
                break;
            v10 += 1;
        }
        v9 = v0.next();
        v11 = v4;
        if (!v4)
            return v8;
    }
    v12 = 0.get(v9, v8, v4);
    if (!v12)
        core::str::slice_error_fail(v8, v4, 0, v9, &g_11f5ba8); /* do not return */
    return v12;
}
