void _ZN10uu_timeout11send_signal17h21a409eed1ad1074E(undefined8 param_1,long param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  
  if (param_3 != 0) {
    uVar3 = (*(code *)
              PTR__ZN75__LT_std__process__Child_u20_as_u20_uucore__features__process__ChildExt_GT_11send_signal17hfdf2b23ac9394801E_0021ac80
            )();
LAB_0016d9e0:
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h5063ce8deb86dfa9E
              (uVar3);
    return;
  }
  uVar3 = (*(code *)
            PTR__ZN75__LT_std__process__Child_u20_as_u20_uucore__features__process__ChildExt_GT_17send_signal_group17h0afa37538c8ccec5E_0021ac88
          )();
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h5063ce8deb86dfa9E
            (uVar3);
  bVar2 = (*(code *)
            PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_0021ac48)
                    (&DAT_0011b250,4);
  if ((bVar2 & 1) == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
              (&PTR_s_src_uu_timeout_src_timeout_rs_00212830);
  }
  else {
    bVar2 = (*(code *)
              PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_0021ac48)
                      (&DAT_0011b1c4,4);
    if ((bVar2 & 1) != 0) {
      if (param_2 == CONCAT44(extraout_var,extraout_EDX) ||
          param_2 == CONCAT44(extraout_var_00,extraout_EDX_00)) {
        return;
      }
      uVar3 = (*(code *)
                PTR__ZN75__LT_std__process__Child_u20_as_u20_uucore__features__process__ChildExt_GT_17send_signal_group17h0afa37538c8ccec5E_0021ac88
              )(param_1,CONCAT44(extraout_var_00,extraout_EDX_00));
      goto LAB_0016d9e0;
    }
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
            (&PTR_s_src_uu_timeout_src_timeout_rs_00212848);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}