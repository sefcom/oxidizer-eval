long _ZN18alacritty_terminal10event_loop22EventLoop_LT_T_C_U_GT_8pty_read17hc41603fe6e3f17f3E
               (long param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50 [4];
  
  local_70 = *(long *)(param_1 + 0x68) + 0x700;
  local_68 = param_4;
  _ZN78__LT_parking_lot__raw_mutex__RawMutex_u20_as_u20_lock_api__mutex__RawMutex_GT_4lock17h8f21b5fe103f8e9aE
            ();
  local_78 = 0;
  uVar2 = _ZN96__LT_alacritty_terminal__tty__unix__Pty_u20_as_u20_alacritty_terminal__tty__EventedReadWrite_GT_6reader17h3333ae7262e41769E
                    (param_1);
  local_58 = param_2 + 0x20;
  uVar6 = 0;
  local_60 = param_2;
  do {
    uVar4 = 0;
    do {
                    /* try { // try from 0046c21c to 0046c295 has its CatchHandler @ 0046c3b9 */
      auVar7 = (*(code *)
                 PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_009de538
               )(uVar2,uVar4 + param_3,0x100000 - uVar4);
      lVar5 = auVar7._8_8_;
      if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        if (uVar4 == 0 && lVar5 == 0) goto LAB_0046c34f;
        uVar4 = uVar4 + lVar5;
      }
      else {
        local_50[0] = lVar5;
        cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar5);
        if ((cVar1 != '\r') && (cVar1 != '#')) {
                    /* try { // try from 0046c3a9 to 0046c3ad has its CatchHandler @ 0046c3b2 */
          _ZN4core3ptr127drop_in_place_LT_core__option__Option_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C__LP__RP__GT__GT__GT_17h96e885aa9340979dE
                    (local_78);
          goto LAB_0046c389;
        }
        if (uVar4 == 0) {
                    /* try { // try from 0046c345 to 0046c37c has its CatchHandler @ 0046c3b0 */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(local_50);
          goto LAB_0046c34f;
        }
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3428ae91bc3bac8aE(local_50);
      }
      if (local_78 != 0) goto LAB_0046c2c2;
      lVar5 = *(long *)(param_1 + 0x68) + 0x10;
      cVar1 = _ZN78__LT_parking_lot__raw_mutex__RawMutex_u20_as_u20_lock_api__mutex__RawMutex_GT_8try_lock17h301d80071f460945E
                        (lVar5);
      if (cVar1 != '\0') goto LAB_0046c2b7;
    } while (uVar4 < 0x100000);
    lVar5 = *(long *)(param_1 + 0x68) + 0x10;
                    /* try { // try from 0046c2af to 0046c332 has its CatchHandler @ 0046c3b7 */
    _ZN78__LT_parking_lot__raw_mutex__RawMutex_u20_as_u20_lock_api__mutex__RawMutex_GT_4lock17h8f21b5fe103f8e9aE
              (lVar5);
LAB_0046c2b7:
    _ZN4core6option15Option_LT_T_GT_6insert17hbf0ea0a72d87f8d1E(&local_78,lVar5);
LAB_0046c2c2:
    if (local_68 != 0) {
      uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h4d48160bd416b1a6E
                        (0,uVar4,param_3,0x100000,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977220);
      uVar3 = _ZN3std2io5Write9write_all17he2864e18bca27946E(local_68,uVar3);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc1e90cea79c932a6E
                (uVar3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977238);
    }
    lVar5 = local_78;
    auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h4d48160bd416b1a6E
                       (0,uVar4,param_3,0x100000,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977250);
    _ZN3vte4ansi18Processor_LT_T_GT_7advance17hc0b4a727a363f988E
              (local_58,lVar5 + 8,auVar7._0_8_,auVar7._8_8_);
    uVar6 = uVar6 + uVar4;
  } while (uVar6 < 0xffff);
LAB_0046c34f:
  if (*(ulong *)(local_60 + 0x30) < uVar6) {
    local_50[0] = -0x7ffffffffffffff7;
    _ZN89__LT_alacritty__event__EventProxy_u20_as_u20_alacritty_terminal__event__EventListener_GT_10send_event17hcb980e74e667f924E
              (param_1 + 0x98,local_50);
  }
                    /* try { // try from 0046c381 to 0046c385 has its CatchHandler @ 0046c3b2 */
  _ZN4core3ptr127drop_in_place_LT_core__option__Option_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C__LP__RP__GT__GT__GT_17h96e885aa9340979dE
            (local_78);
  lVar5 = 0;
LAB_0046c389:
  _ZN4core3ptr127drop_in_place_LT_core__option__Option_LT_lock_api__mutex__MutexGuard_LT_parking_lot__raw_mutex__RawMutex_C__LP__RP__GT__GT__GT_17h96e885aa9340979dE
            (local_70);
  return lVar5;
}