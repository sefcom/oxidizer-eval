long long starship::context::ScanDir::is_match(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r14
    unsigned int v5;  // r14d

    v0 = v2;
    v3 = a0->field_0;
    v4 = a0->field_28;
    if (v3.has_no_negative_extension(v4, *((long long *)&a0->field_30)) && v3.has_no_negative_file_name(a0->field_8, *((long long *)&a0->field_10)))
    {
        v0 = a0->field_20;
        if (v3.has_no_negative_folder(a0->field_18, a0->field_20))
        {
            v5 = (unsigned int)v4 & 0xffffff00 | 1;
            if (v3.has_any_positive_extension(v4, *((long long *)&a0->field_30)))
            {
                return v5;
            }
            else if (!v3.has_any_positive_file_name(a0->field_8, *((long long *)&a0->field_10)))
            {
                return v3.has_any_positive_folder(a0->field_18, v0);
            }
            else
            {
                return v5;
            }
        }
    }
    return 0;
}
