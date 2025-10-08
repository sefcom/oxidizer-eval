ulong _ZN21ruff_python_formatter5other9arguments21is_arguments_huggable17h826365a48432f9d8E
                (undefined8 *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  uint extraout_EDX;
  undefined8 unaff_RBP;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 local_50;
  undefined4 *local_48;
  long local_28;
  
  if (param_1[1] == 0) {
    if ((param_1[3] == 1) &&
       (puVar6 = (undefined4 *)param_1[2], *(char *)((long)puVar6 + 0x6f) == -0x26)) {
      local_50 = 0x52;
      local_48 = puVar6;
      lVar3 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hfe322db32d3ddec8E
                        (*(long *)(param_2 + 0x10) + 0x40,&local_50);
      if (lVar3 == 0) goto LAB_00411063;
    }
  }
  else if ((param_1[1] == 1) && (param_1[3] == 0)) {
    puVar6 = (undefined4 *)*param_1;
LAB_00411063:
    cVar2 = _ZN21ruff_python_formatter10expression22is_expression_huggable17h5ffd1dce1549d9d3E
                      (puVar6,*(undefined *)(param_2 + 0x3a));
    if (cVar2 == '\0') {
      switch(*puVar6) {
      case 0x11:
        uVar5 = 2;
        break;
      case 0x12:
        uVar5 = 3;
        break;
      case 0x13:
        uVar5 = 0;
        break;
      case 0x14:
        uVar5 = 1;
        break;
      default:
        uVar5 = 4;
      }
      cVar2 = _ZN4core6result19Result_LT_T_C_E_GT_9is_ok_and17h7f3cfb37151e3ad4E(uVar5);
      if (cVar2 == '\0') goto LAB_00411157;
    }
    _ZN21ruff_python_formatter8comments8Comments25leading_dangling_trailing17hef34da7d88b7bda1E
              (&local_50,*(undefined8 *)(param_2 + 0x10),puVar6);
    if (local_28 == 0 && local_48 == (undefined4 *)0x0) {
      uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (*(char *)(param_2 + 0x37) != '\0') goto LAB_00411159;
      (*(code *)
        PTR__ZN83__LT_ruff_python_ast__generated__Expr_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h0f7a5d5c6b46f102E_006bd800
      )(puVar6);
      if (*(uint *)((long)param_1 + 0x24) < extraout_EDX) {
        (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
                  ("assertion failed: start.raw <= end.raw",0x26,
                   &PTR_s_crates_ruff_python_formatter_src_0067dfc8);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      cVar2 = _ZN21ruff_python_formatter5other6commas24has_magic_trailing_comma17h260365a92ddcfcb5E
                        (extraout_EDX,*(uint *)((long)param_1 + 0x24),param_2);
      if (cVar2 == '\0') goto LAB_00411159;
    }
  }
LAB_00411157:
  uVar4 = 0;
LAB_00411159:
  return uVar4 & 0xffffffff;
}