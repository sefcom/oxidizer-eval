ulong _ZN5uu_ls21extract_quoting_style17h200ad966f0acf148E(undefined8 param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined local_100 [8];
  undefined **local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  code *local_70;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined local_48 [32];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5fe44c4217b6c6aeE
            (&local_f8,param_1,"quoting-style",0xd);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17he9eef133f866d763E
                    ("quoting-style",0xd,&local_f8);
  if (lVar4 != 0) {
    uVar5 = _ZN5uu_ls24match_quoting_style_name17hd6c6f9cb275639d7E
                      (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),param_2 & 0xff);
    uVar3 = (uint)uVar5;
    if ((char)uVar5 == '\x04') {
      local_f8 = &PTR_s_internal_error__entered_unreacha_003868a0;
      uStack_f0 = 1;
      local_e8 = (undefined8 *)local_100;
      local_e0 = 0;
      uStack_d8 = 0;
      uVar5 = (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_0048f818)
                        (&local_f8,&PTR_s_src_uu_ls_src_ls_rs_003868e0);
                    /* catch() { ... } // from try @ 00292385 with catch @ 00292429 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
                    /* try { // try from 0029243b to 00292447 has its CatchHandler @ 0029244a */
      _ZN4core3ptr35drop_in_place_LT_std__env__Args_GT_17hb72063204d4e037fE(local_48);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_a8);
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1be309cc02ffb89cE
                (&local_68);
      uVar6 = _Unwind_Resume(uVar5);
      return uVar6;
    }
    param_2 = uVar3 >> 0x10;
    uVar7 = (uint)((ulong)uVar5 >> 8) & 0xffffff;
    goto LAB_002923cc;
  }
  cVar1 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
          )(param_1,"literal",7);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"escape",6);
    if (cVar1 != '\0') {
      uVar3 = 2;
      uVar7 = 0;
      goto LAB_002923cc;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"quote-name",10);
    if (cVar1 != '\0') {
      uVar7 = 2;
      uVar3 = 2;
      goto LAB_002923cc;
    }
    cVar1 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0048fda0
            )(param_1,"dired",5);
    if (cVar1 == '\0') {
      _ZN3std3env3var17hb36d41fbb9604b02E(&local_68,"QUOTING_STYLE",0xd);
      if (local_68 == 0) {
        local_a8 = local_60;
        uStack_a4 = uStack_5c;
        uStack_a0 = uStack_58;
        uStack_9c = uStack_54;
        local_98 = local_50;
        uVar3 = _ZN5uu_ls24match_quoting_style_name17hd6c6f9cb275639d7E
                          (CONCAT44(uStack_54,uStack_58),local_50,param_2 & 0xff);
        if ((char)uVar3 != '\x04') {
          uVar7 = uVar3 >> 8;
          param_2 = uVar3 >> 0x10;
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_60);
          goto LAB_002923cc;
        }
                    /* try { // try from 00292292 to 0029229f has its CatchHandler @ 00292450 */
        (*(code *)PTR__ZN3std3env4args17h3c7cd0de4b395b7dE_0048fdc8)(local_48);
                    /* try { // try from 002922a0 to 002922da has its CatchHandler @ 00292438 */
        (*(code *)
          PTR__ZN73__LT_std__env__Args_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0d29c3efeb1bccd1E_0048fdd0
        )(&local_88,local_48);
        local_b8 = local_78;
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_88 = &local_c8;
        uStack_80 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_78 = &local_a8;
        local_70 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_f8 = (undefined **)&DAT_003868b0;
        uStack_f0 = 3;
        uStack_d8 = 0;
        local_e0 = 2;
                    /* try { // try from 00292385 to 0029238f has its CatchHandler @ 00292429 */
        local_e8 = &local_88;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048f928)(&local_f8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_c8);
                    /* try { // try from 0029239a to 002923a6 has its CatchHandler @ 00292450 */
        _ZN4core3ptr35drop_in_place_LT_std__env__Args_GT_17hb72063204d4e037fE(local_48);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_a8);
      }
      else {
        _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__env__VarError_GT__GT_17h1be309cc02ffb89cE
                  (&local_68);
      }
      (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0048f9a0)();
      bVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h0e1d734d892dc985E();
      uVar7 = 0;
      if (bVar2 == 0) {
        uVar7 = param_2 & 0xff;
      }
      uVar3 = (uint)(byte)((bVar2 ^ 1) * '\x02' + 1);
      goto LAB_002923cc;
    }
  }
  uVar3 = 3;
  uVar7 = param_2;
LAB_002923cc:
  return (ulong)(uVar3 & 0xff | (uVar7 & 0xff) << 8 | (param_2 & 0xff) << 0x10);
}