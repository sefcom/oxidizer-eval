
  fn uu_df::blocks::block_size_from_env::hdb573be3e983bfb6() -> i64

{
    let r14: *mut i64;
    let var_10: *mut i64 = r14;
    let mut var_80: i64 = 0;
    let var_78: i64 = 3;
    let var_70: *mut c_void = "DF_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
    let var_68: i64 = 0xd;
    let var_60: *mut c_void = "BLOCK_SIZEBLOCKSIZEsrc/uu/df/src…";
    let var_58: i64 = 0xa;
    let var_50: *mut c_void = "BLOCKSIZEsrc/uu/df/src/columns.r…";
    let var_48: i64 = 9;
    let mut i: i64 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h2841b62643c07fc9(&var_80);
    
    if i == 0
    {
        return 0;
    }
    
    let mut result: i64 = 0;
    
    do
    {
        let mut var_a0: i64;
        std::env::var::hcd02c620244cf284(&var_a0, i);
        
        if var_a0 == 0
        {
            let var_90: *mut c_void;
            let var_88: u64;
            let mut var_40: i64;
            uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_40, 
                var_90, var_88);
            let rax: i64 = var_40;
            result = rax == 4;
            
            if rax != 4
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hecbb26056e05f293(&var_40);
            }
            
            let mut var_98: ();
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h73027cd2db783008(&var_98);
            break;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h9bc22df766544719(&var_a0);
        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h2841b62643c07fc9(&var_80);
    } while i != 0;
    
    result
}
