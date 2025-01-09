long long uu_rm::prompt_dir::h3ebab050e61d8097(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    char v0;  // [bp-0xd0]
    char v1;  // [bp-0x98]
    unsigned long long v3;  // rbp
    unsigned long v4;  // rbx
    unsigned int v5;  // ebx

    v3 = a2;
    if (!(char)v3)
    {
        v5 = v4 | -0x100 | 1;
        return v5;
    }
    std::fs::metadata::h6df0603967c240bb(&v0, a0, a1);
    v5 = v4 | -0x100 | 1;
    if (*((int *)&v0) != 2)
        v5 = uu_rm::handle_writable_directory::hdb36aba62dc09786(a0, a1, v3 & 4294967295, *((int *)&v1));
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v0);
    return v5;
}
