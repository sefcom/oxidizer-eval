int uu_shred::BytesWriter::from_pass_type()
{
    char v0;  // [bp-0x20060]
    unsigned long long v1;  // [bp-0x20050]
    unsigned long long v2;  // [bp-0x20048]
    char v3;  // [bp-0x20040]
    char v4;  // [bp-0x20034]
    char v5;  // [bp-0x10032]
    void* v6;  // [bp-0x2030]
    char v8[2];  // rsi
    unsigned int *v9;  // rdx
    struct_0 *v10;  // rdi
    char v11;  // bpl
    unsigned long v12;  // r14
    unsigned long long v13;  // r15
    int v14;  // [bp-0x20030]

    do
    {
        v6 = 0;
    } while (&v6 != &v14);
    if (v8[0] != 2)
    {
        v12 = &v8[1];
        if ((v8[0] & 1))
        {
            memset(&v5, 0, 65538);
            ::0x4aae10::core::slice::<impl [T]>::chunks_exact_mut(&v0, &v5);
            v13 = *((long long *)&v3);
            if (v2 >= v13)
            {
                do
                {
                    v2 -= v13;
                    core::slice::<impl [T]>::copy_from_slice(v1, v13, v12, 3, &g_595088);
                    v1 += v13;
                } while (v2 >= v13);
            }
            memcpy(&v4, &v5, 65538);
        }
        else
        {
            memset(&v4, *((char *)v12), 65538);
        }
        v10->field_10008 = 0;
        memcpy(&v10->padding_1, &v4, 65538);
        v11 = 2;
    }
    else if (*(v9) != -1)
    {
        memset(&v10->padding_1, 0, 0x10000);
        v10->field_10008 = v9;
        v11 = 1;
    }
    else
    {
        v10->padding_1[15].from_os_rng();
        memset(&v10->padding_1[335], 0, 0x10000);
    }
    v10->field_0 = v11;
    return;
}
