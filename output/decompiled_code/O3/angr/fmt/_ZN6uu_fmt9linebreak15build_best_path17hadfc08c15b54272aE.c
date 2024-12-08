long long uu_fmt::linebreak::build_best_path::hadfc08c15b54272a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long v0;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x30]
    unsigned long long v2;  // [sp-0x28]
    unsigned long long v3;  // [sp-0x20]
    unsigned long long *v5;  // rax

    v0 = a3;
    v1 = a3 + a4 * 8;
    v2 = a1;
    v3 = a2;
    v5 = core::iter::traits::iterator::Iterator::reduce::h568b97d08b0e1111(&v0, a1, a2);
    if (v5)
        return uu_fmt::linebreak::build_best_path::_$u7b$$u7b$closure$u7d$$u7d$::hd8f469501106a4cd(a0, a1, a2, *(v5));
    a0[0] = 0;
    a0[1] = 8;
    a0[2] = 0;
    return v5;
}
