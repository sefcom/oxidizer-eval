long long uu_wc::Input::to_title::hf944d4f2d9388afe(unsigned long long a0[3], struct_0 *a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rax
    unsigned long long v6;  // r15
    unsigned long long v7;  // r14
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v4 = 0x8000000000000000;
    if (a1->field_0 != 9223372036854775809)
    {
        v6 = *((long long *)&a1->field_8);
        v7 = a1->field_10;
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v0, v6, v7);
        if (*((long long *)&v0) || (v8 = *((long long *)&v1), v9 = *((long long *)&v2), v5 = (long long)::0x4b7c10::_$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(v8, v9), (char)v5))
        {
            v5 = uucore::features::quoting_style::escape_name::ha9b5831150e16363(&v0, v6, v7, &anon.7c7385208ddd1e4e4d864dc74576bdf1.19.llvm.3329604763963259673);
            v4 = *((long long *)&v0);
            v8 = *((long long *)&v1);
            v9 = *((long long *)&v2);
        }
        a0[0] = v4;
        a0[1] = v8;
        a0[2] = v9;
        return v5;
    }
    else if (!a1->field_8)
    {
        a0[0] = 0x8000000000000000;
        a0[1] = "-";
        a0[2] = 1;
        return "-";
    }
    else
    {
        a0[0] = 9223372036854775809;
        return 9223372036854775809;
    }
}
