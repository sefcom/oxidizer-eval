void _ZN7flealib16commandprocessor16CommandProcessor16get_camera_frame17h0878a6d4f0167b73E
               (undefined4 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 *local_120;
  code *pcStack_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 **local_a8;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  (*(code *)PTR__ZN3std3env8temp_dir17hfef1f0de9c23ac58E_00828280)(local_e8);
                    /* try { // try from 0046e103 to 0046e127 has its CatchHandler @ 0046e79e */
  (*(code *)
    PTR__ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17hb4876b8b08d05247E_00826798
  )(&local_178,local_e0,local_d8);
  if ((int)local_178 == 1) {
                    /* try { // try from 0046e6b1 to 0046e6bd has its CatchHandler @ 0046e79e */
    (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_008267e8)(&PTR_DAT_00808848);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
            (&local_178,uStack_170,local_168);
  local_a8 = local_168;
  local_b8 = (int)local_178;
  uStack_b4 = local_178._4_4_;
  uStack_b0 = (undefined4)uStack_170;
  uStack_ac = uStack_170._4_4_;
                    /* try { // try from 0046e149 to 0046e15b has its CatchHandler @ 0046e756 */
  (*(code *)PTR__ZN7flealib6camera18save_camera_frames17h622942fb6d028334E_008281c0)
            (&local_58,1,uStack_170);
  local_f8 = local_48;
  local_108 = local_58;
  uStack_104 = uStack_54;
  uStack_100 = uStack_50;
  uStack_fc = uStack_4c;
  lVar2 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
  if (lVar2 != 0) {
    local_120 = &local_108;
    pcStack_118 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
    local_178 = &PTR_DAT_00808638;
    uStack_170 = 1;
    uStack_158 = 0;
    local_168 = &local_120;
    local_160 = 1;
                    /* try { // try from 0046e415 to 0046e45b has its CatchHandler @ 0046e731 */
    local_128 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                          (&PTR_DAT_008088e8);
    local_148 = &DAT_0016a0f1;
    local_140 = 0x19;
    local_138 = &DAT_0016a0f1;
    local_130 = 0x19;
    _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_178,1,&local_148);
  }
  *(undefined8 *)(param_1 + 4) = local_f8;
  *param_1 = local_108;
  param_1[1] = uStack_104;
  param_1[2] = uStack_100;
  param_1[3] = uStack_fc;
                    /* try { // try from 0046e687 to 0046e693 has its CatchHandler @ 0046e751 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h2f706af944357a81E(local_e8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_b8);
  return;
}