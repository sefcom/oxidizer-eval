fn zoxide::util::Fzf::enable_preview(a0: i64) -> u64 {
    let v0: struct32;  // [bp-0x68], Other Possible Types: struct96

    v0 = struct32 {
        field_0: "--preview=\\command -p ls -Cp --color=always --group-directories-first {2..}"
        field_16: "--preview-window=down,30%,sharp"
    };
    std::process::Command::args(a0, &v0);
    v0 = struct96 {
        field_0: "CLICOLOR"
        field_16: "1"
        field_32: "CLICOLOR_FORCE"
        field_48: "1"
        field_64: "SHELL"
        field_80: "sh"
    };
    std::process::Command::envs(a0, &v0);
    return a0;
}
