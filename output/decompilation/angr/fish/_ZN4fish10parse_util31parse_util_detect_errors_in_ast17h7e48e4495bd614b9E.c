long long fish::parse_util::parse_util_detect_errors_in_ast(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x94]
    unsigned int v1;  // [bp-0x90]
    unsigned int v2;  // [bp-0x8c]
    unsigned long long v3;  // [bp-0x88]
    int v4;  // [bp-0x80]
    int v5;  // [bp-0x5c]
    unsigned long long v6;  // [bp-0x50]
    char v7;  // [bp-0x48]
    char v9;  // r12b
    unsigned long long v10;  // rax
    struct_5 *v11;  // rdx
    char v12;  // r15b
    unsigned long long v13;  // rbp
    struct_4 **v14;  // r14
    struct_0 *v15;  // rax
    unsigned int v16;  // ebx
    char v17;  // al
    unsigned long long v18;  // rax
    unsigned long long v19;  // rsi
    unsigned long v20;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v21;  // rdx
    unsigned long v22;  // rcx
    struct_1 *v23;  // rax
    struct_2 *v24;  // rax
    struct_3 *v25;  // rax
    char v26;  // al

    v6 = a3;
    v7.new(a0 + 72, &g_14c2660);
    v2 = 0;
    v1 = 0;
    v0 = 0;
    v9 = 0;
LABEL_13e6139:
    v10 = v7.next();
    while (true)
    {
        v13 = v10;
        if (!v10)
            break;
        v14 = v11->field_40;
        v14(&v3, v13);
        switch (v3)
        {
        case 8:
            if (*((int *)((long long)v4 + 16)) == 2)
                goto LABEL_13e6139;
            v17 = fish::parse_util::detect_errors_in_backgrounded_job(&v7, (long long)v4, a3);
            break;
        case 9:
            v17 = fish::parse_util::detect_errors_in_job_conjunction((long long)v4, a3);
            break;
        case 15:
            v23 = (long long)v4;
            v16 = v23->field_0;
            v17 = fish::parse_util::detect_errors_in_block_redirection_list(v13, v14, v23->field_e0, v23->field_e8, a3);
            goto LABEL_13e6128;
        case 16:
            v24 = (long long)v4;
            v16 = v24->field_10;
            v17 = fish::parse_util::detect_errors_in_block_redirection_list(v13, v14, v24->field_30, v24->field_38, a3);
            goto LABEL_13e6128;
        case 21:
            v15 = (long long)v4;
            v16 = v15->field_d0;
            v17 = fish::parse_util::detect_errors_in_block_redirection_list(v13, v14, v15->field_120, v15->field_128, a3);
            goto LABEL_13e6128;
        case 23:
            v25 = (long long)v4;
            v16 = v25->field_20;
            v17 = fish::parse_util::detect_errors_in_block_redirection_list(v13, v14, v25->field_40, v25->field_48, a3);
LABEL_13e6128:
            v12 |= v16 != 1;
            break;
        case 24:
            v17 = fish::parse_util::detect_errors_in_decorated_statement(a1, a2, &v7, (long long)v4, a3);
            v9 = (v17 | v9) & 1;
            goto LABEL_13e6139;
        case 26:
            if (*((int *)(long long)v4) == 1)
            {
                v5.try_source_range((long long)v4 + 16);
                v0 = v0 & 0xffffff00 | (char)v0 | !(int)v5;
                goto LABEL_13e6139;
            }
            break;
        case 28:
            if (*((int *)(long long)v4) == 1)
            {
                v5.try_source_range((long long)v4 + 16);
                v1 = v1 & 0xffffff00 | (char)v1 | !(int)v5;
                goto LABEL_13e6139;
            }
            break;
        case 35:
            v18 = (long long)v4.try_source(a1, a2);
            if (!v18)
            {
                v19 = 4;
                v21 = v20;
                if (v18)
                    goto LABEL_13e61bc;
            }
            else
            {
                v19 = v18;
                v21 = v20;
                if (v18)
                {
LABEL_13e61bc:
                    v18 = v21;
LABEL_13e61be:
                    v22 = (!((char)fish::parse_util::parse_util_detect_errors_in_argument((long long)v4, v19, v18, &v6) & 1) ? 0 : (unsigned int)v20);
                    v2 = (unsigned int)v22 & 0xffffff00 | (char)v22 | (char)v2;
                    goto LABEL_13e6139;
                }
            }
            goto LABEL_13e61be;
        default:
LABEL_13e6139:
            v10 = v7.next();
        }
    }
    v26 = v9 & 1 | (char)v2 | 2;
    core::ptr::drop_in_place<fish::ast::Traversal>(&v7);
    return (unsigned int)v13 & 0xffffff00 | (((v12 | (char)v0) & 1) ? (((char)v1 & 1) ? v9 & 1 | (char)v2 : v26) : v26);
}
