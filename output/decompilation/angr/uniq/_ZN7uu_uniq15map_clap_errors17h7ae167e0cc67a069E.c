long long uu_uniq::map_clap_errors(struct_0 *a0)
{
    struct_0 *v0;  // [bp-0xd0]
    int v1;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb0]
    char v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    int v7;  // [bp-0x88], Other Possible Types: char
    unsigned long long v8;  // [bp-0x78]
    int v9;  // [bp-0x70], Other Possible Types: char
    unsigned long long v10;  // [bp-0x60]
    int v11;  // [bp-0x58], Other Possible Types: char
    unsigned long long v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    unsigned int v15;  // eax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v0 = a0;
    uucore::mods::locale::get_message(&v4, "uniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq", 19);
    uucore::mods::locale::get_message(&v1, "uniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-me", 35);
    v13.add(&v1, "\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help", 1);
    v9.add(&v13, v5, v6);
    uucore::mods::locale::get_message(&v1, "uniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-", 26);
    v13.add(&v1, "\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help", 1);
    v11.add(&v13, v5, v6);
    uucore::mods::locale::get_message(&v1, "uniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-case", 33);
    v13.add(&v1, "\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help", 1);
    v7.add(&v13, v5, v6);
    switch (v15)
    {
    case 0:
        v17 = v0.get(5);
        if (v17 && (char)uu_uniq::map_clap_errors::{{closure}}(v17))
        {
            v18 = v0.get(1);
            if (!(v18 && (char)uu_uniq::map_clap_errors::{{closure}}(v18)))
                goto LABEL_4aaaea;
            v3 = 1;
            v1 = v11;
            v2 = v12;
            v16 = v1.new();
            ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v7);
            break;
            ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v9);
            ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v4);
            core::ptr::drop_in_place<clap_builder::error::Error>(v0);
            return v16;
        }
LABEL_4aaaea:
        v19 = v0.get(5);
        if (v19 && (char)uu_uniq::map_clap_errors::{{closure}}(v19))
        {
            v20 = v0.get(1);
            if (v20 && (char)uu_uniq::map_clap_errors::{{closure}}(v20))
            {
                v3 = 1;
                v1 = v7;
                v2 = v8;
                v16 = v1.new();
LABEL_4aa9f7:
                ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v11);
                if (false)
                {
                    ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v4);
                    core::ptr::drop_in_place<clap_builder::error::Error>(v0);
                    return v16;
                }
                break;
            }
        }
        break;
    case 8:
        v3 = 1;
        v1 = v9;
        v2 = v10;
        v16 = v1.new();
        ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v7);
        goto LABEL_4aa9f7;
    default:
        v21 = v0.from();
        ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v7);
        ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v11);
        ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v9);
        ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v4);
        return v21;
    }
}
