undefined8 *
_ZN7uu_head11HeadOptions8get_from17h77af4328ac91ca1fE(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  char cVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  uStack_b8 = 0xa000000;
  local_e0 = 0;
  uStack_d8 = 10;
  local_d0 = 0;
  uStack_c8 = 8;
  local_c0 = 0;
                    /* try { // try from 00166fc5 to 0016709e has its CatchHandler @ 001671a6 */
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe8c8
          )(param_2,"QUIET",5);
  uStack_b8 = CONCAT31(uStack_b8._1_3_,uVar1);
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe8c8
          )(param_2,"VERBOSE",7);
  uStack_b8._0_2_ = CONCAT11(uVar1,(undefined)uStack_b8);
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe8c8
          )(param_2,&DAT_00118e94,4);
  uVar1 = 10;
  if (cVar2 != '\0') {
    uVar1 = 0;
  }
  uStack_b8 = CONCAT13(uVar1,(undefined3)uStack_b8);
  uVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001fe8c8
          )(param_2,"-PRESUME-INPUT-PIPE",0x13);
  uStack_b8._0_3_ = CONCAT12(uVar1,(undefined2)uStack_b8);
  _ZN7uu_head4Mode4from17h83e29ab46b97bf14E(&local_b0,param_2);
  param_1[1] = local_b0;
  param_1[2] = uStack_a8;
  param_1[3] = local_a0;
  *param_1 = 4;
  _ZN4core3ptr41drop_in_place_LT_uu_head__HeadOptions_GT_17h4c6cc8b30da4bb08E(&local_e0);
  return param_1;
}