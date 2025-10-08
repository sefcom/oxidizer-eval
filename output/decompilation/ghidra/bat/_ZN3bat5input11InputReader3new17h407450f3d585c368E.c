void _ZN3bat5input11InputReader3new17h407450f3d585c368E(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0;
                    /* try { // try from 0053b66e to 0053b74e has its CatchHandler @ 0053b77f */
  local_58 = _ZN3std2io7BufRead10read_until17h5771d3be7d49021aE(param_2,10,&local_70);
  if ((local_58 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h405c8beab0de965bE
              (local_58);
  }
  if (local_60 == 0) {
    cVar1 = '\a';
  }
  else {
    cVar1 = (*(code *)PTR__ZN17content_inspector7inspect17hcf347dc73ed4857eE_00808888)(uStack_68);
    if (cVar1 == '\x04') {
      _ZN3bat5input15read_utf16_line17h81af2cff810bf36aE(local_58,param_2,&local_70,10,0);
      if (local_58[0] == '\x01') {
        _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17h349626ed873c0762E
                  (local_58);
      }
      cVar1 = '\x04';
    }
    else if (cVar1 == '\x03') {
      _ZN3bat5input15read_utf16_line17h81af2cff810bf36aE(local_58,param_2,&local_70,0,10);
      if (local_58[0] == '\x01') {
        _ZN4core3ptr77drop_in_place_LT_core__result__Result_LT_bool_C_std__io__error__Error_GT__GT_17h349626ed873c0762E
                  (local_58);
      }
      cVar1 = '\x03';
    }
  }
  local_28 = param_2[6];
  local_58._0_8_ = *param_2;
  local_58._8_8_ = param_2[1];
  local_48 = *(undefined4 *)(param_2 + 2);
  uStack_44 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_40 = *(undefined4 *)(param_2 + 3);
  uStack_3c = *(undefined4 *)((long)param_2 + 0x1c);
  local_38 = *(undefined4 *)(param_2 + 4);
  uStack_34 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_30 = *(undefined4 *)(param_2 + 5);
  uStack_2c = *(undefined4 *)((long)param_2 + 0x2c);
  uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3afd0b6c433f8ac6E(local_58);
  param_1[2] = local_60;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  param_1[3] = uVar2;
  param_1[4] = &
               PTR__ZN4core3ptr114drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT_17h85b4a81bc2004716E_007ce530
  ;
  *(char *)(param_1 + 5) = cVar1;
  return;
}