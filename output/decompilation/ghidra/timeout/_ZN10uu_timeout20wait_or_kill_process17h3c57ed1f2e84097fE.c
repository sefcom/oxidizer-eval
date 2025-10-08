void _ZN10uu_timeout20wait_or_kill_process17h3c57ed1f2e84097fE
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,char param_7,undefined param_8,
               undefined param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  int local_40 [2];
  undefined8 local_38;
  
  local_50 = param_3;
  local_48 = param_4;
  (*(code *)
    PTR__ZN75__LT_std__process__Child_u20_as_u20_uucore__features__process__ChildExt_GT_15wait_or_timeout17he25bb3510a5d6b08E_0021ac90
  )(&local_60,param_2,param_5,param_6);
  uVar3 = 0x7c;
  if (local_60 == 0) {
    if (local_5c == 1) {
      uVar3 = 0x7d;
      if (param_7 != '\0') {
        uVar3 = local_58 & 0x7f;
        if (uVar3 == 0) {
          uVar3 = local_58 >> 8 & 0xff;
        }
        else if ((char)((char)uVar3 + '\x01') < '\x02') {
          ppuVar4 = &PTR_s_src_uu_timeout_src_timeout_rs_00212878;
          goto LAB_0016db31;
        }
      }
    }
    else {
                    /* try { // try from 0016dab3 to 0016db36 has its CatchHandler @ 0016db39 */
      auVar5 = (*(code *)
                 PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_0021ac48
               )(&DAT_0011b250,4);
      if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        ppuVar4 = &PTR_s_src_uu_timeout_src_timeout_rs_00212860;
LAB_0016db31:
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)(ppuVar4);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      _ZN10uu_timeout17report_if_verbose17ha1199c5238d9a8e5E(auVar5._8_8_,local_50,local_48,param_9)
      ;
      _ZN10uu_timeout11send_signal17h21a409eed1ad1074E(param_2,auVar5._8_8_,param_8);
      (*(code *)PTR__ZN3std7process5Child4wait17h7e33de4911114104E_0021ac98)(local_40,param_2);
      if (local_40[0] == 1) {
        *(undefined8 *)(param_1 + 2) = local_38;
        uVar2 = 1;
        goto LAB_0016da6a;
      }
      uVar3 = auVar5._8_4_ + 0x80;
    }
  }
  param_1[1] = uVar3;
  uVar2 = 0;
LAB_0016da6a:
  *param_1 = uVar2;
  _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_std__process__ExitStatus_GT__C_std__io__error__Error_GT__GT_17hb9c9de528993b73fE
            (local_60,CONCAT44(uStack_54,local_58));
  return;
}