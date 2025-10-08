long long fish::wcstringutil::StringFuzzyMatch::try_create(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long a3, char a4)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x38]
    unsigned int v5;  // r12d
    unsigned int v6;  // r12d

    v0 = a0;
    v6 = v5 & 0xffffff00 | 3;
    if (a1 > a3)
    {
        return v6;
    }
    else if ((char)a0.equal(a1, a2, a3))
    {
        return 0;
    }
    else
    {
        if (a2.starts_with(a3, a0, a1))
            return 0;
        if (!(char)fish::fallback::wcscasecmp(a0, a1, a2, a3))
        {
            return fish::wcstringutil::StringFuzzyMatch::try_create::get_case_fold(a0, a1);
        }
        else if ((char)fish::wcstringutil::string_prefixes_string_case_insensitive(a0, a1, a2, a3))
        {
            return fish::wcstringutil::StringFuzzyMatch::try_create::get_case_fold(a0, a1);
        }
        else if (a4)
        {
            return v6;
        }
        else if (a1)
        {
            v1 = a2;
            v2 = a3;
            v3 = a1;
            if (!v1.try_fold(&v0).eq(1))
                return (fish::wcstringutil::ifind(a2, a3, a0, a1, 1) == 1 ? fish::wcstringutil::StringFuzzyMatch::try_create::get_case_fold(v0, a1) : (!(char)fish::wcstringutil::subsequence_in_string(v0, a1, a2, a3)) * 3);
        }
        else
        {
            core::option::expect_failed("window size must be non-zero/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/str/pattern.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/char/methods.rsto_digit: invalid radix -- radix must be in the range 2 to 36 inclusive/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/exact_size.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/core/src/iter/traits/iterator.rs", 28, &g_14e4720); /* do not return */
        }
        return 0;
    }
}
