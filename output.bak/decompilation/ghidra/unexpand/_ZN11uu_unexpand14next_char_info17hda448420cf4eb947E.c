void __rustcall
uu_unexpand::next_char_info(ulong *param_1,int param_2,long param_3,ulong param_4,ulong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong extraout_RDX;
  undefined **ppuVar7;
  undefined uVar8;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  if (param_2 == 0) {
    if (param_4 <= param_5) {
      ppuVar7 = &PTR_s_src_uu_unexpand_src_unexpand_rs_0021d140;
      goto LAB_001b2b60;
    }
    cVar1 = *(char *)(param_3 + param_5);
    if (cVar1 == '\b') {
      uVar8 = 0;
    }
    else if (cVar1 == '\t') {
      uVar8 = 2;
    }
    else {
      uVar8 = 3;
      if (cVar1 == ' ') {
        uVar8 = 1;
      }
    }
  }
  else {
    if (param_4 <= param_5) {
      ppuVar7 = &PTR_s_src_uu_unexpand_src_unexpand_rs_0021d158;
LAB_001b2b60:
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(param_5,param_4,ppuVar7);
    }
    uVar4 = (ulong)(*(char *)(param_3 + param_5) < '\0');
    if (uVar4 + param_5 + 1 <= param_4) {
      uVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                        (param_5);
      core::str::converts::from_utf8(&local_30,uVar3);
      if (local_30 == 0) {
        local_38 = local_20 + local_28;
        local_40 = local_28;
        iVar2 = core::str::validations::next_code_point(&local_40);
        uVar5 = 1;
        uVar8 = 3;
        if (iVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar6 = (uint)extraout_RDX;
          if (uVar6 == 8) {
            uVar8 = 0;
            uVar4 = 0;
          }
          else if (uVar6 == 9) {
            uVar8 = 2;
            uVar4 = 0;
          }
          else if (uVar6 == 0x20) {
            uVar8 = 1;
            uVar4 = 0;
          }
          else {
            uVar5 = uVar4 + 1;
            if (uVar6 < 0x7f) {
              uVar4 = (ulong)(0x1f < uVar6);
            }
            else if (uVar6 < 0xa0) {
              uVar4 = 0;
            }
            else {
              uVar4 = unicode_width::tables::charwidth::lookup_width(extraout_RDX & 0xffffffff);
            }
          }
        }
      }
      else {
        uVar4 = 1;
        uVar8 = 3;
        uVar5 = 1;
      }
      goto LAB_001b2aa6;
    }
    uVar8 = 3;
  }
  uVar4 = 1;
  uVar5 = 1;
LAB_001b2aa6:
  *(undefined *)(param_1 + 1) = uVar8;
  *param_1 = uVar4;
  param_1[2] = uVar5;
  return;
}