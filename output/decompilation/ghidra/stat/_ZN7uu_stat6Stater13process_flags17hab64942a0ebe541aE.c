void _ZN7uu_stat6Stater13process_flags17hab64942a0ebe541aE
               (long param_1,ulong param_2,ulong *param_3,ulong param_4,undefined *param_5)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *param_3;
  if (uVar2 < param_4) {
    do {
      if (param_2 <= uVar2) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_002220e8)
                  (uVar2,param_2,&PTR_s_src_uu_stat_src_stat_rs_00219d48);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      switch(*(undefined4 *)(param_1 + uVar2 * 4)) {
      case 0x20:
      case 0x49:
        param_5[3] = 1;
        break;
      default:
        goto switchD_001751d5_caseD_21;
      case 0x23:
        *param_5 = 1;
        break;
      case 0x27:
        param_5[5] = 1;
        break;
      case 0x2b:
        param_5[4] = 1;
        break;
      case 0x2d:
        param_5[2] = 1;
        break;
      case 0x30:
        param_5[1] = 1;
      }
      uVar2 = uVar2 + 1;
      *param_3 = uVar2;
    } while (param_4 != uVar2);
  }
switchD_001751d5_caseD_21:
  return;
}