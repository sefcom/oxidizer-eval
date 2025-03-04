undefined8 *
_ZN7uu_head11HeadOptions8get_from17h1adb6e5857002fb6E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined uStack_108;
  undefined uStack_107;
  undefined uStack_106;
  undefined uStack_105;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
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
  
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_106 = 0;
  uStack_105 = 10;
  local_130 = 0;
  uStack_128 = 10;
  local_120 = 0;
  uStack_118 = 8;
  local_110 = 0;
                    /* try { // try from 001b9035 to 001b9171 has its CatchHandler @ 001b9265 */
  uStack_108 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                         (param_2,"QUIET",5);
  uStack_107 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                         (param_2,"VERBOSE",7);
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00114b80,4);
  uStack_105 = 10;
  if (cVar1 != '\0') {
    uStack_105 = 0;
  }
  uStack_106 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                         (param_2,"-PRESUME-INPUT-PIPE",0x13);
  _ZN7uu_head4Mode4from17h53e4fee035ad00eeE(&local_100,param_2);
  if (CONCAT44(uStack_fc,local_100) == -0x8000000000000000) {
    uStack_128 = local_f0;
    local_130 = CONCAT44(uStack_f4,uStack_f8);
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17ha4c1e75b78057a64E
              (&local_100,param_2,&DAT_00114bd8,4);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17h8f4dae56b5df2536E
              (&local_b8,&DAT_00114bd8,4,&local_100);
    if (CONCAT44(uStack_b4,local_b8) == 0) {
      puVar2 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(0x18);
      if (puVar2 == (undefined4 *)0x0) {
                    /* try { // try from 001b9231 to 001b9240 has its CatchHandler @ 001b9265 */
                    /* WARNING: Subroutine does not return */
        _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
      }
                    /* try { // try from 001b91a9 to 001b91b5 has its CatchHandler @ 001b9241 */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h06f047f66f37fa7fE
                (&local_100);
      local_68 = local_f0;
      local_78 = local_100;
      uStack_74 = uStack_fc;
      uStack_70 = uStack_f8;
      uStack_6c = uStack_f4;
      *(undefined8 *)(puVar2 + 4) = local_f0;
      *puVar2 = local_100;
      puVar2[1] = uStack_fc;
      puVar2[2] = uStack_f8;
      puVar2[3] = uStack_f4;
                    /* try { // try from 001b91d8 to 001b91e9 has its CatchHandler @ 001b9265 */
      _ZN5alloc5slice4hack8into_vec17h74676bea9ecbbd9eE(&local_100,puVar2,1);
    }
    else {
      local_28 = local_88;
      uStack_24 = uStack_84;
      uStack_20 = uStack_80;
      uStack_1c = uStack_7c;
      local_38 = local_98;
      uStack_34 = uStack_94;
      uStack_30 = uStack_90;
      uStack_2c = uStack_8c;
      local_48 = local_a8;
      uStack_44 = uStack_a4;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      local_58 = local_b8;
      uStack_54 = uStack_b4;
      uStack_50 = uStack_b0;
      uStack_4c = uStack_ac;
      _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h37bc116ad277ef43E
                (&local_100,&local_58);
    }
                    /* try { // try from 001b91ea to 001b91f6 has its CatchHandler @ 001b924e */
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h206ae2e6ae342018E
              (&local_120);
    param_1[4] = local_f0;
    param_1[5] = CONCAT44(uStack_104,
                          CONCAT13(uStack_105,CONCAT12(uStack_106,CONCAT11(uStack_107,uStack_108))))
    ;
    param_1[2] = CONCAT44(uStack_fc,local_100);
    param_1[3] = CONCAT44(uStack_f4,uStack_f8);
    *param_1 = local_130;
    param_1[1] = uStack_128;
  }
  else {
    param_1[1] = CONCAT44(uStack_fc,local_100);
    param_1[2] = CONCAT44(uStack_f4,uStack_f8);
    param_1[3] = local_f0;
    *param_1 = 4;
    _ZN4core3ptr41drop_in_place_LT_uu_head__HeadOptions_GT_17he2adba56d7eff629E(&local_130);
  }
  return param_1;
}