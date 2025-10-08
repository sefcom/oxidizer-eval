void fish::builtins::argparse::set_argparse_result_vars(unsigned long long a0, unsigned long a1)
{
    int v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd0]
    unsigned long long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xb8]
    unsigned long long v4[5];  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    int v6;  // [bp-0x80]
    int v7;  // [bp-0x70]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x48]
    struct_0 *v11;  // rdx
    struct_0 *v12;  // r13
    struct_0 *v13;  // r13

    v3 = a1 + 120;
    v5.iter(a1 + 120);
    if (v5.next())
    {
        do
        {
            v13 = v12;
            if (v13->field_38)
            {
                if (v13->field_44)
                {
                    v6.to_vec("_", 6);
                    v2 = (long long)v7;
                    v0 = v6;
                    (char)v0.push(v13->field_40);
                    v6.clone(v13->field_8, v13->field_10);
                    a0.set(v1, v2, 1, &v6);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                }
                if (v13->field_20)
                {
                    v6.chain(v13->field_18, v13->field_18 + v13->field_20 * 4);
                    (char)v0.collect(&v6);
                    v6.clone(v13->field_8, v13->field_10);
                    a0.set(v1, v2, 1, &v6);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                }
            }
            v12 = v11;
        } while (v5.next());
    }
    v5.into_iter(&v4[1 + 1]);
    v8.collect(&v5);
    a0.set("a", 4, 1, &v8);
    v5.into_iter(&v4[1 + 4]);
    v9.collect(&v5);
    a0.set("a", 9, 1, &v9);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v4);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v4[3], v4[4]);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<char,fish::builtins::argparse::OptionSpec>>(v3);
    core::ptr::drop_in_place<std::collections::hash::map::HashMap<widestring::utfstring::Utf32String,char>>(&v4[4 + 1]);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<char>>>(&v4[2 + 2]);
    return;
}
