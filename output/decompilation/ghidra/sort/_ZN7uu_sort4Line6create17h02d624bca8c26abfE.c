undefined8 *
_ZN7uu_sort4Line6create17h02d624bca8c26abfE
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
    _ZN7uu_sort8tokenize17hb47c688654b41b2eE
              (param_2,param_3,*(undefined4 *)(param_7 + 0x78),param_6);
  }
  local_80 = *(long *)(param_7 + 8);
  local_78 = *(long *)(param_7 + 0x10) * 0x38 + local_80;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_6;
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1dc45998b69df0a3E
                    (&local_80);
  if (lVar3 != 0) {
    do {
      _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17h2f50737dd865e250E
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
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h68d358aa572f8f14E
                  (param_5 + 0x18,local_40,local_38 & 1);
LAB_0021ec6b:
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he8aa91f7f4c1aff9E(param_5,uVar1,uVar2);
      }
      else {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h7cac5b45018ed91aE(local_48,param_5 + 0x30,local_50);
      }
      lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1dc45998b69df0a3E
                        (&local_80);
    } while (lVar3 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return param_1;
}