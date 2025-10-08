undefined8 *
_ZN4just8function11blake3_file17hf625b0285e7f8a1cE
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined auVar1 [16];
  undefined auStack_7f8 [8];
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined8 local_7d0;
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined8 local_7b0;
  undefined local_7a8 [8];
  undefined8 local_7a0;
  undefined8 local_798;
  
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (local_7a8,*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_2 + 0x18));
                    /* try { // try from 0036985b to 0036986b has its CatchHandler @ 0036993b */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(auStack_7f8,local_7a0,local_798,param_3,param_4);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_7a8);
                    /* try { // try from 00369876 to 00369880 has its CatchHandler @ 00369925 */
  (*(code *)PTR__ZN6blake36Hasher3new17hbcd0a691c6ef1979E_00566b60)(local_7a8);
                    /* try { // try from 00369881 to 003698e5 has its CatchHandler @ 0036994e */
  auVar1 = _ZN6blake36Hasher17update_mmap_rayon17h78bb7ce06a0011c0E(local_7a8,auStack_7f8);
  if ((auVar1 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    (*(code *)PTR__ZN6blake36Hasher8finalize17hacf7df9bac138be6E_00566b68)(&local_7e0,local_7a8);
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h2ede3b6c558812d5E
              (&local_7c0,&local_7e0);
    param_1[3] = local_7b0;
    *(undefined4 *)(param_1 + 1) = local_7c0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_7bc;
    *(undefined4 *)(param_1 + 2) = uStack_7b8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_7b4;
    *param_1 = 0;
  }
  else {
    _ZN4just8function11blake3_file28__u7b__u7b_closure_u7d__u7d_17h1ac425ac0e95b01aE
              (&local_7e0,local_7f0,local_7e8,auVar1._8_8_);
    *(undefined4 *)(param_1 + 1) = local_7e0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_7dc;
    *(undefined4 *)(param_1 + 2) = uStack_7d8;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_7d4;
    param_1[3] = local_7d0;
    *param_1 = 1;
  }
  _ZN4core3ptr35drop_in_place_LT_blake3__Hasher_GT_17hdd4ba21756554abfE(local_7a8);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(auStack_7f8);
  return param_1;
}