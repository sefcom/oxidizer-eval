long long ruff_python_formatter::string::normalize::QuoteMetadata::merge(struct_0 *a0, char *a1, char a2[2])
{
    unsigned long v1;  // rax
    char v2;  // r8b
    char v3;  // cl
    unsigned long long v5;  // xmm0lq

    v1 = *(a1);
    v2 = 2;
    if ((char)v1 == a2[0])
    {
        v3 = a1[1];
        if (!((unsigned int)v1 & 255) || ((unsigned int)v1 & 255) == 1)
        {
            if (!(a1[1] & 1))
                v3 = a2[1] & 1;
            else
                v3 = 1;
        }
        a0->field_0 = v1;
        a0->field_1 = v3;
        *((unsigned long long *)&(&a0->padding_2)[1]) = v5;
    }
    *((char *)&a0->field_4 + 4) = v2;
    return v1;
}
