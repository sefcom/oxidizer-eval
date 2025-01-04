long long uu_test::isatty::h35113a9be9add355(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x48]
    unsigned long long v2;  // [sp-0x40]
    char v3;  // [sp-0x38]
    char v4;  // [bp-0x30]
    char v5;  // [bp-0x2c]
    char v6;  // [bp-0x1c]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, a1, a2);
    if (!v0)
    {
        v8 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(v1, v2);
        if (!((char)v8 & 1))
        {
            v9 = isatty(v8 >> 32 & 4294967295 & 4294967295);
            a0->field_8 = (unsigned int)v9 == 1;
            a0->field_0 = 7;
            return v9;
        }
    }
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    ::0x4ab340::_$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&v4, &v0);
    v9 = *((int *)&v4);
    *((int *)((char *)&a0->field_c + 12)) = *((int *)&v6);
    *((int128_t *)&(&a0->padding_9)[1]) = *((int128_t *)&v5);
    a0->field_0 = 5;
    *((unsigned int *)&a0->field_8) = v9;
    return v9;
}
