long long fish::wutil::gettext::gettext_impl::get_language_preferences_from_env(void* a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x80]
    void* v1;  // [bp-0x70], Other Possible Types: unsigned long
    int v2;  // [bp-0x68], Other Possible Types: char
    unsigned long long v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    int v7;  // [bp-0x38]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v10;  // rdx
    struct_1 *v11;  // rax
    struct_1 *v12;  // r14
    char *v13;  // rdi

    (char)v0.getf(a1, "L", 6, 0);
    v2.or_else(&(char)v0, a1);
    if (*((long long *)&v2))
    {
        v8 = v3;
        v7 = v2;
        (char)v0.as_string(&v2);
        v4.spec_to_string(&(char)v0);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        v0 = 0;
        if ((char)core::slice::<impl [T]>::starts_with(v5, v6, ::0x128b500::core::char::methods::encode_utf8_raw(67, &v0), v10))
        {
            *((unsigned long long *)a0) = 0;
            *((unsigned long long *)&a0[8]) = 8;
            *((unsigned long long *)&a0[16]) = 0;
            goto LABEL_12e9174;
        }
        else
        {
            fish::wutil::gettext::gettext_impl::get_language_preferences_from_env::check_language_var(&v0, a1);
            if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
            {
                core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&v0);
                v11 = 8.alloc_impl(24, 0);
                if (!v11)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v12 = v11;
                fish::wutil::gettext::gettext_impl::get_language_preferences_from_env::normalize_locale_name(&v0, v5, v6);
                v12->field_10 = v1;
                v12->field_0 = *((int128_t *)&v0);
                *((unsigned long long *)a0) = 1;
                *((struct_1 **)&a0[8]) = v12;
                *((unsigned long long *)&a0[16]) = 1;
                core::ptr::drop_in_place<alloc::string::String>(&v4);
                v13 = &v7;
            }
            else
            {
                *((void* *)&a0[16]) = v1;
                *((int128_t *)a0) = *((int128_t *)&v0);
LABEL_12e9174:
                core::ptr::drop_in_place<alloc::string::String>(&v4);
                v13 = &v2;
            }
            return core::ptr::drop_in_place<fish::env::var::EnvVar>(v13);
        }
    }
    else
    {
        fish::wutil::gettext::gettext_impl::get_language_preferences_from_env::check_language_var(&(char)v0, a1);
        if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
        {
            *((void* *)&a0[16]) = v1;
            *((int128_t *)a0) = *((int128_t *)&v0);
            return v1;
        }
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 8;
        *((unsigned long long *)&a0[16]) = 0;
        return (unsigned long long)core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(&(char)v0);
    }
}
