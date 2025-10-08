long _ZN7uu_tail10tail_stdin17h9b2bb4973e46bb0aE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  char cStack_ac;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  (*(code *)PTR__ZN7uu_tail5paths5Input7resolve17h84f3e048eaef79fbE_0027d8b0)(&local_48,param_3);
  local_90 = local_38;
                    /* try { // try from 001a73ad to 001a73c8 has its CatchHandler @ 001a7514 */
  (*(code *)PTR__ZN9same_file6Handle5stdin17h12b97f800844609dE_0027d778)(&local_c0);
  if (cStack_ac == '\x02') {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_same_file__Handle_C_std__io__error__Error_GT__GT_17h399f1d3fde9c021aE
              (&local_c0);
    uVar1 = 0;
  }
  else {
    local_88 = local_c0;
    uStack_84 = uStack_bc;
    uStack_80 = uStack_b8;
    uStack_7c = uStack_b4;
                    /* try { // try from 001a73e2 to 001a741b has its CatchHandler @ 001a74ee */
    uVar1 = (*(code *)PTR__ZN9same_file6Handle11as_file_mut17hcd780b03a6979da7E_0027d8e8)(&local_88)
    ;
    local_58 = (*(code *)
                 PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_15stream_position17hea3f1471eccd6c38E_0027d7c0
               )(uVar1);
    uVar1 = 0;
    if ((local_58 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar1 = local_58._8_8_;
    }
    _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17hdbd92671f07abc68E
              (local_58);
                    /* try { // try from 001a741c to 001a7425 has its CatchHandler @ 001a74d4 */
    _ZN4core3ptr38drop_in_place_LT_same_file__Handle_GT_17hfc3648d48d8d9f0aE(&local_88);
    if (cStack_ac == '\x02') {
                    /* try { // try from 001a742d to 001a7455 has its CatchHandler @ 001a7514 */
      _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_same_file__Handle_C_std__io__error__Error_GT__GT_17h399f1d3fde9c021aE
                (&local_c0);
    }
  }
  lVar2 = _ZN7uu_tail9tail_file17h810e2a2864f554f6E
                    (param_1,param_2,param_3,local_40,local_90,param_4,uVar1);
  if (lVar2 == 0) {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_48,local_40);
    lVar2 = 0;
  }
  else {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(local_48,local_40);
  }
  return lVar2;
}