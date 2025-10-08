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
    struct_0 *v9;  // rdi
    unsigned long v10;  // r14
    unsigned long long v11;  // r15
    char v12;  // bpl
    int v13;  // [bp-0x20030]

    do
    {
        v6 = 0;
    } while (&v6 != &v13);
    if (v8[0] == 2)
    {
        v9->padding_1[15].from_os_rng();
        memset(&v9->padding_1[335], 0, 0x10000);
    }
    else
    {
        v10 = &v8[1];
        if ((v8[0] & 1))
        {
            memset(&v5, 0, 65538);
            core::slice::<impl [T]>::chunks_exact_mut(&v0, &v5, 65538, 3);
            v11 = *((long long *)&v3);
            if (v2 >= v11)
            {
                do
                {
                    v2 -= v11;
                    core::slice::<impl [T]>::copy_from_slice(v1, v11, v10, 3, &g_4f9f68);
                    v1 += v11;
                } while (v2 >= v11);
            }
            memcpy(&v4, &v5, 65538);
        }
        else
        {
            memset(&v4, *((char *)v10), 65538);
        }
        v9->field_10008 = 0;
        memcpy(&v9->padding_1, &v4, 65538);
        v12 = 1;
    }
    v9->field_0 = v12;
    return;
}
