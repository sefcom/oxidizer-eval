long long ruff_python_formatter::expression::binary_like::is_simple_power_operand(struct_0 *a0)
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdx

    v1 = 0;
    while (true)
    {
        switch ((int)a0->field_0)
        {
        case 3:
            v2 = 8;
            if (a0->field_1c == 1)
                goto LABEL_707b67;
            else
                goto LABEL_707b40;
        case 21: case 22: case 23: case 28:
            v1 = 1;
            goto LABEL_707b6c;
        case 25:
LABEL_707b40:
            a0 = *((long long *)(a0 + v2));
            break;
        default:
LABEL_707b6c:
            return v1;
        }
    }
LABEL_707b67:
    return 0;
}
