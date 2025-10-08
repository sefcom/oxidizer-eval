void _ZN5uu_od12parse_inputs12parse_inputs17h1f9db538cc1aaf10E
               (undefined4 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_70;
  undefined8 *local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  (*(code *)
    PTR__ZN111__LT_clap_builder__parser__matches__arg_matches__ArgMatches_u20_as_u20_uu_od__parse_inputs__CommandLineOpts_GT_6inputs17hd5c4f428119deff7E_0020acb8
  )(&local_70);
                    /* try { // try from 0016a63f to 0016a79d has its CatchHandler @ 0016a7c0 */
  cVar4 = (*(code *)
            PTR__ZN111__LT_clap_builder__parser__matches__arg_matches__ArgMatches_u20_as_u20_uu_od__parse_inputs__CommandLineOpts_GT_12opts_present17hc8a26ccd0056d3c1E_0020acc0
          )(param_2,&PTR_s_traditional_00202680,1);
  if (cVar4 != '\0') {
    _ZN5uu_od12parse_inputs24parse_inputs_traditional17h309c9994ef0b8cb9E(param_1,local_68,local_60)
    ;
    puVar6 = local_68;
    goto LAB_0016a77a;
  }
  uVar1 = local_60 - 1;
  if (uVar1 < 2) {
    cVar4 = (*(code *)
              PTR__ZN111__LT_clap_builder__parser__matches__arg_matches__ArgMatches_u20_as_u20_uu_od__parse_inputs__CommandLineOpts_GT_12opts_present17hc8a26ccd0056d3c1E_0020acc0
            )(param_2,&PTR_s_address_radix_00202690,6);
    puVar6 = local_68;
    if ((cVar4 == '\0') &&
       (_ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
                  (&local_40,local_68[uVar1 * 2],local_68[uVar1 * 2 + 1]), local_40 == 0)) {
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if (local_60 == 1) {
        local_58 = 0;
        uVar5 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2b,&local_58);
        cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha3dd105fff9094a1E
                          (uVar2,uVar3,uVar5,1);
        if (cVar4 == '\0') goto LAB_0016a73e;
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (&local_58,"-",1);
      }
      else {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (&local_58,uVar2,uVar3);
      }
      *(undefined8 *)(param_1 + 4) = local_48;
      *param_1 = local_58;
      param_1[1] = uStack_54;
      param_1[2] = uStack_50;
      param_1[3] = uStack_4c;
      *(undefined8 *)(param_1 + 6) = local_38;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_0016a77a;
    }
  }
  else if (local_60 == 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hacc0453763c86b18E(&local_70);
  }
LAB_0016a73e:
  _ZN4core4iter6traits8iterator8Iterator7collect17h449e225e68ca9fd4E
            (&local_58,local_68,local_68 + local_60 * 2);
  *(undefined8 *)(param_1 + 4) = local_48;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  *(undefined8 *)(param_1 + 8) = 2;
  puVar6 = local_68;
LAB_0016a77a:
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h6028a1e48c9fce9bE
            (local_70,puVar6);
  return;
}