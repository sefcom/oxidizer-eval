void _ZN7flealib16commandprocessor16CommandProcessor27get_temp_dir_for_screenshot17h015880c594245072E
               (undefined8 param_1)

{
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined local_84 [12];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  (*(code *)PTR__ZN6chrono6offset3utc3Utc3now17he8c7f65885fa3c3eE_00828278)(local_84);
  local_e8 = (undefined **)&DAT_0016a084;
  local_e0 = 0x11;
  local_d8 = (undefined8 *)0x8;
  local_d0 = 0;
  local_c8 = local_c8 & 0xffffffffffffff00;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17hed599405f419e4bbE
            (&local_78,local_84,&local_e8);
  uStack_b0 = 
  _ZN89__LT_chrono__format__formatting__DelayedFormat_LT_I_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48f8d3b0d60b9c9fE
  ;
  local_e8 = &PTR_DAT_008085e8;
  local_e0 = 2;
  local_c8 = 0;
  local_d8 = &local_b8;
  local_d0 = 1;
                    /* try { // try from 0046cf0c to 0046cf18 has its CatchHandler @ 0046cfae */
  local_b8 = &local_78;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(&local_a0,&local_e8);
                    /* try { // try from 0046cf19 to 0046cf22 has its CatchHandler @ 0046cf9f */
  _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h35c450be2a355fffE
            (&local_78);
  local_b8._0_4_ = local_a0;
  local_b8._4_4_ = uStack_9c;
  uStack_b0._0_4_ = uStack_98;
  uStack_b0._4_4_ = uStack_94;
  local_a8 = local_90;
                    /* try { // try from 0046cf37 to 0046cf3f has its CatchHandler @ 0046cf90 */
  (*(code *)PTR__ZN3std3env8temp_dir17hfef1f0de9c23ac58E_00828280)(&local_e8);
  local_68 = local_a8;
  local_78 = (undefined4)local_b8;
  uStack_74 = local_b8._4_4_;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
                    /* try { // try from 0046cf61 to 0046cf6d has its CatchHandler @ 0046cf83 */
  _ZN3std4path4Path4join17h7b07187a9245af47E(param_1,local_e0,local_d8,&local_78);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h2f706af944357a81E(&local_e8);
  return;
}