void _ZN11uu_unexpand14next_char_info17hde71cd1c734c3431E
               (ulong *param_1,int param_2,long param_3,ulong param_4,ulong param_5)

{
  char cVar1;
  code *pcVar2;
  undefined uVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  long local_48;
  long local_40;
  int local_38 [2];
  long local_30;
  long local_28;
  
  if (param_2 == 0) {
    if (param_4 <= param_5) goto LAB_0015ce75;
    cVar1 = *(char *)(param_3 + param_5);
    if (cVar1 == '\b') {
      uVar3 = 0;
    }
    else if (cVar1 == '\t') {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
      if (cVar1 == ' ') {
        uVar3 = 1;
      }
    }
  }
  else {
    if (param_4 <= param_5) {
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001eea80)
                (param_5,param_4,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8328);
LAB_0015ce75:
      (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001eea80)
                (param_5,param_4,&PTR_s_src_uu_unexpand_src_unexpand_rs_001e8310);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar10 = (ulong)(*(char *)(param_3 + param_5) < '\0');
    uVar9 = 1;
    uVar8 = 3;
    uVar3 = 3;
    if (uVar10 + param_5 + 1 <= param_4) {
      uVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h148ae85790082177E
                        (param_5);
      (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ee980)(local_38,uVar5);
      if (local_38[0] == 1) {
        uVar6 = 1;
      }
      else {
        local_40 = local_28 + local_30;
        local_48 = local_30;
        auVar11 = _ZN4core3str11validations15next_code_point17h18154aa5f33c59d0E(&local_48);
        uVar6 = 1;
        uVar8 = 3;
        if ((auVar11 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          uVar9 = 1;
        }
        else {
          uVar7 = auVar11._8_4_;
          if (uVar7 == 8) {
            uVar8 = 0;
            uVar9 = 0;
          }
          else if (uVar7 == 9) {
            uVar8 = 2;
            uVar9 = 0;
          }
          else if (uVar7 == 0x20) {
            uVar8 = 1;
            uVar9 = 0;
          }
          else {
            uVar6 = uVar10 + 1;
            if (uVar7 < 0x7f) {
              uVar9 = (ulong)(0x1f < uVar7);
            }
            else if (uVar7 < 0xa0) {
              uVar9 = 0;
            }
            else {
              bVar4 = _ZN13unicode_width6tables12lookup_width17h2b8e7fd08bce4cb3E
                                (auVar11._8_8_ & 0xffffffff);
              uVar9 = (ulong)bVar4;
            }
          }
        }
      }
      goto LAB_0015cdf6;
    }
  }
  uVar8 = uVar3;
  uVar9 = 1;
  uVar6 = 1;
LAB_0015cdf6:
  *(undefined *)(param_1 + 1) = uVar8;
  *param_1 = uVar9;
  param_1[2] = uVar6;
  return;
}