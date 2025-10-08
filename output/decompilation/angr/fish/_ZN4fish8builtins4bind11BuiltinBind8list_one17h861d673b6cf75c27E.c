long long fish::builtins::bind::BuiltinBind::list_one(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, char a5, unsigned long long a6, unsigned long long a7, char a8)
{
    char v0;  // [bp-0x108]
    char v1;  // [bp-0xe2]
    char v2;  // [bp-0xe1]
    void* v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    void* v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xc0]
    void* v8;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x80]
    char *v10;  // [bp-0x78]
    void* v11;  // [bp-0x70]
    void* v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    void* v14;  // [bp-0x58]
    unsigned long long v15;  // [bp-0x50]
    void* v16;  // [bp-0x48]
    void* v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned long long v19;  // rax
    struct_0 *v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long *v22;  // rdx
    void* v24;  // r13

    v15 = 8;
    v16 = 0;
    v17 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v2 = a0 + 8.get(a1, a2, a3, a4, &v15, a5, &v17, &v1);
    if (v2)
    {
        v3.extend("bind -m &gt;trimkLFTxvpawindritmkcanmvpakrefmainchar", " -m &gt;trimkLFTxvpawindritmkcanmvpakrefmainchar");
        if (!a5)
            v3.extend(" --preset''assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", "''assertion failed: key.modifiers.is_none()src/builtins/bind.rsm");
        if (!(char)a3.equal(a4, "d", 7))
        {
            v3.extend(" -M \t", "\t");
            fish::common::escape(&v6, a3, a4);
            v3.spec_extend(v7, v7 + v8 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        }
        if (v17 && !(char)v17.equal(*((long long *)&v18), a3, a4))
        {
            v3.extend(" -m &gt;trimkLFTxvpawindritmkcanmvpakrefmainchar", "&gt;trimkLFTxvpawindritmkcanmvpakrefmainchar");
            fish::common::escape(&v6, v17, *((long long *)&v18));
            v3.spec_extend(v7, v7 + v8 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        }
        v3.push(32);
        if (v1 == 1)
        {
            v9 = a1;
            v11 = 0;
            while (true)
            {
                v19 = v9.next();
                if (!v20)
                    break;
                if (v20->field_4)
                    core::panicking::panic("assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", 41, &g_14c7560); /* do not return */
                if (v20->field_5 == 1)
                {
                    if (v20->field_6)
                    {
                        core::panicking::panic("assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", 41, &g_14c7560); /* do not return */
                    }
                    else if (!v20->field_7)
                    {
                        fish::key::char_to_symbol(&v6, 27, !v19);
                        v3.spec_extend(v7, v7 + v8 * 4);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                        fish::key::char_to_symbol(&v6, (v20->field_0 == 62722 ? 27 : v20->field_0), 0);
                        v3.spec_extend(v7, v7 + v8 * 4);
                    }
                    else
                    {
                        core::panicking::panic("assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", 41, &g_14c7560); /* do not return */
                    }
                }
                else
                {
                    if (v20->field_6)
                    {
                        core::panicking::panic("assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", 41, &g_14c7560); /* do not return */
                    }
                    else if (v20->field_7 != 1)
                    {
                        fish::key::char_to_symbol(&v6, v20->field_0, !v19);
                        v3.spec_extend(v7, v7 + v8 * 4);
                    }
                    else
                    {
                        core::panicking::panic("assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", 41, &g_14c7560); /* do not return */
                    }
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            }
        }
        else
        {
            v9 = a1;
            v11 = 0;
            while (true)
            {
                v21 = v9.next();
                if (!v22)
                    break;
                if (v21)
                    v3.push(44);
                v6.from(*(v22));
                v3.spec_extend(v7, v7 + v8 * 4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            }
            if (!a2)
                v3.extend("''assertion failed: key.modifiers.is_none()src/builtins/bind.rsm", "assertion failed: key.modifiers.is_none()src/builtins/bind.rsm");
        }
        if (v16)
        {
            v24 = 0;
            do
            {
                v3.push(32);
                fish::common::escape(&v6, *((long long *)(8 + v15 + (char *)v24)), *((long long *)(16 + v15 + (char *)v24)));
                v3.spec_extend(v7, v7 + v8 * 4);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
                v24 += 24;
            } while (v16 * 24 != v24);
        }
        v3.push(10);
        if ((a8 & 1) || !fish::nix::isatty(1))
        {
            v8 = v5;
            memcpy(&v6, &v3, 16);
            a7.append(&v6);
            return v2;
        }
        v12 = 0;
        v13 = 1;
        v14 = 0;
        v6.context(a6);
        fish::highlight::highlight::highlight_shell(v4, v5, &v12, &v6, 0, 0, *((long long *)&v0));
        core::ptr::drop_in_place<fish::operation_context::OperationContext>(&v6);
        fish::highlight::highlight::colorize(&v9, v4, v5, 1, 0, a6 + 472, &g_14c7518);
        fish::common::str2wcstring(&v6, v10, 0);
        a7.append(&v6);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v10);
        core::ptr::drop_in_place<alloc::vec::Vec<fish::color::Color>>(v12, 1);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    return v2;
}
