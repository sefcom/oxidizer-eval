void _ZN9uu_uptime13process_utmpx17hffb29050e36b1dfdE(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte extraout_DL;
  byte extraout_DL_00;
  undefined8 local_378;
  long local_370;
  undefined8 local_368;
  byte local_360;
  undefined8 local_358;
  undefined8 *local_350;
  undefined local_344 [16];
  int local_334;
  undefined local_330 [384];
  short local_1b0 [192];
  
  local_350 = param_1;
  if (param_2 == 0) {
    local_368 = (*(code *)
                  PTR__ZN6uucore8features5utmpx5Utmpx16iter_all_records17hde307d126e33fb30E_00210508
                )();
    local_360 = extraout_DL_00;
  }
  else {
    local_368 = _ZN6uucore8features5utmpx5Utmpx21iter_all_records_from17h2ad49eb0c3165b20E(param_2);
    local_360 = extraout_DL;
  }
  puVar2 = 
  PTR__ZN93__LT_uucore__features__utmpx__UtmpxIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0874e3c7200a2adaE_00210510
  ;
  puVar1 = PTR_memcpy_002102b8;
  local_360 = local_360 & 1;
  local_378 = 0;
  local_370 = 0;
  while( true ) {
                    /* try { // try from 00167b40 to 00167b47 has its CatchHandler @ 00167bea */
    (*(code *)puVar2)(&local_334,&local_368);
    if (local_334 != 1) break;
    (*(code *)puVar1)(local_1b0,local_330,0x180);
    if (local_1b0[0] == 2) {
                    /* try { // try from 00167b75 to 00167ba2 has its CatchHandler @ 00167be8 */
      (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10login_time17h4f8d8ed757c914d5E_00210518)
                (local_344,local_1b0);
      lVar3 = (*(code *)
                PTR__ZN4time16offset_date_time14OffsetDateTime14unix_timestamp17hee8a350a5255bcc0E_00210520
              )(local_344);
      if (0 < lVar3) {
        local_358 = (*(code *)
                      PTR__ZN4time16offset_date_time14OffsetDateTime14unix_timestamp17hee8a350a5255bcc0E_00210520
                    )(local_344);
        local_378 = 1;
      }
    }
    else if (local_1b0[0] == 7) {
      local_370 = local_370 + 1;
    }
  }
  _ZN4core3ptr55drop_in_place_LT_uucore__features__utmpx__UtmpxIter_GT_17he10a6e3f3c7cf278E
            (&local_368);
  *local_350 = local_378;
  local_350[1] = local_358;
  local_350[2] = local_370;
  return;
}