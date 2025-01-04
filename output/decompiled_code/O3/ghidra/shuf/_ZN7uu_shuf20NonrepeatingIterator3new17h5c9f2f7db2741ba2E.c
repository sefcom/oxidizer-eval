long __rustcall
uu_shuf::NonrepeatingIterator::new
          (long param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 < uVar1) {
    param_4 = 0;
  }
  else if ((uVar1 != 0) || (uVar2 != 0xffffffffffffffff)) {
    param_4 = core::cmp::min_by(param_4,(uVar2 - uVar1) + 1);
  }
  _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(param_1);
  *(ulong *)(param_1 + 0x50) = param_2[2];
  uVar1 = param_2[1];
  *(ulong *)(param_1 + 0x40) = *param_2;
  *(ulong *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return param_1;
}