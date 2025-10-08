long long ruff_python_formatter::comments::placement::handle_slice_comments(struct_3 *a0, struct_1 *a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    char v0;  // [bp-0x84]
    char v1;  // [bp-0x7c]
    char v2;  // [bp-0x78]
    unsigned int v3;  // ebp
    char v4;  // r13b
    unsigned long long v5;  // rax
    struct_0 *v6;  // r14
    unsigned int v7;  // edx
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rax
    unsigned long v10;  // r12
    unsigned long v11;  // rdi
    unsigned int v12;  // eax
    unsigned long v13;  // rdx

    v3 = a1->field_40;
    v2.up_to(v3, a5, a6, a3, a4);
    v0.try_fold(&v2);
    v4 = a1[1].padding_0[0];
    if (v1 != 90 && !(v1 ^ 9) && !a1[1].padding_0[0])
    {
        v5 = a1->padding_0;
        v6 = a1->field_8;
        v7 = a1->field_44;
        v8 = 96;
        v4 = 0;
    }
    else
    {
        v7 = a1->field_44;
        v9 = ruff_python_formatter::expression::expr_slice::assign_comment_in_slice(v3, a5, a6, a2);
        if ((char)v9)
        {
            if ((unsigned int)v9 == 1)
            {
                v10 = a2 + 16;
                v11 = *((long long *)v10);
                if (!*((long long *)v10))
                    goto LABEL_702de0;
            }
            else
            {
                v10 = a2 + 24;
                v11 = *((long long *)v10);
                if (!*((long long *)v10))
                    goto LABEL_702de0;
            }
LABEL_702daf:
            v12 = v11.range();
            v5 = *((long long *)v10).from();
            v8 = 95 - (v3 < v12);
            v6 = v13;
        }
        else
        {
            v10 = a2 + 8;
            v11 = *((long long *)v10);
            if (*((long long *)v10))
                goto LABEL_702daf;
LABEL_702de0:
            v8 = 96;
            v5 = 58;
            v6 = a2;
        }
    }
    a0->field_8 = v5;
    a0->field_10 = v6;
    a0->field_18 = v3;
    a0->field_1c = v7;
    a0->field_20 = 0;
    a0->field_21 = v4;
    a0->field_0 = v8;
    return v5;
}
