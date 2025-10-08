
  fn zoxide::cmd::edit::_$LT$impl$u20$zoxide..cmd..cmd..Edit$GT$::get_fzf::hb8405321246d0372(arg1: *mut i32) -> i64

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
    var_1d8 = "--exact--no-sort--bind=btab:up,c…";
    let var_1d0_1: i64 = 7;
    var_1c8 = "--no-sort--bind=btab:up,ctrl-r:r…";
    let var_1c0_1: i64 = 9;
    let var_1b8_1: *const i8 = "--bind=btab:up,ctrl-r:reload(zox…";
    let var_1b0_1: i64 = 0x106;
    let var_1a8_1: *const i8 = "--cycle--keep-right--border=shar…";
    let var_1a0_1: i64 = 7;
    let var_198_1: *const i8 = "--keep-right--border=sharp--bord…";
    let var_190_1: i64 = 0xc;
    let var_188_1: *const i8 = "--border=sharp--border-label=  z…";
    let var_180_1: i64 = 0xe;
    let var_178_1: *const i8 = "--border-label=  zoxide-edit  --…";
    let var_170_1: i64 = 0x1e;
    let var_168_1: *const i8 = "--header=ctrl-r:reload   \tctrl-…";
    let var_160_1: i64 = 0x56;
    let var_158_1: *const i8 = "--info=inline--padding=1,0,0,0--…";
    let var_150_1: i64 = 0xd;
    let var_148_1: *const i8 = "--layout=reverse";
    let var_140_1: i64 = 0x10;
    let var_138_1: *const i8 = "--padding=1,0,0,0--color=label:b…";
    let var_130_1: i64 = 0x11;
    let var_128_1: *const i8 = "--color=label:bold--tabstop=1cur…";
    let var_120_1: i64 = 0x12;
    let var_118_1: *const i8 = "--tabstop=1current database is n…";
    let var_110_1: i64 = 0xb;
    std::process::Command::args::hff0a33f00c195914(&var_f8);
    zoxide::util::Fzf::enable_preview::ha30c702f7e04eaf4(&var_f8);
    zoxide::util::Fzf::spawn::hfa36335aedf1d058(arg1, &var_f8);
    core::ptr::drop_in_place$LT$zoxide..util..Fzf$GT$::h0a00ca9ef6ecc185(&var_f8)
}
