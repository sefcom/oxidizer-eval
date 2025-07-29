long long uu_uniq::filter_args(struct_0 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3, char *a4, char *a5)
{
    char v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    int v3;  // [bp-0x68], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    unsigned long long *v5;  // [bp-0x50]
    unsigned long long *v6;  // [bp-0x48]
    unsigned int v8;  // r12d
    unsigned int v9;  // r15d

    v0.try_from(*((long long *)&a1->padding_1[7]), a1->field_10);
    if ((v0 & 1))
    {
        a0->field_10 = a1->field_10;
        *((int128_t *)&a0->field_0) = *((int128_t *)&a1->field_0);
        return a0;
    }
    v8 = *(a4);
    v9 = *(a5);
    if ((char)uu_uniq::should_extract_obs_skip_fields(v1, v2, v8, v9))
    {
        uu_uniq::handle_extract_obs_skip_fields(&v0, v1, v2, a2);
        goto LABEL_4aa018;
    }
    else if ((char)uu_uniq::should_extract_obs_skip_chars(v1, v2, v8, v9))
    {
        uu_uniq::handle_extract_obs_skip_chars(&v0, v1, v2, a3);
LABEL_4aa018:
        v4 = v2;
        memcpy(&v3, &v0, 16);
    }
    else
    {
        v0.to_owned(v1, v2);
        v4 = v2;
        memcpy(&v3, &v0, 16);
        if ((char)core::slice::<impl [T]>::starts_with(v1, v2, "-f-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodap", 2))
        {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v6);
            *(v6) = 0x8000000000000000;
        }
        if ((char)core::slice::<impl [T]>::starts_with(v1, v2, "-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappe", 2))
        {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v5);
            *(v5) = 0x8000000000000000;
        }
    }
    uu_uniq::handle_preceding_options(v1, v2, a4, a5);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    ::0x4a7c80::core::ptr::drop_in_place<std::ffi::os_str::OsString>(a1);
    return a0;
}
