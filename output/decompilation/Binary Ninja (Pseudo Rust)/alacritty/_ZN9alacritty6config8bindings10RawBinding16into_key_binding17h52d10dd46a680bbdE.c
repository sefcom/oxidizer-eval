
  fn alacritty::config::bindings::RawBinding::into_key_binding::h52d10dd46a680bbd(arg1: *mut i64, arg2: *mut i128) -> i64

{
    if arg2[3] == 5
    {
        let rax: u64 = alloc::boxed::Box$LT$T$GT$::new::he9b99f1ca761bae9(arg2);
        arg1[1] = rax;
        *arg1 = -0x7fffffffffffffcb;
        return rax;
    }
    
    let rcx: i64 = arg2[5];
    let var_18: i64 = rcx;
    let zmm0: i128 = arg2[3];
    let zmm1: i128 = arg2[4];
    let var_28: i128 = zmm1;
    let var_38: i128 = zmm0;
    let rax_2: i32 = *arg2.byte_offset(0x5c);
    let zmm2: i128 = *arg2;
    let zmm3: i128 = arg2[1];
    let zmm4: i128 = arg2[2];
    let var_58: i128 = zmm3;
    let var_48: i128 = zmm4;
    let var_68: i128 = zmm2;
    let rdx: i16 = arg2[6];
    *arg1 = zmm2;
    *arg1.byte_offset(0x10) = zmm3;
    *arg1.byte_offset(0x20) = zmm4;
    *arg1.byte_offset(0x30) = zmm0;
    *arg1.byte_offset(0x40) = zmm1;
    arg1[0xa] = rcx;
    arg1[0xb] = rax_2;
    *arg1.byte_offset(0x5c) = rdx;
    rax_2
}
