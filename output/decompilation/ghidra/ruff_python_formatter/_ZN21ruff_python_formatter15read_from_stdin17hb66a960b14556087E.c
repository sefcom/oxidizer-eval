void _ZN21ruff_python_formatter15read_from_stdin17hb66a960b14556087E(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined extraout_DL;
  undefined extraout_DL_00;
  undefined7 extraout_var;
  undefined8 local_38;
  uint local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 1;
  local_18 = 0;
                    /* try { // try from 003d0143 to 003d0158 has its CatchHandler @ 003d01ed */
  local_10 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_006bd518)();
  local_38 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_006bd520)(&local_10);
  local_30 = CONCAT31(local_30._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 003d0164 to 003d017d has its CatchHandler @ 003d01d5 */
  uVar1 = (*(code *)
            PTR__ZN59__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__Read_GT_14read_to_string17h8b3f43a7be4ccdfdE_006bd528
          )(&local_38,&local_28);
  if ((uVar1 & 1) != 0) {
    uVar2 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h253cebc4b374091aE
                      (CONCAT71(extraout_var,extraout_DL_00));
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 003d0197 to 003d01bd has its CatchHandler @ 003d01ed */
    _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h6a94b8e8703a3a2bE
              (local_38,local_30);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4e6d45d9886d7667E(local_28,uStack_20)
    ;
    return;
  }
  _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h6a94b8e8703a3a2bE
            (local_38,local_30);
  param_1[2] = local_18;
  *param_1 = local_28;
  param_1[1] = uStack_20;
  return;
}