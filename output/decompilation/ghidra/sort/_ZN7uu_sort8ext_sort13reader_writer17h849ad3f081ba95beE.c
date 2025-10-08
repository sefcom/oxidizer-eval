undefined  [16]
_ZN7uu_sort8ext_sort13reader_writer17h849ad3f081ba95beE
          (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined auVar1 [16];
  undefined8 *******pppppppuVar2;
  undefined8 ******ppppppuVar3;
  undefined auVar4 [16];
  undefined8 ******local_138;
  undefined8 *******local_130;
  undefined8 ******local_128;
  undefined8 ******local_120;
  undefined *local_118;
  undefined8 ******local_110;
  undefined8 ******local_108;
  undefined8 *******local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
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
  long local_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 *******local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
                    /* try { // try from 001c3a0f to 001c3a29 has its CatchHandler @ 001c3ce5 */
  _ZN7uu_sort8ext_sort15read_write_loop17h130c0126f6a2bd68E
            (&local_110,param_1,param_8,*(undefined *)(param_2 + 0x99),
             *(ulong *)(param_2 + 0x68) / 10,param_2,param_3,param_4,param_5,param_6);
  pppppppuVar2 = local_100;
  auVar4._8_8_ = local_100;
  auVar4._0_8_ = local_108;
  if (local_110 == (undefined8 ******)0x8000000000000003) {
    _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17h7def0b71731a8447E(param_7);
    return auVar4;
  }
  local_98 = local_110;
  local_90 = local_108;
  local_88 = local_100;
  switch((ulong)local_110 ^ 0x8000000000000000) {
  case 0:
    _ZN4core3ptr36drop_in_place_LT_uu_sort__Output_GT_17h7def0b71731a8447E(param_7);
    goto LAB_001c3c9b;
  case 1:
    local_128 = local_108;
    if (*(char *)(param_2 + 0x84) == '\0') {
                    /* try { // try from 001c3c60 to 001c3c6a has its CatchHandler @ 001c3cb9 */
      auVar4 = _ZN7uu_sort12print_sorted17hf96f077461fc8daaE
                         (local_108[4],local_108[4] + (long)local_108[5] * 3,param_2,param_7);
    }
    else {
      local_100 = (undefined8 *******)local_108[4];
      local_f8 = local_100 + (long)local_108[5] * 3;
      local_110 = (undefined8 ******)0x0;
      local_e8 = &local_128;
                    /* try { // try from 001c3c0c to 001c3c1b has its CatchHandler @ 001c3cb9 */
      uStack_f0 = param_2;
      auVar4 = _ZN7uu_sort12print_sorted17h10a88dada5bd82d9E(&local_110,param_2,param_7);
    }
    if (auVar4._0_8_ != 0) {
      _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_128);
      return auVar4;
    }
    ppppppuVar3 = &local_128;
    break;
  case 2:
    local_138 = local_108;
    local_130 = local_100;
    local_128 = (undefined8 ******)local_108[4];
    local_120 = local_128 + (long)local_108[5] * 3;
    local_110 = local_100[4];
    local_108 = local_110 + (long)local_100[5] * 3;
    local_100 = &local_130;
    local_118 = (undefined *)&local_138;
    _ZN9itertools10merge_join12merge_by_new17h1d4b470930e6d24aE
              (&local_80,&local_128,&local_110,param_2);
    if (*(char *)(param_2 + 0x84) == '\0') {
                    /* try { // try from 001c3c1e to 001c3c30 has its CatchHandler @ 001c3cc8 */
      auVar4 = _ZN7uu_sort12print_sorted17ha55b1dbd27657341E(&local_80,param_2,param_7);
    }
    else {
      local_a8 = local_30;
      local_b8 = local_40;
      uStack_b0 = uStack_38;
      local_c8 = local_50;
      uStack_c4 = uStack_4c;
      uStack_c0 = uStack_48;
      uStack_bc = uStack_44;
      local_d8 = local_60;
      uStack_d4 = uStack_5c;
      uStack_d0 = uStack_58;
      uStack_cc = uStack_54;
      local_e8 = (undefined8 ******)CONCAT44(uStack_6c,local_70);
      uStack_e0 = uStack_68;
      uStack_dc = uStack_64;
      local_f8 = (undefined8 *******)CONCAT44(uStack_7c,local_80);
      uStack_f0 = CONCAT44(uStack_74,uStack_78);
      local_110 = (undefined8 ******)0x0;
                    /* try { // try from 001c3b7c to 001c3b8b has its CatchHandler @ 001c3cc8 */
      local_a0 = param_2;
      auVar4 = _ZN7uu_sort12print_sorted17h9511b61c395e85fcE(&local_110,param_2,param_7);
    }
    if (auVar4._0_8_ != 0) {
                    /* try { // try from 001c3c3c to 001c3c45 has its CatchHandler @ 001c3cb4 */
      _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_130);
      _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_138);
      return auVar4;
    }
                    /* try { // try from 001c3c82 to 001c3c8b has its CatchHandler @ 001c3cb4 */
    _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(&local_130);
    ppppppuVar3 = &local_138;
    break;
  default:
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17hf75d9570fff832c0E
              (&local_110,&local_98);
    auVar4 = _ZN7uu_sort5merge21merge_with_file_limit17hbbb83f2c216a5f5fE
                       (&local_110,param_2,param_7,param_8);
    if (auVar4._0_8_ != 0) {
      return auVar4;
    }
    goto LAB_001c3c9b;
  }
  _ZN4core3ptr43drop_in_place_LT_uu_sort__chunks__Chunk_GT_17h49f783d79a42b220E(ppppppuVar3);
LAB_001c3c9b:
  auVar1._8_8_ = 0;
  auVar1._0_8_ = pppppppuVar2;
  return auVar1 << 0x40;
}