long long uu_sort::merge::check_child_success::hcd9b773ca6589878(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [sp-0x70]
    unsigned int v1;  // [sp-0x6c]
    unsigned int v2;  // [bp-0x68], Other Possible Types: unsigned long long
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x54]
    int v6;  // [bp-0x50], Other Possible Types: char
    unsigned long long v7;  // [sp-0x40]
    unsigned long long v9;  // rax
    unsigned int v10;  // eax
    void* v11;  // r14
    unsigned long long v12;  // rdx

    std::process::Child::wait::h4ce2f205e1183efb(&v4, a0);
    if (*((int *)&v4))
    {
        v2 = *((long long *)&v6);
        v0 = 1;
        goto LABEL_532b79;
    }
    else
    {
        v9 = *((int *)&v5);
        v10 = v9 >> 8;
        v1 = -0x100 | !((char)v9 & 127);
        v2 = v10;
        v0 = 0;
        if (!(!((char)v9 & 127)) || !(v10))
        {
LABEL_532b79:
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::hc8a6dc4e0f4a7810(&v0);
            v11 = 0;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$i32$GT$$C$std..io..error..Error$GT$$GT$::hc8a6dc4e0f4a7810(&v0);
            ::0x526f20::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3ba68681839953e5(&v0, a1, v12);
            v7 = *((long long *)&v3);
            *((int128_t *)&v6) = *((int128_t *)&v0);
            v4 = 6;
            v11 = ::0x527430::alloc::boxed::Box$LT$T$GT$::new::h0f817cda3e2779c3(&v4);
        }
    }
    ::0x525870::core::ptr::drop_in_place$LT$std..process..Child$GT$::hc35ff9f076d75ab7(a0);
    return v11;
}
