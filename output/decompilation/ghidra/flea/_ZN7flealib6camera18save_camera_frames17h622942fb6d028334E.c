undefined8 *
_ZN7flealib6camera18save_camera_frames17h622942fb6d028334E
          (undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_1f4;
  undefined8 *local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined *local_1d8;
  code *pcStack_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  byte local_1a8 [4];
  undefined4 local_1a4;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  uint *local_150;
  undefined *local_148;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long local_a8 [13];
  undefined4 local_3c;
  
  local_180 = param_3;
  local_178 = param_4;
  _ZN3std2fs8metadata17h198ddbb2419bae71E(&local_170,&DAT_00169ced,0xb);
  iVar1 = (int)local_170;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h99319c8eae35268bE
            (&local_170);
  if (iVar1 == 2) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (param_1,&DAT_0014fd60,0x10);
  }
  else {
    _ZN3std4sync4mpmc7channel17hdcba90f63f774f2fE(&local_170);
    local_1e8 = (undefined4)local_160;
    uStack_1e4 = local_160._4_4_;
    uStack_1e0 = (undefined4)uStack_158;
    uStack_1dc = uStack_158._4_4_;
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,param_2);
    local_1d8 = (undefined *)local_170;
    pcStack_1d0 = uStack_168;
    local_160 = (undefined **)0x8000000000000000;
    local_170 = (undefined8 *)0x0;
    local_148 = (undefined *)((ulong)local_148 & 0xffffffffffffff00);
                    /* try { // try from 0046b1a2 to 0046b1e0 has its CatchHandler @ 0046b3dd */
    _ZN3std6thread7Builder15spawn_unchecked17hb782258bc29e6dadE(local_a8,&local_170,&local_1d8);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hba870ccf999f6cfdE(&local_170,local_a8);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h3bc8a69c7987d810E
              (&local_170);
    local_1f0 = param_1;
    if (param_2 != 0) {
      uVar4 = 0;
      do {
        uVar2 = _ZN47__LT_u32_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17hca53ffd75a1457a6E
                          (uVar4);
                    /* try { // try from 0046b20e to 0046b22d has its CatchHandler @ 0046b430 */
        local_1f4 = uVar4;
        _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h2758a6fd4ae371c3E(&local_170,&local_1e8);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h03fe74c997b8545fE(local_a8,&local_170);
        local_170 = &local_180;
        uStack_168 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e99a2697242919dE;
        local_160 = &PTR_DAT_00808488;
        uStack_158 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e99a2697242919dE;
        local_150 = &local_1f4;
        local_148 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h13990ee88b04ff68E_00826d18
        ;
        local_1d8 = &DAT_00808418;
        pcStack_1d0 = (code *)0x4;
        local_1b8 = 0;
        local_1c0 = 3;
                    /* try { // try from 0046b2a2 to 0046b2b3 has its CatchHandler @ 0046b3e4 */
        local_1c8 = &local_170;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_c0,&local_1d8);
        local_198 = local_c0;
        uStack_194 = uStack_bc;
        uStack_190 = uStack_b8;
        uStack_18c = uStack_b4;
        local_188 = local_b0;
                    /* try { // try from 0046b2ce to 0046b2da has its CatchHandler @ 0046b3f6 */
        _ZN3std2fs4File6create17h69c4063e94a13663E(local_1a8,&local_198);
        if ((local_1a8[0] & 1) != 0) {
          local_1d8 = local_1a0;
                    /* try { // try from 0046b356 to 0046b367 has its CatchHandler @ 0046b3ce */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                    (&local_170,&local_1d8);
          param_1 = local_1f0;
          local_1f0[2] = local_160;
          *(int *)local_1f0 = (int)local_170;
          *(undefined4 *)((long)local_1f0 + 4) = local_170._4_4_;
          *(undefined4 *)(local_1f0 + 1) = (undefined4)uStack_168;
          *(undefined4 *)((long)local_1f0 + 0xc) = uStack_168._4_4_;
                    /* try { // try from 0046b384 to 0046b38d has its CatchHandler @ 0046b3c9 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_1d8);
                    /* try { // try from 0046b38e to 0046b39a has its CatchHandler @ 0046b3c4 */
          _ZN4core3ptr33drop_in_place_LT_rscam__Frame_GT_17h66886392cc4eedf1E(local_a8);
                    /* try { // try from 0046b39b to 0046b3a4 has its CatchHandler @ 0046b3dd */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_198);
          goto LAB_0046b3a5;
        }
        local_170 = (undefined8 *)CONCAT44(local_170._4_4_,local_1a4);
                    /* try { // try from 0046b300 to 0046b30f has its CatchHandler @ 0046b408 */
        uVar3 = _ZN3std2io5Write9write_all17h066e478a0016aabaE
                          (&local_170,*(undefined8 *)(local_a8[0] + 0x10),local_3c);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar3);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E((int)local_170);
                    /* try { // try from 0046b31c to 0046b323 has its CatchHandler @ 0046b3df */
        _ZN4core3ptr33drop_in_place_LT_rscam__Frame_GT_17h66886392cc4eedf1E(local_a8);
                    /* try { // try from 0046b324 to 0046b32b has its CatchHandler @ 0046b430 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_198);
        uVar4 = uVar2;
      } while (uVar2 < param_2);
    }
    *local_1f0 = 0x8000000000000000;
    param_1 = local_1f0;
LAB_0046b3a5:
    _ZN4core3ptr66drop_in_place_LT_std__sync__mpsc__Receiver_LT_rscam__Frame_GT__GT_17h5671e8f5bb645d2bE
              (&local_1e8);
  }
  return param_1;
}