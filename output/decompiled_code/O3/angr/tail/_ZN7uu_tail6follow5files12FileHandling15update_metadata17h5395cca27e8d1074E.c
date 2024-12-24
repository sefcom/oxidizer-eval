long long uu_tail::follow::files::FileHandling::update_metadata::h5395cca27e8d1074(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long *a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x178]
    char v1;  // [bp-0x170]
    char v2;  // [bp-0xc8]
    unsigned long long v4;  // r12
    void* v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r12
    unsigned long long v8;  // r8
    unsigned long long v9;  // r9
    unsigned long long *v10;  // rax

    v4 = *(a3);
    if (v4 != 2)
    {
        v5 = a3 + 1;
        goto LABEL_502b31;
    }
    else
    {
        std::fs::metadata::hfea02cebb1894e00(&v0, a1, a2);
        v4 = *((long long *)&v0);
        if (v4 == 2)
        {
            ::0x501860::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hd721c1e7c1dd12bc(2, *((long long *)&v1));
        }
        else
        {
            v5 = &v1;
LABEL_502b31:
            memcpy(&v2, v5, 168);
        }
    }
    v10 = uu_tail::follow::files::FileHandling::get_mut::h2baaf91bd1989d8e(a0, a1, a2, v6, v8, v9);
    *(v10) = v7;
    return memcpy(v10 + 1, &v2, 168);
}
