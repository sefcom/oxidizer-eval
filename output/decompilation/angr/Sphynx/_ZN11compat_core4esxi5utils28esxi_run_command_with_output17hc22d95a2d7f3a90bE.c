long long compat_core::esxi::utils::esxi_run_command_with_output::hc22d95a2d7f3a90b(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x198], Other Possible Types: char, unsigned long
    char v1;  // [bp-0x194]
    unsigned long long v2;  // [sp-0x190]
    int v3;  // [bp-0x188], Other Possible Types: void*, unsigned long
    char v4;  // [bp-0x184]
    unsigned int v5;  // [sp-0x178]
    char v6;  // [bp-0x174]
    unsigned long long v7;  // [sp-0x168]
    unsigned long long v8;  // [sp-0x160]
    unsigned long long v9;  // [sp-0x158]
    unsigned long long v10;  // [sp-0x150]
    int v11;  // [sp-0x148]
    int v12;  // [sp-0x138]
    unsigned int v13;  // [sp-0x128]
    int v14;  // [sp-0x118]
    int v15;  // [sp-0x108]
    unsigned int v16;  // [sp-0xf8]
    char v17;  // [bp-0xe8]
    char v18;  // [bp-0xe0]
    char v19;  // [bp-0xd8]
    char v20;  // [bp-0xd0]
    char v21;  // [bp-0xc8]
    char v22;  // [bp-0xc0]
    unsigned long long v24;  // rcx
    unsigned long long v25;  // r12
    unsigned long long v26;  // rbp
    unsigned long long v28;  // r15
    unsigned long long v29;  // r15
    unsigned long long v31;  // r15
    unsigned long long v32;  // rax
    void* v33;  // rcx
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx

    std::sys::unix::process::process_common::Command::new::h488fe90a515bc251(&v17, "sh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 2);
    std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(&v17, "-csh/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 2);
    std::sys::unix::process::process_common::Command::stdout::he63fdf42343b92c4(&v17, (unsigned int)std::process::Stdio::piped::hcaf9104e6e719eb6(), a2);
    std::sys::unix::process::process_common::Command::arg::h767f7fe18acf49f1(&v17, a1, a2);
    std::process::Command::spawn::h03f21eadf8073d5d(&v0, &v17, a2, v24);
    *((int128_t *)&v11) = *((int128_t *)&v1);
    *((int128_t *)&v12) = *((int128_t *)&v4);
    v13 = *((int *)&v6);
    if (*((int *)&v0) == 1)
    {
        *((int128_t *)&a0[1]) = (int128_t)(&v11)[4];
        a0[0] = 1;
        core::ptr::drop_in_place::hfd4d0c5a6abcb205(&v17);
        return a0;
    }
    v16 = v13;
    v15 = v12;
    v14 = v11;
    core::ptr::drop_in_place::hfd4d0c5a6abcb205(&v17);
    v5 = v16;
    v3 = v15;
    v0 = v14;
    std::process::Child::wait_with_output::h7882778dfaebb1b2(&v17, &v0);
    v25 = *((long long *)&v18);
    v26 = *((long long *)&v19);
    if (*((long long *)&v17) == 1)
    {
        a0[1] = v25;
        a0[2] = v26;
        a0[0] = 1;
        return a0;
    }
    v8 = *((long long *)&v21);
    alloc::string::String::from_utf8_lossy::h8e7377f697780647(&v17, v25, *((long long *)&v20));
    v7 = *((long long *)&v18);
    v28 = *((long long *)&v19);
    v9 = *((long long *)&v17);
    v29 = v28;
    if (v9 == 1)
        v29 = *((long long *)&v20);
    v31 = v29;
    v10 = *((long long *)&v22);
    if (!v31)
    {
        v32 = 1;
        v33 = 0;
    }
    else
    {
        v32 = __rust_alloc(v31, 1);
        if (!v32)
            _ZN5alloc7raw_vec19RawVec$LT$T$C$A$GT$11allocate_in28_$u7b$$u7b$closure$u7d$$u7d$17h9f289d254163e8c5E.llvm.3765406455587417959(); /* do not return */
        v33 = v31;
    }
    v0 = v32;
    v2 = v33;
    v3 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::ha6434863460e3dbe(&v0, 0, v31);
    v34 = v3;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h5bd23e75d5fc6e32(v0 + v34, v31, v7, v31);
    v35 = v34 + v31;
    v3 = v35;
    a0[3] = v35;
    *((int128_t *)&a0[1]) = *((int128_t *)&v0);
    a0[0] = 0;
    if (v26)
        __rust_dealloc(v25);
    if (v10)
        __rust_dealloc(v8);
    if (!(v9 && v28))
        return a0;
    __rust_dealloc(v7);
}
