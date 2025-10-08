long long zoxide::util::Fzf::enable_preview(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]

    v0 = "--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}--preview-window=down,30%,sharpCLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v1 = 75;
    v2 = "--preview-window=down,30%,sharpCLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v3 = 31;
    a0.args(&v0);
    v0 = "CLICOLORkeywords";
    v1 = 8;
    v2 = "1invalid unicode in _ZO_EXCLUDE_DIRSinvalid glob in _ZO_EXCLUDE_DIRS: ";
    v3 = 1;
    v4 = "CLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v5 = 14;
    v6 = "1invalid unicode in _ZO_EXCLUDE_DIRSinvalid glob in _ZO_EXCLUDE_DIRS: ";
    v7 = 1;
    v8 = "SHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v9 = 5;
    v10 = "shcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v11 = 2;
    a0.envs(&v0);
    return a0;
}
