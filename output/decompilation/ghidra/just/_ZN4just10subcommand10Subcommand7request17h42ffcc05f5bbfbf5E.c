void _ZN4just10subcommand10Subcommand7request17h42ffcc05f5bbfbf5E(undefined *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined8 local_d0;
  undefined local_c8 [176];
  
  _ZN3std3env6var_os17h6a2d090e3fc310b6E(local_c8);
  local_d0 = 0;
                    /* try { // try from 0038e8c7 to 0038e8d9 has its CatchHandler @ 0038e904 */
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00566a38)();
  lVar2 = _ZN10serde_json3ser9to_writer17hea1831a29e98e5e8E(uVar1,&local_d0);
  if (lVar2 == 0) {
    uVar3 = 0x38;
  }
  else {
    *(long *)(param_1 + 8) = lVar2;
    uVar3 = 0x12;
  }
  _ZN4core3ptr44drop_in_place_LT_just__request__Response_GT_17hb5e2b0f50bf67828E(&local_d0);
  *param_1 = uVar3;
  return;
}