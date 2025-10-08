void _ZN3bat4main17ha60bf7c909bbc3cdE(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  _ZN3bat3run17hfad687f80ee846ceE(&local_a8);
  if ((char)local_a8 == '\r') {
    if (local_a8._1_1_ == '\0') {
      uVar2 = (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00807508)(1);
                    /* catch() { ... } // from try @ 004b0b42 with catch @ 004b0b77 */
                    /* try { // try from 004b0b7a to 004b0b90 has its CatchHandler @ 004b0b99 */
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hea15def22e7f674fE(&local_b8);
      _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17h8b7574abd7002fcdE(&local_58);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar2);
    }
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00807508)(0);
  }
  local_18 = local_68;
  uStack_10 = uStack_60;
  local_28 = local_78;
  uStack_24 = uStack_74;
  uStack_20 = uStack_70;
  uStack_1c = uStack_6c;
  local_38 = local_88;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  uStack_2c = uStack_7c;
  local_48 = local_98;
  uStack_44 = uStack_94;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  local_58 = local_a8;
  uStack_54 = uStack_a4;
  uStack_50 = uStack_a0;
  uStack_4c = uStack_9c;
  local_b0 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00807b58;
                    /* try { // try from 004b0b33 to 004b0b3d has its CatchHandler @ 004b0b84 */
  local_b8 = (*(code *)PTR__ZN3std2io5stdio6Stdout4lock17h4a61e9d3dcac90dcE_00807b60)(&local_b0);
                    /* try { // try from 004b0b42 to 004b0b56 has its CatchHandler @ 004b0b77 */
  (*(code *)PTR__ZN3bat5error21default_error_handler17h2bda66878880b633E_00807b68)
            (&local_58,&local_b8,
             &
             PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hea15def22e7f674fE_007c8b00
            );
                    /* try { // try from 004b0b57 to 004b0b69 has its CatchHandler @ 004b0b84 */
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hea15def22e7f674fE(&local_b8);
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00807508)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}