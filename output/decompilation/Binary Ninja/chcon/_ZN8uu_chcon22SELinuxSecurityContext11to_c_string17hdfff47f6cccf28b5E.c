
  int64_t uu_chcon::SELinuxSecurityContext::to_c_string::hdfff47f6cccf28b5(int32_t* arg1, int32_t* arg2)

{
    if (*arg2 == 2)
    {
        int64_t rax = *(arg2 + 8);
        int64_t rcx = *(arg2 + 0x10);
        int32_t rdx;
        rdx = !rax;
        *(arg1 + 8) = rdx * 2;
        *(arg1 + 0x10) = rax;
        *(arg1 + 0x18) = rcx;
        *arg1 = 0x12;
        return rax;
    }
    
    int32_t var_40;
    selinux::SecurityContext::to_c_string::h0c9c9ed290d135c6(&var_40, arg2);
    int128_t var_30;
    
    if (var_40 == 0xa)
    {
        int64_t rax_1 = *var_30[8];
        *(arg1 + 0x18) = rax_1;
        int128_t var_38;
        *(arg1 + 8) = var_38;
        *arg1 = 0x12;
        return rax_1;
    }
    
    int64_t var_10;
    *(arg1 + 0x30) = var_10;
    int128_t zmm0 = var_40;
    int128_t var_20;
    *(arg1 + 0x20) = var_20;
    *(arg1 + 0x10) = var_30;
    *arg1 = zmm0;
    *(arg1 + 0x38) = "SELinuxSecurityContext::to_c_str…";
    *(arg1 + 0x40) = 0x25;
    return var_10;
}
