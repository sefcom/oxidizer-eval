long long uu_dd::is_stdout_redirected_to_seekable_file::he86a24b914264a0a()
{
    unsigned int v0;  // [sp-0x4c]
    unsigned long v1;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x34]
    char v5;  // [bp-0x28]
    char v6;  // [bp-0x20]
    char v7;  // [bp-0x18]
    unsigned int v9;  // ebp
    unsigned int v10;  // ebx
    unsigned long v11;  // rdx

    uu_dd::stdout_canonicalized::h8616e33a4059f2ee(&v5);
    std::fs::File::open::h7106e998c3d1654b(&v3, *((long long *)&v6), *((long long *)&v7));
    v9 = *((int *)&v3);
    if (v9)
    {
        v10 = 0;
    }
    else
    {
        v0 = *((int *)&v4);
        v1 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 2, 0);
        v2 = v11;
        if (v1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&v1);
            goto LABEL_4d8eba;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&v1);
            v1 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 1, 0);
            v2 = v11;
            if (!v1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&v1);
                v1 = std::io::Seek::rewind::h775fcf7d5bbb9e4d(&v0);
                ::0x4d5c90::core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&v1);
                v10 = v1 | -0x100 | !v1;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h5fb3bf5cfc30f7c8(&v1);
LABEL_4d8eba:
                v10 = 0;
            }
        }
        ::0x4d5190::core::ptr::drop_in_place$LT$std..fs..File$GT$::h9d905c7759330312();
    }
    ::0x4d5280::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h4302a5a7bca89692();
    if (v9)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::hc4afd8b230b2ba09(&v3);
        return v10;
    }
    return v10;
}
