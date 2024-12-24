long long uu_test::parser::Symbol::new::h3b55e9adf678ab6a(struct_0 *a0, unsigned long long a1[3])
{
    int v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x48]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned long long v6;  // r14
    unsigned long long v7;  // r15

    if (a1[0] == 0x8000000000000000)
    {
        a0->field_0 = 6;
        return a0;
    }
    *((int128_t *)&v0) = *((int128_t *)&a1[0]);
    v1 = a1[2];
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&v2, (long long)(&v0)[8], a1[2]);
    if (!*((long long *)&v2))
    {
        v6 = *((long long *)&v3);
        v7 = *((long long *)&v4);
        if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "(", 1))
        {
            a0->field_0 = 0;
            ::0x4ae090::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5f29ab9455888442(&v0);
            return a0;
        }
        else if ((char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "!", 1))
        {
            a0->field_0 = 1;
            ::0x4ae090::core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5f29ab9455888442(&v0);
            return a0;
        }
        else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-a", 2)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-o", 2)))
        {
            *((unsigned long long *)((char *)&a0->field_10 + 8)) = v1;
            *((void*)&a0->field_8) = v0;
            a0->field_0 = 2;
            return a0;
        }
        else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "=", 1)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "==", 2)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "!=", 2)))
        {
            a0->field_20 = v1;
            *((void*)&a0->field_10) = v0;
            a0->field_8 = 0;
            a0->field_0 = 4;
            return a0;
        }
        else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-eq", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-ge", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-gt", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-le", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-lt", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-ne", 3)))
        {
            a0->field_20 = v1;
            *((void*)&a0->field_10) = v0;
            a0->field_8 = 1;
            a0->field_0 = 4;
            return a0;
        }
        else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-ef", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-nt", 3)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-ot", 3)))
        {
            a0->field_20 = v1;
            *((void*)&a0->field_10) = v0;
            a0->field_8 = 2;
            a0->field_0 = 4;
            return a0;
        }
        else if (!(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-n", 2)) || !(!(char)_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hf14b98496526bdae(v6, v7, "-z", 2)))
        {
            a0->field_20 = v1;
            *((void*)&a0->field_10) = v0;
            a0->field_8 = 0;
            a0->field_0 = 5;
            return a0;
        }
        else if (...)
        {
            a0->field_20 = v1;
            *((void*)&a0->field_10) = v0;
            a0->field_8 = 1;
            a0->field_0 = 5;
            return a0;
        }
    }
    *((unsigned long long *)((char *)&a0->field_10 + 8)) = v1;
    *((void*)&a0->field_8) = v0;
    a0->field_0 = 3;
    return a0;
}
