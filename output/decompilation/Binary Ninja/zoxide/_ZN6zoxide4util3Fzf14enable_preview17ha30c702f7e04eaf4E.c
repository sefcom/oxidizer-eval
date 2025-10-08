
  int64_t* zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(int64_t* arg1)

{
    char const* const var_68 = "--preview=\command -p ls -Cp --c…";
    int64_t var_60 = 0x4b;
    char const* const var_58 = "--preview-window=down,30%,sharpC…";
    int64_t var_50 = 0x1f;
    std::process::Command::args::h56573216b8616865(arg1);
    var_68 = "CLICOLORkeywords";
    int64_t var_60_1 = 8;
    char const* const var_58_1 = "1invalid unicode in _ZO_EXCLUDE_…";
    int64_t var_50_1 = 1;
    char const* const var_48 = "CLICOLOR_FORCESHELLshcould not f…";
    int64_t var_40 = 0xe;
    char const* const var_38 = "1invalid unicode in _ZO_EXCLUDE_…";
    int64_t var_30 = 1;
    char const* const var_28 = "SHELLshcould not find fzf, is it…";
    int64_t var_20 = 5;
    char const* const var_18 = "shcould not find fzf, is it inst…";
    int64_t var_10 = 2;
    std::process::Command::envs::hb62d3be772b32b91(arg1, &var_68);
    return arg1;
}
