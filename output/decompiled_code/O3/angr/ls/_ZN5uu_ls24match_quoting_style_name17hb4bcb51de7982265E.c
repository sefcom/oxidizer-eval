long long uu_ls::match_quoting_style_name::hb4bcb51de7982265(struct_0 *a0, unsigned int a1, char a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned int v2;  // ecx
    unsigned long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx

    v2 = 0;
    switch (a1)
    {
    case 1:
        v2 = (unsigned int)(-0x100 | a0->field_0 == 99) * 2;
        break;
    case 5:
        v2 = 0;
        break;
    case 6:
        v0 = v3 | -0x100 | 4;
        bcmp(a0, "escapeinternal error: entered unreachable code: Should have been caught by Clap", a1);
        v2 = 0;
        break;
    case 7:
        v2 = a2 & (!(1818325605 ^ *((int *)&(&a0->padding_1)[1])) && !(1702127980 ^ *((int *)&a0->field_0)));
        break;
    case 12:
        v5 = 7809573172535453811 ^ *((long long *)&a0->field_0);
        v6 = *((int *)&a0->padding_7) ^ 1937334647;
        if (!v6 && !v5)
        {
            v2 = v6 | v5 | -0x10000 | 0x100;
            break;
        }
        else
        {
            v2 = -0x100 | (!(*((int *)&a0->padding_7) ^ 1701863779) && !(8315102230707791987 ^ *((long long *)&a0->field_0)));
            break;
        }
    case 19:
        v2 = (UnaryOp GetMSBs != 65535 ? 0 : 257);
        break;
    }
    return v2 | 0x40000;
}
