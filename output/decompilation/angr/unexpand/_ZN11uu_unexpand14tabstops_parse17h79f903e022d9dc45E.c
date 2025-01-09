long long uu_unexpand::tabstops_parse::h79f903e022d9dc45(unsigned long long a0[4], unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0xb8]
    unsigned long long v1;  // [sp-0xb0]
    void* v2;  // [sp-0xa8]
    char v3;  // [bp-0xa0]
    char v4;  // [bp-0x9f]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x80]
    void* v8;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x70]
    char v10;  // [bp-0x68]
    unsigned short v11;  // [sp-0x38]
    unsigned long long v13;  // r13
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16[4];  // rcx
    unsigned long long v17[4];  // rdx
    struct_0 *v18;  // rax

    ::0x4b1070::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&v10, a1, a2);
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v8 = 0;
    v9 = a2;
    v11 = 1;
    while (true)
    {
        v13 = core::str::iter::SplitInternal$LT$P$GT$::next::hc3086131f80cc882(&v8);
        if (!v13)
        {
            v8 = v1;
            v9 = v8 + v2 * 8;
            if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hfb74872ec2eaf285(&v8))
            {
                v15 = 0x8000000000000000;
                goto LABEL_4b193e;
            }
            else if (!(_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h5c45441c9d008661(v8, v9) & 1))
            {
                v15 = 9223372036854775810;
                goto LABEL_4b193e;
            }
            else
            {
                v17 = a0;
                v18 = &v17[1];
                v18->field_10 = v2;
                v18->field_0 = *((int128_t *)&v0);
                v17[0] = 0;
                return v18;
            }
        }
        else
        {
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v3, v13, v14);
            if (!v3)
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7c81b2a5e929de98(&v0, *((long long *)&v5));
            }
            else
            {
                if (v4 == 2)
                {
                    v15 = 9223372036854775809;
                }
                else
                {
                    ::0x4b1000::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hde6101a7564f34fb(&v6, core::str::_$LT$impl$u20$str$GT$::trim_start_matches::he524a6a972df7d79(v13, v14), v14);
                    v16 = a0;
                    v16[3] = *((long long *)&v7);
                    *((int128_t *)&v16[1]) = *((int128_t *)&v6);
                    break;
                }
LABEL_4b193e:
                v16 = a0;
                v16[1] = v15;
                break;
            }
        }
    }
    v16[0] = 1;
    v18 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h1b908adb0cd1da04(&v0);
    return v18;
}
