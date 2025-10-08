long long uu_uniq::map_clap_errors(struct_0 *a0)
{
    struct_0 *v0;  // [bp-0xb0]
    int v1;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x90]
    int v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x78]
    int v6;  // [bp-0x68], Other Possible Types: char
    unsigned long long v7;  // [bp-0x58]
    int v8;  // [bp-0x50], Other Possible Types: char
    unsigned long long v9;  // [bp-0x40]
    int v10;  // [bp-0x38], Other Possible Types: char
    char v11;  // [bp-0x28]
    unsigned int v13;  // eax
    unsigned long long v14;  // rax
    char *v15;  // rdi
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    char *v18;  // rdi
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v0 = a0;
    v1.to_vec("--group is mutually exclusive with -c/-d/-D/-u\ninvalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepe", 47);
    v5 = v2;
    v4 = v1;
    v10.add(&v4);
    v1.to_vec("invalid argument 'badoption' for '--group'\nValid arguments are:\n  - 'prepend'\n  - 'append'\n  - 'separate'\n  - 'both'\ninvalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\nTry 'uniq --help' for more i", 117);
    v5 = v2;
    v4 = v1;
    v6.add(&v4);
    v1.to_vec("invalid argument 'badoption' for '--all-repeated'\nValid arguments are:\n  - 'none'\n  - 'prepend'\n  - 'separate'\nTry 'uniq --help' for more information.badoption--group--all-repeated(uutils coreutils) 0.0.30Report or omit repeated lines.{} [OPTION]... [INPUT", 111);
    v5 = v2;
    memcpy(&v4, &v1, 16);
    v8.add(&v4);
    switch (v13)
    {
    case 0:
        v16 = v0.get(5);
        if (v16 && (char)uu_uniq::map_clap_errors::{{closure}}(v16))
        {
            v17 = v0.get(1);
            if (!v17 || !(char)uu_uniq::map_clap_errors::{{closure}}(v17))
                goto LABEL_467798;
            v3 = 1;
            v1 = v6;
            v2 = v7;
            v14 = v1.new();
            v18 = &v8;
            break;
        }
        else
        {
LABEL_467798:
            v19 = v0.get(5);
            if (v19 && (char)uu_uniq::map_clap_errors::{{closure}}(v19))
            {
                v20 = v0.get(1);
                if (v20 && (char)uu_uniq::map_clap_errors::{{closure}}(v20))
                {
                    v3 = 1;
                    v1 = v8;
                    v2 = v9;
                    v14 = v1.new();
                    v18 = &v6;
                    core::ptr::drop_in_place<alloc::string::String>(v18);
                    v15 = &v10;
                    core::ptr::drop_in_place<alloc::string::String>(v15);
                    core::ptr::drop_in_place<clap_builder::error::Error>(v0);
                    return v14;
                }
            }
        }
    case 8:
        v3 = 1;
        v1 = v10;
        v2 = *((long long *)&v11);
        v14 = v1.new();
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        core::ptr::drop_in_place<alloc::string::String>(&v6);
        core::ptr::drop_in_place<clap_builder::error::Error>(v0);
        return v14;
    default:
        v21 = v0.from();
        core::ptr::drop_in_place<alloc::string::String>(&v8);
        core::ptr::drop_in_place<alloc::string::String>(&v6);
        core::ptr::drop_in_place<alloc::string::String>(&v10);
        return v21;
    }
}
