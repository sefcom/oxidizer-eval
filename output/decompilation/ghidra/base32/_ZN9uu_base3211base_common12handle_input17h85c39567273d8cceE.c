undefined  [16]
_ZN9uu_base3211base_common12handle_input17h85c39567273d8cceE(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined auVar3 [16];
  undefined8 local_48;
  long local_40;
  undefined local_38;
  undefined7 uStack_37;
  undefined8 uVar2;
  
                    /* try { // try from 00163924 to 0016395c has its CatchHandler @ 00163a39 */
  _ZN9uu_base3211base_common11has_padding17h3e2f3a909ac9db29E(&local_40,param_1);
  if (local_40 == 0) {
    cVar1 = *(char *)(param_2 + 10);
    auVar3 = (*(code *)
               PTR__ZN9uu_base3211base_common35get_supports_fast_decode_and_encode17h8af4b430fe326b3bE_00215230
             )(2,cVar1,local_38);
    auVar3._8_8_ = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
                    /* try { // try from 0016395d to 00163978 has its CatchHandler @ 00163a23 */
    local_40 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00215238)();
    local_48 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00215240)(&local_40);
    if (cVar1 == '\0') {
      auVar3 = (*(code *)
                 PTR__ZN9uu_base3211base_common11fast_encode11fast_encode17ha8818e0efe68ac62E_00215250
               )(param_1,&
                         PTR__ZN4core3ptr86drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uu_base32__base_common__ReadSeek_GT__GT_17h7827976690eb04cfE_0020cf10
                 ,&local_48,
                 &
                 PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h293464c87ce8e591E_0020cf68
                 ,uVar2,auVar3._8_8_,*param_2,param_2[2]);
    }
    else {
                    /* try { // try from 00163987 to 001639d6 has its CatchHandler @ 00163a14 */
      auVar3 = (*(code *)
                 PTR__ZN9uu_base3211base_common11fast_decode11fast_decode17h4656aa0145473fc1E_00215248
               )(param_1,&
                         PTR__ZN4core3ptr86drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uu_base32__base_common__ReadSeek_GT__GT_17h7827976690eb04cfE_0020cf10
                 ,&local_48,
                 &
                 PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h293464c87ce8e591E_0020cf68
                 ,uVar2,auVar3._8_8_,*(undefined *)((long)param_2 + 0x29));
    }
                    /* try { // try from 001639dd to 001639e6 has its CatchHandler @ 00163a23 */
    _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h293464c87ce8e591E(&local_48);
                    /* try { // try from 001639e7 to 001639f1 has its CatchHandler @ 00163a39 */
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h28b95ed2c72bb100E
              (uVar2,auVar3._8_8_);
  }
  else {
    auVar3._9_7_ = uStack_37;
    auVar3[8] = local_38;
    auVar3._0_8_ = local_40;
  }
  _ZN4core3ptr51drop_in_place_LT_uu_base32__base_common__Config_GT_17h63e75792cc7caf14E
            (*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 6));
  return auVar3;
}