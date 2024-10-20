long long uu_rmdir::dir_not_empty::hbb6b9d947babe494(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x178]
    unsigned long long *v1;  // [sp-0x58]
    char v2;  // [sp-0x50]
    unsigned long long *v3;  // [sp-0x48]
    char v4;  // [sp-0x40]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    unsigned long long v11;  // rax
    char v12;  // cl
    char v13;  // al
    unsigned long long *v15;  // rdi
    unsigned long long *v16;  // rdi

    v8 = *(a0);
    v9 = (unsigned int)v8 & 3;
    if (v9 < 2)
        return 0;
    if ((unsigned int)v9 != 2)
        return 0;
    v11 = v8 >> 32;
    if ((unsigned int)v11 > 39)
    {
LABEL_47eb5f:
        return 0;
    }
    v0 = 1073815554;
    if (!((char)(*((char *)&v0 + ((v11 & 63) >> 3)) >> (char)(v11 & 63 & 7)) & 1))
    {
        v0 = 0x8000020000;
        if (((char)(*((char *)&v0 + ((v11 & 63) >> 3)) >> (char)(v11 & 63 & 7)) & 1))
            return -255;
        goto LABEL_47eb5f;
    }
    std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v5, a1, a2);
    v12 = v6;
    v13 = v12;
    v15 = *((long long *)&v5);
    v3 = v15;
    *((int *)&v4) = (v12 != 2 ? (char)((-0x100 | v13) & 4294967295 & 4294967295) : 2);
    if (v12 == 2)
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h88079ea8406a4c22(v16);
        goto LABEL_47eb5f;
    }
    v1 = v15;
    v2 = v13;
    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v5, &v1, v4);
    if (!*((long long *)&v5))
        goto LABEL_0x47ebc8;
    else
        goto LABEL_0x47eb93;
}
