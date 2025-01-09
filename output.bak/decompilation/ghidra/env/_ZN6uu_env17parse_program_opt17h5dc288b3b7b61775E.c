undefined8 __rustcall uu_env::parse_program_opt(long param_1)

{
  undefined8 uVar1;
  undefined auStack_28 [24];
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(auStack_28,&DAT_0012449b,0x27);
    local_10 = 0x7d;
    uVar1 = ::alloc::boxed::Box<T>::new(auStack_28);
  }
  else {
    ::alloc::vec::Vec<T,A>::push(param_1 + 0x48);
    uVar1 = 0;
  }
  return uVar1;
}