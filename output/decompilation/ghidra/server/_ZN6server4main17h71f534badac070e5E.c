void _ZN6server4main17h71f534badac070e5E(void)

{
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  int *local_b8;
  undefined **local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_80;
  code *local_78;
  int *local_70;
  code *local_68;
  int local_60 [4];
  undefined local_50 [32];
  
  _ZN3std3net3tcp11TcpListener4bind17h6878a6b6f0b0ddd4E(&local_b0,"192.168.0.9:8080",0x10);
  local_c4 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9fdd00db71c10f1aE(&local_b0);
  local_b0 = &PTR_s_Listening_on_port_8080____0016b688;
  local_a8 = 1;
  local_a0 = (undefined **)0x1562d0;
  local_98 = 0;
  uStack_90 = 0;
                    /* try { // try from 0010ddbf to 0010ddc9 has its CatchHandler @ 0010dec8 */
  (*(code *)PTR__ZN3std2io5stdio6_print17h64077f6090d28911E_0016eb08)(&local_b0);
  local_bc = 0;
  local_b8 = &local_c4;
  while( true ) {
                    /* try { // try from 0010de00 to 0010de20 has its CatchHandler @ 0010decc */
    (*(code *)
      PTR__ZN82__LT_std__net__tcp__Incoming_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf6f55b5493f73e35E_0016ede0
    )(local_60,&local_b8);
    if (local_60[0] == 2) break;
    local_c0 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17h3dae975375e4873fE(local_60);
                    /* try { // try from 0010de25 to 0010de8f has its CatchHandler @ 0010ded1 */
    (*(code *)PTR__ZN3std3net3tcp9TcpStream9peer_addr17h16381829ee6ca785E_0016ed60)
              (&local_b0,&local_c0);
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h37345e45b95a9fadE(local_50,&local_b0);
    local_78 = 
    _ZN73__LT_core__net__socket_addr__SocketAddr_u20_as_u20_core__fmt__Display_GT_3fmt17h08ec6da075bafa7bE
    ;
    local_70 = &local_bc;
    local_68 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h55f9e13eb244e3e4E
    ;
    local_b0 = (undefined **)&DAT_0016b6b0;
    local_a8 = 3;
    uStack_90 = 0;
    local_98 = 2;
    local_a0 = &local_80;
    local_80 = local_50;
    _ZN3std2io5stdio6_print17h64077f6090d28911E(&local_b0);
                    /* try { // try from 0010de94 to 0010dea3 has its CatchHandler @ 0010deca */
    _ZN3std6thread5spawn17hd809fa612a707511E(&local_b0,local_c0);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h99b68376bec15c1aE
              (&local_b0);
    local_bc = local_bc + 1;
  }
  _ZN4core3ptr45drop_in_place_LT_std__net__tcp__TcpStream_GT_17haee64bd767160edcE(local_c4);
  return;
}