undefined8 *
_ZN8uu_split11filter_args17hc9c131d0e8e2f9aeE
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
          undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_50 = param_5;
                    /* try { // try from 001c9b57 to 001c9bc2 has its CatchHandler @ 001c9c24 */
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_68,param_2[1],param_2[2]);
  uVar1 = local_58;
  if (CONCAT44(uStack_64,local_68) == 0) {
    uVar2 = CONCAT44(uStack_5c,uStack_60);
    cVar3 = _ZN8uu_split24should_extract_obs_lines17h45a9ca9df26354c5E
                      (uVar2,local_58,*param_4,*local_50);
    if (cVar3 == '\0') {
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_68,uVar2,uVar1);
    }
    else {
      _ZN8uu_split24handle_extract_obs_lines17hd759134314187d0aE(&local_68,uVar2,uVar1,param_3);
    }
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
                    /* try { // try from 001c9bd6 to 001c9be8 has its CatchHandler @ 001c9c15 */
    _ZN8uu_split24handle_preceding_options17ha9316461586fd0f7E(uVar2,uVar1,param_4,local_50);
    param_1[2] = local_38;
    *(undefined4 *)param_1 = local_48;
    *(undefined4 *)((long)param_1 + 4) = uStack_44;
    *(undefined4 *)(param_1 + 1) = uStack_40;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h0758cff7b902e55aE(param_2);
  }
  else {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  return param_1;
}