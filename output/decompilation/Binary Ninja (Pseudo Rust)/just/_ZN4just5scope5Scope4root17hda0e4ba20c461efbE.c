
  fn just::scope::Scope::root::hda0e4ba20c461efb(arg1: *mut i128) -> *mut i128

{
    let mut var_f8: i64 = 0;
    let var_e8: i128 = {0};
    let mut var_58: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h8e7ee68ea126f0a0(&var_58, 
        just::constants::constants::h3594f93ebbf36f97());
    let mut i: *mut i64;
    let mut rdx: *mut i64;
    i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he181a059410bee19(&var_58);
    
    while i != 0
    {
        let r14_1: i64 = *i;
        let rbp_1: i64 = i[1];
        let mut var_70: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_70, *rdx, rdx[1]);
        let var_60: i64;
        let var_c8_1: i64 = var_60;
        let mut var_d8: i128 = var_70;
        let var_74_1: i16 = 1;
        let var_78_1: i32 = 0;
        let var_c0_1: *const i8 = "PRELUDEsrc/search.rs.config";
        let var_b8_1: i64 = 7;
        let var_b0_1: i64 = r14_1;
        let var_a8_1: i64 = rbp_1;
        let var_a0_1: i64 = 0;
        let var_98_1: i64 = rbp_1;
        let var_90_1: i128 = {0};
        let var_80_1: i8 = 0x18;
        let var_72_1: i8 = 0;
        just::scope::Scope::bind::h2017080dbe33bcde(&var_f8, &var_d8);
        i = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he181a059410bee19(&var_58);
    }
    
    let zmm0_1: i128 = var_f8;
    arg1[1] = var_e8;
    *arg1 = zmm0_1;
    arg1
}
