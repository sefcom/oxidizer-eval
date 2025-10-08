undefined8
_ZN2fd48ensure_use_hidden_option_for_leading_dot_pattern17he1bd7dd292972766E
          (ulong param_1,undefined **param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if ((param_1 & 1) == 0) {
    return 0;
  }
  local_28 = param_2 + param_3 * 3;
  local_30 = param_2;
  cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h97670d64b9b946abE
                    (&local_30);
  if (cVar1 == '\0') {
    return 0;
  }
  local_30 = &PTR_DAT_00502950;
  local_28 = (undefined **)0x1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = _ZN6anyhow9__private10format_err17hb7ed131eb83ec9a9E(&local_30);
  return uVar2;
}