long long uu_tr::operation::translate_input(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    void* v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    void* v10;  // rax
    unsigned long long v11;  // rdx
    void* v12;  // rax
    void* v13;  // r12

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    while (true)
    {
        v10 = a0.read_until(10, &v0);
        if (v10)
        {
LABEL_4a57e1:
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v10, v13);
            ::0x4a44a0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
            ::0x4a44a0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
            v12 = 0;
            break;
        }
        else if (v11)
        {
            v6 = v1;
            v7 = 0 + v1;
            v8 = a2;
            v3.spec_extend(&v6);
            if (!a1.write_all(1, 0).map_err_context())
            {
                v2 = 0;
                v5 = 0;
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0, v11);
            }
            else
            {
                core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0, v11);
                ::0x4a44a0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v3);
                ::0x4a44a0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v0);
                break;
            }
        }
        else
        {
            v10 = 0;
            v13 = 0;
            goto LABEL_4a57e1;
        }
    }
    ::0x4a4470::core::ptr::drop_in_place<alloc::string::String>(a2);
    return v12;
}
