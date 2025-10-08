long long fish::history::file::escape_yaml_fish_2_0(unsigned long long a0[3])
{
    fish::history::file::replace_all(a0, "\\\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.", "\\\\- cmd- when:%---...- cmd: - cmd: - cmd:    when:ignoring corrupted history entry around offset%s: %d.%06d ms%s: ??? mssrc/history.rswrealpath failed to produce a canonical version of ''.");
    return fish::history::file::replace_all(a0, "\n%s: %s\nInvalid working directory, it must start and end with /", "\\n");
}
