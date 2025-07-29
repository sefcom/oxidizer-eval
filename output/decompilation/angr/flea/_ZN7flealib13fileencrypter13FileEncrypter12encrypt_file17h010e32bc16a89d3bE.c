long long flealib::fileencrypter::FileEncrypter::encrypt_file(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x9c]
    char v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x94]
    unsigned long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    void* v7;  // [bp-0x70]
    char v8;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    unsigned long long v15;  // [bp-0x28]
    unsigned long long v17;  // r12

    v1.open(a1, a2);
    if ((v1 & 1))
        return v3;
    v0 = v2;
    v5 = 0;
    v6 = 1;
    v7 = 0;
    if (!v0.read_to_end(&v5))
    {
        v8.from_utf8_lossy(1, 0);
        v1.to_vec(v9, v10);
        v15 = v4;
        memcpy(&v14, &v1, 16);
        v11.encrypt(a0, &v14);
        ::0x7884e0::core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v8);
        v1.create(a1, a2);
        if (!(v1 & 1))
        {
            v8 = v2;
            v17 = v8.write_all(v12, v13);
            ::0x788400::core::ptr::drop_in_place<std::fs::File>(v8);
            if (!v17)
            {
                ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v11);
                ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
                ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
                return 0;
            }
        }
        ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v11);
    }
    ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v5);
    ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
    return v17;
}
