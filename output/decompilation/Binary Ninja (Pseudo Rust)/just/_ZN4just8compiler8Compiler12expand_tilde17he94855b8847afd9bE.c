
  fn just::compiler::Compiler::expand_tilde::he94855b8847afd9b(arg1: *mut i8, arg2: i64, arg3: u64) -> i64

{
    let mut rax: i64;
    let mut rdx_1: i64;
    rax =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        "~/!~=~!===SUBCOMMAND1.43.0Casey …", 2, arg2, arg3);
    let mut result: i64;
    let mut var_90: i8;
    
    if rax == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_90, arg2, arg3);
        'label_65c569:
        let var_80: i64;
        *arg1.byte_offset(0x18) = var_80;
        *arg1.byte_offset(8) = var_90;
        result = 0x38;
    }
    else
    {
        let mut var_a8: i64;
        dirs::home_dir::h56798f98581d6ac2(&var_a8);
        var_90 = 0x1b;
        
        if !(0 + -(var_a8))
        {
            core::ptr::drop_in_place$LT$just..error..Error$GT$::ha62e3e0ecfcf56b5(&var_90);
            let mut rax_1: i64;
            let mut rdx_3: i64;
            rax_1 =
                core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h255918ccc9205e78(rax, rdx_1);
            let var_a0: i64;
            let var_98: u64;
            std::path::Path::join::h1eac0ae5e7efa361(&var_90, var_a0, var_98, rax_1);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_a8);
            goto 'label_65c569;
        }
        
        result = 0x1b;
    }
    *arg1 = result;
    result
}
