
  fn uu_split::number::FixedWidthNumber::increment::h7f085b5dde41725f(arg1: *mut c_void) -> u64

{
    let r14: i64 = *arg1.byte_offset(8);
    let i_2: u64 = *arg1.byte_offset(0x10);
    
    if i_2 != 0
    {
        let rax_1: i8 = *arg1.byte_offset(0x18);
        let mut i_1: u64 = i_2;
        let mut i: u64;
        
        do
        {
            let rdx_1: i8 = *(r14 + i_1 - 1) + 1;
            *(r14 + i_1 - 1) = rdx_1;
            
            if rdx_1 != rax_1
            {
                break;
            }
            
            *(r14 + i_1 - 1) = 0;
            i = i_1;
            i_1 -= 1;
        } while i != 1;
    }
    
    let mut var_30: i64;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h2ddf162ee73cff42(
        &var_30, i_2);
    let var_28: i64;
    let var_20: i64;
    let rax_2: i32 = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h510731c8117896c7(r14, i_2, var_28, var_20);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_30, var_28);
    rax_2
}
