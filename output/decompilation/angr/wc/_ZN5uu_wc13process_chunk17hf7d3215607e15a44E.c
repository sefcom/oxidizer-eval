long long uu_wc::process_chunk::hf7d3215607e15a44(unsigned long long a0[5], unsigned long a1, unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long v1;  // [sp-0x40]
    unsigned long long v2;  // [sp-0x38]
    unsigned long long v4;  // rbp
    unsigned int v5;  // edx
    unsigned int v6;  // r13d
    unsigned long long v7;  // r14
    unsigned long long v8;  // rax

    v1 = a1;
    v2 = a1 + a2;
    v4 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1))
    {
        a0[0] = a0[0] + a2;
        v8 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v8;
        return v8;
    }
    v6 = v5;
    v7 = a0[2];
    v0 = a0[3];
    do
    {
        if (v6 - 9 < 5 || v6 == 32 || v6 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v6))
        {
            *(a3) = 0;
            v4 = 0;
        }
        else if (!(char)v4)
        {
            *(a3) = 1;
            v0 += 1;
            a0[3] = v0;
            v4 = v4 & 0xffffffffffffff00 | 1;
        }
        if (v6 == 10)
        {
            v7 += 1;
            a0[2] = v7;
        }
        v6 = v5;
    } while ((int)core::str::validations::next_code_point::hb01acf43b4359c77(&v1));
}
