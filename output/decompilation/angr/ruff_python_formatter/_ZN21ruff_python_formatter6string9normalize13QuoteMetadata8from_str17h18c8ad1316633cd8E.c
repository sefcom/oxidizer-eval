long long ruff_python_formatter::string::normalize::QuoteMetadata::from_str(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3, char a4)
{
    char v0;  // [bp-0x1c], Other Possible Types: unsigned long long
    char v1;  // [bp-0x14]

    if (a3 > 63)
    {
        v0.raw(a1, a2, a4, !(a3 & 2));
    }
    else if (!(a3 & 2))
    {
        v0.regular(a1, a2);
    }
    else
    {
        v0.triple_quoted(a1, a2, a4);
    }
    a0->field_8 = *((int *)&v1);
    a0->field_0 = v0;
    a0->field_c = a3 & 1;
    return v0;
}
