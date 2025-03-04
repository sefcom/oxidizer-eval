long long uu_wc::process_chunk::h2333cf1075a5b14e(unsigned long long a0[5], unsigned long a1, unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x48]
    unsigned long v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r13
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax

    v4 = a2;
    v1 = a1;
    v2 = a1 + a2;
    v5 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1))
    {
        a0[0] = a0[0] + v4;
        v9 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v9;
        return v9;
    }
    v0 = a2;
    v6 = a0[1];
    v7 = a0[3];
    do
    {
        if ((unsigned int)(v8 - 9) < 5 || (unsigned int)v8 == 32 || (unsigned int)v8 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8 & 4294967295))
        {
            *(a3) = 0;
            v5 = 0;
        }
        else if (!(char)v5)
        {
            *(a3) = 1;
            v7 += 1;
            a0[3] = v7;
            v5 = v5 & 0xffffffffffffff00 | 1;
        }
    } while ((v6 += 1, (int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1)));
    a0[1] = v6;
    v4 = v0;
}
