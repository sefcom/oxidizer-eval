ulong _ZN21ruff_python_formatter10expression11binary_like12OperandIndex14right_operator17hb04004bf025bc408E
                (long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_38;
  undefined **ppuStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar2 = param_1 + 1;
  uStack_38 = (ulong)((uint)uVar2 & 1);
  if ((uVar2 & 1) == 0) {
    ppuStack_30 = &PTR_s_Operator_indices_must_be_odd_pos_0067d790;
    uStack_28 = 1;
    uStack_20 = 8;
    uStack_18 = 0;
    uStack_10 = 0;
    (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_006bd7a8)
              (0,&uStack_38,&DAT_001862a0,&ppuStack_30,
               &PTR_s_crates_ruff_python_formatter_src_0067d7a0);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return uVar2;
}