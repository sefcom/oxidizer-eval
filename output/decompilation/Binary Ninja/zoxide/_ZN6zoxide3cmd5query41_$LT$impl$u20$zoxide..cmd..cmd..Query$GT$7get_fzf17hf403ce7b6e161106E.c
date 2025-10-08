
  int64_t zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_fzf::hf403ce7b6e161106(int32_t* arg1)

{
    char const* const var_1d8;
    zoxide::util::Fzf::new::hd8632d9a3c328694(&var_1d8);
    char const* const r15 = var_1d8;
    int64_t var_1d0;
    
    if (-(r15) == -0x8000000000000000)
    {
        *(arg1 + 8) = var_1d0;
        *arg1 = 1;
        return -(r15);
    }
    
    char const* const var_1c8;
    void var_e8;
    memcpy(&var_e8, &var_1c8, 0xd0);
    char const* const var_f8 = r15;
    int64_t var_f0_1 = var_1d0;
    int64_t var_1f0;
    zoxide::config::fzf_opts::ha32a17230c4dd2c5(&var_1f0);
    
    if (var_1f0 != -0x8000000000000000)
        std::process::Command::env::h6580f87df4ffdc4f(&var_f8, &var_1f0);
    else
    {
        int64_t var_1e8;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::h447bd1d20a159d05(-0x8000000000000000, var_1e8);
        var_1d8 = "--exact--no-sort--bind=btab:up,c…";
        int64_t var_1d0_1 = 7;
        var_1c8 = "--no-sort--bind=btab:up,ctrl-r:r…";
        int64_t var_1c0_1 = 9;
        char const* const var_1b8_1 = "--bind=ctrl-z:ignore,btab:up,tab…";
        int64_t var_1b0_1 = 0x25;
        char const* const var_1a8_1 = "--cycle--keep-right--border=shar…";
        int64_t var_1a0_1 = 7;
        char const* const var_198_1 = "--keep-right--border=sharp--bord…";
        int64_t var_190_1 = 0xc;
        char const* const var_188_1 = "--border=sharp--border-label=  z…";
        int64_t var_180_1 = 0xe;
        char const* const var_178_1 = "--height=45%path not found in da…";
        int64_t var_170_1 = 0xc;
        char const* const var_168_1 = "--info=inline--padding=1,0,0,0--…";
        int64_t var_160_1 = 0xd;
        char const* const var_158_1 = "--layout=reverse";
        int64_t var_150_1 = 0x10;
        char const* const var_148_1 = "--tabstop=1current database is n…";
        int64_t var_140_1 = 0xb;
        char const* const var_138_1 = "--exit-0KEYWORDSCommands\n";
        int64_t var_130_1 = 8;
        std::process::Command::args::hce1ae4dd52fdb449(&var_f8);
        zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(&var_f8);
    }
    
    zoxide::util::Fzf::spawn::hfa36335aedf1d058(arg1, &var_f8);
    return core::ptr::drop_in_place$LT$zoxide..util..Fzf$GT$::h0a00ca9ef6ecc185(&var_f8);
}
