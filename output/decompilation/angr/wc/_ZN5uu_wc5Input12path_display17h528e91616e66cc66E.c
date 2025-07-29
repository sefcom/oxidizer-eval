long long uu_wc::Input::path_display(unsigned long long a0, unsigned long long a1[3])
{
    if (a1[0] == 9223372036854775809)
        uucore::mods::locale::get_message(a0, "wc-standard-inputalwaysneverinternal error: entered unreachable code: Should have been caught by clap", 17);
    else
        uu_wc::escape_name_wrapper(a0, a1[1], a1[2]);
    return a0;
}
