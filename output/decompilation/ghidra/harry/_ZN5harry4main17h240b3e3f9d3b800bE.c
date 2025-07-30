void _ZN5harry4main17h240b3e3f9d3b800bE(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [12];
  int local_170;
  int local_16c;
  undefined8 *local_168;
  uint local_15c;
  undefined **local_158;
  undefined8 uStack_150;
  char *pcStack_148;
  undefined **local_140;
  code *local_138;
  undefined8 **local_110;
  code *local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 *local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_b8;
  undefined8 local_b0;
  undefined local_a8 [12];
  undefined8 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *local_70 [2];
  undefined8 local_60;
  int local_58;
  int local_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_140 = &PTR_s_7869_00174000;
  local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h55d6a8b466f9fb98E;
  _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
            (&local_e8,&PTR_s_0_0_0_0__closed_00174010,1,&local_140,1);
  _ZN5alloc3fmt6format17hc41d8db97b3bb714E(local_70,&local_e8);
  local_b8 = local_70[0];
  local_b0 = local_60;
                    /* try { // try from 0010bf60 to 0010bf65 has its CatchHandler @ 0010c53a */
  local_a8 = (*(code *)PTR__ZN3std4time7Instant3now17h496a7553e3911a50E_001776e0)();
  do {
    while( true ) {
      local_140 = &local_b8;
      local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h55d6a8b466f9fb98E;
                    /* try { // try from 0010bfb9 to 0010c009 has its CatchHandler @ 0010c4ef */
      _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
                (&local_e8,&PTR_s_Binding_to_00174020,2,&local_140,1);
      (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
      _ZN3std3net9each_addr17h84bf5175266a12e1E(&local_e8,local_b8,local_b0);
      _ZN4core6result19Result_LT_T_C_E_GT_3map17h6c1fa2fed6e72495E(&local_140,&local_e8);
      local_170 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h7005adc39a822520E(&local_140);
      local_e8 = &PTR_s_Waiting_for_connection_00174058;
      uStack_e0 = 1;
      local_d8 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rs";
      local_d0 = 0;
      uStack_c8 = 0;
                    /* try { // try from 0010c043 to 0010c05e has its CatchHandler @ 0010c4d2 */
      (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
      (*(code *)PTR__ZN3std3net3tcp11TcpListener6accept17hb039f0b1ecf9d320E_00177988)
                (&local_58,&local_170);
      if (local_58 == 0) break;
      local_140 = (undefined **)&local_98;
      local_138 = 
      _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha06740198faf5823E;
                    /* try { // try from 0010c092 to 0010c0b7 has its CatchHandler @ 0010c4b1 */
      _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
                (&local_e8,&PTR_s_Error__001740e8,2,&local_140,1);
      (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
                    /* try { // try from 0010c0b8 to 0010c0c4 has its CatchHandler @ 0010c4a7 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17ha602bf7ed800fc68E(&local_98);
                    /* try { // try from 0010c0c9 to 0010c0cd has its CatchHandler @ 0010c4ef */
      _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17h9b88f3dc8a6d30d8E(local_170);
    }
    local_16c = local_54;
    local_88 = local_40;
    uStack_84 = uStack_3c;
    uStack_80 = uStack_38;
    uStack_7c = uStack_34;
    uStack_90 = uStack_48;
    uStack_8c = uStack_44;
    local_140 = (undefined **)&local_98;
    local_138 = 
    _ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17h0801164e00af01bbE
    ;
                    /* try { // try from 0010c123 to 0010c148 has its CatchHandler @ 0010c4a5 */
    _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
              (&local_e8,&PTR_s_Got_connection_from_00174068,2,&local_140,1);
    (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
    local_15c = 0;
    while( true ) {
                    /* try { // try from 0010c15c to 0010c16b has its CatchHandler @ 0010c4a1 */
      _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc75773a6223aa268E
                (&local_140,0x2000,&local_16c);
      local_158 = (undefined **)0x1;
      uStack_150 = 0;
      pcStack_148 = (char *)0x0;
                    /* try { // try from 0010c180 to 0010c18d has its CatchHandler @ 0010c49f */
      _ZN3std2io16append_to_string17h8a48f86863967257E(&local_f8,&local_158,&local_140);
      if (local_f8 == 0) break;
      while( true ) {
        local_168 = local_f0;
        local_110 = &local_168;
        local_108 = 
        _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha06740198faf5823E;
                    /* try { // try from 0010c1c0 to 0010c1e5 has its CatchHandler @ 0010c4c3 */
        _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
                  (&local_e8,&PTR_s_Error__001740e8,2,&local_110,1);
        (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
                    /* try { // try from 0010c1e6 to 0010c1ef has its CatchHandler @ 0010c4e0 */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17ha602bf7ed800fc68E(&local_168);
LAB_0010c1f0:
                    /* try { // try from 0010c1f0 to 0010c1f7 has its CatchHandler @ 0010c4af */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82ac9a33f2cb35fcE(&local_158);
        _ZN4core3ptr84drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF__u5b_u8_u5d__GT__GT_17hc3fc27d3d4938943E
                  (local_140,local_138);
        if ((local_15c & 1) == 0) break;
        while( true ) {
                    /* try { // try from 0010c220 to 0010c22f has its CatchHandler @ 0010c500 */
          _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hc75773a6223aa268E
                    (&local_140,0x2000,&local_16c);
          local_158 = (undefined **)0x1;
          uStack_150 = 0;
          pcStack_148 = (char *)0x0;
                    /* try { // try from 0010c244 to 0010c251 has its CatchHandler @ 0010c4f1 */
          _ZN3std2io16append_to_string17h8a48f86863967257E(&local_f8,&local_158,&local_140);
          if (local_f8 != 0) break;
          if ((undefined ***)local_f0 == (undefined ***)0x0) goto LAB_0010c430;
          _ZN5alloc6string6String3pop17hfca843d401cd7607E(&local_158);
          local_d8 = pcStack_148;
          local_e8 = local_158;
          uStack_e0 = uStack_150;
                    /* try { // try from 0010c292 to 0010c29c has its CatchHandler @ 0010c505 */
          _ZN5harry4exec17hac2f1647ab723fafE(&local_110,&local_e8);
                    /* try { // try from 0010c2a7 to 0010c2ba has its CatchHandler @ 0010c50a */
          (*(code *)
            PTR__ZN59__LT_std__net__tcp__TcpStream_u20_as_u20_std__io__Write_GT_5write17hebf94214be7bc141E_00177a80
          )(&local_e8,&local_16c,local_110,local_100);
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hf978b148e834039cE
                    (&local_e8);
                    /* try { // try from 0010c2bb to 0010c2c2 has its CatchHandler @ 0010c505 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82ac9a33f2cb35fcE(&local_110);
          _ZN4core3ptr84drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF__u5b_u8_u5d__GT__GT_17hc3fc27d3d4938943E
                    (local_140,local_138);
        }
      }
    }
    if ((undefined ***)local_f0 != (undefined ***)0x0) {
      _ZN5alloc6string6String3pop17hfca843d401cd7607E(&local_158);
      local_e8 = &PTR_s_Not_authenticated__Waiting_for_p_001740a8;
      uStack_e0 = 1;
      local_d8 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rs";
      local_d0 = 0;
      uStack_c8 = 0;
                    /* try { // try from 0010c323 to 0010c424 has its CatchHandler @ 0010c4e0 */
      (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
      cVar1 = _ZN5harry11verify_sha317hc08f6c9d2a5e4aaeE(local_158,pcStack_148);
      if (cVar1 != '\0') {
        auVar3 = (*(code *)PTR__ZN3std4time7Instant7elapsed17h73f0bb44a1ed6627E_001777a8)(local_a8);
        cVar1 = _ZN62__LT_core__time__Duration_u20_as_u20_core__cmp__PartialOrd_GT_11partial_cmp17h3e58c3a3fa7a0a4eE
                          (auVar3._0_8_,auVar3._8_4_,1,0);
        if (cVar1 != -1) {
          local_e8 = &PTR_s_Auth_success_001740d8;
          uStack_e0 = 1;
          local_d8 = "/rustc/1b198b3a196442e14fb06978166ab46a4618d131/library/core/src/fmt/mod.rs";
          local_d0 = 0;
          uStack_c8 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
          (*(code *)
            PTR__ZN59__LT_std__net__tcp__TcpStream_u20_as_u20_std__io__Write_GT_5write17hebf94214be7bc141E_00177a80
          )(&local_e8,&local_16c,"Authenticated!\n");
          uVar2 = _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hf978b148e834039cE
                            (&local_e8);
          local_15c = (uint)CONCAT71((int7)((ulong)uVar2 >> 8),1);
          goto LAB_0010c1f0;
        }
      }
      auVar3 = (*(code *)PTR__ZN3std4time7Instant3now17h496a7553e3911a50E_001776e0)();
      local_110 = &local_168;
      local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9a842562ad49cb5bE;
      local_168 = &local_158;
      local_a8 = auVar3;
      _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
                (&local_e8,&PTR_s_Wrong_password_or_too_quick__001740b8,2,&local_110,1);
      (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
      goto LAB_0010c1f0;
    }
LAB_0010c430:
    local_110 = &local_98;
    local_108 = 
    _ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17h0801164e00af01bbE
    ;
                    /* try { // try from 0010c449 to 0010c46e has its CatchHandler @ 0010c4a3 */
    _ZN4core3fmt9Arguments6new_v117h72a5ca90758d0a10E
              (&local_e8,&PTR_s_Socket_with_00174088,2,&local_110,1);
    (*(code *)PTR__ZN3std2io5stdio6_print17hbcfcc64486c1a1dbE_00177908)(&local_e8);
                    /* try { // try from 0010c46f to 0010c476 has its CatchHandler @ 0010c49d */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h82ac9a33f2cb35fcE(&local_158);
    _ZN4core3ptr84drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF__u5b_u8_u5d__GT__GT_17hc3fc27d3d4938943E
              (local_140,local_138);
                    /* try { // try from 0010c48a to 0010c48e has its CatchHandler @ 0010c4a7 */
    _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17h9b88f3dc8a6d30d8E(local_16c);
                    /* try { // try from 0010c493 to 0010c497 has its CatchHandler @ 0010c4ef */
    _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17h9b88f3dc8a6d30d8E(local_170);
  } while( true );
}