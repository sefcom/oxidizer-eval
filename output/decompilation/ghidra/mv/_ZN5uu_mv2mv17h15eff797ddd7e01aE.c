undefined  [16] _ZN5uu_mv2mv17h15eff797ddd7e01aE(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined local_60 [8];
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN5uu_mv11parse_paths17hd84bd62365a1b7ccE
            (local_60,param_1,param_2,*(undefined *)(param_3 + 0x32));
  if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
    if (local_50 == 2) {
                    /* try { // try from 001e9e44 to 001e9e6d has its CatchHandler @ 001e9eec */
      auVar2 = _ZN5uu_mv16handle_two_paths17hbd0a81168087f696E
                         (*(undefined8 *)(local_58 + 8),*(undefined8 *)(local_58 + 0x10),
                          *(undefined8 *)(local_58 + 0x20),*(undefined8 *)(local_58 + 0x28),param_3)
      ;
    }
    else {
                    /* try { // try from 001e9eb5 to 001e9ebc has its CatchHandler @ 001e9eec */
      auVar2 = _ZN5uu_mv21handle_multiple_paths17h86c7b11f84ad2502E(local_58,local_50,param_3);
    }
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h6a57a393af247306E
              (local_60);
  }
  else {
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E
              (&local_30,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    local_38 = local_20;
    local_48 = local_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    uStack_3c = uStack_24;
                    /* try { // try from 001e9e87 to 001e9e94 has its CatchHandler @ 001e9edd */
    uVar1 = _ZN5uu_mv19move_files_into_dir17hea74a81b456dd214E
                      (local_58,local_50,CONCAT44(uStack_24,uStack_28),local_20,param_3);
                    /* try { // try from 001e9e95 to 001e9ea1 has its CatchHandler @ 001e9eec */
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hcf72403e0182be36E(&local_48);
    _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h6a57a393af247306E
              (local_60);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr42drop_in_place_LT_uu_mv__error__MvError_GT_17hb0f2c59e69cfedd9E_00287eb8
    ;
    auVar2._0_8_ = uVar1;
  }
  return auVar2;
}