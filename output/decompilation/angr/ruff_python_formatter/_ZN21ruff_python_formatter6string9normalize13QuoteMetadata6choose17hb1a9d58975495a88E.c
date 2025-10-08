long long ruff_python_formatter::string::normalize::QuoteMetadata::choose(struct_0 *a0, unsigned int a1)
{
    unsigned int v1;  // ecx
    char v2;  // cl

    v1 = a0->field_0;
    if (v1 && v1 != 1)
    {
        v2 = (a0->field_8 < a0->field_4) - 0 - (a0->field_4 < a0->field_8);
        if ((char)_ccall(4, 13, (unsigned long long)(char)(a0->field_8 < a0->field_4), (unsigned long long)(char)(a0->field_4 < a0->field_8), (unsigned long long)(char)(a0->field_4 < a0->field_8)))
        {
            return a1;
        }
        else if (v2 == 1)
        {
            return v2 & 0xffffffffffffff00 | 1;
        }
        else
        {
            return 0;
        }
    }
    return a0->field_c;
}
