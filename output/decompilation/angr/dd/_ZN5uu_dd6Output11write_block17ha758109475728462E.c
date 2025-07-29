long long uu_dd::Output::write_block(struct_1 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    void* v3;  // r14
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = v2;
    v3 = 0;
    while (true)
    {
        v4 = (unsigned long long)a0.write();
        if (!v4)
        {
            v3 += v5;
            if (v3 >= a2 || !a0->field_10->field_4d)
                break;
        }
        else if ((char)v5.kind() == 35)
        {
            v0 = v5;
            ::0x4cbd40::core::ptr::drop_in_place<std::io::error::Error>(&v0);
        }
        else
        {
            return v4;
        }
        if (v3 > a2)
            core::slice::index::slice_start_index_len_fail(v3, a2, &g_5debf8); /* do not return */
    }
    return v4;
}
