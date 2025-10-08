long long just::output_error::OutputError::result_from_exit_status(struct_0 *a0, unsigned int a1)
{
    unsigned long long v1;  // rax
    char v2;  // cl
    unsigned int v3;  // esi

    v1 = a1 & 127;
    if (((char)a1 & 127))
    {
        v2 = 5;
        if ((char)v1 + 1 < 2)
        {
            a0->field_8 = 6;
            return v1;
        }
    }
    else
    {
        v3 = a1 >> 8;
        v2 = 2;
        v1 = v3 & 255;
        if (!(char)v3)
        {
            a0->field_8 = 7;
            return v3 & 255;
        }
    }
    a0->field_0 = v1;
    a0->field_8 = v2;
    return v1;
}
