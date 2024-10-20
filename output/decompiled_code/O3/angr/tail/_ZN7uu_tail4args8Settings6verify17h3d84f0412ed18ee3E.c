long long uu_tail::args::Settings::verify::h3d84f0412ed18ee3(struct_1 *a0)
{
    unsigned long long v2;  // rcx
    struct_0 *v3;  // rax
    struct_0 *v4;  // rax
    char v5;  // cl
    struct_0 *v6;  // rax
    struct_0 *v7;  // rax

    v2 = a0->field_28 * 48;
    do
    {
        v3 = a0->field_20;
        if (!v2)
        {
            if (a0->field_4c != 2)
                return 0;
            goto LABEL_4a5066;
        }
    } while ((v2 -= 48, v4 = v3 + 48, v3->field_18 != 0x8000000000000000));
    v5 = a0->field_4c;
    v6 = v4 | -0x100 | 1;
    if ((v5 & 1))
    {
        return v6;
    }
    else if (v5 != 2)
    {
        return 0;
    }
LABEL_4a5066:
    v7 = a0->field_0;
    if (v7 == 4)
        v7 = a0->field_8;
    v6 = v7 | -0x100 | (v7 == 3) * 2;
    return v6;
}
