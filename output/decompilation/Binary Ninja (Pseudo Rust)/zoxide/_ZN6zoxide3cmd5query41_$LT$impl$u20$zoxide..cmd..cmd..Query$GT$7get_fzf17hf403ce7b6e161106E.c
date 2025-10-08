
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_fzf::hf403ce7b6e161106(arg1: *mut i32) -> i64

{
    let mut var_1d8: *const i8;
    zoxide::util::Fzf::new::hd8632d9a3c328694(&var_1d8);
    let r15: *const i8 = var_1d8;
    let var_1d0: i64;
    
    if -(r15) == -0x8000000000000000
    {
        *arg1.byte_offset(8) = var_1d0;
        *arg1 = 1;
        return -(r15);
    }
    
    let mut var_1c8: *const i8;
    let mut var_e8: ();
    memcpy(&var_e8, &var_1c8, 0xd0);
    let mut var_f8: *const i8 = r15;
    let var_f0_1: i64 = var_1d0;
    let mut var_1f0: i64;
    zoxide::config::fzf_opts::ha32a17230c4dd2c5(&var_1f0);
    
    if var_1f0 != -0x8000000000000000
    {
        std::process::Command::env::h6580f87df4ffdc4f(&var_f8, &var_1f0);
    }
    else
    {
        let var_1e8: i64;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h447bd1d20a159d05(-0x8000000000000000, var_1e8);
        var_1d8 = "--exact--no-sort--bind=btab:up,c…";
        let var_1d0_1: i64 = 7;
        var_1c8 = "--no-sort--bind=btab:up,ctrl-r:r…";
        let var_1c0_1: i64 = 9;
        let var_1b8_1: *const i8 = "--bind=ctrl-z:ignore,btab:up,tab…";
        let var_1b0_1: i64 = 0x25;
        let var_1a8_1: *const i8 = "--cycle--keep-right--border=shar…";
        let var_1a0_1: i64 = 7;
        let var_198_1: *const i8 = "--keep-right--border=sharp--bord…";
        let var_190_1: i64 = 0xc;
        let var_188_1: *const i8 = "--border=sharp--border-label=  z…";
        let var_180_1: i64 = 0xe;
        let var_178_1: *const i8 = "--height=45%path not found in da…";
        let var_170_1: i64 = 0xc;
        let var_168_1: *const i8 = "--info=inline--padding=1,0,0,0--…";
        let var_160_1: i64 = 0xd;
        let var_158_1: *const i8 = "--layout=reverse";
        let var_150_1: i64 = 0x10;
        let var_148_1: *const i8 = "--tabstop=1current database is n…";
        let var_140_1: i64 = 0xb;
        let var_138_1: *const i8 = "--exit-0KEYWORDSCommands\n";
        let var_130_1: i64 = 8;
        std::process::Command::args::hce1ae4dd52fdb449(&var_f8);
        zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(&var_f8);
    }
    
    zoxide::util::Fzf::spawn::hfa36335aedf1d058(arg1, &var_f8);
    core::ptr::drop_in_place$LT$zoxide..util..Fzf$GT$::h0a00ca9ef6ecc185(&var_f8)
}
