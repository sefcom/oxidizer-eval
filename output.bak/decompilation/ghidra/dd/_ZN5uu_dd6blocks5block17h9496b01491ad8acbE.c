void __rustcall
uu_dd::blocks::block
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
          ,long param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long local_78;
  long lStack_70;
  long local_68;
  undefined8 local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30;
  
  local_30 = 0;
  local_78 = 0;
  lStack_70 = 8;
  local_68 = 0;
  local_48 = param_4;
  local_40 = param_2;
  local_38 = param_3;
  core::iter::traits::iterator::Iterator::fold
            (&local_60,&local_40,&local_78,&local_48,param_6 + 0x18);
  lVar2 = lStack_58;
  if ((local_50 != 0) && ((param_5 == '\0' || (*(long *)(param_6 + 8) == 0)))) {
    lVar4 = local_50 + -1;
    local_78 = *(long *)(lStack_58 + 8 + lVar4 * 0x18);
    lStack_70 = *(long *)(lStack_58 + 0x10 + lVar4 * 0x18) + local_78;
    cVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::all(&local_78);
    if (cVar3 != '\0') {
      plVar1 = (long *)(lVar2 + lVar4 * 0x18);
      local_78 = *plVar1;
      lStack_70 = plVar1[1];
      local_68 = plVar1[2];
      local_50 = lVar4;
                    /* try { // try from 001e3abb to 001e3ac2 has its CatchHandler @ 001e3ae1 */
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<u8>>>(&local_78);
    }
  }
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = lStack_58;
  return;
}