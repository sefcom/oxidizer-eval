void _ZN11uu_unexpand14next_char_info17hda448420cf4eb947E
               (ulong *param_1,int param_2,long param_3,ulong param_4,ulong param_5)

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
      _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(param_5,param_4,ppuVar7);
    }
    uVar4 = (ulong)(*(char *)(param_3 + param_5) < '\0');
    if (uVar4 + param_5 + 1 <= param_4) {
      uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h794715884ecee730E
                        (param_5);
      _ZN4core3str8converts9from_utf817ha1effb4cca6d9901E(&local_30,uVar3);
      if (local_30 == 0) {
        local_38 = local_20 + local_28;
        local_40 = local_28;
        iVar2 = _ZN4core3str11validations15next_code_point17h56f7f2fe969e6a13E(&local_40);
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
              uVar4 = _ZN13unicode_width6tables9charwidth12lookup_width17hfd0b3b0958e151ecE
                                (extraout_RDX & 0xffffffff);
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