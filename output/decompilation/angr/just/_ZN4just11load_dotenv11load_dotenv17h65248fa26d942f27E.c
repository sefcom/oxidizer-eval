long long just::load_dotenv::load_dotenv(unsigned long long a0, unsigned long long a1[22], struct_0 *a2, unsigned long long a3, unsigned long long a4)
{
    struct_1 *v0;  // [bp-0x60]
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long v8;  // rdi
    struct_0 *v10;  // rbx
    unsigned long long v11;  // cc_ndep
    struct_0 *v12;  // rbx
    unsigned long v13;  // rsi
    unsigned long v14;  // rcx
    unsigned long v15;  // rsi
    unsigned long long v16;  // 4096
    unsigned long long v17;  // r14
    unsigned long long v18;  // rbp
    unsigned long long v19;  // r12
    unsigned long long v20;  // rdx

    v7 = a1[21];
    v8 = a2->field_18;
    if ((char)(((0 ^ a2->field_0) & (0 ^ -(a2->field_0))) >> 63))
        v10 = 0;
    else
        v10 = a2;
    if ((char)_ccall(1, 8, 0, a1[18], v11))
        v12 = &a1[18];
    v13 = &a1[21];
    v14 = &a2->field_18;
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
        v14 = 0;
    if ((char)_ccall(1, 8, 0, v7, v11))
        v15 = &a1[21];
    else
        v15 = v14;
    if (a2->field_13a || a2->field_13b == 1 || a1[18] != 0x8000000000000000 || a2->field_0 != 0x8000000000000000 || a2->field_13c)
    {
        if (!(v7 ^ 0x8000000000000000) && !(v8 ^ 0x8000000000000000))
            goto LABEL_674d85;
    }
    else
    {
        if (!(v7 ^ 0x8000000000000000) && !(v8 ^ 0x8000000000000000))
        {
            v0->field_8 = 0;
            v0->field_18 = 0;
            v0->field_0 = 56;
            return a0;
        }
    }
    v1.join(a3, a4, v15);
    if ((char)v3.is_file(v4))
    {
        just::load_dotenv::load_from_file(a0, v3, v4, a2->field_13b);
        return core::ptr::drop_in_place<std::path::PathBuf>(&v1);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v1);
LABEL_674d85:
    v5 = v12.map_or();
    v16 = a4;
    do
    {
        v17 = a3;
        v18 = v16;
        v19 = v17.parent(v18);
        v2.join(v17, v18, v5, v20);
        if ((char)v3.is_file(v4))
        {
            just::load_dotenv::load_from_file(a0, v3, v4, a2->field_13b);
            return core::ptr::drop_in_place<std::path::PathBuf>(&v1);
        }
        core::ptr::drop_in_place<std::path::PathBuf>(&v2);
        v16 = v20;
        a3 = v19;
    } while (a3);
    if (!a2->field_13c)
    {
        v0->field_8 = 0;
        v0->field_18 = 0;
        v0->field_0 = 56;
        return a0;
    }
    v0->field_0 = 17;
    return a0;
}
