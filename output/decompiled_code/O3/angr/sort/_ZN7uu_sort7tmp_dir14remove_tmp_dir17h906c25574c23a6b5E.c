long long uu_sort::tmp_dir::remove_tmp_dir::h906c25574c23a6b5(unsigned long long a0, unsigned long long a1)
{
    unsigned long long *v1;  // [sp-0x128]
    char v2;  // [sp-0x120]
    char v3;  // [bp-0x118]
    char v6;  // [bp-0x100]
    void* v13;  // [bp-0xa0], Other Possible Types: char
    char v14;  // [bp-0x98]
    void* v15;  // [sp-0x70]
    unsigned long long *v16;  // [sp-0x40], Other Possible Types: char
    char v17;  // [sp-0x38]
    char v19;  // cl
    char v20;  // al
    unsigned long long v22;  // r15
    unsigned long long v23;  // rbx
    unsigned long long v24;  // r12
    struct struct_0 **v25;  // r13

    std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v13, a0, a1);
    v19 = v14;
    v20 = v19;
    v1 = v16;
    v2 = (v19 != 2 ? (-0x100 | v20) & 4294967295 & 4294967295 : 2);
    if (v19 != 2)
    {
        v13 = 0;
        v15 = 0;
        v22 = &v16;
        v16 = v1;
        v17 = v20;
        v23 = &v6;
        v24 = &v3;
        v25 = __rust_dealloc;
    }
    else
    {
        _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hb556c871a57c1a72E.llvm.17343790245676626513(&v1);
    }
}
