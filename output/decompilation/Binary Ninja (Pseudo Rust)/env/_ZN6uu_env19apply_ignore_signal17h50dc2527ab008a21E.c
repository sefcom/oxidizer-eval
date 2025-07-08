
  fn uu_env::apply_ignore_signal::h50dc2527ab008a21(arg1: *mut c_void) -> *mut i128

{
    let rax: i64 = *arg1.byte_offset(0x68);
    let rcx_1: i64 = rax + (*arg1.byte_offset(0x70) << 3);
    let mut var_20: i64 = rax;
    let var_18: i64 = rcx_1;
    let mut i: *mut i128;
    
    do
    {
        let rax_1: *mut i32 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h009f5b357177ad4e(&var_20);
        
        if rax_1 == 0
        {
            return nullptr;
        }
        
        let mut rax_2: i32;
        let mut rdx_1: i64;
        rax_2 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h02b141bd98cda8e5(*rax_1);
        
        if rax_2 != 0
        {
            i = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            break;
        }
        
        i = uu_env::ignore_signal::hb651b27965f7f812(rdx_1);
    } while i == 0;
    
    i
}
