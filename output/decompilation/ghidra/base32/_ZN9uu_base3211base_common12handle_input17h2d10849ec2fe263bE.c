undefined  [16]
_ZN9uu_base3211base_common12handle_input17h2d10849ec2fe263bE
          (undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_38;
  undefined8 local_30;
  
                    /* try { // try from 00178bd3 to 00178bda has its CatchHandler @ 00178c75 */
  auVar3 = (*(code *)
             PTR__ZN9uu_base3211base_common35get_supports_fast_decode_and_encode17h61396d0f590470b1E_0024df30
           )(param_2);
  uVar2 = auVar3._8_8_;
  uVar1 = auVar3._0_8_;
                    /* try { // try from 00178bdb to 00178bf6 has its CatchHandler @ 00178c7a */
  local_30 = (*(code *)PTR__ZN3std2io5stdio6stdout17h077da66234850927E_0024df38)();
  local_38 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E_0024df40)(&local_30);
  if (*(char *)(param_3 + 5) == '\0') {
    auVar3 = _ZN9uu_base3211base_common11fast_encode11fast_encode17he2f2c369f4c434ffE
                       (param_1,&local_38,uVar1,uVar2,*param_3,param_3[1]);
  }
  else {
                    /* try { // try from 00178c06 to 00178c30 has its CatchHandler @ 00178c67 */
    auVar3 = _ZN9uu_base3211base_common11fast_decode11fast_decode17h894b8dd38a833827E
                       (param_1,&local_38,uVar1,uVar2,*(undefined *)((long)param_3 + 0x29));
  }
                    /* try { // try from 00178c3b to 00178c3f has its CatchHandler @ 00178c7a */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h8ed0d40b089bb0daE(local_38);
                    /* try { // try from 00178c40 to 00178c4a has its CatchHandler @ 00178c75 */
  _ZN4core3ptr109drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__features__encoding__SupportsFastDecodeAndEncode_GT__GT_17h805b1188f3ea2a33E
            (uVar1,uVar2);
  _ZN4core3ptr51drop_in_place_LT_uu_base32__base_common__Config_GT_17hac45288a00438e90E(param_3);
  return auVar3;
}