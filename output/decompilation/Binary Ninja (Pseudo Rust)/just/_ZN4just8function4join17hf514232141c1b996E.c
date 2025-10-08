
  fn just::function::join::hf514232141c1b996(arg1: *mut i64, arg2: i64, arg3: i64, arg4: u64, arg5: i64, arg6: *mut c_void, arg7: i64) -> *mut i64

{
    let mut var_50: ();
    camino::Utf8Path::join::h5972e239d273391e(&var_50, arg3, arg4, arg5);
    
    if arg7 != 0
    {
        let mut r14_1: *mut c_void = arg6;
        let mut i_1: i64 = arg7 * 0x18;
        let mut i: i64;
        
        do
        {
            camino::Utf8PathBuf::push::h66aa426c8960bee0(&var_50, r14_1);
            r14_1 += 0x18;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
    }
    
    let mut var_38: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h8d6445813d8446cd(&var_38, 
        &var_50);
    let var_28: i64;
    arg1[3] = var_28;
    *arg1.byte_offset(8) = var_38;
    *arg1 = 0;
    core::ptr::drop_in_place$LT$camino..Utf8PathBuf$GT$::hdd3b2f225d24af37(&var_50);
    arg1
}
