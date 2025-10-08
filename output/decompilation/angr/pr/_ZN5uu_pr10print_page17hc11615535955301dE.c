long long uu_pr::print_page(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0xe0]
    char *v1;  // [bp-0xd8]
    unsigned long v2;  // [bp-0xd0]
    unsigned long v3;  // [bp-0xc8]
    char v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    unsigned long v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x68]
    char v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    unsigned long v15;  // [bp-0x50]
    char v16;  // [bp-0x48]
    unsigned long long v18;  // rax
    unsigned long long v19[3];  // rdx
    unsigned long long v20[3];  // rdx
    unsigned long long v21[3];  // rdx
    unsigned long long v22;  // rbx

    v3 = a2->field_50;
    v2 = a2->field_58;
    uu_pr::header_content(&v16, a2, a3);
    uu_pr::trailer_content(&v13, a2->field_141, a2->field_142);
    v10 = a2->field_a0;
    v11 = a2->field_98;
    v1 = &v13;
    v12 = std::io::stdio::stdout();
    v0 = v12.lock();
    v7.into_iter(&v16);
    v4.next(&v7);
    if (!((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63)))
    {
        do
        {
            if (v0.write_all(v5, v6) || v0.write_all(v3, v2))
            {
                core::ptr::drop_in_place<alloc::string::String>(&v4);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v7);
                goto LABEL_537092;
            }
            core::ptr::drop_in_place<alloc::string::String>(&v4);
            v4.next(&v7);
        } while (v4 != 0x8000000000000000);
        goto LABEL_536f8c;
    }
    else
    {
LABEL_536f8c:
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v7);
        if (((char)uu_pr::write_columns(a0, a1, a2) & 1))
            goto LABEL_537092;
        v7 = v14;
        v8 = v14 + v15 * 24;
        v9 = 0;
        v18 = v7.next();
        if (v19)
        {
            do
            {
                v21 = v20;
                if (!v0.write_all(v21[1], v21[2]) && (v18 + 1 == v15 || !v0.write_all(v3, v2)))
                    goto LABEL_537010;
                else
                    goto LABEL_537092;
LABEL_537010:
                v18 = v7.next();
                v19 = v19;
            } while (v19);
            goto LABEL_537092;
        }
        if (v0.write_all(v11, v10) || v0.flush())
        {
LABEL_537092:
            v22 = 1;
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
        }
        else
        {
            core::ptr::drop_in_place<std::io::stdio::StdoutLock>(v0);
            v22 = 0;
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
    return v22;
}
