
  fn just::loader::Loader::new::h699739d5c4f106fb(arg1: *mut i128) -> *mut i128

{
    let mut var_78: i128;
    typed_arena::Arena$LT$T$GT$::new::h71475ae1ad33e145(&var_78);
    let mut var_40: i128;
    typed_arena::Arena$LT$T$GT$::new::h71475ae1ad33e145(&var_40);
    let var_10: i64;
    arg1[3] = var_10;
    let zmm0: i128 = var_40;
    let var_20: i128;
    arg1[2] = var_20;
    let var_30: i128;
    arg1[1] = var_30;
    *arg1 = zmm0;
    *arg1.byte_offset(0x38) = var_78;
    let var_68: i128;
    *arg1.byte_offset(0x48) = var_68;
    let var_58: i128;
    *arg1.byte_offset(0x58) = var_58;
    let var_48: i64;
    *arg1.byte_offset(0x68) = var_48;
    arg1
}
