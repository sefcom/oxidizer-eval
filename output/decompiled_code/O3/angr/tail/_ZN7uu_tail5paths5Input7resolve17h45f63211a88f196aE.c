long long uu_tail::paths::Input::resolve::h45f63211a88f196a(unsigned long long a0[3], unsigned long long a1[6], unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x68]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x58]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // r14
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12
    unsigned long long v11;  // r13
    unsigned long long v12;  // r8
    unsigned long long v13;  // r9
    unsigned long long v14;  // r14
    unsigned long long v15;  // r12
    unsigned long long v16;  // r15
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r13
    unsigned long long v19;  // r14

    if (a1[3] != 0x8000000000000000)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, "/dev/stdin/dev/fd/0\n <==\ncannot open '' for reading", 10);
        v8 = *((long long *)&v0);
        v9 = *((long long *)&v1);
        v10 = a1[4];
        v11 = a1[5];
        if (!(char)::0x4adb60::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(v10, v11, v9, *((long long *)&v2), v12, v13))
        {
            if (v8)
                __rust_dealloc(v9);
            std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v0, v10, v11);
            if (*((long long *)&v0) != 0x8000000000000000)
            {
                a0[2] = *((long long *)&v2);
                *((int128_t *)&a0[0]) = *((int128_t *)&v0);
                return a0;
            }
            a0[0] = 0x8000000000000000;
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(*((long long *)&v1));
            return a0;
        }
        else if (v8)
        {
            __rust_dealloc(v9);
        }
    }
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v4, "/dev/stdin/dev/fd/0\n <==\ncannot open '' for reading", 10);
    v14 = *((long long *)&v5);
    std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v0, v14, *((long long *)&v6));
    v15 = *((long long *)&v0);
    v16 = *((long long *)&v1);
    if (v15 == 0x8000000000000000)
    {
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.893476530518564186(v16);
        a0[0] = 0x8000000000000000;
    }
    else
    {
        v14 = v14;
        v17 = *((long long *)&v2);
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v0, "/dev/fd/0\n <==\ncannot open '' for reading", 9);
        v18 = *((long long *)&v0);
        v19 = *((long long *)&v1);
        if (!(char)::0x4adb60::_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(v16, v17, v19, *((long long *)&v2), v12, v13))
        {
            if (v18)
                __rust_dealloc(v19);
            a0[0] = v15;
            a0[1] = v16;
            a0[2] = v17;
        }
        else
        {
            if (v18)
                __rust_dealloc(v19);
            a0[0] = 0x8000000000000000;
            if (v15)
                __rust_dealloc(v16);
        }
    }
    if (*((long long *)&v4))
    {
        __rust_dealloc(v14);
        return a0;
    }
    return a0;
}
