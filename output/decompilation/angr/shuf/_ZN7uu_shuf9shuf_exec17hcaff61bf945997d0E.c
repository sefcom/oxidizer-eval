long long uu_shuf::shuf_exec(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3[3])
{
    char v0;  // [bp-0x91]
    char v1;  // [bp-0x90], Other Possible Types: unsigned long long
    char v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x70]
    unsigned long long v5;  // r12
    char v6;  // r13b
    void* v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    char v12;  // bpl
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long v15;  // rax
    void* v16;  // rdi

    if (!a1->field_38)
    {
        v2.partial_shuffle(a0, a2, a1->field_30);
        v12 = a1->field_39;
        while (v2.next())
        {
            v1 = v13;
            v14 = v1.write_all_to(a3).map_err_context();
            if (v14)
            {
                core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(&v2);
                return v14;
            }
            v0 = v12;
            v15 = a3[2];
            if (a3[0] - v15 > 1)
            {
                *((char *)(a3[1] + v15)) = v12;
                a3[2] = v15 + 1;
                v16 = 0;
            }
            else
            {
                v16 = a3.write_all_cold(&v0, 1);
            }
            v14 = v16.map_err_context();
            if (v14)
            {
                core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(&v2);
                return v14;
            }
        }
        core::ptr::drop_in_place<uu_shuf::NonrepeatingIterator>(&v2);
    }
    else if ((char)a0.is_empty())
    {
        uucore::mods::locale::get_message(&v2, "shuf-error-no-lines-to-repeat", 29);
        v3 = 1;
        return v2.new();
    }
    else if (a1->field_30)
    {
        v6 = a1->field_39;
        v7 = 0;
        while (true)
        {
            v7 = v7.forward_unchecked();
            v2 = a0.choose(a2);
            v8 = v2.write_all_to(a3).map_err_context();
            if (v8)
                return v8;
            v1 = v6;
            v9 = a3[2];
            if (a3[0] - v9 > 1)
            {
                *((char *)(a3[1] + v9)) = v6;
                a3[2] = v9 + 1;
                v10 = 0.map_err_context();
                if (v10)
                    return v10;
            }
            else
            {
                v11 = a3.write_all_cold(&v1, 1).map_err_context();
                if (v11)
                    return v11;
            }
            if (v7 >= v5)
                return 0;
        }
    }
    return 0;
}
