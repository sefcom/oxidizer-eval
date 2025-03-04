long long uu_wc::process_chunk::hbe9030a1f45cb8a9(unsigned long long a0[5], unsigned long a1, unsigned long a2, char *a3)
{
    unsigned long v0;  // [sp-0x40]
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r13
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0))
    {
        a0[0] = a0[0] + a2;
        v6 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v6;
        return v6;
    }
    v4 = a0[3];
    do
    {
        if ((unsigned int)(v5 - 9) < 5 || (unsigned int)v5 == 32 || (unsigned int)v5 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v5 & 4294967295))
        {
            *(a3) = 0;
            v3 = 0;
        }
        else if (!(char)v3)
        {
            *(a3) = 1;
            v4 += 1;
            a0[3] = v4;
            v3 = v3 & 0xffffffffffffff00 | 1;
        }
    } while ((int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0));
}
