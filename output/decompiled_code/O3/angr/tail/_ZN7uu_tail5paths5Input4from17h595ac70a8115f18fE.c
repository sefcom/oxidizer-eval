double uu_tail::paths::Input::from::h595ac70a8115f18f(long long a0, long long a1)
{
    char v0;  // [sp-0x60], Other Possible Types: unsigned long, unsigned long long
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    char *v6;  // r14
    unsigned long long v7;  // r12
    unsigned long long v8;  // r14
    unsigned long long *v9;  // rax
    unsigned long long v10;  // r12
    unsigned long long *v11;  // r13
    int v12;  // xmm0
    int v13;  // ymm0

    v6 = a1->field_8;
    v7 = a1->field_10;
    if (!(v7 == 1) || !(*(v6) == 45))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, v6, v7);
        if (v0 == 0x8000000000000000)
            goto LABEL_4af551;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&v2, v6, v7);
        v10 = *((long long *)&v3);
        v8 = *((long long *)&v4);
        if (!v8)
        {
            v11 = 1;
        }
        else if (v8 < 0)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v11 = __rust_alloc(v8, 1);
            if (!v11)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v11, v10, v8);
        if (*((long long *)&v2) << 1)
            __rust_dealloc(v10);
    }
    else
    {
        v0 = 0x8000000000000000;
LABEL_4af551:
        v8 = 14;
        v9 = __rust_alloc(14, 1);
        if (!v9)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v11 = v9;
        *((long long *)((char *)v11 + 6)) = 8391737100187231346;
        *(v11) = 7237954635114312819;
    }
    *((long long *)((char *)&a0->field_18 + 8)) = *((long long *)&v1);
    v12 = *((int128_t *)&v0);
    *((void*)&(&a0->field_10)[1]) = v12;
    a0->field_0 = v8;
    a0->field_8 = v11;
    a0->field_10 = v8;
    return (unsigned long long)(v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12);
}
