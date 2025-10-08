long long fish::highlight::file_tester::FileTester::test_cd_path(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0[3];  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // r13
    unsigned int v5;  // ebx

    v0.to_vec(a1, a2);
    if ((char)fish::expand::expand_one(&v0, 1, a0->field_18, 0))
    {
        v4 = *((long long *)&v2);
        if ((char)fish::wcstringutil::string_prefixes_string(v1, v4, "-", 6) || (char)fish::wcstringutil::string_prefixes_string(v1, v4, "-", 2))
            goto LABEL_13b8f5c;
        v5 = a3 & 0xffffff00 | 2 - (char)fish::highlight::file_tester::is_potential_cd_path(v1, v4, a3, a0->field_8, a0->field_10, a0->field_18, 0x100);
    }
    else
    {
LABEL_13b8f5c:
        v5 = 0;
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return v5;
}
