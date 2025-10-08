char uu_timeout::send_signal(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rdx

    if (a2)
    {
        v1 = a0.send_signal(a1);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(a0.send_signal_group(a1));
        if (!((char)uucore::features::signals::signal_by_name_or_value("KILLTRAP -- ", 4) & 1))
        {
            core::option::unwrap_failed(&g_512830); /* do not return */
        }
        else if (!((char)uucore::features::signals::signal_by_name_or_value("CONTkeysUSR1u128for<XFSZ", 4) & 1))
        {
            core::option::unwrap_failed(&g_512848); /* do not return */
        }
        else if ((a1 != v3 & a1 != v3))
        {
            v1 = a0.send_signal_group(v3);
        }
        else
        {
            return a1 != v3;
        }
    }
    return (char)core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v1);
}
