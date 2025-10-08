void _ZN5uu_dd6blocks5block17h2c05bb6e2c97f889E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_30;
  
  local_30 = 0;
  local_78 = 0;
  local_70 = 8;
  local_68 = 0;
  local_60 = param_4;
  local_40 = param_2;
  local_38 = param_3;
  _ZN4core4iter6traits8iterator8Iterator4fold17hbe779d8b366e38deE
            (&local_58,&local_40,&local_78,&local_60,param_6 + 0x18);
  lVar3 = local_48;
  lVar2 = lStack_50;
  if ((local_48 != 0) && ((param_5 == '\0' || (*(long *)(param_6 + 8) == 0)))) {
    lVar1 = *(long *)(lStack_50 + -0x10 + local_48 * 0x18);
    local_70 = *(long *)(lStack_50 + -8 + local_48 * 0x18) + lVar1;
    local_78 = lVar1;
    cVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17ha95a2ca59d7da05bE
                      (&local_78);
    if (cVar4 != '\0') {
      local_48 = lVar3 + -1;
      _ZN4core3ptr74drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_17h130dd2a707481b7dE
                (*(undefined8 *)(lVar2 + local_48 * 0x18),lVar1);
    }
  }
  param_1[2] = local_48;
  *param_1 = local_58;
  param_1[1] = lStack_50;
  return;
}