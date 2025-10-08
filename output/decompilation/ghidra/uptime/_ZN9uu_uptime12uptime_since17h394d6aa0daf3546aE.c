long _ZN9uu_uptime12uptime_since17h394d6aa0daf3546aE(void)

{
  int iVar1;
  char *local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 local_a8;
  ulong local_a0;
  long *local_90;
  code *local_88;
  long local_80;
  long local_78;
  undefined local_28 [16];
  
  _ZN9uu_uptime13process_utmpx17hffb29050e36b1dfdE(&local_80,0);
  (*(code *)PTR__ZN6uucore8features6uptime10get_uptime17hcfc49679bdf5d89dE_002104a8)
            (&local_80,local_80,local_78);
  if (local_80 == 0) {
    (*(code *)PTR__ZN6chrono6offset3utc3Utc3now17h5df5ece099311fd6E_00210500)(&local_c0);
    iVar1 = _ZN6chrono5naive4date9NaiveDate16num_days_from_ce17h3a63bbbadb6054a1E
                      ((ulong)local_c0 & 0xffffffff);
    _ZN6chrono6offset8TimeZone13timestamp_opt17h62e74c73f4adfb08E
              (&local_80,(long)(iVar1 + -0xaf93b) * 0x15180 + (((ulong)local_c0 >> 0x20) - local_78)
              );
    _ZN6chrono6offset20LocalResult_LT_T_GT_6unwrap17h2cbe091957f39a68E(local_28,&local_80);
    local_c0 = "%Y-%m-%d %H:%M:%S";
    local_b8 = 0x11;
    local_b0 = (undefined8 **)0x8;
    local_a8 = 0;
    local_a0 = local_a0 & 0xffffffffffffff00;
    _ZN6chrono8datetime18DateTime_LT_Tz_GT_17format_with_items17h28958959d4d7e05fE
              (&local_80,local_28,&local_c0);
    local_88 = 
    _ZN89__LT_chrono__format__formatting__DelayedFormat_LT_I_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hdd0f10c49a4d6573E
    ;
    local_c0 = "\x01";
    local_b8 = 2;
    local_a0 = 0;
    local_b0 = &local_90;
    local_a8 = 1;
                    /* try { // try from 001679b3 to 001679bd has its CatchHandler @ 001679d8 */
    local_90 = &local_80;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_c0);
    _ZN4core3ptr109drop_in_place_LT_chrono__format__formatting__DelayedFormat_LT_chrono__format__strftime__StrftimeItems_GT__GT_17h7c47fab475d990fdE
              (&local_80);
  }
  return local_80;
}