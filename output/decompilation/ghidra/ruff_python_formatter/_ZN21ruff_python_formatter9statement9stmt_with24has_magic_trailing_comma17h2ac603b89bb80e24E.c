undefined8
_ZN21ruff_python_formatter9statement9stmt_with24has_magic_trailing_comma17h2ac603b89bb80e24E
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + -0x14 + *(long *)(param_1 + 0x10) * 0x68);
  if (uVar1 <= *(uint *)(param_1 + 0x34)) {
    uVar3 = _ZN21ruff_python_formatter5other6commas24has_magic_trailing_comma17h260365a92ddcfcb5E
                      (uVar1,*(uint *)(param_1 + 0x34),param_2);
    return uVar3;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_006bd818)
            ("assertion failed: start.raw <= end.raw",0x26,
             &PTR_s_crates_ruff_python_formatter_src_0067f010);
  pcVar2 = (code *)swi(3);
  uVar3 = (*pcVar2)();
  return uVar3;
}