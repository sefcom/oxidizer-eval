long _ZN8uu_shred9do_remove17h7b1c5ba904fda3f1E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint param_5,char param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined local_80 [16];
  undefined8 local_70;
  undefined local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (param_5 != 0) {
    local_50 = param_2;
    local_80 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_c8 = (undefined8 *)local_80;
    uStack_c0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
    local_b0 = &DAT_00238698;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = (undefined8 **)&local_c8;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    local_80._0_8_ = 0;
    local_68 = 0;
    local_c8 = (undefined8 *)local_80;
    uStack_c0 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_b0 = &DAT_00238928;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = (undefined8 **)&local_c8;
    local_80._8_8_ = param_3;
    local_70 = param_4;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    param_2 = local_50;
  }
  if (param_6 == '\x01') {
    _ZN3std4path4Path14with_file_name17hc341ca2068d6c4b9E(&local_c8,param_1,param_2,param_3,param_4)
    ;
  }
  else {
    _ZN8uu_shred9wipe_name17hcce9bfbf2150b71eE(&local_c8,param_1,param_2,param_5 & 0xff,param_6);
  }
  puVar1 = local_c8;
  if (local_c8 != (undefined8 *)0x8000000000000000) {
    local_38 = local_b8;
    local_48 = (undefined4)local_c8;
    uStack_44 = local_c8._4_4_;
    uStack_40 = (undefined4)uStack_c0;
    uStack_3c = uStack_c0._4_4_;
    lVar2 = _ZN3std2fs11remove_file17h876d9142090ac2abE(&local_48);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  puVar3 = puVar1;
  if ((char)param_5 != '\0') {
                    /* try { // try from 001be137 to 001be1f8 has its CatchHandler @ 001be223 */
    local_80 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
    local_b0 = &DAT_00238698;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = &local_60;
    local_60 = (undefined8 *)local_80;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    local_80._0_8_ = 0;
    local_68 = 0;
    local_58 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_b0 = &DAT_00238948;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = &local_60;
    local_80._8_8_ = param_3;
    local_70 = param_4;
    local_60 = (undefined8 *)local_80;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    puVar3 = local_c8;
  }
  if ((puVar1 == (undefined8 *)0x8000000000000000) && (puVar3 != (undefined8 *)0x8000000000000000))
  {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha6413bedadae7a14E(&local_c8);
  }
  return 0;
}