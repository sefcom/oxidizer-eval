void _ZN15linera_exporter8runloops15block_processor6walker14ProcessedBlock13process_block17hc6e89871dd352803E
               (long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long lStack_178;
  long local_170;
  long local_168;
  long lStack_160;
  long local_158;
  char local_150;
  undefined4 local_14f;
  undefined4 uStack_14b;
  undefined4 uStack_147;
  undefined4 uStack_143;
  undefined8 local_13f;
  undefined8 uStack_137;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_108 = *(long *)(param_2 + 600);
  lStack_100 = *(long *)(param_2 + 0x260);
  local_f8 = *(long *)(param_2 + 0x268);
  lStack_f0 = *(long *)(param_2 + 0x270);
  lVar2 = *(long *)(param_2 + 0x200);
  local_e8 = *(undefined4 *)(param_2 + 0xc0);
  uStack_e4 = *(undefined4 *)(param_2 + 0xc4);
  uStack_e0 = *(undefined4 *)(param_2 + 200);
  uStack_dc = *(undefined4 *)(param_2 + 0xcc);
  local_d8 = *(undefined4 *)(param_2 + 0xd0);
  uStack_d4 = *(undefined4 *)(param_2 + 0xd4);
  uStack_d0 = *(undefined4 *)(param_2 + 0xd8);
  uStack_cc = *(undefined4 *)(param_2 + 0xdc);
  local_1a8 = 0;
  local_1a0 = 8;
  local_198 = 0;
  if (*(char *)(param_2 + 0x235) == '\x01') {
    local_150 = lVar2 == 0;
    if ((bool)local_150) {
      local_14f = CONCAT31(local_14f._1_3_,1);
    }
    else {
      lVar1 = lVar2 + -1;
      uStack_14b._3_1_ = (undefined)lVar1;
      uStack_147 = (undefined4)((ulong)lVar1 >> 8);
      uStack_143._0_3_ = (undefined3)((ulong)lVar1 >> 0x28);
    }
                    /* try { // try from 009e740a to 009e7481 has its CatchHandler @ 009e7611 */
    local_68 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h2ba3495e30f597deE(&local_150);
    local_a8 = *(undefined8 *)(param_2 + 0x236);
    uStack_a0 = *(undefined8 *)(param_2 + 0x23e);
    local_98 = *(undefined8 *)(param_2 + 0x246);
    uStack_90 = *(undefined8 *)(param_2 + 0x24e);
    local_88 = *(undefined4 *)(param_2 + 0xc0);
    uStack_84 = *(undefined4 *)(param_2 + 0xc4);
    uStack_80 = *(undefined4 *)(param_2 + 200);
    uStack_7c = *(undefined4 *)(param_2 + 0xcc);
    local_78 = *(undefined4 *)(param_2 + 0xd0);
    uStack_74 = *(undefined4 *)(param_2 + 0xd4);
    uStack_70 = *(undefined4 *)(param_2 + 0xd8);
    uStack_6c = *(undefined4 *)(param_2 + 0xdc);
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h04ca713888062793E(&local_1a8,&local_a8);
  }
  lVar1 = *(long *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x10) * 0x78 + lVar1;
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_16extend_desugared17h012ef129b0353f94E(&local_1a8,lVar1,lVar4);
  local_188 = lVar2;
  local_180 = lVar1;
  lStack_178 = lVar4;
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h17304a4373c00bb7E(&local_150,&local_180);
  cVar3 = local_150;
  lVar1 = local_198;
  lVar2 = local_1a8;
  if (local_150 != '\a') {
    local_b8 = local_13f;
    uStack_b0 = uStack_137;
    local_c8 = local_14f;
    uStack_c4 = uStack_14b;
    uStack_c0 = uStack_147;
    uStack_bc = uStack_143;
  }
  local_190 = local_1a0;
                    /* try { // try from 009e74d8 to 009e750a has its CatchHandler @ 009e75f9 */
  (*(code *)
    PTR__ZN99__LT_linera_chain__block__ValidatedBlock_u20_as_u20_linera_chain__certificate__CertificateValue_GT_17required_blob_ids17h6d296ea37b456d59E_01594830
  )(local_60,param_2);
  _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h024b287683c48b59E
            (&local_150,local_60);
  _ZN4core4iter6traits8iterator8Iterator7collect17h2618e13d6055d1d4E(&local_168,&local_150);
                    /* try { // try from 009e750b to 009e753d has its CatchHandler @ 009e75e5 */
  (*(code *)PTR__ZN12linera_chain5block5Block16created_blob_ids17h2b33ab1d32d18e1dE_01594838)
            (local_48,param_2);
  _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h024b287683c48b59E
            (&local_150,local_48);
  _ZN4core4iter6traits8iterator8Iterator7collect17h2618e13d6055d1d4E(&local_180,&local_150);
  param_1[0xf] = CONCAT44(uStack_d4,local_d8);
  param_1[0x10] = CONCAT44(uStack_cc,uStack_d0);
  param_1[0xd] = CONCAT44(uStack_e4,local_e8);
  param_1[0xe] = CONCAT44(uStack_dc,uStack_e0);
  param_1[0xb] = local_f8;
  param_1[0xc] = lStack_f0;
  param_1[9] = local_108;
  param_1[10] = lStack_100;
  param_1[0x11] = local_188;
  *param_1 = local_180;
  param_1[1] = lStack_178;
  param_1[2] = local_170;
  param_1[3] = local_168;
  param_1[4] = lStack_160;
  param_1[5] = local_158;
  param_1[6] = lVar2;
  param_1[7] = local_190;
  param_1[8] = lVar1;
  *(char *)(param_1 + 0x12) = cVar3;
  *(ulong *)((long)param_1 + 0x91) = CONCAT44(uStack_c4,local_c8);
  *(ulong *)((long)param_1 + 0x99) = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)((long)param_1 + 0xa1) = local_b8;
  *(undefined8 *)((long)param_1 + 0xa9) = uStack_b0;
  return;
}