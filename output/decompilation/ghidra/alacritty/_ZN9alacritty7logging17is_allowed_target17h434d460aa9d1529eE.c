undefined4
_ZN9alacritty7logging17is_allowed_target17h434d460aa9d1529eE
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long extraout_RDX;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_28 = param_2;
  local_20 = param_3;
  lVar3 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
  if (((param_1 != 1) && (param_1 != 2)) || (uVar2 = 1, lVar3 != 5)) {
    cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h04b8c7de0fc8a10cE
                      (&local_28);
    uVar2 = 1;
    if (cVar1 == '\0') {
      local_18 = _ZN9alacritty7logging17extra_log_targets17hbdb4e65c7703ac29E();
      local_10 = local_18 + extraout_RDX * 0x18;
      uVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h0ea8184c2df356afE
                        (&local_18,&local_28);
    }
  }
  return uVar2;
}