void _ZN8uu_shred9pass_name17h9fc29581f7f0cfb7E(undefined8 param_1,byte *param_2)

{
  byte *local_78;
  byte **local_70;
  code *local_68;
  byte **local_60;
  code *local_58;
  undefined *local_50;
  code *local_48;
  byte *local_40;
  byte *local_38;
  undefined *local_30;
  code *local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined *local_10;
  undefined8 local_8;
  
  if (*param_2 == 2) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc7ad242b1d3efe8eE
              (param_1,"random",6);
    return;
  }
  local_50 = (undefined *)&local_78;
  local_30 = (undefined *)&local_78;
  local_78 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    local_38 = param_2 + 2;
    local_70 = &local_40;
    local_68 = _ZN45__LT__RF_T_u20_as_u20_core__fmt__LowerHex_GT_3fmt17hfeebc9e684b459fbE;
    local_60 = &local_38;
    local_58 = _ZN45__LT__RF_T_u20_as_u20_core__fmt__LowerHex_GT_3fmt17hfeebc9e684b459fbE;
    local_48 = _ZN45__LT__RF_T_u20_as_u20_core__fmt__LowerHex_GT_3fmt17hfeebc9e684b459fbE;
    local_30 = &DAT_0011aa58;
    local_28 = (code *)0x3;
    local_10 = &DAT_0011ab18;
    local_8 = 3;
    local_20 = &local_70;
    local_18 = 3;
    local_40 = local_78;
    local_78 = param_2 + 3;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h7bfa45f07eaf898eE(param_1,&local_30);
    return;
  }
  local_28 = _ZN45__LT__RF_T_u20_as_u20_core__fmt__LowerHex_GT_3fmt17hfeebc9e684b459fbE;
  local_70 = (byte **)&DAT_0011aa58;
  local_68 = (code *)0x3;
  local_50 = &DAT_0011aa88;
  local_48 = (code *)0x3;
  local_60 = &local_30;
  local_58 = (code *)0x1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h7bfa45f07eaf898eE(param_1,&local_70);
  return;
}