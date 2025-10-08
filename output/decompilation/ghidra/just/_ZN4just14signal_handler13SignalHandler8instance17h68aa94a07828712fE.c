undefined  [16] _ZN4just14signal_handler13SignalHandler8instance17h68aa94a07828712fE(void)

{
  code *pcVar1;
  undefined8 extraout_RDX;
  undefined auVar2 [16];
  undefined8 local_118;
  undefined local_110;
  undefined *local_108;
  undefined local_100;
  undefined7 uStack_ff;
  undefined local_f8;
  undefined uStack_f7;
  undefined6 uStack_f6;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_d8 [2];
  undefined8 local_d0;
  undefined local_c8;
  undefined8 **local_c0;
  undefined *local_b8;
  undefined local_b0 [16];
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined ***local_30;
  undefined **local_28;
  undefined local_20 [24];
  
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17hd68f6780826aed7aE(local_d8);
  if (local_d8[0] != 1) {
    auVar2[8] = local_c8;
    auVar2._0_8_ = local_d0;
    auVar2._9_7_ = 0;
    return auVar2;
  }
  local_118 = local_d0;
  local_110 = local_c8;
  local_100 = 0xe0;
  uStack_ff = 0x33ea;
  local_98 = &PTR_DAT_00530ef0;
  local_90 = 1;
  local_78 = 0;
  ppuStack_88 = &local_108;
  local_80 = 1;
                    /* try { // try from 0038a742 to 0038a758 has its CatchHandler @ 0038a848 */
  local_108 = (undefined *)&local_118;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
            (local_b0,0,extraout_RDX,&local_98);
  local_80 = local_a0;
  local_98 = (undefined **)CONCAT71(local_98._1_7_,0x1d);
  local_100 = 0;
  local_108 = (undefined *)0x0;
  uStack_ff = 0xa0000000a;
  local_f8 = 0;
  uStack_f7 = 1;
  (*(code *)PTR__ZN4just5color5Color6stderr17h04afff4548ac818eE_00565e38)(local_20,&local_108);
  local_28 = &PTR__ZN4core3ptr39drop_in_place_LT_just__error__Error_GT_17ha62e3e0ecfcf56b5E_00530f00
  ;
  local_c0 = &local_30;
  local_b8 = 
  PTR__ZN67__LT_just__color_display__Wrapper_u20_as_u20_core__fmt__Display_GT_3fmt17hc72f260d5107bcedE_00565e40
  ;
  local_108 = &DAT_0052dbd8;
  local_100 = 2;
  uStack_ff = 0;
  local_e8 = 0;
  local_f8 = SUB81(&local_c0,0);
  uStack_f7 = (undefined)((ulong)&local_c0 >> 8);
  uStack_f6 = (undefined6)((ulong)&local_c0 >> 0x10);
  local_f0 = 1;
                    /* try { // try from 0038a811 to 0038a81b has its CatchHandler @ 0038a836 */
  local_30 = &local_98;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00565e48)(&local_108);
                    /* try { // try from 0038a81c to 0038a833 has its CatchHandler @ 0038a848 */
  _ZN4core3ptr39drop_in_place_LT_just__error__Error_GT_17ha62e3e0ecfcf56b5E(&local_98);
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00565e90)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}