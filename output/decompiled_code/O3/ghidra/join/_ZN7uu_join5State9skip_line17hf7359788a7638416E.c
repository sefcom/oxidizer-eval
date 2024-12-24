undefined8 __rustcall
uu_join::State::skip_line(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x59) != '\0') {
    lVar1 = print_first_line(param_1,param_2,param_4);
    if (lVar1 != 0) {
      uVar2 = (*(code *)PTR_from_00239f40)(lVar1);
      return uVar2;
    }
  }
  reset_next_line(&local_40,param_1,param_3);
  if (CONCAT44(uStack_3c,local_40) == -0x7fffffffffffffff) {
    return 0;
  }
  local_18 = local_30;
  local_28 = local_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  uVar2 = ::alloc::boxed::Box<T>::new(&local_28);
  return uVar2;
}