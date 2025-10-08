void _ZN2rg8haystack15HaystackBuilder17build_from_result17h50c99e9ab523ff54E
               (undefined8 *param_1,undefined param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined4 **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_70;
  undefined **local_68;
  undefined *local_60;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined8 local_28;
  
  if (*param_3 != 3) {
    _ZN2rg8haystack15HaystackBuilder5build17hbf10e93e3f18e435E(param_1,param_2);
    return;
  }
  local_28 = *(undefined8 *)(param_3 + 0xe);
  local_58._0_4_ = param_3[2];
  local_58._4_4_ = param_3[3];
  iStack_50 = param_3[4];
  iStack_4c = param_3[5];
  local_48 = param_3[6];
  iStack_44 = param_3[7];
  iStack_40 = param_3[8];
  iStack_3c = param_3[9];
  local_38 = param_3[10];
  iStack_34 = param_3[0xb];
  iStack_30 = param_3[0xc];
  iStack_2c = param_3[0xd];
                    /* try { // try from 00355cb0 to 00355cd7 has its CatchHandler @ 00355e76 */
  _ZN2rg8messages11set_errored17h9a7e7dff7c3f4854E();
  cVar2 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
  if (cVar2 != '\0') {
    local_a0 = (undefined **)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
    uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)(&local_a0);
    local_a0 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 00355ce7 to 00355cf1 has its CatchHandler @ 00355e56 */
    local_a8 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)(&local_a0);
    local_a0 = &PTR_s_rg__004e99c8;
    local_98 = 1;
    local_90 = (undefined4 **)&DAT_00000008;
    local_88 = 0;
    uStack_80 = 0;
                    /* try { // try from 00355d1f to 00355db3 has its CatchHandler @ 00355e5b */
    local_68 = (undefined **)_ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_a8,&local_a0);
    if (local_68 == (undefined **)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                (&local_68);
      local_68 = (undefined **)&local_58;
      local_60 = 
      PTR__ZN52__LT_ignore__Error_u20_as_u20_core__fmt__Display_GT_3fmt17heee24f66390ed69bE_00526ac8
      ;
      local_a0 = (undefined **)&DAT_004ea800;
      local_98 = 2;
      uStack_80 = 0;
      local_88 = 1;
      local_90 = (undefined4 **)&local_68;
      local_70 = (undefined **)_ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_a8,&local_a0);
      if (local_70 == (undefined **)0x0) {
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                  (&local_70);
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(uVar3);
                    /* try { // try from 00355db8 to 00355dbc has its CatchHandler @ 00355e33 */
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(local_a8);
        goto LAB_00355dbd;
      }
      local_a0 = local_70;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_70);
                    /* try { // try from 00355e2b to 00355e30 has its CatchHandler @ 00355e35 */
      (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
    }
    else {
      local_a0 = local_68;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_68);
                    /* try { // try from 00355e0c to 00355e11 has its CatchHandler @ 00355e44 */
      (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
LAB_00355dbd:
  *param_1 = 3;
  _ZN4core3ptr34drop_in_place_LT_ignore__Error_GT_17h648dc1fae12db6abE(&local_58);
  return;
}