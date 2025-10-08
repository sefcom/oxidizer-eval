long long uu_tail::follow::files::FileHandling::update_metadata(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3)
{
    char v0;  // [bp-0x178], Other Possible Types: unsigned long
    char v1;  // [bp-0x170]
    char v2;  // [bp-0xc8]
    unsigned long long v4;  // r12
    char *v5;  // rsi
    char *v6;  // rdi
    unsigned long long *v7;  // rax

    v4 = *(a3);
    if (*(a3) == 2)
    {
        std::fs::metadata(&v0, a1, a2);
        v4 = v0;
        if (v4 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v0);
        }
        else
        {
            v5 = &v1;
            v6 = &v2;
LABEL_4a2a2a:
            memcpy(v6, v5, 168);
        }
    }
    else
    {
        v5 = a3 + 1;
        v6 = &v2;
        goto LABEL_4a2a2a;
    }
    v7 = a0.get_mut(a1, a2);
    *(v7) = v4;
    return memcpy(v7 + 1, &v2, 168);
}
