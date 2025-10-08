long long uu_mv::determine_overwrite_mode(unsigned long long a0)
{
    unsigned long long v1;  // rax

    if (!(char)a0.get_flag("no-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t DIRECTORY SO", 10))
    {
        v1 = a0.get_flag("interactiveno-clobberstrip-trailing-slashesno-target-directoryverbosefilesdebug\n\n(uutils coreutils) 0.0.30Move `SOURCE` to `DEST`, or multiple `SOURCE`(s) to `DIRECTORY`.{} [OPTION]... [-T] SOURCE DEST\n{} [OPTION]... SOURCE... DIRECTORY\n{} [OPTION]... -t D", 11);
        return v1 & 0xffffffffffffff00 | 2 - (char)v1;
    }
    return 0;
}
