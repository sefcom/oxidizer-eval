
  fn uu_uniq::should_extract_obs_skip_chars::h9543cb83474ee9e8(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> i64

{
    let mut var_30: i32 = 0;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_30);
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, rax, 
        rdx) == 0
    {
        return 0;
    }
    
    let mut rax_2: i64;
    let mut rdx_2: i64;
    rax_2 = uucore::mods::posix::posix_version::hc5e57a413e94e657();
    
    if rax_2 == 0 || rdx_2 > 0x30a29 || arg3 != 0 || arg4 != 0
    {
        return 0;
    }
    
    let rbx_1: u64 = arg2 + arg1;
    var_30 = arg1;
    let var_28_1: u64 = rbx_1;
    let mut rdi_2: i32 = 0x110000;
    
    if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_30) == 0
    {
        let mut rax_5: i32;
        let mut rdx_3: i32;
        rax_5 = core::str::validations::next_code_point::h660536d7d7533ae5(&var_30, rbx_1);
        rdi_2 = 0x110000;
        
        if rax_5 != 0
        {
            rdi_2 = rdx_3;
        }
    }
    
    core::option::Option$LT$T$GT$::map_or::h5ed9b95e0ff28c57(rdi_2)
}
