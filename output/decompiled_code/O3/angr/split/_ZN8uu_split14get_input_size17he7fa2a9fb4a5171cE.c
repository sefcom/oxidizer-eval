long long uu_split::get_input_size::he7fa2a9fb4a5171c(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned int v0;  // [sp-0x11c]
    struct struct_0 **v1;  // [sp-0x118]
    char v2;  // [bp-0x114]
    unsigned long long v3;  // [sp-0x110]
    struct_0 *v4;  // [sp-0x108]
    char v5;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    unsigned int v6;  // [bp-0xf8], Other Possible Types: unsigned long, char, unsigned long long
    unsigned short v7;  // [sp-0xf4]
    struct struct_2 **v8;  // [sp-0xf0]
    unsigned long long v9;  // [sp-0xe8]
    void* v10;  // [sp-0xe0]
    char v11;  // [bp-0xb0]
    char v12;  // [bp-0xa8]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x38]
    struct_0 *v16;  // rbx
    unsigned long v18;  // rdx
    char *v19;  // rsi
    unsigned long long v20;  // rax
    struct_0 *v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rcx

    v16 = a0;
    v4 = a0;
    if (!a3)
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v5, v16->field_8, v16->field_10);
        if (*((int *)&v5) != 2)
        {
            a4 = *((long long *)&v12);
            if (!a4)
                goto LABEL_49a339;
            if (a4 >= 536870913)
                a4 = 0x200;
        }
        else
        {
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h1ef73b143d2c56eaE.llvm.16812573474352539916(*((long long *)&v6));
LABEL_49a339:
            a4 = 0x200;
        }
    }
    v5 = a1;
    v6 = a4;
    if (std::io::default_read_to_end::hd90023421c6300ed(&v5, a2, 0, a3))
        return 1;
    if (a4 > v18)
        return 0;
    v19 = v16->field_8;
    v20 = v16->field_10;
    if (v20 == 1 && *(v19) == 45)
    {
        v1 = &v4;
        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h893dbfcaaacb071a;
        v5 = &g_50b720;
        v6 = 2;
        v10 = 0;
        v8 = &v1;
        v9 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v14, &v5);
        std::io::error::Error::new::hafde8ab7e37e3767(39, &v14);
        return 1;
    }
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v5, v19, v20);
    if ((int)v5 == 2)
    {
        return 1;
    }
    else if (*((long long *)&v11) < v18)
    {
        v21 = v4;
        v22 = v21->field_8;
        v23 = v21->field_10;
        v5 = 0x1b600000000;
        v6 = 0;
        v7 = 0;
        v6 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v1, &v5, v22, v23);
        if ((int)v1)
            return 1;
        v0 = *((int *)&v2);
        if (!_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 1))
        {
            if (!v18)
            {
                v1 = &v4;
                v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h893dbfcaaacb071a;
                v5 = &g_50b700;
                v6 = 2;
                v10 = 0;
                v8 = &v1;
                v9 = 1;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v13, &v5);
                std::io::error::Error::new::hafde8ab7e37e3767(39, &v13);
            }
            else
            {
                close(v0);
                return 0;
            }
        }
        close(v0);
    }
}
