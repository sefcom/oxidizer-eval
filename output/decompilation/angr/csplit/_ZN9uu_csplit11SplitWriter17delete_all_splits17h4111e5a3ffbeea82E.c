long long uu_csplit::SplitWriter::delete_all_splits(struct_0 *a0)
{
    void* v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    unsigned long long v4;  // r13
    void* v5;  // r14
    void* v6;  // r12
    void* v7;  // rbp

    v0 = 0;
    if (!a0->field_28)
        return 0;
    v5 = 0;
    v6 = 0;
    while (true)
    {
        v2.get(a0->field_20, v5);
        v7 = std::fs::remove_file(&v2);
        if (!v7)
        {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v1);
            v5 += 1;
            if (v4 == v5)
                return v6;
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v0);
            v0 = v7;
            v5 += 1;
            v6 = v7;
            if (v4 == v5)
                return v7;
        }
    }
}
