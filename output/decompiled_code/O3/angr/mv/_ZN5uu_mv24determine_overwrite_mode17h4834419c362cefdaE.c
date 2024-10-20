long long uu_mv::determine_overwrite_mode::h4834419c362cefda(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug0.0.27Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The backup suf", 10))
    {
        v1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h8889abcfe095d40a(a0, "interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug0.0.27Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SOURCE...The", 11);
        return v1 | -0x100 | 2 - (char)(v1 & 4294967295);
    }
    return 0;
}
