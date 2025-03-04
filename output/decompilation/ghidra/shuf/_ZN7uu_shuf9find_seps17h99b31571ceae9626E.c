void _ZN7uu_shuf9find_seps17h99b31571ceae9626E(long param_1,undefined param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_50;
  long local_48;
  long local_40;
  undefined local_38 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if ((uVar1 == 1) && (*(long *)(*(long *)(param_1 + 8) + 8) == 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      do {
        uVar1 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_18backward_unchecked17hafc0b4d583767e83E
                          (uVar1);
        if (*(ulong *)(param_1 + 0x10) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                    (uVar1,*(ulong *)(param_1 + 0x10),&PTR_DAT_00237cd8);
        }
        lVar2 = _ZN4core5slice6memchr6memchr17hd9bdb72df61b073bE
                          (param_2,*(undefined8 *)(*(long *)(param_1 + 8) + uVar1 * 0x10),
                           *(undefined8 *)(*(long *)(param_1 + 8) + 8 + uVar1 * 0x10));
        if (lVar2 == 1) {
          auVar7 = _ZN5alloc3vec16Vec_LT_T_C_A_GT_11swap_remove17hd8884eae080ccab8E(param_1,uVar1);
          uVar4 = auVar7._8_8_;
          lVar2 = auVar7._0_8_;
          local_40 = lVar2 + uVar4;
          local_50 = lVar2;
          local_48 = lVar2;
          local_38[0] = param_2;
          auVar7 = _ZN6memchr4arch7generic6memchr4Iter4next17h49b397ad764296c0E(&local_50,local_38);
          lVar5 = auVar7._8_8_;
          if (auVar7._0_8_ == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            do {
              uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hc642f9dd373424d2E
                                (uVar6,lVar5,lVar2,uVar4,&PTR_DAT_00237cf0);
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h77e0d20633c95084E(param_1,uVar3);
              uVar6 = lVar5 + 1;
              auVar7 = _ZN6memchr4arch7generic6memchr4Iter4next17h49b397ad764296c0E
                                 (&local_50,local_38);
              lVar5 = auVar7._8_8_;
            } while (auVar7._0_8_ != 0);
          }
          if (uVar6 <= uVar4 && uVar4 - uVar6 != 0) {
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h77e0d20633c95084E
                      (param_1,lVar2 + uVar6,uVar4 - uVar6);
          }
        }
      } while (uVar1 != 0);
    }
  }
  return;
}