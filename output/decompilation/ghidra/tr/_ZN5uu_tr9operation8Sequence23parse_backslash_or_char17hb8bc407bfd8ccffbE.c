void _ZN5uu_tr9operation8Sequence23parse_backslash_or_char17hb8bc407bfd8ccffbE
               (int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined auStack_a8 [32];
  undefined8 auStack_88 [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined auStack_38 [24];
  
  uVar1 = _ZN4core5clone5impls54__LT_impl_u20_core__clone__Clone_u20_for_u20__RF_T_GT_5clone17h1538e72c66486825E
                    (param_2,param_3);
  _ZN60__LT_F_u20_as_u20_nom__internal__Parser_LT_I_C_O_C_E_GT__GT_5parse17h06db41503087c7daE
            (&iStack_e8,uVar1);
  iStack_100 = iStack_e0;
  iStack_fc = iStack_dc;
  iStack_f8 = iStack_d8;
  iStack_f4 = iStack_d4;
  iVar2 = iStack_d0;
  iVar3 = iStack_cc;
  if (iStack_e8 == 1) {
    uVar1 = _ZN4core5clone5impls54__LT_impl_u20_core__clone__Clone_u20_for_u20__RF_T_GT_5clone17h1538e72c66486825E
                      (param_2,param_3);
    _ZN60__LT_F_u20_as_u20_nom__internal__Parser_LT_I_C_O_C_E_GT__GT_5parse17h60348b5970ef8189E
              (&iStack_c8,uVar1);
    iStack_e8 = iStack_c8;
    iStack_e4 = iStack_c4;
    iStack_100 = iStack_c0;
    iStack_fc = iStack_bc;
    iStack_f8 = iStack_b8;
    iStack_f4 = iStack_b4;
    iVar2 = iStack_b0;
    iVar3 = iStack_ac;
    if (iStack_c8 == 1) {
      iStack_f8 = iStack_d0;
      iStack_f4 = iStack_cc;
      iStack_108 = iStack_e0;
      iStack_104 = iStack_dc;
      iStack_100 = iStack_d8;
      iStack_fc = iStack_d4;
      _ZN3nom5error10ParseError2or17h4e85debcc3dcf902E(&uStack_50,&iStack_108,auStack_a8);
      uVar1 = _ZN4core5clone5impls54__LT_impl_u20_core__clone__Clone_u20_for_u20__RF_T_GT_5clone17h1538e72c66486825E
                        (param_2,param_3);
      _ZN60__LT_F_u20_as_u20_nom__internal__Parser_LT_I_C_O_C_E_GT__GT_5parse17h0c4ea6eb88e9c754E
                (&iStack_108,uVar1);
      iStack_e8 = iStack_108;
      iStack_e4 = iStack_104;
      iVar2 = iStack_f0;
      iVar3 = iStack_ec;
      if (iStack_108 == 1) {
        auStack_88[0] = CONCAT44(iStack_fc,iStack_100);
        uStack_58 = uStack_40;
        uStack_68 = uStack_50;
        uStack_64 = uStack_4c;
        uStack_60 = uStack_48;
        uStack_5c = uStack_44;
        _ZN3nom5error10ParseError2or17h4e85debcc3dcf902E(auStack_38,&uStack_68,auStack_88);
        _ZN78__LT_nom__error__Error_LT_I_GT__u20_as_u20_nom__error__ParseError_LT_I_GT__GT_6append17h2983ae90d84fbe72E
                  (param_1 + 2,param_2,param_3,3,auStack_38);
        param_1[0] = 1;
        param_1[1] = 0;
        return;
      }
    }
  }
  param_1[4] = iStack_f8;
  param_1[5] = iStack_f4;
  param_1[6] = iVar2;
  param_1[7] = iVar3;
  *param_1 = iStack_e8;
  param_1[1] = iStack_e4;
  param_1[2] = iStack_100;
  param_1[3] = iStack_fc;
  return;
}