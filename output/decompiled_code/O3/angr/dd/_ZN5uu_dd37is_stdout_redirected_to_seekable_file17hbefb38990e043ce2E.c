long long uu_dd::is_stdout_redirected_to_seekable_file::hbefb38990e043ce2()
{
    unsigned int v0;  // [sp-0x54]
    char v1;  // [bp-0x50], Other Possible Types: unsigned long, unsigned long long
    unsigned int v2;  // [bp-0x48], Other Possible Types: char, unsigned long
    unsigned short v3;  // [sp-0x44]
    char v4;  // [bp-0x40]
    char v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x28]
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r14
    unsigned long long v11;  // r15
    unsigned long long v12;  // rbx
    unsigned int v13;  // r15d
    unsigned int v14;  // ebp
    unsigned long v15;  // rdx
    unsigned long long v17;  // rax

    std::sys::pal::unix::fs::canonicalize::hd88c363c78336f06(&v5, "/dev/stdout0.0.27Copy, and optionally convert, a file system resource{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in byte", 11);
    v9 = *((long long *)&v5);
    if (v9 != 0x8000000000000000)
    {
        v10 = *((long long *)&v6);
        v11 = *((long long *)&v7);
    }
    else
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v1, "/dev/stdout0.0.27Copy, and optionally convert, a file system resource{} [OPERAND]...\n{} OPTION### Operands\n\n- bs=BYTES : read and write up to BYTES bytes at a time (default: 512);\n   overwrites ibs and obs.\n- cbs=BYTES : the 'conversion block size' in byte", 11);
        v10 = *((long long *)&v2);
        v11 = *((long long *)&v4);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v6);
        v12 = v1;
    }
    v1 = 0x1b600000000;
    v2 = 0;
    v3 = 0;
    v2 = 1;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v1, v10, v11);
    v13 = *((int *)&v5);
    if (v13)
    {
        v14 = 0;
        if (!(!v12))
            goto LABEL_49cbbb;
    }
    else
    {
        v0 = *((int *)&(&v5)[4]);
        v1 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 2);
        v2 = v15;
        if (v1)
        {
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v2);
            goto LABEL_49cc48;
        }
        else
        {
            v1 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(&v0, 1);
            v2 = v15;
            if (!v1)
            {
                v1 = v17;
                v14 = vvar_55{reg 56} | -0x100 | !v1;
                if (v1)
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v1);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v2);
LABEL_49cc48:
                v14 = 0;
            }
        }
        close(v0);
        if (v12)
        {
LABEL_49cbbb:
            __rust_dealloc(v10);
        }
    }
    if (v13)
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v6);
    return v14;
}
