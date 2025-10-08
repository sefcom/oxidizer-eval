long long fish::builtins::shared::Arguments::get_arg_stdin(unsigned long long *a0, struct_0 *a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20]
    unsigned long v3;  // r15
    unsigned int v4;  // eax
    unsigned long v5;  // rdx, Other Possible Types: unsigned long long
    unsigned long v6;  // rdi
    char v7;  // sil
    unsigned long long v8;  // rdx

    if (!a1->field_30)
        core::option::unwrap_failed(&g_14c61b0); /* do not return */
    v3 = &a1->field_30;
    v4 = a1->field_60;
    switch (v4)
    {
    case 1:
        v0.fill_buf(v3, &a1->padding_38[32]);
        if (!v0)
        {
            core::ptr::drop_in_place<core::result::Result<&[u8],std::io::error::Error>>(&v0);
            break;
        }
        else if (::0x12ad210::core::slice::memchr::memchr(0, v0, v1) == 1)
        {
            a1->field_60 = 2;
            goto LABEL_13334af;
        }
        else
        {
            a1->field_60 = 0;
            goto LABEL_13334c5;
        }
    case 3:
        v0 = v3.read_to_end(a1);
        v1 = v5;
        if (((char)v0 & 1))
            goto LABEL_13334e2;
LABEL_1333469:
        if (v8)
            goto (long long)(g_9f0e50[a1->field_60] + (char *)&g_9f0e50[0]);
        break;
    case 0:
LABEL_13334c5:
        v6 = v3;
        v7 = 10;
LABEL_13334cd:
        v0 = std::io::read_until(v6, v7, a1);
        v1 = v5;
        if (!((char)v0 & 1))
            goto LABEL_1333469;
LABEL_13334e2:
        core::ptr::drop_in_place<core::result::Result<&fish::wutil::dir_iter::DirEntry,std::io::error::Error>>(&v0);
    default:
LABEL_13334af:
        v6 = v3;
        v7 = 0;
        goto LABEL_13334cd;
    }
    *(a0) = 9223372036854775809;
    return 9223372036854775809;
}
