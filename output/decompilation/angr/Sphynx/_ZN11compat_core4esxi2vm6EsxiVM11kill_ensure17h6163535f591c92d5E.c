long long compat_core::esxi::vm::EsxiVM::kill_ensure::h6163535f591c92d5(char *a0, unsigned long long *a1)
{
    unsigned int v0;  // [sp-0xbc]
    struct_0 *v1;  // [sp-0xb8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long v3;  // [sp-0x98]
    struct_0 *v4;  // [sp-0x90]
    void* v5;  // [sp-0x88]
    char v6;  // [bp-0x80]
    struct struct_1 **v7;  // [sp-0x78]
    unsigned long long v8;  // [sp-0x70]
    unsigned long long v9;  // [sp-0x68]
    unsigned long long v10;  // [sp-0x60]
    unsigned long v11;  // [sp-0x58]
    char *v12;  // [sp-0x50]
    unsigned long long v13;  // [sp-0x48]
    char *v14;  // [sp-0x40]
    unsigned long long v15;  // [sp-0x38]
    unsigned long long *v17;  // rbx
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // r12
    struct_0 *v20;  // rbp
    void* v21;  // rbx
    unsigned long long v22;  // r15
    unsigned long long v23;  // r15
    unsigned long long v24;  // r15
    unsigned long long v25;  // rdi
    unsigned long long v26;  // r13
    unsigned long long v28;  // r15
    struct_0 *v29;  // rbp
    unsigned int v30;  // eax
    char *v31;  // rax
    unsigned long long v32;  // rsi

    v17 = a1;
    v0 = 1;
    v9 = a1 + 1;
    while (true)
    {
        v19 = *(v17);
        compat_core::esxi::vm::EsxiVM::get_running::ha53766a000af63c7(&v3);
        v1 = v4;
        if (v3 == 1)
        {
            v31 = a0;
            *((struct_0 **)&v31) = v1;
            *((unsigned long long *)&v31[8]) = v2;
            return v31;
        }
        v10 = *((long long *)&v6);
        v2 = v5;
        if (!v10)
        {
            v20 = v1;
            if (!(v22 + (char *)v20 == v20))
                goto LABEL_44d61e;
            goto LABEL_44d679;
        }
        v20 = &v1->padding_-8[8];
        v21 = 0;
        v22 = v10 * 32;
        v23 = v22;
        v24 = v23;
        v25 = *((long long *)&v20->padding_-8[0]);
        if (!*((long long *)&v20->padding_-8[0]))
        {
            if (v22 + (char *)v1 != v20)
            {
LABEL_44d61e:
                do
                {
                    if (v20->field_-10)
                        __rust_dealloc(v20->field_-18);
                } while ((v20 += 32, v10 * 32 + v1 != v20));
            }
            goto LABEL_44d679;
        }
        v26 = *((long long *)&v20->padding_-8[8]);
        if (v20->field_-10)
            __rust_dealloc(v25);
        if (v26 != v19)
            break;
        v28 = v2;
        v29 = v1;
        if (v24 != 32)
        {
            do
            {
                if (*((long long *)(v29 + v21 + 48)))
                    __rust_dealloc(*((long long *)(v29 + v21 + 40)));
            } while ((v21 += 32, v22 - 32 != v21));
        }
        if (v28 && !((char)amd64g_calculate_condition(4, 32, v28 * 32, v28 * 16, v18)))
            __rust_dealloc(v29);
        v17 = a1;
        if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3)
        {
            v11 = v9;
            v12 = &v11;
            v13 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5171b5b8900b63c9;
            v14 = &v0;
            v15 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h78ed4d95ee7e652f;
            v3 = &g_7e63c0;
            v4 = 2;
            v5 = 0;
            v7 = &v12;
            v8 = 2;
            log::__private_api_log::hc54142160760cc34(&v3, 3, &g_7e63e0, 0);
        }
        compat_core::esxi::vm::EsxiVM::kill::h010dbcd712e5afe5(&v3, a1);
        if (!((char)v3 == 3))
            goto LABEL_44d6bc;
        v30 = v0;
        if (v30 > 1)
        {
            std::thread::sleep::h5db7732762ff70fa(1, 0);
            v30 = v0;
        }
        v0 = v30 + 1;
        goto LABEL_44d69e;
    }
    v20 = &v20->padding_-8[8];
    v21 += 32;
    v23 = v24 - 32;
LABEL_44d679:
    v32 = v2;
LABEL_44d69e:
    compat_core::esxi::vm::EsxiVM::kill::h010dbcd712e5afe5(&v3, a1);
    if ((char)v3 == 3)
    {
        v31 = a0;
        *(v31) = 3;
        return v31;
    }
LABEL_44d6bc:
    v31 = a0;
    *((int128_t *)&v31) = *((int128_t *)&v3);
    return v31;
}
