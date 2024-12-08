long long uu_touch::determine_atime_mtime_change::h8227ed5b93241927(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v3[3];  // rax
    void* v4;  // rbp
    unsigned long long v8;  // rax
    void* v12;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::hfa828e742123c8eb(a0, "timeHashj", 4))
    {
LABEL_5c2742:
        if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "accessmodificationno-createno-dereference", 6)))
            goto LABEL_5c275e;
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "modificationno-createno-dereference", 12);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h9ffa815a7fda76db(&v0, a0, "timeHashj", 4);
        v3 = clap_builder::parser::error::MatchesError::unwrap::h98b56d25bb5a5d3e("timeHashj", 4, &v0);
        if (!v3)
            goto LABEL_5c2742;
        v4 = (unsigned int)uu_touch::determine_atime_mtime_change::_$u7b$$u7b$closure$u7d$$u7d$::h8d60f70e74305abb(v3[1], v3[2]);
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "accessmodificationno-createno-dereference", 6))
        {
LABEL_5c275e:
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "modificationno-createno-dereference", 12);
            v4 = v4 | -0x100 | 1;
            if (!(char)v8)
                return 0;
            v12 = v8 | -0x100 | 1 | -0x100 | 2 - (!(v4 & 255 & 255));
            return v12;
        }
        else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(a0, "modificationno-createno-dereference", 12))
        {
            return v12;
        }
        else if ((char)v4)
        {
            if ((char)(v4 & 4294967295) != 1)
                return v12;
            return 0;
        }
    }
    return v12;
}
