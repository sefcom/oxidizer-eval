long __rustcall
uu_fmt::linebreak::write_with_spaces(undefined8 param_1,ulong param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_3 == 1) {
    lVar1 = param_4[2];
    if ((ulong)(*param_4 - lVar1) < 2) {
      pcVar3 = " ";
      uVar2 = 1;
LAB_001bc6c6:
      lVar1 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_4,pcVar3,uVar2);
      if (lVar1 != 0) {
        return lVar1;
      }
      goto LAB_001bc65c;
    }
    *(undefined *)(param_4[1] + lVar1) = 0x20;
    lVar1 = lVar1 + 1;
  }
  else {
    if (param_3 != 2) goto LAB_001bc65c;
    lVar1 = param_4[2];
    if ((ulong)(*param_4 - lVar1) < 3) {
      pcVar3 = "  ";
      uVar2 = 2;
      goto LAB_001bc6c6;
    }
    *(undefined2 *)(param_4[1] + lVar1) = 0x2020;
    lVar1 = lVar1 + 2;
  }
  param_4[2] = lVar1;
LAB_001bc65c:
  lVar1 = param_4[2];
  if (param_2 < (ulong)(*param_4 - lVar1)) {
    (*(code *)PTR_memcpy_0022a4a8)(param_4[1] + lVar1,param_1,param_2);
    param_4[2] = lVar1 + param_2;
    return 0;
  }
  lVar1 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_4,param_1,param_2);
  return lVar1;
}