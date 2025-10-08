long long ruff_python_formatter::statement::suite::FormatSuite::between_alternative_blocks_empty_line(unsigned int *a0, char a1, unsigned long long a2, unsigned long a3, unsigned long long *a4, unsigned long long a5, struct_2 *a6)
{
    unsigned short v0;  // [sp-0x50]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    char v3[59];  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long v13;  // r14
    char v14[59];  // rax
    unsigned long long v15;  // rdx
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned int v19;  // ebp
    unsigned long long v20[2];  // rax
    unsigned long v21;  // rax

    if (a1 <= 1 && !(a1 & 1))
    {
        v8 = v9;
        v7 = v10;
        v6 = v11;
        v5 = v12;
        v13 = a2 + a3 * 128 - 128;
        if (!a3)
            v13 = 0;
        v14 = ruff_python_formatter::statement::suite::trailing_function_or_class_def(v13, a4, a2);
        if (v14 != 94)
        {
            *((char *[59])&v3[0]) = v14;
            v4 = v15;
            *((int *)&v1) = (!v13 ? 94 : (unsigned long long)v13.from());
            v2 = v15;
            v17 = v1.try_fold(a4);
            if (v17 != 94)
            {
                v1 = v17;
                v2 = v15;
                v18 = *(a4) + 16.trailing(&v1);
                if (!v15)
                    goto LABEL_721865;
                v19 = *((int *)(v18 + v15 * 12 - 8));
                v3.range();
            }
            else
            {
LABEL_721865:
                v3.range();
            }
            v20 = a6->field_30(a5);
            v14 = ruff_python_trivia::tokenizer::lines_after_ignoring_end_of_line_trivia(v19, v20[0], v20[1]);
            if ((unsigned int)v14 < 2)
            {
                v14 = a6->field_30(a5);
                if (v14[58] == 1)
                {
LABEL_72189c:
                    v0 = 769;
                    v14 = a6->field_18(a5, &v0);
                }
                else if ((int)v3 == 3)
                {
                    v14 = a5.options(a6);
                    if (v14[7] == 1)
                        goto LABEL_72189c;
                }
            }
        }
        *(a0) = 4;
        return v14;
    }
    *(a0) = 4;
    return v21;
}
