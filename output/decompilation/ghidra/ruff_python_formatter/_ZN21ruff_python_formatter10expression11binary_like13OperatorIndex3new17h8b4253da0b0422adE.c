ulong _ZN21ruff_python_formatter10expression11binary_like13OperatorIndex3new17h8b4253da0b0422adE
                (ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_38 = (ulong)((uint)param_1 & 1);
  if ((param_1 & 1) != 0) {
    return param_1;
  }
  local_30 = &PTR_s_Operator_indices_must_be_odd_pos_0067d790;
  local_28 = 1;
  local_20 = 8;
  local_18 = 0;
  uStack_10 = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_006bd7a8)
            (0,&local_38,&DAT_001862a0,&local_30,&PTR_s_crates_ruff_python_formatter_src_0067d7a0);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}