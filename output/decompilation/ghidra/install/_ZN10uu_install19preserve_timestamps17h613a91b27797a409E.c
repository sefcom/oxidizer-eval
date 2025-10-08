undefined8
_ZN10uu_install19preserve_timestamps17h613a91b27797a409E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long local_120;
  long local_118;
  undefined8 *local_110;
  code *local_108;
  undefined local_100 [64];
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_c0,param_1,param_2);
  if ((int)local_c0 == 2) {
    local_100._8_8_ = local_b8;
    local_100._0_8_ = 10;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(local_100);
    return uVar1;
  }
  local_120 = _ZN8filetime14set_file_times17hd6d08f3ef3dbf6c2E
                        (param_3,param_4,local_58,local_50,local_48,local_40);
  local_118 = local_120;
  if (local_120 == 0) {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb3cb1d78c02156cfE
              (&local_118);
  }
  else {
                    /* try { // try from 0016959c to 00169656 has its CatchHandler @ 0016967a */
    local_100._0_16_ = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
    local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
    local_c0 = &DAT_00202188;
    local_b8 = 2;
    local_a0 = 0;
    local_b0 = &local_110;
    local_a8 = 1;
    local_110 = (undefined8 *)local_100;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_c0);
    local_100._0_8_ = &local_120;
    local_100._8_8_ =
         PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00209978
    ;
    local_c0 = &DAT_00202510;
    local_b8 = 2;
    local_a0 = 0;
    local_a8 = 1;
    local_b0 = (undefined8 **)local_100;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_c0);
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc7e2d86a53eff0efE(&local_120);
  }
  return 0;
}