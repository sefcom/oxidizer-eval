void _ZN2fd4exec7command12OutputBuffer5write17h9f1254745ddb0158E(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  byte extraout_DL;
  long lVar5;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48 [3];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 002f21a2 to 002f21c6 has its CatchHandler @ 002f22d7 */
    local_68 = param_1;
    _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h49a2f44c13a21c87E
              (local_48,*(undefined8 *)(param_1 + 0x18));
    local_60 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hed9c0f4613795626E
                         (local_48,&PTR_s_src_exec_command_rs_00502178);
                    /* try { // try from 002f21ce to 002f21ef has its CatchHandler @ 002f22d2 */
    local_58 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_005408a8)();
    local_50 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_005408b0;
    local_78 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_005405c0)(&local_58);
                    /* try { // try from 002f21f5 to 002f21ff has its CatchHandler @ 002f22cd */
    local_70 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_005408b8)(&local_50);
    puVar3 = 
    PTR__ZN61__LT_std__io__stdio__StderrLock_u20_as_u20_std__io__Write_GT_9write_all17h529f10f41251b95aE_005408c0
    ;
    lVar2 = *(long *)(param_1 + 8);
    lVar5 = 0;
    do {
                    /* try { // try from 002f223a to 002f226e has its CatchHandler @ 002f22ec */
      local_48[0] = (*(code *)
                      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00540088
                    )(&local_78,*(undefined8 *)(lVar2 + 8 + lVar5),
                      *(undefined8 *)(lVar2 + 0x10 + lVar5));
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf603403cb1b5404dE
                (local_48);
      local_48[0] = (*(code *)puVar3)(&local_70,*(undefined8 *)(lVar2 + 0x20 + lVar5),
                                      *(undefined8 *)(lVar2 + 0x28 + lVar5));
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf603403cb1b5404dE
                (local_48);
      lVar4 = local_68;
      lVar5 = lVar5 + 0x30;
    } while (lVar1 * 0x30 != lVar5);
                    /* try { // try from 002f227d to 002f2286 has its CatchHandler @ 002f22cd */
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17h3603111795f94fd0E(local_70);
                    /* try { // try from 002f228c to 002f2290 has its CatchHandler @ 002f22d2 */
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17h3603111795f94fd0E(local_78);
                    /* try { // try from 002f2291 to 002f229f has its CatchHandler @ 002f22d7 */
    _ZN4core3ptr104drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_crossbeam_channel__flavors__zero__Inner_GT__GT_17h6207fb4f25d3957fE
              (local_60,extraout_DL & 1);
    _ZN4core3ptr52drop_in_place_LT_fd__exec__command__OutputBuffer_GT_17h4d7411562d7912bdE(lVar4);
    return;
  }
  _ZN4core3ptr52drop_in_place_LT_fd__exec__command__OutputBuffer_GT_17h4d7411562d7912bdE(param_1);
  return;
}