long long fish::builtins::fish_indent::PrettyPrinterState::gap_text_flags_before_node(unsigned long long a0[3], unsigned long long a1, struct_3 *a2)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x58]
    struct_6 *v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x30]
    char v8;  // [bp-0x28]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    struct_1 *v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    struct_0 **v15;  // r14
    struct_4 *v16;  // rax
    unsigned long v17;  // cc_dep1

    a2->field_40(&v2);
    v10 = 0;
    switch (v2)
    {
    case 0: case 3: case 35:
        v10 = v10 & 0xffffffffffffff00 | 1;
        goto LABEL_134cb69;
    case 1:
        v10 = v4->field_b0(v3);
        if ((unsigned int)(v10 - 8) < 2 || (unsigned int)v10 == 3)
            break;
        if ((unsigned int)v10 == 2)
        {
            v11 = a0.parent(a1, a2);
            v12->field_40(&v0, v11);
            if (*((int *)&v0) != 24)
                goto LABEL_134cc56;
            v13 = a0.parent(v11, v12);
            v12->field_40(&v0, v13);
            if (*((int *)&v0) != 7)
                core::panicking::panic("assertion failed: matches!(p.kind(), Kind::Statement(_))\\\nsource out of bounds \\\nShould have handled all leaf nodes", 56, &g_14c93a8); /* do not return */
            v14 = a0.parent(v13, v12);
            v15 = v12->field_40;
            v15(&v5, v14);
            if (*((int *)&v5) == 8)
            {
                v16 = *((long long *)&v6);
                goto LABEL_134cc15;
            }
            v15(&v7, v14);
            if (*((int *)&v7) == 26)
            {
                v16 = *((long long *)&v8);
                v17 = *((long long *)(*((long long *)&v8) + 72));
                goto LABEL_134cc38;
            }
            v15(&v0, v14);
            if (*((int *)&v0) != 25)
                goto LABEL_134cc56;
            v16 = *((long long *)&v1);
LABEL_134cc15:
            v17 = v16->field_58;
LABEL_134cc38:
            v10 = v16 & 0xffffffffffffff00 | v17;
            goto LABEL_134cb69;
        }
        else
        {
LABEL_134cc56:
            v10 = 0;
            goto LABEL_134cb69;
        }
    default:
LABEL_134cb69:
        return v10;
    }
}
