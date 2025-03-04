void _ZN5uu_dd5Input11fill_blocks17h45cc08a13ee607a5E
               (undefined8 *param_1,long param_2,long param_3,undefined param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined auVar6 [16];
  long local_d8;
  long local_d0;
  undefined local_b0 [24];
  undefined local_98 [32];
  undefined local_78 [72];
  
  uVar5 = *(ulong *)(param_3 + 0x10);
  if (uVar5 == 0) {
    lVar3 = 0;
    uVar4 = 0;
    local_d8 = 0;
    local_d0 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
    local_d0 = 0;
    local_d8 = 0;
    uVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = _ZN4core3cmp6min_by17hf29fead33a8278ecE(lVar1 + uVar4,uVar5);
      uVar2 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h56fc8485fa379185E
                        (uVar4,lVar1,*(undefined8 *)(param_3 + 8),uVar5);
      auVar6 = _ZN46__LT_uu_dd__Input_u20_as_u20_std__io__Read_GT_4read17h91bb47559be41a26E
                         (param_2,uVar2);
      uVar5 = auVar6._8_8_;
      if (auVar6._0_8_ != 0) {
        param_1[1] = uVar5;
        uVar2 = 1;
        goto LAB_001d7300;
      }
      if (uVar5 == 0) break;
      if (uVar5 < lVar1 - uVar4) {
        local_d8 = local_d8 + 1;
        _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h1a0e457649d60ac2E
                  (local_b0,param_4);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h9f073f067a0e9b2eE
                  (local_98,local_b0);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6splice17h0fd839b9d32da106E
                  (local_78,param_3,uVar4 + uVar5,lVar1,local_98);
        _ZN4core3ptr96drop_in_place_LT_alloc__vec__splice__Splice_LT_alloc__vec__into_iter__IntoIter_LT_u8_GT__GT__GT_17hfe92d49d1adc9d71E
                  (local_78);
      }
      else {
        local_d0 = local_d0 + 1;
      }
      lVar3 = lVar3 + uVar5;
      lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x70);
      uVar4 = uVar4 + lVar1;
      uVar5 = *(ulong *)(param_3 + 0x10);
    } while (uVar4 < uVar5);
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_8truncate17h705e1c902b347a7bE(param_3,uVar4);
  param_1[1] = local_d0;
  param_1[2] = local_d8;
  param_1[3] = lVar3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar2 = 0;
LAB_001d7300:
  *param_1 = uVar2;
  return;
}