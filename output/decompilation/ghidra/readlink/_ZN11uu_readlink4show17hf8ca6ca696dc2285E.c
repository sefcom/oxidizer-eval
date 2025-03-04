undefined8
_ZN11uu_readlink4show17hf8ca6ca696dc2285E(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  char local_69;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_38;
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_68,param_1,param_2);
  if (local_68 == (undefined *)0x0) {
    local_28 = (undefined4)local_60;
    uStack_24 = local_60._4_4_;
    uStack_20 = (undefined4)uStack_58;
    uStack_1c = uStack_58._4_4_;
    local_38 = (char *)&local_28;
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h42c36f4e3441bd7fE;
    local_68 = &DAT_00114110;
    local_60 = 1;
    local_48 = 0;
    local_50 = 1;
    uStack_58 = &local_38;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_68);
    if (param_3 != '\v') {
      local_38 = &local_69;
      local_30 = 
      _ZN76__LT_uucore__mods__line_ending__LineEnding_u20_as_u20_core__fmt__Display_GT_3fmt17h6643b2132dca5a5bE
      ;
      local_68 = &DAT_00114110;
      local_60 = 1;
      local_48 = 0;
      local_50 = 1;
      local_69 = param_3;
      uStack_58 = &local_38;
      _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_68);
    }
    local_68 = (undefined *)_ZN3std2io5stdio6stdout17h077da66234850927E();
    uVar1 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                      (&local_68);
    return uVar1;
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
            (&PTR_s_src_uu_readlink_src_readlink_rs_0021ac08);
  return param_1;
}