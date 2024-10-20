int uu_basename::basename::hf06dd0101fdecdb4()
{
    unsigned long long v0;  // [sp-0xe0]
    unsigned long long v1;  // [sp-0xd8]
    unsigned long long v2;  // [sp-0xd0]
    char v3;  // [bp-0xc0]
    char v4;  // [bp-0xb8]
    char v5;  // [bp-0xb0]
    char v6;  // [bp-0xa8]
    char v7;  // [bp-0x70]
    unsigned long v9;  // rcx
    unsigned long long v10;  // rsi
    unsigned long v11;  // rdx
    struct_0 *v12;  // r11
    unsigned long v13;  // rax
    struct_0 *v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // r8
    unsigned long long v17;  // r9
    unsigned int v18;  // r8d
    unsigned int v19;  // r9d
    unsigned long long v21;  // rax
    unsigned long v22;  // r8
    unsigned long long v27[3];  // rdi

    v1 = v9;
    v12 = v10 + v11;
    while (true)
    {
        if (v13 == v10)
        {
            break;
        }
        else
        {
            v13 = v12;
            v15 = *((char *)(v13 - 1));
            if ((char)v15 < 0)
            {
                v16 = (unsigned long long)v14->padding_-2;
                if ((char)v16 >= 192)
                {
                    v12 = &v14->padding_-2;
                    v18 = (unsigned int)v16 & 31;
                }
                else
                {
                    v17 = v14->field_-1;
                    if ((char)v17 >= 192)
                    {
                        v12 = &v14->field_-1;
                        v19 = (unsigned int)v17 & 15;
                    }
                    else
                    {
                        v12 = v14 + 1;
                        v19 = (unsigned int)v17 & 63 | (v14[1].field_-4 & 7) * 64;
                    }
                    v18 = (unsigned int)v16 & 63 | v19 * 64;
                }
                if (!(((unsigned int)v15 & 63 | v18 << 6) == 47))
                    goto LABEL_480276;
            }
            else
            {
                v12 = &v14->field_-3;
                if ((unsigned int)v15 == 47)
                    continue;
LABEL_480276:
                if (v14 != v10)
                    break;
            }
        }
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, v10, v21);
    v2 = *((long long *)&v4);
    std::path::Path::components::h4f3217acf0fc8653(&v7, *((long long *)&v4), *((long long *)&v5));
    v0 = v22;
    while (true)
    {
        _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h327ae97aa5bd0b06(&v6, &v7);
        if (v6 == 10)
            break;
    }
    v27[0] = 0;
    v27[1] = 1;
    v27[2] = 0;
    if (*((long long *)&v3))
        __rust_dealloc(v2);
    return;
}
