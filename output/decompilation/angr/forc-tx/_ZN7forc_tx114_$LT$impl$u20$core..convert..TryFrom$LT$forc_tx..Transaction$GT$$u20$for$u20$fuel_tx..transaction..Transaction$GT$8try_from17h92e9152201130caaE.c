long long forc_tx::<impl core::convert::TryFrom<forc_tx::Transaction> for fuel_tx::transaction::Transaction>::try_from(struct_0 *a0, unsigned int *a1)
{
    int v0;  // [bp-0x718], Other Possible Types: char
    int v1;  // [bp-0x708], Other Possible Types: char
    unsigned long long v2;  // [bp-0x6f8]
    int v3;  // [bp-0x6e8], Other Possible Types: char
    int v4;  // [bp-0x6d8]
    unsigned long long v5;  // [bp-0x6c8]
    int v6;  // [bp-0x6b8], Other Possible Types: char
    int v7;  // [bp-0x6a8]
    int v8;  // [bp-0x698]
    unsigned long long v9;  // [bp-0x688]
    char v10;  // [bp-0x678], Other Possible Types: unsigned long long
    char v11;  // [bp-0x670]
    char v12;  // [bp-0x668]
    char v13;  // [bp-0x660]
    char v14;  // [bp-0x658]
    unsigned long long v15;  // [bp-0x650]
    char v16;  // [bp-0x648]
    int v17;  // [bp-0x4c8]
    int v18;  // [bp-0x4b8]
    char v19;  // [bp-0x4a8], Other Possible Types: unsigned long long
    char v20;  // [bp-0x4a0]
    char v21;  // [bp-0x360]
    int v22;  // [bp-0x350]
    int v23;  // [bp-0x340]
    char v24;  // [bp-0x330]
    char v25;  // [bp-0x320]
    char v26;  // [bp-0x1e0]
    char v27;  // [bp-0x100]
    unsigned long v29;  // rsi
    unsigned long long v30;  // r12

    v29 = a1 + 2;
    if (*(a1) == 1)
    {
        memcpy(&v27, v29, 224);
        v10.try_from(&v27);
        memcpy(&v0, &v11, 16);
        memcpy(&v1, &v13, 16);
        v2 = v15;
        if (v10 != 0x8000000000000000)
        {
            memcpy(&v25, &v16, 320);
            memcpy(&v3, &v0, 16);
            v4 = v1;
            v5 = v2;
            a0->field_0 = 0x8000000000000000;
            a0->field_8 = v10;
            *((void*)&a0->field_10) = v3;
            *((void*)&a0->field_18[8]) = v4;
            *((unsigned long long *)&a0->field_20[0]) = v5;
            memcpy(&a0->field_20[8], &v25, 320);
            *((void*)&a0->padding_38[280]) = v6;
            *((void*)&a0->padding_38[296]) = v7;
            *((void*)&a0->padding_38[312]) = v8;
            *((unsigned long long *)((char *)&a0->field_178 + 8)) = v9;
            return a0;
        }
        *((unsigned long long *)&a0->field_20[0]) = v2;
        *((void*)&a0->field_18[8]) = v1;
        *((void*)&a0->field_10) = v0;
        a0->field_8 = 1;
    }
    else
    {
        memcpy(&v26, v29, 224);
        v10.try_from(&v26);
        memcpy(&v0, &v12, 16);
        memcpy(&(char)v1, &v14, 16);
        if (v30 != 0x8000000000000000)
        {
            memcpy(&v19, &v16, 384);
            v17 = v0;
            v18 = v1;
            v3 = v17;
            v4 = v18;
            v5 = v19;
            memcpy(&v25, &v20, 320);
            memcpy(&v6, &v21, 16);
            v7 = v22;
            v8 = v23;
            v9 = *((long long *)&v24);
            a0->field_0 = v30;
            a0->field_8 = v10;
            *((void*)&a0->field_10) = v3;
            *((void*)&a0->field_18[8]) = v4;
            *((unsigned long long *)&a0->field_20[0]) = v5;
            memcpy(&a0->field_20[8], &v25, 320);
            *((void*)&a0->padding_38[280]) = v6;
            *((void*)&a0->padding_38[296]) = v7;
            *((void*)&a0->padding_38[312]) = v8;
            *((unsigned long long *)((char *)&a0->field_178 + 8)) = v9;
            return a0;
        }
        *((void*)&a0->field_18[16]) = v1;
        *((void*)&a0->field_18[0]) = v0;
        a0->field_8 = 0;
        a0->field_10 = v10;
    }
    a0->field_0 = 9223372036854775814;
    return a0;
}
