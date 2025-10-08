undefined8 *
_ZN7forc_tx7Command19try_parse_from_args10push_input17h6072756290f79a7bE
          (undefined8 *param_1,char *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_forc_plugins_forc_tx_src_lib_rs_002d1330;
  if (*param_2 != '\0') {
    ppuVar1 = &PTR_s_forc_plugins_forc_tx_src_lib_rs_002d1348;
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd1af8af68eea9141E(param_2 + 0x90,param_3,ppuVar1);
  *param_1 = 0x8000000000000005;
  return param_1;
}