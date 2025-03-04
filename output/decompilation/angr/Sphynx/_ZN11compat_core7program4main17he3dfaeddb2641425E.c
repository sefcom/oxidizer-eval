long long compat_core::program::main::he3dfaeddb2641425(struct_1 *a0)
{
    unsigned int v0;  // [sp-0x2ac]
    int v1;  // [sp-0x2a8]
    char *v2;  // [sp-0x298]
    unsigned long long v3;  // [sp-0x290]
    char v4;  // [bp-0x288], Other Possible Types: unsigned long
    char v5;  // [sp-0x280], Other Possible Types: unsigned long long
    void* v6;  // [sp-0x278]
    unsigned long long v7;  // [sp-0x268]
    void* v8;  // [sp-0x260]
    unsigned long v9;  // [sp-0x1c0]
    unsigned long long v10;  // [sp-0x1b8]
    void* v11;  // [sp-0x1b0]
    struct struct_0 **v12;  // [sp-0x1a0]
    unsigned long long v13;  // [sp-0x198]
    unsigned long long *v15;  // r14
    struct_5 *v16;  // rbp
    struct_5 *v17;  // rbx
    struct_5 *v18;  // rdi
    unsigned long long *v20;  // rbp
    unsigned int v21;  // edx
    unsigned long long v22;  // rax
    unsigned long long *v23;  // rbx
    unsigned long long *v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long *v27;  // rbx
    unsigned long long v28;  // rax

    v15 = &a0->padding_cc[4];
    if (a0->field_c8 != 1)
    {
        if (a0->field_118)
        {
            compat_log::use_console::ha5f18df36e707c54();
        }
        else
        {
            compat_fork::ignore_sighup::h0e5166a6fb2d2848();
            if (!compat_kernel::core::fork::fork_entry::h64712f88e2afd589())
            {
                compat_kernel::core::fork::fork::h3ef12e11ae319438(&v4);
                if (*((int *)&v4) != 1)
                    std::process::exit::h35800f5e3977f7a4(0); /* do not return */
                *((int128_t *)&v1) = *((int128_t *)&v5);
                if (!_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE)
                {
                    if ((char)v1 < 2)
                        goto LABEL_44164c;
                    v16 = (long long)(&v1)[8];
                    v16->field_8->field_0(v16->field_0);
                    if (v16->field_8->field_8)
                        __rust_dealloc(v16->field_0);
                    v18 = v16;
                }
                else
                {
                    v2 = &v1;
                    v3 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb2d05e37bbc417fd;
                    v9 = &g_7e5d78;
                    v10 = 1;
                    v11 = 0;
                    v12 = &v2;
                    v13 = 1;
                    log::__private_api_log::hc54142160760cc34(&v9, 1, &g_7e5d88, 0);
                    if ((char)v1 < 2)
                        goto LABEL_44164c;
                    v17 = (long long)(&v1)[8];
                    v17->field_8->field_0(v17->field_0);
                    if (v17->field_8->field_8)
                        __rust_dealloc(v17->field_0);
                    v18 = (long long)(&v1)[8];
                }
                __rust_dealloc(v18);
            }
        }
LABEL_44164c:
        ::libc.so.0::memcpy(&v4, a0, 200);
        compat_kernel::core::server::Server::build::hdd036c3f11ac7902(&v9, 4, 10, 16, &v4);
        if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3)
        {
            v4 = &g_7e5ce8;
            v5 = 1;
            v6 = 0;
            v7 = "compat_core::programbin/compat-core/src/program.rsExitingCould not fork process -> ";
            v8 = 0;
            log::__private_api_log::hc54142160760cc34(&v4, 3, &g_7e5cf8, 0);
        }
        if ((int)compat_core::unix::main::h2a4898d383cf093e(v15, &v9))
        {
            core::ptr::drop_in_place::h0f408680137d741f(&v9);
            if (!*((long long *)&a0->field_c8))
            {
                core::ptr::drop_in_place::hdc8c04c51855010d(v15);
                return 1;
            }
            if (a0->field_d8)
                __rust_dealloc(*(v15));
            v20 = a0->field_e8;
            if (!v20)
                return 1;
            v0 = v21;
            v22 = a0->field_f8;
            if (v22)
            {
                v23 = 0;
                do
                {
                    if (*((long long *)(v20 + v23 + 8)))
                        __rust_dealloc(*((long long *)(v20 + v23)));
                } while ((v23 += 24, v22 * 24 != v23));
            }
            v25 = a0->field_f0;
            if (!v25)
            {
                return 1;
            }
            else if (!v25 * 24)
            {
                return 1;
            }
            else
            {
                __rust_dealloc(a0->field_e8);
                return 1;
            }
        }
        compat_kernel::core::stats::Stats::render::h421b3e7740f2b90b(&v9);
        if (_ZN3log20MAX_LOG_LEVEL_FILTER17hd159a8e32dbf35ffE >= 3)
        {
            v4 = &g_7e5d30;
            v5 = 1;
            v6 = 0;
            v7 = "compat_core::programbin/compat-core/src/program.rsExitingCould not fork process -> ";
            v8 = 0;
            log::__private_api_log::hc54142160760cc34(&v4, 3, &g_7e5d40, 0);
        }
        core::ptr::drop_in_place::h0f408680137d741f(&v9);
        if (!(!*((long long *)&a0->field_c8)))
            goto LABEL_44144b;
    }
    else
    {
        compat_log::use_console::ha5f18df36e707c54();
        compat_kernel::app::Context$LT$A$GT$::log_error::hc06c922c491ab8f4();
        if (a0->field_10)
            __rust_dealloc(a0->field_8);
        if (a0->field_28)
            __rust_dealloc(a0->field_20);
        _ZN4core3ptr13drop_in_place17h8a1f9bb5e8e55ad6E.llvm.4649098736335954857(&a0->padding_30[8]);
        if (a0->field_a8)
            __rust_dealloc(a0->field_a0);
        if (*((long long *)&a0->field_c8))
        {
LABEL_44144b:
            if (a0->field_d8)
                __rust_dealloc(*(v15));
            v24 = a0->field_e8;
            if (!v24)
                return 0;
            v26 = a0->field_f8;
            if (v26)
            {
                v27 = 0;
                do
                {
                    if (*((long long *)(v24 + v27 + 8)))
                        __rust_dealloc(*((long long *)(v24 + v27)));
                } while ((v27 += 24, v26 * 24 != v27));
            }
            v28 = a0->field_f0;
            if (v28 && v28 * 24)
            {
                __rust_dealloc(a0->field_e8);
                return 0;
            }
        }
    }
    core::ptr::drop_in_place::hdc8c04c51855010d(v15);
    return 0;
}
