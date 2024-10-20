long long uu_tail::follow::watch::Observer::add_path::h076e7fd78e606d41(struct_0 *a0, unsigned long long a1, unsigned long long a2, void* a3, unsigned long a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x288]
    char v1;  // [bp-0x278]
    char v2;  // [bp-0x270]
    char v3;  // [bp-0x268]
    char v4;  // [bp-0x260], Other Possible Types: unsigned long, unsigned long long
    char v5;  // [bp-0x258]
    char v6;  // [bp-0x250]
    unsigned long long v7;  // [sp-0x248]
    unsigned long long v8;  // [sp-0x1b0]
    unsigned long long v9;  // [sp-0x1a8]
    unsigned long long v10;  // [sp-0x1a0]
    unsigned long long v11;  // [sp-0x198]
    struct_2 *v12;  // [sp-0x190]
    char v13;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    char v14;  // [sp-0x180], Other Possible Types: unsigned long long
    char v15;  // [bp-0xd8]
    struct_2 *v16;  // [bp+0x8]
    char v17;  // [bp+0x10]
    struct_2 *v18;  // rbp
    struct struct_1 **v19;  // rax
    unsigned long long v20;  // rbx
    unsigned long long v22;  // 4096
    uint128_t v23[2];  // rax
    int v24;  // xmm0
    unsigned long long v25;  // rbx
    struct_2 *v26;  // r15
    struct struct_1 **v27;  // rax
    unsigned long long v28;  // r13
    unsigned long long v29;  // r14
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rbx
    unsigned int v33;  // r9

    v18 = v16;
    if (a0->field_8e != 2)
    {
        if ((char)std::path::Path::is_absolute::h3431a23d91045560(a1, a2))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&v1, a1, a2);
        }
        else
        {
            std::env::current_dir::h8e5fbaefdf378c8c(&v4);
            v20 = v4;
            if (v20 != 0x8000000000000000)
            {
                std::path::Path::_join::h609728e54bd034cb(&v1, v7, *((long long *)&v6), a1, a2);
                if (v20)
                    __rust_dealloc(v7);
            }
            else
            {
                v4 = 0x8000000000000000;
                v7 = *((long long *)&v5);
                v23 = __rust_alloc(32, 8);
                if (!v23)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v24 = *((int128_t *)&v4);
                v23[1] = *((int128_t *)&v6);
                *((void*)&v23[0]) = v24;
                v25 = a5;
                v26 = v16;
                if (!v25)
                    return v23;
                if (v26->field_0)
                    v27(v25, v30);
                if (v26->field_8)
                {
                    __rust_dealloc(v25);
                    return v23;
                }
                return v23;
            }
        }
        v28 = *((long long *)&v2);
        v29 = *((long long *)&v3);
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v4, v28, v29);
        if ((int)v4 == 2)
        {
            v14 = *((long long *)&v5);
            v13 = 2;
            goto LABEL_4c1243;
        }
        else
        {
            memcpy(&v13, &v4, 176);
            v31 = v13;
            if (v31 != 2)
            {
                memcpy(&v15, &v14, 168);
            }
            else
            {
LABEL_4c1243:
                v31 = 2;
                ::0x4bfa70::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd9352982e8c4d3fc(&v14);
            }
        }
        v0 = v29;
        if (!a4)
        {
            v32 = 1;
        }
        else if (a4 < 0)
        {
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        else
        {
            v32 = __rust_alloc(a4, 1);
            if (!v32)
                alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        }
        memcpy(v32, a3, a4);
        v11 = a5;
        v12 = v16;
        v4 = v31;
        memcpy(&v5, &v15, 168);
        v8 = a4;
        v9 = v32;
        v10 = a4;
        uu_tail::follow::files::FileHandling::insert::h98f6d17d01caf908(&a0->padding_0[56], v28, v0, &v4, v17, v33);
        if (*((long long *)&v1))
            goto LABEL_4c10ae;
    }
    else
    {
        if (!a5)
            return 0;
        if (v18->field_0)
            v19(a5, a1);
        if (v18->field_8)
        {
LABEL_4c10ae:
            __rust_dealloc(v22);
        }
    }
    return 0;
}
