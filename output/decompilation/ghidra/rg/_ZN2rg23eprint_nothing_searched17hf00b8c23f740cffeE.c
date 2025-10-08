void _ZN2rg23eprint_nothing_searched17hf00b8c23f740cffeE(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined **local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  _ZN2rg8messages11set_errored17h9a7e7dff7c3f4854E();
  cVar2 = _ZN2rg8messages8messages17h9ee4188b23ce53b0E();
  if (cVar2 == '\0') {
    return;
  }
  local_48 = (undefined **)(*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00527058)();
  uVar3 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527060)(&local_48);
  local_48 = (undefined **)PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00527068;
                    /* try { // try from 0035c3ef to 0035c3f9 has its CatchHandler @ 0035c50a */
  local_58 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00527070)(&local_48);
  local_48 = &PTR_s_rg__004e99c8;
  local_40 = 1;
  local_38 = 8;
  local_30 = 0;
  uStack_28 = 0;
                    /* try { // try from 0035c427 to 0035c498 has its CatchHandler @ 0035c50f */
  local_50 = (undefined **)_ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_58,&local_48);
  if (local_50 == (undefined **)0x0) {
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
              (&local_50);
    local_48 = &PTR_s_No_files_were_searched__which_me_004eba38;
    local_40 = 1;
    local_38 = 8;
    local_30 = 0;
    uStack_28 = 0;
    local_50 = (undefined **)_ZN3std2io5Write9write_fmt17hfeba02f6870139edE(&local_58,&local_48);
    if (local_50 == (undefined **)0x0) {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h328fe786a92b7324E
                (&local_50);
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(uVar3);
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc9a1ca1256489ed0E(local_58);
      return;
    }
    local_48 = local_50;
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_50);
                    /* try { // try from 0035c4e1 to 0035c4e6 has its CatchHandler @ 0035c4e9 */
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
  }
  else {
    local_48 = local_50;
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_50);
                    /* try { // try from 0035c4c2 to 0035c4c7 has its CatchHandler @ 0035c4f8 */
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00527078)((cVar2 != '\v') * '\x02');
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}