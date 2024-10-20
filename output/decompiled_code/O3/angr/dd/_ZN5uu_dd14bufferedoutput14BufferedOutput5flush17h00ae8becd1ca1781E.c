long long uu_dd::bufferedoutput::BufferedOutput::flush::h00ae8becd1ca1781(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0[6];  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    int v5;  // [sp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // r15
    unsigned long long v9;  // r13
    unsigned long long v10;  // r12
    unsigned long v11;  // r12

    uu_dd::Output::write_blocks::he70c6a9516a6df92(v0, &a1[1].padding_0[4], *((long long *)&a1->field_8), *((long long *)&a1->field_10));
    if (v0[0])
    {
        a0->field_8 = *((long long *)&v1);
        v7 = 1;
    }
    else
    {
        v8 = *((long long *)&v2);
        v9 = *((long long *)&v3);
        *((int128_t *)&v5) = *((int128_t *)&v4);
        if (v9)
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v10 = *((long long *)&a1->field_10);
        v11 = v10 - v8;
        if (v10 < v8)
            core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
        *((long long *)&a1->field_10) = 0;
        if (!v8)
        {
            if (!(v10 == v8))
                goto LABEL_4a056d;
        }
        else
        {
            if (v10 != v8)
            {
                memmove(*((long long *)&a1->field_8), *((long long *)&a1->field_8) + v8, v11);
LABEL_4a056d:
                *((unsigned long *)&a1->field_10) = v11;
            }
        }
        a0->field_10 = v8;
        a0->field_18 = v9;
        *((void*)&a0->field_20) = v5;
        v7 = 0;
    }
    a0->field_0 = v7;
    return a0;
}
