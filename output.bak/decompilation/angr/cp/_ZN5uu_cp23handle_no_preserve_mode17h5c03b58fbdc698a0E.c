long long uu_cp::handle_no_preserve_mode::h5c03b58fbdc698a0(char a0, char a1, unsigned int a2)
{
    unsigned int v1;  // eax
    unsigned long long v2;  // rax

    if (a1)
        v1 = 438;
    else
        v1 = a2 & 511;
    v2 = (a0 ? a2 : v1);
    return v2;
}
