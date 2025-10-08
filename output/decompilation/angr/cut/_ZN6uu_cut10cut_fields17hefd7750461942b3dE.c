long long uu_cut::cut_fields(unsigned long long a0, unsigned long long a1[2], void* a2, unsigned long a3, struct_0 *a4)
{
    char v0;  // [bp-0x49]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    char v5;  // bl
    unsigned long v6;  // r8
    unsigned long v7;  // rbp
    unsigned long v8;  // rax
    char *v9;  // rcx
    unsigned long long v10;  // r10
    unsigned long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rax
    char *v14;  // rax

    v5 = a4->field_20;
    if (v5 == 2)
        core::option::unwrap_failed(&g_4f9328); /* do not return */
    v6 = a3;
    v7 = a4->field_28;
    v8 = a4->field_10;
    if (v8)
    {
        if (*((long long *)&a4->field_18) == 1 && *((char *)v8) == (char)v7)
        {
            v9 = a4->field_0;
            v10 = 1;
            v11 = v8;
            if (a4->field_0)
            {
                v10 = a4->field_8;
                v11 = v9;
            }
            return uu_cut::cut_fields_newline_char_delim(a0, a1[0], a1[1], a2, a3, v7, v11, v10);
        }
        v1 = a3;
        v2 = v8.new(*((long long *)&a4->field_18));
        v3 = v12;
        if (a4->field_0)
        {
            v13 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v2, a2, v1, v5, (unsigned int)v7 & 255, (unsigned int)a4->field_0);
LABEL_46983c:
        }
        else
        {
            v13 = uu_cut::cut_fields_implicit_out_delim(a0, a1, &v2, a2, v1, v5, (unsigned int)v7 & 255);
        }
        return v13;
    }
    v14 = a4->field_0;
    if (!v14)
        v14 = "\t-: \n: Is a directory\ninvalid input: Only one of --delimiter (-d) or -w option can be specifiedthe delimiter must be a single characterwhitespace-delimiteddelimiter''";
    v13 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v0, a2, a3, v5, (unsigned int)v7 & 255, (unsigned int)v14);
    goto LABEL_46983c;
}
