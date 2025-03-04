long long uu_wc::process_chunk::heb617a55811ee3f2(unsigned long long a0[5], unsigned long a1, unsigned long a2, char *a3)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned long long v1;  // [sp-0x48]
    unsigned long v2;  // [sp-0x40]
    unsigned long long v3;  // [sp-0x38]
    unsigned long long v5;  // r14
    unsigned long long v6;  // rbp
    unsigned int v7;  // edx
    unsigned int v8;  // r13d
    unsigned long long v9;  // r14
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax

    v5 = a2;
    v2 = a1;
    v3 = a1 + a2;
    v6 = *(a3);
    if (!(int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2))
    {
        a0[0] = a0[0] + v5;
        v11 = ::0x4b6250::core::cmp::max_by::h29d87775ffd58160(0, a0[4]);
        a0[4] = v11;
        return v11;
    }
    v8 = v7;
    v1 = a2;
    v0 = a0[3];
    v9 = a0[1];
    v10 = a0[2];
    do
    {
        if (v8 - 9 < 5 || v8 == 32 || v8 >= 128 && (char)::0x4b7b10::core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(v8))
        {
            *(a3) = 0;
            v6 = 0;
        }
        else if (!(char)v6)
        {
            *(a3) = 1;
            v0 += 1;
            a0[3] = v0;
            v6 = v6 & 0xffffffffffffff00 | 1;
        }
        if (v8 == 10)
        {
            v10 += 1;
            a0[2] = v10;
        }
        v9 += 1;
        v8 = v7;
    } while ((int)core::str::validations::next_code_point::hb01acf43b4359c77(&v2));
    a0[1] = v9;
    v5 = v1;
}
