long long zoxide::util::Fzf::new(void* a0)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    unsigned long long v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    char v6;  // [bp-0xf0]
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdx

    v6.new();
    v0 = "--delimiter=\t--nth=2--read0--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}--preview-window=down,30%,sharpCLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v1 = 13;
    v2 = "--nth=2--read0--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}--preview-window=down,30%,sharpCLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v3 = 7;
    v4 = "--read0--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}--preview-window=down,30%,sharpCLICOLOR_FORCESHELLshcould not find fzf, is it installed?could not launch fzfsrc/util.rs";
    v5 = 7;
    v6.args(&v0);
    v6.stdin(v8, v9);
    v6.stdout(v8, v9);
    return memcpy(a0, &v6, 224);
}
