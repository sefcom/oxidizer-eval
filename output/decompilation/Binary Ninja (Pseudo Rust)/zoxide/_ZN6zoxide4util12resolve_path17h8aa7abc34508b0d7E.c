
  fn zoxide::util::resolve_path::h8aa7abc34508b0d7(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h08b3da5308d0badb(arg2);
    let mut var_1d8: i128;
    std::path::Path::components::hd0346d362206f2e9(&var_1d8, rax, rdx);
    let mut var_1a8: i128;
    let zmm3: i128 = var_1a8;
    let mut var_120: i128 = var_1d8;
    let mut var_158: i8 = 0xb;
    let mut var_208: i64 = 0;
    let var_200: i64 = 8;
    let var_1f8: i64 = 0;
    core::option::Option$LT$T$GT$::get_or_insert_with::h3a44b47bf2ecd131(&var_158, &var_120);
    let rbx: i8 = var_158;
    let mut rax_1: i8;
    
    if rbx != 0xa
    {
        rax_1 =
            _$LT$std..path..Component$u20$as$u20$core..cmp..PartialEq$GT$::eq::hfa2fa96020c6cc4b(
            rbx);
    }
    
    let mut var_1f0: i64;
    let mut var_1e8: i64;
    let var_1c8: i128;
    let var_157: i128;
    let var_147: i128;
    let var_128: i64;
    let mut rbp_1: i32;
    
    if rbx == 0xa || rax_1 == 0
    {
        zoxide::util::current_dir::hc8c2386c7ca5eb95(&var_1d8);
        let rcx_1: i64 = var_1d8;
        let rsi_3: i64 = *var_1d8[8];
        
        if -(rcx_1) == -0x8000000000000000
        {
            *arg1.byte_offset(8) = rsi_3;
            *arg1 = -0x8000000000000000;
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..Component$GT$$GT$::hc69b35f51677355d(var_208, var_200);
        }
        
        var_1f0 = rcx_1;
        rbp_1 = 1;
        var_1e8 = rsi_3;
        let mut var_70: ();
        std::path::Path::components::hd0346d362206f2e9(&var_70, rsi_3, var_1c8);
        rbp_1 = 1;
        alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h8ae28a35e9d737e7(&var_208, &var_70);
    }
    else
    {
        let var_b0_1: i64 = var_128;
        let var_137: i128;
        let var_bf_1: i128 = var_137;
        let var_cf_1: i128 = var_147;
        let var_df_1: i128 = var_157;
        var_158 = 0xb;
        let mut var_e0: i8 = rbx;
        rbp_1 = 0;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h00ddbab168b7c69e(&var_208, &var_e0);
    }
    
    let var_168_1: i64 = *zmm3[8];
    let var_1b8: i128;
    let var_178_1: i128 = var_1b8;
    let var_188_1: i128 = var_1c8;
    let var_198_1: i128 = var_120;
    let zmm0_2: i128 = var_158;
    var_1a8 = var_128;
    var_1d8 = zmm0_2;
    let rax_5: i8 = var_1d8;
    var_1d8 = 0xb;
    let mut var_a8: i8;
    
    if rax_5 != 0xb
    {
        let var_78_1: i64 = var_1a8;
        let var_87_1: i128 = var_147;
        let var_97_1: i128 = var_157;
        let var_a7_1: i128 = var_1d8;
        var_a8 = rax_5;
        
        if rax_5 != 0xa
        {
            goto 'label_49393a;
        }
        
        goto 'label_4939af;
    }
    
    _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_a8, &*var_1a8[8]);
    
    if var_a8 != 0xa
    {
        'label_49393a:
        let rax_7: u64 = var_a8;
        let mut rax_8: i64 = rax_7 - 5;
        
        if rax_7 - 6 >= 4
        {
            rax_8 = 0;
        }
        
        /* jump -> *(&data_419324).byte_offset(rax_8 << 2) + &data_419324 */
    }
    
    'label_4939af:
    core::iter::traits::iterator::Iterator::collect::h3b8a6bb661afc5df(&var_1d8, var_200);
    arg1[1] = var_157;
    *arg1 = var_1d8;
    let result: i64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..Component$GT$$GT$::hc69b35f51677355d(var_208, var_200);
    
    if rbp_1 == 0
    {
        return result;
    }
    
    core::mem::drop::h8efcdb4578edbe7f(var_1f0, var_1e8)
}
