long long compat_core::esxi::vm::EsxiVM::kill::h010dbcd712e5afe5(char *a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x150]
    int v1;  // [bp-0x148]
    unsigned long v2;  // [sp-0x140], Other Possible Types: unsigned long long
    char v3;  // [bp-0x138]
    char v4;  // [bp-0x130]
    char v5;  // [bp-0x128]
    char *v6;  // [sp-0x120]
    unsigned long long v7;  // [sp-0x118]
    unsigned long long v8;  // [sp-0x110]
    unsigned long long v9;  // [sp-0x108]
    char v10;  // [bp-0x100]
    char v11;  // [bp-0xf8]
    unsigned long v12;  // [sp-0xe8]
    unsigned long long v13;  // [sp-0xe0]
    void* v14;  // [sp-0xd8]
    struct struct_0 **v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xc0]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r15
    unsigned long long v21;  // r12
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rax

    v18 = __rust_alloc(5, 1);
    if (!v18)
        _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
    v0 = v18;
    *((uint128_t *)&v1) = 5;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(&v0, 0, 5);
    v19 = v2;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v0 + v19, 5, "forceesxcli --formatter=csv --format-param=fields==\"WorldID,DisplayName\" vm process listWorldId,esxcli vm process kill --type= --world-id=Killing VM: , attempt: compat_core::esxi::vm", 5);
    v2 = v19 + 5;
    v6 = &v0;
    v7 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hdba53b93b23cbc0c;
    v8 = a1;
    v9 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h3cf215fb85128eed;
    v12 = &g_7e63a0;
    v13 = 2;
    v14 = 0;
    v15 = &v6;
    v16 = 2;
    alloc::fmt::format::h3807df668a4e013c(&v3, &v12);
    if ((long long)v1)
        __rust_dealloc(v0);
    v20 = *((long long *)&v3);
    v21 = *((long long *)&v4);
    std::sys::unix::process::process_common::Command::new::h488fe90a515bc251(&v12, "/bin/sh-csh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 7);
    std::sys::unix::process::process_common::Command::stdout::he63fdf42343b92c4(&v12, (unsigned int)std::process::Stdio::null::hcc4fcc7cfeff8ee8(), v23);
    std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(&v12, "-csh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 2);
    std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(&v12, v20, *((long long *)&v5));
    std::process::Command::status::hf3a4699ef731b957(&v10, &v12, v23, v24);
    v25 = core::ptr::drop_in_place::hfd4d0c5a6abcb205(&v12);
    if (*((int *)&v10) != 1)
    {
        if (v21)
            v25 = __rust_dealloc(v20);
        *(a0) = 3;
        return v25;
    }
    else
    {
        *((int128_t *)&a0) = *((int128_t *)&v11);
        if (v21)
        {
            v25 = __rust_dealloc(v20);
            return v25;
        }
        return v25;
    }
}
