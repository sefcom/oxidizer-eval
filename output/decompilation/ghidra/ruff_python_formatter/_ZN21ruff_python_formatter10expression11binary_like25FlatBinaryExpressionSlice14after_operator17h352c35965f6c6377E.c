undefined  [16]
_ZN21ruff_python_formatter10expression11binary_like25FlatBinaryExpressionSlice14after_operator17h352c35965f6c6377E
          (long param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  uVar2 = param_3 + 1;
  if (uVar2 <= param_2) {
    auVar3._8_8_ = param_2 - uVar2;
    auVar3._0_8_ = param_1 + uVar2 * 0x20;
    return auVar3;
  }
  (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_006bd718)
            (uVar2,param_2,&PTR_s_crates_ruff_python_formatter_src_0067d618);
  pcVar1 = (code *)swi(3);
  auVar3 = (*pcVar1)();
  return auVar3;
}