long long starship_battery::platform::linux::sysfs::fs::get_string(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60], Other Possible Types: unsigned int
    char v4;  // [bp-0x5c]
    char v5;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    unsigned long long v9;  // rax

    std::fs::read(&v5, a1, a2);
    if ((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63))
    {
        if ((char)v6.kind())
        {
            v9 = std::io::error::repr_bitpacked::decode_repr(&v3, v6);
            if (v3 || *((int *)&v4) != 19)
            {
                *((unsigned long long *)a0) = 9223372036854775809;
                *((unsigned long long *)&a0[24]) = v6;
                return v9;
            }
        }
        *((unsigned long long *)&a0[8]) = 0x8000000000000000;
        *((unsigned long long *)a0) = 9223372036854775810;
        return (unsigned long long)core::ptr::drop_in_place<std::io::error::Error>(v6);
    }
    else
    {
        v3.from_utf8_lossy(v6, *((long long *)&v7));
        v0.from(&v3);
        v3 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(v1, v2, ::0xc6c530::core::char::methods::encode_utf8_raw(0, &v3)))
        {
            *((unsigned long long *)a0) = 9223372036854775809;
            *((unsigned long long *)&a0[24]) = 90194313219;
            core::ptr::drop_in_place<alloc::string::String>(v0, v1);
        }
        else
        {
            v3 = 0;
            if ((char)core::slice::<impl [T]>::ends_with(v1, v2, ::0xc6c530::core::char::methods::encode_utf8_raw(10, &v3)))
                v0.truncate(v2 - 1);
            *((unsigned long long *)&a0[24]) = v2;
            *((int128_t *)&a0[8]) = *((int128_t *)&v0);
            *((unsigned long long *)a0) = 9223372036854775810;
        }
        return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
    }
}
