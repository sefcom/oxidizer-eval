undefined8
_ZN14linera_indexer7service7Service13with_protocol17hdfe3d2c02e59e8afE
          (undefined8 param_1,long param_2,uint param_3)

{
  char *local_b8;
  ulong local_b0;
  char *local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  undefined8 *local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  long local_68;
  code *local_60;
  long local_58;
  undefined *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_78 = (undefined *)&local_b8;
  local_b0 = (ulong)*(byte *)(param_2 + 0x1a);
  local_b8 = "s";
  if (local_b0 == 0) {
    local_b8 = (char *)0x1;
  }
  local_a8 = "httpSend\x03";
  if (param_3 != 0) {
    local_a8 = "ws";
  }
  local_a0 = (((ulong)param_3 ^ 1) & 0xff) * 2 + 2;
  local_98 = "/ws";
  if (param_3 == 0) {
    local_98 = (char *)0x1;
  }
  local_90 = (ulong)param_3 * 3;
  local_88 = &local_a8;
  local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6db1d3e2f1d56f66E;
  local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6db1d3e2f1d56f66E;
  local_58 = param_2 + 0x18;
  local_60 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_50 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h76cd049dd60d778dE_016264a8
  ;
  local_48 = &local_98;
  local_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6db1d3e2f1d56f66E;
  local_38 = &DAT_01579010;
  local_30 = 5;
  local_18 = 0;
  local_28 = &local_88;
  local_20 = 5;
  local_68 = param_2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h80c5f3df059d1d7fE(param_1,0,local_90,&local_38);
  return param_1;
}