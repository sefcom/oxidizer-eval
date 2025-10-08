void _ZN3bat6assets11clear_asset17hee2122ec557ceffaE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 *local_48;
  code *local_40;
  undefined8 **local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = &local_28;
  local_40 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf38b2ed4feebf29bE;
  local_78 = (undefined **)&DAT_007c8540;
  local_70 = 2;
  uStack_58 = 0;
  local_60 = 1;
                    /* try { // try from 004a8e2d to 004a8e3f has its CatchHandler @ 004a8f72 */
  local_68 = &local_48;
  local_28 = param_2;
  local_20 = param_3;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_78);
  puVar2 = (undefined8 *)_ZN3std2fs11remove_file17hc1e0ef890ef0d27cE(param_1);
  if (puVar2 == (undefined8 *)0x0) {
    local_78 = (undefined **)&DAT_007c8560;
    local_70 = 1;
    local_68 = (undefined8 **)&DAT_00000008;
    local_60 = 0;
    uStack_58 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_78);
  }
  else {
    cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(puVar2);
    if (cVar1 == '\0') {
      local_78 = (undefined **)&DAT_007c8570;
      local_70 = 1;
      local_68 = (undefined8 **)&DAT_00000008;
      local_60 = 0;
      uStack_58 = 0;
                    /* try { // try from 004a8f25 to 004a8f2f has its CatchHandler @ 004a8f4c */
      local_48 = puVar2;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_78);
                    /* try { // try from 004a8f30 to 004a8f39 has its CatchHandler @ 004a8f70 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h87346026eda922b9E(&local_48);
    }
    else {
      local_40 = (code *)
                 PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_008076c0
      ;
      local_38 = &local_80;
      local_30 = 
      PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00807a90
      ;
      local_78 = &PTR_DAT_007c8580;
      local_70 = 3;
      uStack_58 = 0;
      local_60 = 2;
                    /* try { // try from 004a8eb0 to 004a8eba has its CatchHandler @ 004a8f5b */
      local_80 = puVar2;
      local_68 = &local_48;
      local_48 = param_1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_78);
                    /* try { // try from 004a8ebb to 004a8ef7 has its CatchHandler @ 004a8f70 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h87346026eda922b9E(&local_80);
    }
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hd0005799f5f2e1beE(param_1);
  return;
}