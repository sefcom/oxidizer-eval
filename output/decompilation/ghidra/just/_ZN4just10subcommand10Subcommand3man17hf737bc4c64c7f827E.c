void _ZN4just10subcommand10Subcommand3man17hf737bc4c64c7f827E(undefined *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610 [89];
  undefined8 local_348 [104];
  
  local_628 = 0;
  local_620 = 1;
  local_618 = 0;
                    /* try { // try from 0038e745 to 0038e762 has its CatchHandler @ 0038e829 */
  (*(code *)PTR__ZN4just6config6Config3app17hcb0f5449d8cb91bbE_00565e18)(local_610);
  (*(code *)PTR__ZN11clap_mangen3Man3new17hb747270f52d78defE_00566d00)(local_348,local_610);
                    /* try { // try from 0038e763 to 0038e782 has its CatchHandler @ 0038e811 */
  uVar1 = (*(code *)PTR__ZN11clap_mangen3Man6render17h664ef7540f093e4eE_00566d08)
                    (local_348,&local_628,
                     &
                     PTR__ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h614c8d5056af1490E_00531178
                    );
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5ce84362ff64b34fE(uVar1);
                    /* try { // try from 0038e783 to 0038e7ab has its CatchHandler @ 0038e829 */
  _ZN4core3ptr37drop_in_place_LT_clap_mangen__Man_GT_17h3fdc06361bb23ab1E(local_348);
  local_348[0] = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00566a38)();
  local_610[0] = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00566d10)(local_348)
  ;
                    /* try { // try from 0038e7bb to 0038e7d5 has its CatchHandler @ 0038e802 */
  lVar2 = (*(code *)
            PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_00566d18
          )(local_610,local_620,local_618);
  if (lVar2 == 0) {
    lVar2 = (*(code *)
              PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_00566d20
            )(local_610);
    if (lVar2 == 0) {
      *param_1 = 0x38;
      goto LAB_0038e7e2;
    }
  }
  *param_1 = 0x30;
  *(long *)(param_1 + 8) = lVar2;
LAB_0038e7e2:
                    /* try { // try from 0038e7e7 to 0038e7eb has its CatchHandler @ 0038e829 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h9b26e8f9ee6ffb8bE(local_610[0]);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h614c8d5056af1490E(&local_628);
  return;
}