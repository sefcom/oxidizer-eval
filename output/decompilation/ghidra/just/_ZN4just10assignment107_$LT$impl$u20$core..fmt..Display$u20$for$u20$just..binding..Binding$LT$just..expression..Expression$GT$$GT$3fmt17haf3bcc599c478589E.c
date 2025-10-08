undefined8
_ZN4just10assignment107__LT_impl_u20_core__fmt__Display_u20_for_u20_just__binding__Binding_LT_just__expression__Expression_GT__GT_3fmt17haf3bcc599c478589E
          (long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  undefined *local_30;
  long local_28;
  undefined *local_20;
  
  uVar2 = *param_2;
  if (*(char *)(param_1 + 0xce) != '\0') {
    local_68 = &PTR_DAT_0052db30;
    local_60 = 1;
    local_58 = (long *)0x8;
    local_50 = 0;
    uStack_48 = 0;
    cVar1 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(uVar2,param_2[1],&local_68);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  if (*(char *)(param_1 + 0xcd) == '\0') {
    uVar3 = param_2[1];
  }
  else {
    local_68 = &PTR_DAT_0052db40;
    local_60 = 1;
    local_58 = (long *)0x8;
    local_50 = 0;
    uStack_48 = 0;
    uVar3 = param_2[1];
    cVar1 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(uVar2,uVar3,&local_68);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  local_38 = param_1 + 0x80;
  local_30 = 
  PTR__ZN55__LT_just__name__Name_u20_as_u20_core__fmt__Display_GT_3fmt17h235bf6517801ef05E_00565f20;
  local_20 = 
  PTR__ZN67__LT_just__expression__Expression_u20_as_u20_core__fmt__Display_GT_3fmt17h422026afbfafb456E_00565f90
  ;
  local_68 = (undefined **)&DAT_0052db50;
  local_60 = 2;
  uStack_48 = 0;
  local_58 = &local_38;
  local_50 = 2;
  local_28 = param_1;
  uVar2 = _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(uVar2,uVar3,&local_68);
  return uVar2;
}