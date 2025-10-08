void _ZN5uu_dd5Input11fill_blocks17h1db18295bd354b67E
               (undefined8 *param_1,long param_2,long param_3,undefined param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_d8;
  long local_c0;
  undefined local_b0 [24];
  undefined local_98 [32];
  undefined local_78 [72];
  
  uVar5 = *(ulong *)(param_3 + 0x10);
  if (uVar5 == 0) {
    local_d8 = 0;
    local_c0 = 0;
    uVar6 = 0;
    lVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
    local_d8 = 0;
    local_c0 = 0;
    uVar6 = 0;
    lVar3 = 0;
    do {
      lVar1 = _ZN4core3cmp3Ord3min17h1162548a3a8ea989E(lVar1 + uVar6,uVar5);
      uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17haf08713dd75fcb35E
                        (uVar6,lVar1,*(undefined8 *)(param_3 + 8),uVar5);
      auVar7 = (*(code *)
                 PTR__ZN46__LT_uu_dd__Input_u20_as_u20_std__io__Read_GT_4read17h4a29ff4f57f9a098E_00246d00
               )(param_2,uVar2);
      uVar5 = auVar7._8_8_;
      if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        param_1[1] = uVar5;
        uVar2 = 1;
        goto LAB_001902ea;
      }
      if (uVar5 == 0) {
        uVar5 = *(ulong *)(param_3 + 0x10);
        break;
      }
      lVar4 = (lVar1 - uVar6) - uVar5;
      if (lVar1 - uVar6 < uVar5 || lVar4 == 0) {
        local_d8 = local_d8 + 1;
      }
      else {
        local_c0 = local_c0 + 1;
        _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h06af5c098bf34970E
                  (local_b0,param_4,lVar4,&PTR_DAT_0023ddb0);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h205179070021ab91E
                  (local_98,local_b0);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6splice17h643d28211cf1428bE
                  (local_78,param_3,uVar6 + uVar5,lVar1,local_98);
        _ZN4core3ptr96drop_in_place_LT_alloc__vec__splice__Splice_LT_alloc__vec__into_iter__IntoIter_LT_u8_GT__GT__GT_17h9d1a40dd01e986fbE
                  (local_78);
      }
      lVar3 = lVar3 + uVar5;
      lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
      uVar6 = uVar6 + lVar1;
      uVar5 = *(ulong *)(param_3 + 0x10);
    } while (uVar6 < uVar5);
    if (uVar5 < uVar6) goto LAB_001902d1;
  }
  *(ulong *)(param_3 + 0x10) = uVar6;
LAB_001902d1:
  param_1[1] = local_d8;
  param_1[2] = local_c0;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = 0;
LAB_001902ea:
  *param_1 = uVar2;
  return;
}