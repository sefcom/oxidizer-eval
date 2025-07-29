long long uu_tail::args::Settings::check_warnings(struct_1 *a0)
{
    char *v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    char *v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    void* v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned int v12;  // ebp
    char v13;  // r15b
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (a0->field_48)
    {
        v10 = a0->field_4c;
        if ((char)v10 == 2)
        {
            v7 = uucore::util_name();
            v8 = v11;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6362b8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            uucore::mods::locale::get_message(&v7, "tail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-rangetail-error-invalid-number-overflowtail-error-option-used-in-invalid-context", 26);
            v0 = &v7;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &g_6362d8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
        }
        else
        {
            if (!(!((char)v10 & 1)))
                goto LABEL_4f0af6;
            v7 = uucore::util_name();
            v8 = v11;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6362b8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            uucore::mods::locale::get_message(&v7, "tail-warning-retry-only-effectivetail-warning-retry-ignoredtail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-rangetail-error-invalid-number-overflowtail-error-option-used-in-invalid-context", 33);
            v0 = &v7;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &g_6362d8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
        }
        v10 = (unsigned long long)::0x4ee340::core::ptr::drop_in_place<alloc::string::String>(&v7);
    }
LABEL_4f0af6:
    v12 = a0->field_44;
    v13 = a0->field_4c;
    if (v12)
    {
        if (v13 == 2)
        {
            v7 = uucore::util_name();
            v8 = v11;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6362b8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            uucore::mods::locale::get_message(&v7, "tail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-rangetail-error-invalid-number-overflowtail-error-option-used-in-invalid-context", 24);
            v0 = &v7;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &g_6362d8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
        }
        else
        {
            if (!uu_tail::platform::unix::supports_pid_checks(v12))
            {
                v7 = uucore::util_name();
                v8 = v11;
                v0 = &v7;
                v1 = <&T as core::fmt::Display>::fmt;
                v2 = &g_6362b8;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                uucore::mods::locale::get_message(&v7, "tail-warning-pid-not-supportedtail-warning-pid-ignoredtail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-rangetail-error-invalid-number-overflowtail-error-option-used-in-invalid-context", 30);
                v0 = &v7;
                v1 = <alloc::string::String as core::fmt::Display>::fmt;
                v2 = &g_6362d8;
                v3 = 2;
                v6 = 0;
                v4 = &v0;
                v5 = 1;
                std::io::stdio::_eprint(&v2);
                ::0x4ee340::core::ptr::drop_in_place<alloc::string::String>(&v7);
            }
LABEL_4f0cb5:
            v14 = a0.has_stdin();
            if (!(char)v14)
                return v14;
            if (!((v12 | v13) & 1) && a0->field_28 == 1)
            {
                v2.stdin();
                v15 = v2.is_ok_and();
                if ((char)v15)
                    return v15;
            }
            v2 = std::io::stdio::stdin();
            v16 = std::sys::pal::unix::io::is_terminal();
            if (!(char)v16)
                return v16;
            v7 = uucore::util_name();
            v8 = v11;
            v0 = &v7;
            v1 = <&T as core::fmt::Display>::fmt;
            v2 = &g_6362b8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
            uucore::mods::locale::get_message(&v7, "tail-warning-following-stdin-ineffectiveoptiontail-error-invalid-number-out-of-rangetail-error-invalid-number-overflowtail-error-option-used-in-invalid-context", 40);
            v0 = &v7;
            v1 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &g_6362d8;
            v3 = 2;
            v6 = 0;
            v4 = &v0;
            v5 = 1;
            std::io::stdio::_eprint(&v2);
        }
        return (unsigned long long)::0x4ee340::core::ptr::drop_in_place<alloc::string::String>(&v7);
    }
    if (v13 == 2)
        return v10;
    goto LABEL_4f0cb5;
}
