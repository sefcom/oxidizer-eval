void _ZN7flealib10fleaserver13handle_client17h53139a4f21ef559cE
               (int param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined auVar8 [16];
  int local_530;
  undefined local_529;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 ***local_518;
  undefined8 ***pppuStack_510;
  undefined8 **local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 **local_4f8;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 ***local_4d8;
  undefined8 ***pppuStack_4d0;
  undefined8 **local_4c8;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined8 ***local_4a8;
  undefined8 ***local_498;
  undefined8 **ppuStack_490;
  undefined8 uStack_488;
  code *local_480;
  undefined local_478 [8];
  undefined8 **local_470;
  undefined8 ***local_468;
  undefined8 **ppuStack_460;
  undefined8 ***local_458;
  long local_440;
  undefined8 local_438;
  undefined local_430 [1024];
  
  local_530 = param_1;
  local_438 = param_2;
  (*(code *)PTR_memset_00827610)(local_430,0,0x400);
  puVar1 = PTR__ZN3std3net3udp9UdpSocket4recv17h63af7c29c044538fE_00828818;
  local_440 = *param_3 + 0x10;
  do {
    while( true ) {
                    /* try { // try from 0049d750 to 0049d75c has its CatchHandler @ 0049dd86 */
      auVar8 = (*(code *)puVar1)(&local_530,local_430,0x400);
      lVar5 = auVar8._8_8_;
      _local_478 = auVar8;
      if (auVar8._0_8_ == 0) break;
      cVar2 = _ZN3std2io5error5Error4kind17h7f0d5435ec1cf07fE(lVar5);
      if (cVar2 != '\r') {
        local_4f8 = local_470;
        lVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
        if (lVar5 != 0) {
                    /* try { // try from 0049dac2 to 0049db02 has its CatchHandler @ 0049dd1e */
          (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h9ccf6949693ba95cE_00828828)
                    (&local_528,&local_530);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h87ce7ab9bcf554f6E
                    (&local_468,&local_528,&PTR_DAT_0080b378);
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                    (&local_4b8,&local_4f8);
          ppuStack_490 = (undefined8 **)
                         PTR__ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hb8f0b665671134daE_00828830
          ;
          local_480 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
          local_528 = &PTR_DAT_0080b2b0;
          uStack_520 = (undefined8 ***)0x2;
          local_508 = (undefined8 ***)0x0;
          local_518 = &local_498;
          pppuStack_510 = (undefined8 ****)0x2;
          local_498 = &local_468;
          uStack_488 = (undefined8 ****)&local_4b8;
                    /* try { // try from 0049db65 to 0049dbad has its CatchHandler @ 0049dcfd */
          local_4c8 = (undefined8 **)
                      (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                (&PTR_DAT_0080b390);
          local_4e8 = (undefined8 ****)&DAT_0016dc5f;
          uStack_4e0 = (undefined8 ***)0x13;
          local_4d8 = (undefined8 ***)&DAT_0016dc5f;
          pppuStack_4d0 = (undefined8 ****)0x13;
          _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_528,1,&local_4e8);
                    /* try { // try from 0049dbae to 0049dbd9 has its CatchHandler @ 0049dd1e */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_4b8);
        }
        uVar6 = (*(code *)
                  PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17hf5fa32ea0651f745E_00828820
                )(&local_530,2);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar6,&PTR_DAT_0080b3a8);
                    /* try { // try from 0049dbda to 0049dbe3 has its CatchHandler @ 0049dcf5 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_4f8);
        goto LAB_0049dbe4;
      }
                    /* try { // try from 0049d789 to 0049d795 has its CatchHandler @ 0049dd9a */
      (*(code *)PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_00828810)(0,100000000);
      if ((_local_478 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 0049d7a0 to 0049d7ac has its CatchHandler @ 0049dd86 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_470);
      }
    }
                    /* try { // try from 0049d7b0 to 0049d7be has its CatchHandler @ 0049dd9a */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_528,1,0);
    local_4a8 = local_518;
    local_4b8._0_4_ = (undefined4)local_528;
    local_4b8._4_4_ = local_528._4_4_;
    uStack_4b0 = (undefined4)uStack_520;
    uStack_4ac = uStack_520._4_4_;
    if (lVar5 - 0x3ffU < 0xfffffffffffffc02) {
                    /* try { // try from 0049d7ea to 0049d84d has its CatchHandler @ 0049dd74 */
      uVar6 = (*(code *)
                PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17hf5fa32ea0651f745E_00828820
              )(&local_530,2);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar6,&PTR_DAT_0080b360);
LAB_0049d84e:
      bVar7 = false;
    }
    else {
      local_430[lVar5] = 0;
      (*(code *)PTR__ZN4core3str8converts9from_utf817hfa72d6a448de4559E_00826ed8)
                (&local_498,local_430,0x400);
      if (((ulong)local_498 & 1) != 0) {
        uVar6 = (*(code *)
                  PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17hf5fa32ea0651f745E_00828820
                )(&local_530,2);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar6,&PTR_DAT_0080b348);
        goto LAB_0049d84e;
      }
      local_4f8 = ppuStack_490;
      uStack_4f0 = (undefined4)uStack_488;
      uStack_4ec = uStack_488._4_4_;
      uVar4 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E();
      if (3 < uVar4) {
        local_468 = &local_4f8;
        ppuStack_460 = (undefined8 **)
                       _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e99a2697242919dE;
        local_528 = &PTR_DAT_0080b2a0;
        uStack_520 = (undefined8 ***)&DAT_00000001;
        local_508 = (undefined8 ***)0x0;
        local_518 = &local_468;
        pppuStack_510 = (undefined8 ***)&DAT_00000001;
                    /* try { // try from 0049d8d8 to 0049d930 has its CatchHandler @ 0049dd74 */
        local_4c8 = (undefined8 **)
                    (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                              (&PTR_DAT_0080b2d0);
        local_4e8 = (undefined8 ****)&DAT_0016dc5f;
        uStack_4e0 = (undefined8 ***)0x13;
        local_4d8 = (undefined8 ***)&DAT_0016dc5f;
        pppuStack_4d0 = (undefined8 ****)0x13;
        _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_528,4,&local_4e8);
      }
      _ZN7flealib10fleaserver25remove_newline_characters17h03a01e77daac1003E
                (&local_528,local_4f8,CONCAT44(uStack_4ec,uStack_4f0));
                    /* try { // try from 0049d93b to 0049d947 has its CatchHandler @ 0049dd61 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
                (&local_468,uStack_520,local_518);
                    /* try { // try from 0049d948 to 0049d94f has its CatchHandler @ 0049dd4f */
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE(&local_528);
      local_4d8 = local_458;
      local_4e8 = (undefined8 ****)local_468;
      uStack_4e0 = (undefined8 ***)ppuStack_460;
                    /* try { // try from 0049d96a to 0049d984 has its CatchHandler @ 0049dd72 */
      _ZN5alloc6string6String9from_utf817hd36b3fc0ff50dc14E(&local_528,&local_4e8);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdccd02afad51252cE(&local_4e8,&local_528);
                    /* try { // try from 0049d985 to 0049d991 has its CatchHandler @ 0049dd30 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_4b8);
      local_4a8 = local_4d8;
      local_4b8._0_4_ = (undefined4)local_4e8;
      local_4b8._4_4_ = local_4e8._4_4_;
      uStack_4b0 = (undefined4)uStack_4e0;
      uStack_4ac = uStack_4e0._4_4_;
                    /* try { // try from 0049d9b4 to 0049d9c3 has its CatchHandler @ 0049dd74 */
      (*(code *)
        PTR__ZN7flealib13commandparser13CommandParser11get_command17hb7c6cafd7485ac31E_00828190)
                (&local_4e8,&local_529,uStack_4e0);
      local_518 = local_4d8;
      pppuStack_510 = pppuStack_4d0;
      local_508 = local_4c8;
      uStack_500 = uStack_4c0;
      uStack_4fc = uStack_4bc;
      local_528 = (undefined **)local_4e8;
      uStack_520 = uStack_4e0;
      bVar7 = (undefined8 ****)local_4d8 == (undefined8 ****)0x0;
      if (bVar7) {
                    /* try { // try from 0049da90 to 0049da97 has its CatchHandler @ 0049dd0f */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_528);
                    /* try { // try from 0049da98 to 0049daa1 has its CatchHandler @ 0049dd74 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&pppuStack_510)
        ;
      }
      else {
        uStack_488 = (undefined8 ****)local_4d8;
        local_498 = local_4e8;
        ppuStack_490 = uStack_4e0;
        local_458 = (undefined8 ***)CONCAT44(uStack_4bc,uStack_4c0);
        local_468 = pppuStack_4d0;
        ppuStack_460 = local_4c8;
                    /* try { // try from 0049da35 to 0049da73 has its CatchHandler @ 0049dd70 */
        uVar3 = _ZN7flealib10fleaserver6replay17h1abd155ed0ce5999E
                          (&local_530,&local_498,&local_468,local_438);
        uVar6 = (*(code *)
                  PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17hf5fa32ea0651f745E_00828820
                )(&local_530,2);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9dcf40e224f0c1bcE(uVar6,&PTR_DAT_0080b300);
        if ((uVar3 & 1) != 0) {
          _ZN4core4sync6atomic12atomic_store17hc406b6e66ce305a2E(local_440);
        }
      }
    }
                    /* try { // try from 0049d851 to 0049d85d has its CatchHandler @ 0049dd9a */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_4b8);
  } while (bVar7);
LAB_0049dbe4:
  _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17ha1973ae5d6a4418dE(local_530);
  return;
}