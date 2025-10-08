void _ZN6uu_env13string_parser12StringParser24get_chunk_with_length_at17h90aefca5fb8ee726E
               (undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined extraout_DL;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_48 [16];
  undefined *local_38;
  long local_30;
  
  if ((ulong)param_2[1] < param_3) {
    local_78 = &PTR_s_mid_>_len_002104e8;
    local_70 = 1;
    local_68 = 8;
    local_60 = 0;
    uStack_58 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00219100)
              (&local_78,&PTR_DAT_002106c0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_18split_at_unchecked17h4b20b73ec557817aE
            (local_48,*param_2);
  if (local_30 == 0) {
    param_1[1] = param_2[4];
    *(undefined *)(param_1 + 2) = 0;
    uVar6 = 1;
  }
  else {
    iVar3 = (*(code *)
              PTR__ZN6uu_env14native_int_str24get_char_from_native_int17h55c3dbad16c71881E_002192d0)
                      (*local_38);
    puVar2 = PTR__ZN6uu_env14native_int_str24get_char_from_native_int17h55c3dbad16c71881E_002192d0;
    if (iVar3 == 0x110000) {
      lVar4 = 1;
      lVar5 = lVar4;
      if (local_30 != 1) {
        do {
          iVar3 = (*(code *)puVar2)(local_38[lVar4]);
          lVar5 = lVar4;
          if (iVar3 != 0x110000) break;
          lVar4 = lVar4 + 1;
          lVar5 = local_30;
        } while (local_30 != lVar4);
      }
      uVar6 = 0;
      auVar7 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h8f98cd73861384d7E
                         (0,lVar5,local_38,local_30,&PTR_DAT_002106d8);
      *(undefined (*) [16])(param_1 + 1) = auVar7;
      param_1[3] = auVar7._8_8_;
    }
    else {
      param_1[1] = 0;
      *(int *)(param_1 + 2) = iVar3;
      *(undefined *)((long)param_1 + 0x14) = extraout_DL;
      param_1[3] = 1;
      uVar6 = 0;
    }
  }
  *param_1 = uVar6;
  return;
}