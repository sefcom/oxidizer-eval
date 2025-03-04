void _ZN5uu_dd6blocks5block17h9496b01491ad8acbE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               char param_5,long param_6)

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
  _ZN4core4iter6traits8iterator8Iterator4fold17h6a212979afd94415E
            (&local_60,&local_40,&local_78,&local_48,param_6 + 0x18);
  lVar2 = lStack_58;
  if ((local_50 != 0) && ((param_5 == '\0' || (*(long *)(param_6 + 8) == 0)))) {
    lVar4 = local_50 + -1;
    local_78 = *(long *)(lStack_58 + 8 + lVar4 * 0x18);
    lStack_70 = *(long *)(lStack_58 + 0x10 + lVar4 * 0x18) + local_78;
    cVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17hf24369e89937bc37E
                      (&local_78);
    if (cVar3 != '\0') {
      plVar1 = (long *)(lVar2 + lVar4 * 0x18);
      local_78 = *plVar1;
      lStack_70 = plVar1[1];
      local_68 = plVar1[2];
      local_50 = lVar4;
                    /* try { // try from 001e3abb to 001e3ac2 has its CatchHandler @ 001e3ae1 */
      _ZN4core3ptr74drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_17ha6c7b13acc23cf42E
                (&local_78);
    }
  }
  param_1[2] = local_50;
  *param_1 = local_60;
  param_1[1] = lStack_58;
  return;
}