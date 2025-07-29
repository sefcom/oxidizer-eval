long long uu_csplit::SplitWriter::delete_all_splits(unsigned long long a0[6])
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    void* v3;  // rbp
    void* v4;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long long v8;  // r13
    unsigned long long v9;  // r13

    if (!a0[5])
        return 0;
    v0 = a0[4];
    v3 = 0;
    v4 = 0;
    do
    {
        v5 = v3;
        v6 = v5.forward_unchecked();
        v1.get(v0, v5);
        v7 = std::fs::remove_file(&v1);
        if (v7)
        {
            ::0x5aa5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v4);
            v8 = v7;
            v4 = v7;
        }
        else
        {
            ::0x5aa5e0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
            v8 = v4;
        }
        v9 = v8;
        v3 = v6;
    } while (v3 < a0[5]);
    return v9;
}
