long long flealib::fileencrypter::FileEncrypter::decrypt_file(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x80]
    unsigned int v1;  // [bp-0x7c]
    int v2;  // [bp-0x78], Other Possible Types: char
    unsigned int v3;  // [bp-0x74]
    unsigned long v4;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x68], Other Possible Types: unsigned long long
    int v6;  // [bp-0x60], Other Possible Types: char
    unsigned long long v7;  // [bp-0x50]
    void* v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    void* v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    unsigned int v12;  // [bp-0x2c]
    char v13;  // [bp-0x28]
    unsigned long v15;  // rdx
    unsigned long long v16;  // rbx

    (char)v2.open(a1, a2);
    if ((v2 & 1))
        return v4;
    v0 = v3;
    v8 = 0;
    v9 = 1;
    v10 = 0;
    if (v0.read_to_end(&v8))
    {
        ::0x788450::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v8);
        ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
        return v15;
    }
    v5 = 0;
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v6.decrypt(a0, &(char)v2);
    if ((char)(((0 ^ *((long long *)&v6)) & (0 ^ -(*((long long *)&v6)))) >> 63))
    {
        v16 = 40.new("Failed to decryptfailed to encryptflealib/src/fileencrypter.rs", 17);
        ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
        if (*((long long *)&v6) != 0x8000000000000000)
            return v16;
    }
    else
    {
        v5 = v7;
        v2 = v6;
        v11.create(a1, a2);
        if ((v11 & 1))
        {
            v16 = *((long long *)&v13);
LABEL_78a919:
            ::0x788410::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
            ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
            if (*((long long *)&v6) != 0x8000000000000000)
                return v16;
        }
        else
        {
            v1 = v12;
            v16 = v1.write_all(v4, v5);
            ::0x788400::core::ptr::drop_in_place<std::fs::File>(v1);
            if (!(!v16))
                goto LABEL_78a919;
            ::0x788410::core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
            v16 = 0;
            ::0x788400::core::ptr::drop_in_place<std::fs::File>(v0);
            if (*((long long *)&v6) != 0x8000000000000000)
                return 0;
        }
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,alloc::boxed::Box<dyn core::error::Error>>>(&v6);
    return v16;
}
