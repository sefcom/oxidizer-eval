
  fn metal_crusher::fun::put_random_shit_on_desktop::h71399300085ae3fd() -> i64

{
    let mut var_c8: i64;
    xdg_user::desktop::h614cf66f1d7224d2(&var_c8);
    
    if var_c8 == -0x7fffffffffffffff
    {
        return core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$std..path..PathBuf$GT$$C$xdg_user..Error$GT$$GT$::hbe0068b1d48531b0(&var_c8);
    }
    
    let mut var_b0: i64;
    core::result::Result$LT$T$C$E$GT$::unwrap::h3a56540e264e2a44(&var_b0, &var_c8);
    let rax_1: i64 = var_b0;
    
    if rax_1 == -0x8000000000000000
    {
        return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0d830685c6326d8b(&var_b0);
    }
    
    let mut var_f0: i64 = rax_1;
    let mut i_1: i32 = 0xc;
    let mut i: i32;
    
    do
    {
        let rax_2: *mut i64 = rand::rngs::thread::rng::hf0f1cc4222ade925();
        let mut var_110: *mut i64 = rax_2;
        let mut var_114: i32 = _$LT$rand_core..block..BlockRng$LT$R$GT$$u20$as$u20$rand_core..RngCore$GT$::next_u32::he2e9b6f72cd26557(&rax_2[2]);
        let mut var_d8: *mut i32 = &var_114;
        let var_d0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::hda47c80aa3624aab;
        let mut var_78: *mut *mut c_void = &data_996658;
        let var_70_1: i64 = 1;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut i32 = &var_d8;
        let var_60_1: i64 = 1;
        let mut var_108: i128;
        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_108, &var_78);
        core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h85086739cd9d0457(&var_110);
        let mut var_98: i128 = var_108;
        let var_f8: i64;
        let var_88_1: i64 = var_f8;
        let var_a8: i128;
        let mut var_48: ();
        std::path::Path::join::h6ef86eed301427f8(&var_48, var_a8, *var_a8[8], &var_98);
        std::fs::File::create::h8f0853b0f7d1d60a(&var_78, &var_48);
        var_108 = core::result::Result$LT$T$C$E$GT$::unwrap::h9fccde28408fd899(&var_78);
        core::result::Result$LT$T$C$E$GT$::unwrap::hc325c4c602580c72(
            std::io::Write::write_all::h4b2e9365d0d65c5e(&var_108, 
            "METAL CRUSHERsh-c/usr/bin/kgxgho…", 0xd));
        std::thread::sleep::h8814a255f2a81ecc(0, 0x1dcd6500);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h7b86064f9658cd3a(var_108);
        i = i_1;
        i_1 -= 1;
    } while i != 1;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h3d4a59f8b713a426(&var_f0)
}
