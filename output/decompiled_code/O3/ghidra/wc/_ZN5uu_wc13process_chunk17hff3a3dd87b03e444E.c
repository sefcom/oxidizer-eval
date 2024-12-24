void __rustcall uu_wc::process_chunk(long *param_1,long param_2,long param_3,ulong *param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long local_40;
  long local_38;
  
  local_38 = param_2 + param_3;
  uVar6 = *param_4;
  local_40 = param_2;
  iVar1 = core::str::validations::next_code_point(&local_40);
  if (iVar1 == 0) {
    lVar2 = param_1[4];
  }
  else {
    lVar5 = param_1[2];
    lVar2 = param_1[4];
    uVar4 = extraout_EDX;
    do {
      if (uVar4 - 0xc < 2) {
LAB_001bb271:
        lVar2 = core::cmp::max_by(uVar6,lVar2);
        param_1[4] = lVar2;
        uVar6 = 0;
LAB_001bb2b1:
        *param_4 = uVar6;
        if (uVar4 == 10) {
          lVar5 = lVar5 + 1;
          param_1[2] = lVar5;
        }
      }
      else {
        if (uVar4 != 9) {
          if (uVar4 == 10) goto LAB_001bb271;
          if (uVar4 < 0x7f) {
            uVar3 = (ulong)(0x1f < uVar4);
          }
          else if (uVar4 < 0xa0) {
            uVar3 = 0;
          }
          else {
            uVar3 = unicode_width::tables::charwidth::lookup_width(uVar4);
          }
          uVar6 = uVar6 + uVar3;
          goto LAB_001bb2b1;
        }
        uVar6 = (uVar6 & 0xfffffffffffffff8) + 8;
        *param_4 = uVar6;
      }
      iVar1 = core::str::validations::next_code_point(&local_40);
      uVar4 = extraout_EDX_00;
    } while (iVar1 != 0);
  }
  *param_1 = *param_1 + param_3;
  lVar2 = core::cmp::max_by(uVar6,lVar2);
  param_1[4] = lVar2;
  return;
}