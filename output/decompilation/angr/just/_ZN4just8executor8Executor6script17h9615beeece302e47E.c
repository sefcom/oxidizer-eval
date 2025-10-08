long long just::executor::Executor::script(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    void* v2;  // [bp-0xa0]
    struct_1 *v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11[3];  // r13
    unsigned long long v12[3];  // rdx
    unsigned long long v13;  // r15
    unsigned long long v14[3];  // rax
    void* v15;  // rbx
    unsigned long long v17[3];  // r12
    unsigned long long v19[3];  // r12
    void* v20;  // r12
    struct_0 *v21;  // rax
    unsigned long long v22[3];  // rdx

    v8 = v9;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v5 = a3;
    v6 = a4 * 32 + a3;
    v7 = 0;
    v10 = v5.fold();
    v4 = v6;
    if (a1)
    {
        v11 = v10.index(a5, a6, &g_82fbd8);
        if (!v11 || !v12)
            goto LABEL_667e0a;
        v13 = 0x18 * v12 + (char *)v11;
        v14 = v11 + 1;
        v15 = 0;
        do
        {
            v17 = v14;
            if ((char)a1.include_shebang_line(a2))
                v0.spec_extend(v11[1], v11[2] + v11[1]);
            v0.push(10);
            v15 += 1;
            if (v17 == v13)
            {
                v19 = v17;
                if (v19 == v13)
                    break;
                continue;
            }
            else
            {
                v19 = v17 + 1;
                if (v17 == v13)
                    break;
                continue;
            }
            v11 = v17;
        } while (v11);
    }
    else
    {
LABEL_667e0a:
        v15 = 0;
    }
    v5.zip(a3, v4, a5, a6);
    v20 = v15;
    if (!v15)
        goto LABEL_667ec0;
    else
        goto LABEL_667e9c;
    do
    {
        while (true)
        {
            if (v20 < v21->field_18)
            {
                do
                {
                    v0.push(10);
                    v20 += 1;
                } while (v20 < v21->field_18);
            }
            v0.spec_extend(v22[1], v22[2] + v22[1]);
            v0.push(10);
            v20 += 1;
            if (v15)
                break;
LABEL_667ec0:
            v21 = v5.next();
            v22 = v12;
            if (!v21)
            {
                v3->field_10 = 0;
                v3->field_0 = *((int128_t *)&v0);
                return 0;
            }
        }
LABEL_667e9c:
        v15 = 0;
        v21 = v5.nth(v15);
        v22 = v12;
    } while (v21);
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return 0;
}
