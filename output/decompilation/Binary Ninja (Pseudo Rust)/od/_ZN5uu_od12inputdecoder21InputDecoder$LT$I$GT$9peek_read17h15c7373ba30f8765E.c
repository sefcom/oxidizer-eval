
  fn uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(arg1: *mut *mut c_void, arg2: *mut c_void) -> *mut *mut c_void

{
    let mut r14: *mut c_void = arg2;
    let mut var_28: i64;
    _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..peekreader..PeekRead$GT$::peek_read::h4ebaa1be718ea78e(&var_28, *arg2.byte_offset(0x18), *r14.byte_offset(8), *r14.byte_offset(0x10), 
        *r14.byte_offset(0x20));
    let mut rax: i8;
    let var_20: *mut c_void;
    
    if var_28 == 0
    {
        *r14.byte_offset(0x28) = var_20;
        let var_18: i64;
        *r14.byte_offset(0x30) = var_18;
        rax = *r14.byte_offset(0x38);
        arg1[1] = var_20;
        arg1[2] = var_18;
    }
    else
    {
        rax = 3;
        r14 = var_20;
    }
    *arg1 = r14;
    arg1[3] = rax;
    arg1
}
