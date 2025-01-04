long long uu_touch::determine_atime_mtime_change::hda9df64dc3778c17(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v3[3];  // rax
    unsigned long long v4;  // rbp
    unsigned long long v8;  // rax
    unsigned long long v12;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(a0, "timeHashj", 4))
    {
LABEL_5c2ff2:
        if (!(!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "accessmodificationno-createno-dereferencereferencetimestamp", 6)))
            goto LABEL_5c300e;
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "modificationno-createno-dereferencereferencetimestamp", 12);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hf835c51125603d99(&v0, a0, "timeHashj", 4);
        v3 = clap_builder::parser::error::MatchesError::unwrap::h0fd0d44a61af13ca("timeHashj", 4, &v0);
        if (!v3)
            goto LABEL_5c2ff2;
        v4 = (unsigned int)uu_touch::determine_atime_mtime_change::_$u7b$$u7b$closure$u7d$$u7d$::hfdbf3da7597c28ba(v3[1], v3[2]);
        if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "accessmodificationno-createno-dereferencereferencetimestamp", 6))
        {
LABEL_5c300e:
            v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "modificationno-createno-dereferencereferencetimestamp", 12);
            v4 = v4 | -0x100 | 1;
            if (!(char)v8)
                return 0;
            v12 = v8 | -0x100 | 1 | -0x100 | 2 - (!(v4 & 255 & 255));
            return v12;
        }
        else if ((char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(a0, "modificationno-createno-dereferencereferencetimestamp", 12))
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
