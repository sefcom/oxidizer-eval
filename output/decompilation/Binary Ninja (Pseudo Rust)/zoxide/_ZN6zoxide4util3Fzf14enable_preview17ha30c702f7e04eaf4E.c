
  fn zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(arg1: *mut i64) -> *mut i64

{
    let mut var_68: *const i8 = "--preview=\command -p ls -Cp --c…";
    let var_60: i64 = 0x4b;
    let var_58: *const i8 = "--preview-window=down,30%,sharpC…";
    let var_50: i64 = 0x1f;
    std::process::Command::args::h56573216b8616865(arg1);
    var_68 = "CLICOLORkeywords";
    let var_60_1: i64 = 8;
    let var_58_1: *const i8 = "1invalid unicode in _ZO_EXCLUDE_…";
    let var_50_1: i64 = 1;
    let var_48: *const i8 = "CLICOLOR_FORCESHELLshcould not f…";
    let var_40: i64 = 0xe;
    let var_38: *const i8 = "1invalid unicode in _ZO_EXCLUDE_…";
    let var_30: i64 = 1;
    let var_28: *const i8 = "SHELLshcould not find fzf, is it…";
    let var_20: i64 = 5;
    let var_18: *const i8 = "shcould not find fzf, is it inst…";
    let var_10: i64 = 2;
    std::process::Command::envs::hb62d3be772b32b91(arg1, &var_68);
    arg1
}
