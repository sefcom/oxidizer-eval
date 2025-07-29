long long uu_cp::platform::linux::check_for_data(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xe4], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xd0], Other Possible Types: unsigned int
    unsigned int v4;  // [bp-0xcc]
    unsigned long long v5;  // [bp-0xc8]
    char v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    unsigned int v11;  // ebp
    unsigned long long v12;  // r15
    unsigned long long v13;  // rax
    unsigned int v14;  // edi
    unsigned long long v15;  // r14
    char v16;  // al
    void* v17;  // rdx

    v3.open(a1, a2);
    if ((v3 & 1))
    {
        a0->field_0 = v5;
        a0->field_8 = 2;
        return v5;
    }
    v11 = v4;
    v3.metadata(&v0);
    if (v3 == 2)
    {
        a0->field_0 = v5;
        a0->field_8 = 2;
        goto LABEL_4eb6ab;
    }
    else if (v7)
    {
        v12 = *((long long *)&v9);
        v13 = lseek(v11, 0, 3);
        if (v13 == -1)
        {
            a0->field_0 = v7;
            a0->field_8 = 0;
            goto LABEL_4eb655;
        }
        else if (v13 >= 0)
        {
            a0->field_0 = v7;
            a0->field_8 = 1;
LABEL_4eb655:
            a0->field_10 = v12;
        }
        else
        {
            a0->field_0 = std::sys::pal::unix::os::errno() * 0x100000000 | 2;
            a0->field_8 = 2;
        }
        v14 = v0;
    }
    else
    {
        v3.from_elem(v8, &g_5fbd30);
        v15 = v5;
        if (v0.read(v15, *((long long *)&v6)))
        {
            v16 = 2;
        }
        else
        {
            v1 = v15;
            v2 = *((long long *)&v6) + v15;
            v1.any();
            a0->field_10 = 0;
            v17 = 0;
        }
        a0->field_0 = v17;
        a0->field_8 = v16;
        ::0x4eb060::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
        v11 = v0;
LABEL_4eb6ab:
        v14 = v11;
    }
    return ::0x4eb030::core::ptr::drop_in_place<std::fs::File>(v14);
}
