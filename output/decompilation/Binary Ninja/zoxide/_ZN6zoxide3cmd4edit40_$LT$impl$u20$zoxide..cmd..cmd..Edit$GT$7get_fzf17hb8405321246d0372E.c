
  int64_t zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..cmd..Edit$GT$::get_fzf::hb8405321246d0372(int32_t* arg1)

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
    var_1d8 = "--exact--no-sort--bind=btab:up,c…";
    int64_t var_1d0_1 = 7;
    var_1c8 = "--no-sort--bind=btab:up,ctrl-r:r…";
    int64_t var_1c0_1 = 9;
    char const* const var_1b8_1 = "--bind=btab:up,ctrl-r:reload(zox…";
    int64_t var_1b0_1 = 0x106;
    char const* const var_1a8_1 = "--cycle--keep-right--border=shar…";
    int64_t var_1a0_1 = 7;
    char const* const var_198_1 = "--keep-right--border=sharp--bord…";
    int64_t var_190_1 = 0xc;
    char const* const var_188_1 = "--border=sharp--border-label=  z…";
    int64_t var_180_1 = 0xe;
    char const* const var_178_1 = "--border-label=  zoxide-edit  --…";
    int64_t var_170_1 = 0x1e;
    char const* const var_168_1 = "--header=ctrl-r:reload   \tctrl-…";
    int64_t var_160_1 = 0x56;
    char const* const var_158_1 = "--info=inline--padding=1,0,0,0--…";
    int64_t var_150_1 = 0xd;
    char const* const var_148_1 = "--layout=reverse";
    int64_t var_140_1 = 0x10;
    char const* const var_138_1 = "--padding=1,0,0,0--color=label:b…";
    int64_t var_130_1 = 0x11;
    char const* const var_128_1 = "--color=label:bold--tabstop=1cur…";
    int64_t var_120_1 = 0x12;
    char const* const var_118_1 = "--tabstop=1current database is n…";
    int64_t var_110_1 = 0xb;
    std::process::Command::args::hff0a33f00c195914(&var_f8);
    zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(&var_f8);
    zoxide::util::Fzf::spawn::hfa36335aedf1d058(arg1, &var_f8);
    return core::ptr::drop_in_place$LT$zoxide..util..Fzf$GT$::h0a00ca9ef6ecc185(&var_f8);
}
