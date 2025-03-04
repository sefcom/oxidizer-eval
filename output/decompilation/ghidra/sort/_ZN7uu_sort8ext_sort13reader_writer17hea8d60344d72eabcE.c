undefined  [16]
_ZN7uu_sort8ext_sort13reader_writer17hea8d60344d72eabcE
          (undefined8 param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,long *param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  undefined *local_1a8;
  undefined *local_1a0;
  long local_198;
  long lStack_190;
  undefined **local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined *local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
                    /* try { // try from 00267948 to 00267965 has its CatchHandler @ 00267d29 */
  _ZN7uu_sort8ext_sort15read_write_loop17hb7505e9f57c3babeE
            (&local_178,param_1,param_7,param_2[0x99],*(ulong *)(param_2 + 0x68) / 10,param_2,
             param_3,param_4,param_5);
  puVar4 = local_168;
  ppuVar5 = &local_1a8;
  if (local_178 == (undefined *)0x8000000000000003) {
LAB_00267988:
    auVar6._8_8_ = local_168;
    auVar6._0_8_ = puStack_170;
    _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17hc73b799533ae265aE(param_6);
    return auVar6;
  }
  local_100 = local_178;
  local_f8 = puStack_170;
  local_f0 = local_168;
  switch((ulong)local_178 ^ 0x8000000000000000) {
  case 0:
    _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17hc73b799533ae265aE(param_6);
    goto LAB_00267cd9;
  case 1:
    local_1a8 = puStack_170;
    if (param_2[0x84] == '\0') {
      plVar1 = (long *)(puStack_170 + 0x20);
      plVar2 = (long *)(puStack_170 + 0x28);
      local_178 = (undefined *)*param_6;
      puStack_170 = (undefined *)param_6[1];
      local_168 = (undefined *)param_6[2];
      puStack_160 = (undefined *)param_6[3];
      _ZN7uu_sort12print_sorted17h399956c01eacbd36E
                (*plVar1,*plVar1 + *plVar2 * 0x18,param_2,&local_178);
    }
    else {
      local_168 = *(undefined **)(puStack_170 + 0x20);
      puStack_160 = local_168 + *(long *)(puStack_170 + 0x28) * 0x18;
      local_178 = (undefined *)0x0;
      local_198 = *param_6;
      lStack_190 = param_6[1];
      local_188 = (undefined **)param_6[2];
      uStack_180 = *(undefined4 *)(param_6 + 3);
      uStack_17c = *(undefined4 *)((long)param_6 + 0x1c);
                    /* try { // try from 00267c07 to 00267c48 has its CatchHandler @ 00267cfb */
      uStack_158 = param_2;
      uStack_150 = &local_1a8;
      _ZN7uu_sort12print_sorted17h980a3d1e0d6f1cf0E(&local_178,param_2,&local_198);
      ppuVar5 = &local_1a8;
    }
    break;
  case 2:
    local_1a0 = puStack_170;
    local_1a8 = local_168;
    local_198 = *(long *)(puStack_170 + 0x20);
    lStack_190 = local_198 + *(long *)(puStack_170 + 0x28) * 0x18;
    local_188 = &local_1a0;
    local_178 = *(undefined **)(local_168 + 0x20);
    puStack_170 = local_178 + *(long *)(local_168 + 0x28) * 0x18;
                    /* try { // try from 00267a2e to 00267adf has its CatchHandler @ 00267d0d */
    local_168 = (undefined *)&local_1a8;
    _ZN9itertools10merge_join12merge_by_new17hc384172735f1fb36E
              (&local_e8,&local_198,&local_178,param_2);
    if (param_2[0x84] == '\0') {
      uStack_128 = local_98;
      uStack_138 = local_a8;
      local_130 = uStack_a0;
      uStack_148 = (undefined *)CONCAT44(uStack_b4,local_b8);
      local_140 = uStack_b0;
      uStack_13c = uStack_ac;
      uStack_158 = (undefined *)CONCAT44(uStack_c4,local_c8);
      uStack_150 = (undefined **)CONCAT44(uStack_bc,uStack_c0);
      local_168 = local_d8;
      puStack_160 = puStack_d0;
      local_178 = local_e8;
      puStack_170 = puStack_e0;
      local_198 = *param_6;
      lStack_190 = param_6[1];
      local_188 = (undefined **)param_6[2];
      uStack_180 = *(undefined4 *)(param_6 + 3);
      uStack_17c = *(undefined4 *)((long)param_6 + 0x1c);
                    /* try { // try from 00267cb5 to 00267cc6 has its CatchHandler @ 00267d0d */
      _ZN7uu_sort12print_sorted17h73b47b9188ebe0a1E(&local_178,param_2,&local_198);
    }
    else {
      local_110 = local_98;
      local_120 = local_a8;
      uStack_118 = uStack_a0;
      local_130 = CONCAT44(uStack_b4,local_b8);
      uStack_128 = CONCAT44(uStack_ac,uStack_b0);
      local_140 = local_c8;
      uStack_13c = uStack_c4;
      uStack_138 = CONCAT44(uStack_bc,uStack_c0);
      uStack_150 = (undefined **)local_d8;
      uStack_148 = puStack_d0;
      puStack_160 = local_e8;
      uStack_158 = puStack_e0;
      local_178 = (undefined *)0x0;
      local_198 = *param_6;
      lStack_190 = param_6[1];
      local_188 = (undefined **)param_6[2];
      uStack_180 = *(undefined4 *)(param_6 + 3);
      uStack_17c = *(undefined4 *)((long)param_6 + 0x1c);
      local_108 = param_2;
      _ZN7uu_sort12print_sorted17h24cdc7fa9246c817E(&local_178,param_2,&local_198);
    }
                    /* try { // try from 00267cc7 to 00267cce has its CatchHandler @ 00267cf4 */
    _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h110e2935f03a115dE(&local_1a8);
    ppuVar5 = &local_1a0;
    break;
  default:
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hfe0833828f6f3053E
              (&local_198,&local_100);
                    /* try { // try from 00267afd to 00267bac has its CatchHandler @ 00267d08 */
    _ZN7uu_sort5merge21merge_with_file_limit17hee8bdf8579433eeeE
              (&local_178,&local_198,param_2,param_7);
    if (local_178 != (undefined *)0x3) {
      local_38 = local_120;
      local_48 = (undefined4)local_130;
      uStack_44 = local_130._4_4_;
      uStack_40 = (undefined4)uStack_128;
      uStack_3c = uStack_128._4_4_;
      local_58 = local_140;
      uStack_54 = uStack_13c;
      uStack_50 = (undefined4)uStack_138;
      uStack_4c = uStack_138._4_4_;
      local_68 = (undefined *)uStack_150;
      puStack_60 = uStack_148;
      local_78 = puStack_160;
      puStack_70 = uStack_158;
      local_90 = local_178;
      local_88 = puStack_170;
      local_80 = local_168;
      local_178 = (undefined *)*param_6;
      puStack_170 = (undefined *)param_6[1];
      local_168 = (undefined *)param_6[2];
      puStack_160 = (undefined *)param_6[3];
      auVar6 = _ZN7uu_sort5merge10FileMerger9write_all17h8ffbbdd0c487cde8E
                         (&local_90,param_2,&local_178);
      return auVar6;
    }
    goto LAB_00267988;
  }
  _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h110e2935f03a115dE(ppuVar5);
LAB_00267cd9:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = puVar4;
  return auVar3 << 0x40;
}