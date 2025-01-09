long long uu_ls::get_time::h8b131fbbcfeb99cc(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    unsigned long long v3;  // rdx

    v1 = uu_ls::get_system_time::hcb9369b24593e222(a1, a2);
    if (v2 != 0x3b9aca00)
        return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(a0, v1, v3);
    *(a0) = 0;
    return v1;
}
