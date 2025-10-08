void _ZN4just10subcommand10Subcommand4dump17h35772f52367b2bf4E
               (undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_20;
  code *local_18;
  
  if ((param_2 & 1) == 0) {
    uVar1 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00566a38)();
    lVar2 = _ZN10serde_json3ser9to_writer17h22d6927a44a61b5dE(uVar1,param_3);
    if (lVar2 != 0) {
      *param_1 = 0x12;
      *(long *)(param_1 + 8) = lVar2;
      _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(param_3)
      ;
      return;
    }
    local_50 = &PTR_DAT_0052dbf8;
    local_48 = 1;
    local_40 = (undefined **)&DAT_00000008;
    local_38 = 0;
    uStack_30 = 0;
                    /* try { // try from 0038dc14 to 0038dc1e has its CatchHandler @ 0038dc33 */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_50);
  }
  else {
                    /* try { // try from 0038db63 to 0038dbd1 has its CatchHandler @ 0038dc33 */
    local_58 = _ZN4just11compilation11Compilation8root_ast17hde4a084de7e3435aE(param_3);
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h713030161970f6bdE;
    local_50 = (undefined **)&DAT_00165db0;
    local_48 = 1;
    uStack_30 = 0;
    local_40 = &local_20;
    local_38 = 1;
    local_20 = (undefined *)&local_58;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_50);
  }
  *param_1 = 0x38;
  _ZN4core3ptr51drop_in_place_LT_just__compilation__Compilation_GT_17hcea2292c76e0cd86E(param_3);
  return;
}