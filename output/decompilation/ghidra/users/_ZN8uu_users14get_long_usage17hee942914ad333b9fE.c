undefined8 _ZN8uu_users14get_long_usage17hee942914ad333b9fE(undefined8 param_1)

{
  undefined4 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = (undefined *)&local_58;
  local_48 = *(undefined4 *)
              PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0;
  uStack_44 = *(undefined4 *)
               (PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0 + 4);
  uStack_40 = *(undefined4 *)
               (PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0 + 8);
  uStack_3c = *(undefined4 *)
               (PTR__ZN6uucore8features5utmpx2ut12DEFAULT_FILE17h6ad9aaf5b9ead8d5E_001e28b0 + 0xc);
  local_58 = &local_48;
  local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb8d863b467596becE;
  local_38 = &PTR_s_Output_who_is_currently_logged_i_001dc430;
  local_30 = 2;
  local_18 = 0;
  local_20 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hddea06b67bc69927E(param_1,&local_38);
  return param_1;
}