long long uu_wc::process_chunk::h2333cf1075a5b14e(unsigned long long a0[5], unsigned long a1, unsigned long long a2, char *a3)
{
    unsigned long v0;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x38]
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r13
    unsigned long long v5;  // r14
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a1 + a2;
    v3 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0))
    {
        a0[0] = a0[0] + a2;
        v7 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v7;
        return v7;
    }
    v4 = a0[1];
    v5 = a0[3];
    do
    {
        if ((unsigned int)(v6 - 9) < 5 || (unsigned int)v6 == 32 || (unsigned int)v6 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v6 & 4294967295))
        {
            *(a3) = 0;
            v3 = 0;
        }
        else if (!(char)v3)
        {
            *(a3) = 1;
            v5 += 1;
            a0[3] = v5;
            v3 = v3 & 0xffffffffffffff00 | 1;
        }
    } while ((v4 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v0)));
    a0[1] = v4;
}
