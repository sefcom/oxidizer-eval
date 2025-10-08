long long fish::parse_execution::job_node_wants_timing(struct_1 *a0)
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax
    struct_1 *v3;  // 4096
    struct_1 *v4;  // rcx
    unsigned long v6;  // rcx
    unsigned long v7;  // rsi

    v2 = v1 & 0xffffffffffffff00 | 1;
    if (a0->field_0 == 2)
    {
        v3 = a0;
        while (true)
        {
            v4 = v3;
            if (v4->field_20 != 2)
                break;
            v3 = v4->field_28;
            if (v4->field_28->field_10 != 2)
                return v1 & 0xffffffffffffff00 | 1;
        }
        if (!a0->field_68)
            return 0;
        v6 = a0->field_60;
        while (true)
        {
            if (*((int *)(v6 + 16)) == 2)
            {
                v2 = v6 + 16;
                while (true)
                {
                    v7 = *((long long *)(v2 + 8));
                    if (*((int *)(v7 + 16)) != 2)
                        break;
                    v2 = v7 + 32;
                    if (*((int *)(v7 + 32)) != 2)
                        goto LABEL_13e2ad0;
                }
            }
LABEL_13e2ad0:
            v6 += 96;
            if (v6 == 96 * a0->field_68 + (char *)a0->field_60)
                return 0;
        }
    }
    return v2 & 0xffffffffffffff00 | 1;
}
