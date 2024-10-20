long long uu_ln::exec::hf66d6e8f6ce8500e(unsigned long long a0[9], unsigned long long a1, struct_0 *a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x60], Other Possible Types: unsigned long long, unsigned long
    void* v1;  // [sp-0x58], Other Possible Types: unsigned long
    unsigned long v2;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x48]
    char v4;  // [bp-0x40]
    unsigned long long v6;  // r15
    unsigned long long v7;  // r9
    uint128_t v8[3];  // rax
    unsigned long v10;  // rbx
    unsigned long long v11;  // r14
    unsigned long v13;  // rbx
    unsigned long long v14;  // r9
    unsigned long long v15;  // r12
    unsigned long long v16;  // r14
    unsigned long long v17;  // r13
    unsigned long long v18;  // r9
    int v19;  // xmm0
    int v20;  // xmm1

    if (a2->field_18 != 0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a2->field_20, a2->field_28);
        v6 = v1;
        v8 = uu_ln::link_files_in_dir::h0087ae664995706a(a0, a1, v6, v2, a2, v7);
    }
    else
    {
        if (a2->field_33)
        {
            if (a1 != 1)
            {
                if (a1 <= 2)
                {
                    if (!a1)
                        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
                    uu_ln::link::heef60a33248c590f(a0[1], a0[2], a0[4], a0[5], a2);
                    return v8;
                }
                v13 = a0[8];
                if (!v13)
                {
                    v16 = 1;
                    goto LABEL_48854a;
                }
                if (v13 >= 0)
                {
                    v16 = __rust_alloc(v13, 1);
                    if (!v16)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_48854a:
                    memcpy(v1, a0[7], v13);
                    v0 = v13;
                    v1 = v16;
                    v2 = v13;
                    v3 = 9223372036854775812;
                    v8 = __rust_alloc(48, 8);
                    if (!v8)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_488594:
                    v19 = *((int128_t *)&v0);
                    v20 = *((int128_t *)&v2);
                    v8[2] = *((int128_t *)&v4);
                    *((void*)&v8[1]) = v20;
                    *((void*)&v8[0]) = v19;
                    return v8;
                }
            }
            else
            {
                v10 = a0[2];
                if (!v10)
                {
                    v11 = 1;
                    goto LABEL_4884ee;
                }
                if (v10 >= 0)
                {
                    v11 = __rust_alloc(v10, 1);
                    if (!v11)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
LABEL_4884ee:
                    memcpy(v1, a0[1], v10);
                    v0 = v10;
                    v1 = v11;
                    v2 = v10;
                    v3 = 9223372036854775811;
                    v8 = __rust_alloc(48, 8);
                    if (!v8)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    goto LABEL_488594;
                }
            }
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        if (a1 == 1)
        {
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, ".src/uu/ln/src/ln.rs", 1);
            v6 = v1;
            v8 = uu_ln::link_files_in_dir::h0087ae664995706a(a0, 1, v6, v2, a2, v14);
        }
        else
        {
            if (!a1)
                core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
            v15 = a1 - 1;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, a0[1 + 3 * v15], a0[2 + 3 * v15]);
            v6 = v1;
            v17 = v2;
            if (a1 <= 2 && !(char)std::path::Path::is_dir::h9ac0db933706da51(v6, v17))
            {
                if (v0)
                    __rust_dealloc(v6);
                v8 = uu_ln::link::heef60a33248c590f(a0[1], a0[2], a0[4], a0[5], a2);
                return v8;
            }
            v8 = uu_ln::link_files_in_dir::h0087ae664995706a(a0, v15, v6, v17, a2, v18);
        }
    }
    if (v0)
        __rust_dealloc(v6);
    return v8;
}
