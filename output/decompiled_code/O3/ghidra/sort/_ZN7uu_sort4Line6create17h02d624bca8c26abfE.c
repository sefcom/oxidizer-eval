undefined8 * __rustcall
uu_sort::Line::create
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
          ,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  byte bVar4;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  
  *(undefined8 *)(param_6 + 0x10) = 0;
  if (*(char *)(param_7 + 0x60) != '\0') {
    tokenize(param_2,param_3,*(undefined4 *)(param_7 + 0x78),param_6);
  }
  local_80 = *(long *)(param_7 + 8);
  local_78 = *(long *)(param_7 + 0x10) * 0x38 + local_80;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_6;
  lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_80);
  if (lVar3 != 0) {
    do {
      core::ops::function::impls::_<impl_core::ops::function::FnOnce<A>for&mut_F>::call_once
                (&local_58,&local_70,lVar3);
      uVar2 = local_48;
      uVar1 = local_50;
      bVar4 = local_38 - 2;
      if (2 < bVar4) {
        bVar4 = 1;
      }
      if (bVar4 == 2) {
        if (*(char *)(local_58 + 0x37) != '\0') goto LAB_0021ec6b;
      }
      else if (bVar4 == 1) {
        ::alloc::vec::Vec<T,A>::push(param_5 + 0x18,local_40,local_38 & 1);
LAB_0021ec6b:
        ::alloc::vec::Vec<T,A>::push(param_5,uVar1,uVar2);
      }
      else {
        ::alloc::vec::Vec<T,A>::push(local_48,param_5 + 0x30,local_50);
      }
      lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_80);
    } while (lVar3 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}