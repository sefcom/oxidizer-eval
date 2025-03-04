long long uu_tail::follow::files::FileHandling::update_metadata::h4aaaeb16ccacaf37(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    char v2;  // [bp-0xc8]
    unsigned long long v4;  // r12
    char *v5;  // rsi
    unsigned long long *v6;  // rax

    v4 = *(a3);
    if (v4 != 2)
    {
        v5 = a3 + 1;
        goto LABEL_50eb8c;
    }
    else
    {
        std::fs::metadata::h5a76b0b01e9dc15d(&v0, a1, a2);
        v4 = *((long long *)&v0);
        if (v4 == 2)
        {
            ::0x50d690::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(*((long long *)&v1));
        }
        else
        {
            v5 = &v1;
LABEL_50eb8c:
            memcpy(&v2, v5, 168);
        }
    }
    v6 = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(a0, a1, a2);
    *(v6) = v4;
    return memcpy(v6 + 1, &v2, 168);
}
