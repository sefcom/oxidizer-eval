long long ruff_python_formatter::statement::suite::stub_file_empty_lines(unsigned int *a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long a5, unsigned long long a6, struct_2 *a7)
{
    unsigned int v0;  // [bp-0x6c]
    unsigned short v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned long long v4[2];  // rax
    char v5;  // bl
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    char v9;  // al
    char *v10;  // rsi

    v0 = a1;
    v4 = a7->field_30(a6);
    v3 = v4[0];
    v2 = v4[1];
    v5 = 1;
    if (!a4 && !a5)
        v5 = (char)ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(a2, a3, a6, a7) ^ 1;
    v6 = (unsigned long long)a2.from();
    v7 = (unsigned long long)a3.from();
    v9 = ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file(v6, v8, v7, v8, a7->field_30(a6));
    if ((char)v0 == 2)
    {
        *((int *)&v1) = ((!v5 && !v9) == 1 ? 513 : 769);
        v10 = &v1;
    }
    else
    {
        if (v5)
        {
            a2.range();
            a7 = a7;
            a6 = a6;
            if (v9 || 2 <= (int)ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia((unsigned int)v8, v3, v2))
                goto LABEL_721a8d;
LABEL_721a52:
            v1 = 513;
        }
        else
        {
            a7 = a7;
            a6 = a6;
            if (!v9)
                goto LABEL_721a52;
LABEL_721a8d:
            v1 = 769;
        }
        v10 = &v1;
    }
    a7->field_18(a6, v10);
    *(a0) = 4;
    return a0;
}
