long long uu_cat::platform::unix::is_unsafe_overwrite(unsigned long long a0, unsigned long a1)
{
    char v0;  // [bp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x148]
    char v2;  // [bp-0x140]
    char v3;  // [bp-0xb8], Other Possible Types: unsigned long
    char v4;  // [bp-0xb0]

    v0.from_file(a0);
    if (v0)
    {
        goto LABEL_4a32fc;
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v0, v1);
        v0.from_file();
        if (v0)
        {
LABEL_4a32fc:
            core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(v0, v1);
        }
        else
        {
            memcpy(&v3, &v1, 144);
            core::ptr::drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>(0, v1);
            if (v1 != v3)
            {
                return 0;
            }
            else if (*((long long *)&v2) != *((long long *)&v4))
            {
                return 0;
            }
            else if (v3.file_size())
            {
                if ((char)uu_cat::platform::unix::is_appending())
                    return 1;
                nix::unistd::lseek(&v0, (unsigned int)a0.as_fd(), 0, 1);
                if (!(v0 & 1))
                {
                    nix::unistd::lseek(&v0, 1, 0, 1);
                    if (!(v0 & 1))
                        return 0;
                }
            }
        }
        return 0;
    }
}
