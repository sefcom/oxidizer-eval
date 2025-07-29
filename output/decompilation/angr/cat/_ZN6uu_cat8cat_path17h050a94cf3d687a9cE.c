long long uu_cat::cat_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3[5], unsigned long long a4)
{
    char v0;  // [bp-0x58], Other Possible Types: unsigned int, unsigned long long, unsigned long
    char v1;  // [sp-0x54]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x4f]
    unsigned long v4;  // [bp-0x48]
    unsigned long long v5;  // [sp-0x40], Other Possible Types: unsigned int
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    char v9;  // cl
    unsigned long v10;  // rax
    char *v11;  // rdi
    unsigned int v12;  // r12d
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    char v16;  // al
    unsigned long long v17;  // rdx

    uu_cat::get_input_type(&(char)v0, a1, a2);
    v8 = *((long long *)&v0);
    v9 = v2;
    if (v8 != 9223372036854775814)
    {
        v17 = *((long long *)&v3);
        *((unsigned long *)&a0->field_9[7]) = v4;
        *((unsigned long long *)&a0->field_9[0]) = v17;
        a0->field_0 = v8;
        a0->field_8 = v2;
        return v8;
    }
    v10 = v2;
    if (!(unsigned int)v10)
    {
        a0->field_0 = 9223372036854775811;
        return v10;
    }
    else if ((unsigned int)v10 != 2)
    {
        v11 = &(char)v0;
        if ((unsigned int)v10 == 7)
        {
            v11.connect(a1, a2);
            if ((v0 & 1))
            {
                v14 = *((long long *)&v2);
                a0->field_0 = 0x8000000000000000;
                *((unsigned long long *)&a0->field_8) = v14;
                return v14;
            }
            v12 = *((int *)&(&v0)[4]);
            v5 = v12;
            v13 = v5.shutdown(1);
            if (!v13)
            {
                v0 = v12;
                v1 = 0;
                uu_cat::cat_handle(a0, &v0, a3, a4);
                return core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>(v0);
            }
            a0->field_0 = 0x8000000000000000;
            *((unsigned long long *)&a0->field_8) = v13;
        }
        else
        {
            v11.open(a1, a2);
            if ((v0 & 1))
            {
                v14 = *((long long *)&v2);
                a0->field_0 = 0x8000000000000000;
                *((unsigned long long *)&a0->field_8) = v14;
                return v14;
            }
            v12 = *((int *)&(&v0)[4]);
            v5 = v12;
            v0 = std::io::stdio::stdout();
            if (!(char)uu_cat::platform::unix::is_unsafe_overwrite(&v5, &(char)v0))
            {
                v0 = v12;
                v1 = 0;
                uu_cat::cat_handle(a0, &v0, a3, a4);
                return core::ptr::drop_in_place<uu_cat::InputHandle<std::fs::File>>(v0);
            }
            a0->field_0 = 9223372036854775812;
        }
        return core::ptr::drop_in_place<std::fs::File>(v12);
    }
    else
    {
        v6 = std::io::stdio::stdin();
        v0 = std::io::stdio::stdout();
        v15 = uu_cat::platform::unix::is_unsafe_overwrite(&v6, &(char)v0);
        if (!(char)v15)
        {
            v5 = std::io::stdio::stdin();
            v16 = std::sys::pal::unix::io::is_terminal();
            v0 = v6;
            v2 = v16;
            return uu_cat::cat_handle(a0, &(char)v0, a3, a4);
        }
        a0->field_0 = 9223372036854775812;
        return v15;
    }
}
